#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// Computer Organization - Final Coding Project

/*
This program is a MIPS Processor. It takes in a hexadecimal instruction and then
decodes it. Once decoded, it prints out its contents to the console for the user
to see.
*/

// Function Prototypes for Conversions
string decimalToBinary(string);
int binaryToDecimal(string);
string hexadecimalToBinary(string);
string hexToBinHelper(char); // Helper Function
string binaryToHexadecimal(string);
string binaryToHexHelper(int); // Helper Function

// Operations for R-format Instructions
string Add(string, string);
string Sub(string, string);
string Or(string, string);
string And(string, string);
string Xor(string, string);

// Operations for I-format Instructions
string Addi(string, string, string);

// Function to detect what the OpCode is and what the action/function is for the
// given instruction
string OpCodeFunction(string);

// Function to print out whatever is in the registers and memory for the given
// instruction
void displayRegisterMemory(string[], string[]);






// Main Function
int main() {

    // Variables that will be used within the main function along with preset registers and memory
    // The "runTime" variable can be changed or removed to allow the user to enter a certain
    // amount of instructions. As of right now its hard coded to 9 instructions

    int userOption, runTime = 9;
    string instruction, hexInput, binConversion, opCode, functionAction;
    string rsRegister, rtRegister, rdRegister, address;
    bool BNECheck;

    string registers[16] = { "0000", "0001", "0002", "0003", "0004", "0005",
                            "0006", "0007", "0008", "0009", "000A", "000B",
                            "000C", "000D", "000E", "000F" };
    string memory[16] = { "0000", "0001", "0002", "0003", "0004", "0005",
                         "0006", "0007", "0008", "0009", "000A", "000B",
                         "000C", "000D", "000E", "000F" };


    do {
        cout << setw(50) << "** MIPS Processor Program **\n";
        cout << "\n";
        cout << "Description: This program is a MIPS Processor. It takes in a hex\n";
        cout << "instruction and then decodes it. Once decoded, it prints out its\n";
        cout << "contents to the console for the user to see.\n";
        cout << "\n";
        cout << "\n";

        cout << "Would you like to run this program?\n";
        cout << "1 - Yes\n";
        cout << "2 - No\n";
        cout << "Option: ";
        cin >> userOption;

        // This while loop does input verification for user choice
        while (userOption != 1 && userOption != 2) {
            cout << "Input ERROR" << endl;
            cout << "Would you like to use the processor?\n";
            cout << "1 - Yes\n";
            cout << "2 - No\n";
            cout << "Option: ";
            cin >> userOption;
        }

        if (userOption == 1) {
            cout << endl;

            while (runTime > 0) {
                runTime--;
                cout << "\n";
                displayRegisterMemory(registers, memory);
                cout << "\n";
                cout << "\n";
                cout << "-----------------------------------------------------------------\n";
                cout << "\n" << endl;
                cout << "Enter an 8-digit hex number: ";
                cin >> hexInput;
                cout << "\n";


                // This while loop does input verification for the user's hex number
                while (hexInput.size() != 8) {
                    cout << "Enter any 8 digit hex number: ";
                    cin >> hexInput;
                    cout << endl;

                    // Checks to see if the hex input is too large
                    if (hexInput.size() > 8) {
                        cout << "* This hex number is too large. *\n";
                        cout << "* You must enter an 8 digit hex number. *\n";
                    }

                    // Checks to see if the hex input is too small
                    else if (hexInput.size() < 8) {
                        cout << "* This hex number is too small. *\n";
                        cout << "* You must enter an 8 digit hex number. *\n";
                    }
                }


                cout << "\n";
                cout << "\n";
                cout << setw(60) << "** Hex Instruction Decoded **\n";
                cout << "\n";
                cout << "\n";


                // Converts the user's hex number into a binary value, then its printed
                // to the console
                binConversion = hexadecimalToBinary(hexInput);
                cout << "Binary value: \n";
                cout << binConversion << endl;
                cout << "\n";

                // Takes the first 6 digits of the binary string to get the opCode of
                // the instruction
                opCode = binConversion.substr(0, 6);

                // If the opCode value is greater than 0, then it will go through the I-Format
                // process
                if (binaryToDecimal(opCode) > 0) {

                    cout << "Format: I-Format" << endl;
                    cout << "Op_code: " << binaryToDecimal(opCode) << endl;
                    cout << "\n";

                    // Split up the binary string into its registers and stores them in
                    // variables
                    rsRegister = binConversion.substr(6, 5);
                    rtRegister = binConversion.substr(11, 5);
                    address = binConversion.substr(16, 16);

                    // Prints the Rs and Rt registers along with the funtion of the instruction
                    cout << "Rs Register = $" << binaryToDecimal(rsRegister) << endl;
                    cout << "Rt Register = $" << binaryToDecimal(rtRegister) << endl;
                    cout << "Function = NULL" << endl;
                    cout << "BNE Status = ";
                    if (binaryToDecimal(opCode) == 5) {
                        BNECheck = true;
                        if (BNECheck == 1) {
                            cout << "True";
                        }
                        else {
                            cout << "False";
                        }
                    }
                    cout << "\n";

                    // Prints the operation of the instruction
                    cout << "Instruction: ";
                    cout << OpCodeFunction(opCode) << ", $" << binaryToDecimal(rtRegister) << ", $"
                        << binaryToDecimal(rsRegister) << ", " << binaryToDecimal(address) << endl;
                    cout << "\n";

                    // If statement for Addi operation for I-Format instruction
                    if (binaryToDecimal(opCode) == 8) {
                        // This line determines the register that is being addi'd to and
                        // updates the register to the new Hex value that is returned from
                        // Addi function
                        registers[binaryToDecimal(rtRegister)] = Addi(registers[binaryToDecimal(rsRegister)], registers[binaryToDecimal(rtRegister)], address);
                    }

                    // If statement for the sw (store word) operation
                      // sw: Memory[rs + address] = rt
                    else if (binaryToDecimal(opCode) == 43) {
                        // This line takes the value in the register selected tothe memory
                        // location selected
                        string sum = to_string(stoi(registers[binaryToDecimal(rsRegister)]) + stoi(to_string(binaryToDecimal(address))));
                        memory[stoi(sum)] = registers[binaryToDecimal(rtRegister)];
                    }

                    // If statement for the lw (load word) operation
                      // lw: rt = Memory[rs + address]
                    else if (binaryToDecimal(opCode) == 35) {
                        // This line takes the value from the memory location selected into the
                        // register location selected
                        string sum = to_string(stoi(registers[binaryToDecimal(rsRegister)]) + stoi(to_string(binaryToDecimal(address))));
                        registers[binaryToDecimal(rtRegister)] = memory[stoi(sum)];
                    }
                }
                d
                // Else statement covers all R-format instruction processes
                else if (binaryToDecimal(opCode) == 0) {
                    cout << "Format: R-Format" << endl;
                    cout << "Op_code: " << binaryToDecimal(opCode) << endl;
                    cout << "\n";

                    // Splits up the binary string into its registers and function, then
                    // stores them in variables
                    rsRegister = binConversion.substr(6, 5);
                    rtRegister = binConversion.substr(11, 5);
                    rdRegister = binConversion.substr(16, 5);
                    functionAction = binConversion.substr(26, 6);

                    // Prints Rs, Rt, and Rd registers along wth the funtion instructions
                    cout << "Rd Register = $" << binaryToDecimal(rdRegister) << endl;
                    cout << "Rs Register = $" << binaryToDecimal(rsRegister) << endl;
                    cout << "Rt Register = $" << binaryToDecimal(rtRegister) << endl;
                    cout << "Function = " << binaryToDecimal(functionAction) << endl;
                    cout << "\n";

                    // Prints the operation of the instruction
                    cout << "Instruction: ";
                    cout << OpCodeFunction(functionAction) << ", $" << binaryToDecimal(rtRegister) << ", $"
                        << binaryToDecimal(rsRegister) << ", $" << binaryToDecimal(rdRegister) << endl;
                    cout << "\n";

                    // If statement for the Add operation
                    if (binaryToDecimal(functionAction) == 32) {

                        // This line determines the registers which wil be added together
                        // and then updates the Rd register with the new hex from Add
                        // function
                        registers[binaryToDecimal(rdRegister)] = Add(registers[binaryToDecimal(rsRegister)], registers[binaryToDecimal(rtRegister)]);
                    }

                    // If statement for the Sub operation
                    else if (binaryToDecimal(functionAction) == 34) {

                        // This line determines the registers for the subtraction
                        // operation and then updates the Rd register with the new hex value
                        // from Sub function
                        registers[binaryToDecimal(rdRegister)] = Sub(registers[binaryToDecimal(rsRegister)], registers[binaryToDecimal(rtRegister)]);
                    }

                    // If statement for the And operation
                    else if (binaryToDecimal(functionAction) == 36) {

                        // This line determines the registers that will be used the AND
                        // operation and then updates the Rd register with the new hex value
                        // from And function
                        registers[binaryToDecimal(rdRegister)] = And(registers[binaryToDecimal(rsRegister)], registers[binaryToDecimal(rtRegister)]);
                    }

                    // If statement for the Or operation
                    else if (binaryToDecimal(functionAction) == 37) {

                        // This line determines the registers that will be used the OR
                        // operation and then updates the Rd register with the new hex value
                        // from Or function
                        registers[binaryToDecimal(rdRegister)] = Or(registers[binaryToDecimal(rsRegister)], registers[binaryToDecimal(rtRegister)]);
                    }

                    // If statement for the Xor operation
                    else if (binaryToDecimal(functionAction) == 38) {

                        // This line determines the registers that will be used the XOR
                        // operation and then updates the Rd register with the new hex value
                        // from Xor function
                        registers[binaryToDecimal(rdRegister)] = Xor(registers[binaryToDecimal(rsRegister)], registers[binaryToDecimal(rtRegister)]);
                    }
                }
            }
            displayRegisterMemory(registers, memory);
            cout << "\n";
            cout << "-----------------------------------------------------------------\n";
            cout << "\n";
        }


        else if (userOption == 2) {
            cout << "\n";
            cout << "-----------------------------------------------------------------\n";
            cout << "\n";
            cout << "** End of Program **\n";
            cout << "\n";
            cout << "-----------------------------------------------------------------\n";
            cout << "\n";
        }

    } while (userOption != 2);
}








// ** CONVERSION FUNCTIONS DEFINITIONS **

// Function definition for converting Decimal Values to Binary
string decimalToBinary(string decVal) {

    int number;
    int remainder;
    string rem_char = "0";

    // This for loop converts the decimal string into a 
    // usable integer and saves it to the int number
    for (int i = decVal.size() - 1; i >= 0; i--) {
        number = number + ((decVal[i] - '0') * pow(10, decVal.size() - (i + 1)));
    }

    decVal = "";

    // This while loop devides the decimal number by two
    // takes the remainder and adds it to a string 
    // the remainder is either one or zero and represents
    // the binary digit 
    while (number > 0) {
        remainder = number % 2;
        rem_char[0] = rem_char[0] + remainder;
        decVal = rem_char[0] + decVal;
        rem_char[0] = '0';
        number = number / 2;

    }
    return decVal;
}


// Function definition for converting Binary Values to Decimal
int binaryToDecimal(string binString) {
    int decVal = 0;
    for (int i = binString.size() - 1; i >= 0; i--) {
        if (binString[i] == '1') {
            decVal = decVal + pow(2, (binString.size() - 1) - i);
        }
    }
    return decVal;
}


// Function definition for converting Hexadecimal Values to Binary
string hexadecimalToBinary(string hexVal) {
    string convertedVal = "";

    // iterates though the Hex string and determine
    for (int i = 0; i < hexVal.size(); i++) {
        if (hexVal[i] == '0') {
            convertedVal = convertedVal + "0000";
        }
        else if (hexVal[i] == '1') {
            convertedVal = convertedVal + "0001";
        }
        else if (hexVal[i] == '2') {
            convertedVal = convertedVal + "0010";
        }
        else if (hexVal[i] == '3') {
            convertedVal = convertedVal + "0011";
        }
        else if (hexVal[i] == '4') {
            convertedVal = convertedVal + "0100";
        }
        else if (hexVal[i] == '5') {
            convertedVal = convertedVal + "0101";
        }
        else if (hexVal[i] == '6') {
            convertedVal = convertedVal + "0110";
        }
        else if (hexVal[i] == '7') {
            convertedVal = convertedVal + "0111";
        }
        else if (hexVal[i] == '8') {
            convertedVal = convertedVal + "1000";
        }
        else if (hexVal[i] == '9') {
            convertedVal = convertedVal + "1001";
        }
        else if (hexVal[i] == 'A') {
            convertedVal = convertedVal + "1010";
        }
        else if (hexVal[i] == 'B') {
            convertedVal = convertedVal + "1011";
        }
        else if (hexVal[i] == 'C') {
            convertedVal = convertedVal + "1100";
        }
        else if (hexVal[i] == 'D') {
            convertedVal = convertedVal + "1101";
        }
        else if (hexVal[i] == 'E') {
            convertedVal = convertedVal + "1110";
        }
        else if (hexVal[i] == 'F') {
            convertedVal = convertedVal + "1111";
        }
    }
    return convertedVal;
}

// Helper function for hexadecimalToBinary function
string hexToBinHelper(char c) {
    // If/else statements to convert each hex value to its corresponding binary
    // set
    if (c == '0') {
        return "0000";
    }
    else if (c == '1') {
        return "0001";
    }
    else if (c == '2') {
        return "0010";
    }
    else if (c == '3') {
        return "0011";
    }
    else if (c == '4') {
        return "0100";
    }
    else if (c == '5') {
        return "0101";
    }
    else if (c == '6') {
        return "0110";
    }
    else if (c == '7') {
        return "0111";
    }
    else if (c == '8') {
        return "1000";
    }
    else if (c == '9') {
        return "1001";
    }
    else if (c == 'A') {
        return "1010";
    }
    else if (c == 'B') {
        return "1011";
    }
    else if (c == 'C') {
        return "1100";
    }
    else if (c == 'D') {
        return "1101";
    }
    else if (c == 'E') {
        return "1110";
    }
    else if (c == 'F') {
        return "1111";
    }
    else {
        return " *INVALID* "; // If the hex value is invalid, it will return as such
    }
};

// Function definition for converting Binary to Hexadecimal
string binaryToHexadecimal(string binString) {
    string fFour = binString.substr(0, 4); // first four bits
    string bFour = binString.substr(4, 4); // back four bits
    string nFour = binString.substr(8, 4); // next four bits
    string lFour = binString.substr(12, 4);// last four bits

    return binaryToHexHelper(binaryToDecimal(fFour)) + binaryToHexHelper(binaryToDecimal(bFour)) + binaryToHexHelper(binaryToDecimal(nFour)) + binaryToHexHelper(binaryToDecimal(lFour));
}

// Helper function for Binary to Hexadecimal conversion
string binaryToHexHelper(int decVal) {
    if (decVal == 0)
        return "0";
    else if (decVal == 1)
        return "1";
    else if (decVal == 2)
        return "2";
    else if (decVal == 3)
        return "3";
    else if (decVal == 4)
        return "4";
    else if (decVal == 5)
        return "5";
    else if (decVal == 6)
        return "6";
    else if (decVal == 7)
        return "7";
    else if (decVal == 8)
        return "8";
    else if (decVal == 9)
        return "9";
    else if (decVal == 10)
        return "A";
    else if (decVal == 11)
        return "B";
    else if (decVal == 12)
        return "C";
    else if (decVal == 13)
        return "D";
    else if (decVal == 14)
        return "E";
    else if (decVal == 15)
        return "F";

    return "Error";
}




// ** OPERATION FUNCTION DEFINITIONS FOR R-FORMAT OPERATIONS **

// Function definition for the add operation with an R-format instruction "rt"
// and "rs" are the registers
string Add(string rs, string rt) {
    string binaryRt =
        hexadecimalToBinary(rt), // Holds binary converted register value
        binaryRs =
        hexadecimalToBinary(rs); // Holds binary converted register value
    int total = binaryToDecimal(binaryRt) + binaryToDecimal(binaryRs);
    string userNum,
        binaryUserNum; // Holds the user's instruction and its binary conversion

    // Converts the intruction into a string and then into a binary value
    userNum = to_string(total);
    binaryUserNum = decimalToBinary(userNum);

    // This while loop hits each bit, conducts the given operation and stores it
    while (binaryUserNum.size() != 16) {
        binaryUserNum = "0" + binaryUserNum;
    }

    // The binary result that we ge, is now translated back into a hex and
    // returned
    return (binaryToHexadecimal(binaryUserNum));
}

// Function definition for the sub operation with an R-format instruction "rt"
// and "rs" are the registers
string Sub(string rs, string rt) {
    string binaryRt = hexadecimalToBinary(rt); // Holds binary converted regsiter value
    string binaryRs = hexadecimalToBinary(rs); // Holds binary converted register value

    int total = binaryToDecimal(binaryRs) - binaryToDecimal(binaryRt);
    string userNum, binaryUserNum, result; // Holds the user's instruction and its binary conversion

    // Converts the instruction into a string and then into a binary value
    userNum = to_string(total);
    binaryUserNum = decimalToBinary(userNum);

    // This while loop hits each bit, conducts the given operation and stores it
    // in "binaryUserNum" as its binary form
    while (binaryUserNum.size() != 16) {
        binaryUserNum = "0" + binaryUserNum;
    }
    // The binary result that we get, is now translated back into a hex and
    // returned
    return (binaryToHexadecimal(binaryUserNum));
}

// Function definition for the OR operation with an R-format instruction "rt"
// and "rs" are the registers
string Or(string rs, string rt) {
    int i = 0; // Iterator for while loop
    string result = "";
    string binaryRs = hexadecimalToBinary(rs); // Holds the converted register value
    string binaryRt = hexadecimalToBinary(rt); // Holds the converted register value

    // This while loop hits each binary bit and mimics the OR operation, which is
    // stored in "result" as a binary value
    while (i < 16) {
        if (binaryRt[i] == '1' || binaryRs[i] == '1') { // If either bit is true, then true
            result = result + "1";
        }
        else { // Otherwise its false
            result = result + "0";
        }
        i++;
    }

    // The result that we get, is now translated back into hex and returned
    return (binaryToHexadecimal(result));
}

// Function definition for the AND operation with an R-format instruction "rt"
// and "rs" are the registers
string And(string rs, string rt) {
    int i = 0; // Iterator for while loop
    string result = "";
    string binaryRs = hexadecimalToBinary(rs); // Holds the converted register value
    string binaryRt = hexadecimalToBinary(rt); // Holds the converted register value

    // This while loop hits each binary bit and mimics the AND operation, which is
    // stored in "result" as a binary value
    while (i < 16) {
        if (binaryRt[i] == '1' && binaryRs[i] == '1') { // If both bits are true, then true
            result = result + "1";
        }
        else {
            result = result + "0"; // Otherwise its false
        }
        i++;
    }

    // The result that we get, is now translated back into hex and returned
    return (binaryToHexadecimal(result));
}

// Function definition for the XOR operator with an R-format instruction "rt"
// and "rs" are the registers
string Xor(string rs, string rt) {
    int i = 0; // Iterator for while loop
    string result = "";
    string binaryRs = hexadecimalToBinary(rs);
    string binaryRt = hexadecimalToBinary(rt);

    // This while loop hits each binary bit and mimics the XOR operation, which is
    // then stored in "result" as a binary value The first to if statements check
    // to see if they have the same bit value, if they don't, then it'll return
    // true The else statement catches the other scenario. If they do have the
    // same bit value, then it'll return false
    while (i < 16) {
        if (binaryRt[i] == 0 && binaryRs[i] == 1) {
            result = result + "1";
        }
        else if (binaryRt[i] == 1 && binaryRs[i] == 0) {
            result = result + "1";
        }
        else {
            result = result + "0";
        }
    }

    // The result that we get, is now translated back into hex and returned
    return (binaryToHexadecimal(result));
}



// ** OPERATION FUNCTION DEFINITIONS FOR I-FORMAT OPERATIONS **
string Addi(string rs, string rt, string rd) {
    string binaryRt = hexadecimalToBinary(rt); // Holds the binary converted register value
    string binaryRs = hexadecimalToBinary(rs); // Holds the binary converted register value
    int total = binaryToDecimal(binaryRs) + binaryToDecimal(rd);
    string userNum, binaryUserNum; // Holds the user's instruction and its binary conversion

    // Converts the instruction into a string and then into a binary value
    userNum = to_string(total);
    binaryUserNum = decimalToBinary(userNum);

    // This while loop hits each bit, conducts the given operation and then stores
    // it in "binaryUserNum" as its binary form
    while (binaryUserNum.size() < 16) {
        binaryUserNum = "0" + binaryUserNum;
    }

    // The binary result that we get is now translated back into a hex and
    // returned
    return (binaryToHexadecimal(binaryUserNum));
}



// ** FUNCTION DEFINITION FOR OPCODE/FUNCTION ACTION **
string OpCodeFunction(string funcAction) {
    if (binaryToDecimal(funcAction) == 8) {
        return ("Addi");
    }
    else if (binaryToDecimal(funcAction) == 32) {
        return ("Add");
    }
    else if (binaryToDecimal(funcAction) == 34) {
        return ("Sub");
    }
    else if (binaryToDecimal(funcAction) == 35) {
        return ("lw");
    }
    else if (binaryToDecimal(funcAction) == 36) {
        return ("And");
    }
    else if (binaryToDecimal(funcAction) == 37) {
        return ("Or");
    }
    else if (binaryToDecimal(funcAction) == 38) {
        return ("Xor");
    }
    else if (binaryToDecimal(funcAction) == 43) {
        return ("sw");
    }
    else {
        return ("Bne");
    }
}



// ** FUNCTION DEFINITION FOR PRINTING THE MEMORY AND REGISTERS **
void displayRegisterMemory(string registers[], string memory[]) {
    // Prints out all of the registers from the instruction
    cout << "Registers  &  Memory:\n";
    for (int i = 0; i < 16; i++) {
        cout << "$" << i << " - " << registers[i] << setw(20) << " Mem[$" << i << "] " << memory[i];
        cout << "\n";
    }
}