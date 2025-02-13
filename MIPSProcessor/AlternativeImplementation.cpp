#include <iostream>
#include <string>
#include <math.h>

using namespace std;

// Register and Memory Display Function
void print_registers_and_memory(string[], string[]); // *DONE*

// Convertion Functions
string decimal_to_binary_converter(string); // *DONE*
string binary_to_hex_converter(string);  // *DONE*
string bin_to_hex_assist(int);  // *DONE*
string hex_to_binary_converter(string);  // *DONE*
int binary_to_decimal_converter(string);  // *DONE*

// Input Verification Functions
bool decimal_string_check(string);
bool hex_string_check(string);

// Op_code and Function_code Detection Function
string function_type(string); // *DONE*

// I-Format Operation Function
string Addi(string, string, string); // *DONE*

// R-Format Operation Functions
string Add(string, string); // *DONE*
string Sub(string, string); // *DONE*
string And(string, string); // *DONE*
string Or(string, string);  // *DONE*
string Xor(string, string); // *DONE*



int main() {

    // Register and Memory Initialization
    string registers[16] = { "0000","0001", "0002","0003","0004","0005","0006","0007","0008","0009","000A","000B","000C","000D","000E","000F" };
    string memory[16] = { "0000","0001", "0002","0003","0004","0005","0006","0007","0008","0009","000A","000B","000C","000D","000E","000F" };

    // Variable Declarations
    string c; // User Option
    string input; // instruction
    int inst_to_run; // This is used if you ask for a certain amount of instructions to run
    string Hex_value; // hexInput
    string binary_value; // binConversion
    string op_code; // opCode
    string Rs; // rsRegister
    string Rt; // rtRegister
    string Rd; // rdRegister
    string funct; // functionAction

    do {
        cout << "Would you like to use the processor [y/n] ";
        cin >> c;
        cout << endl;

        // This while loop checks to make sure that
        // only the letters y or n are given as input
        while (c != "y" && c != "n") {
            cout << "Input ERROR" << endl;
            cout << "Would you like to use the processor? [y/n] ";
            c = "";
            cin >> c;
            cout << endl;
        }

        if (c == "y") {
            
            // This do while loop checks to make sure that
            // only integers are given as input
            do {
                cout << "How many instructions would you like to run: ";
                cin >> input;
                if (!(decimal_string_check(input))) {
                    cout << "Input Erro" << endl;
                }
            } while (!(decimal_string_check(input)));

            // This loop converts the string number given as
            // input into a usable int number
            for (int i = input.size() - 1; i >= 0; i--) {
                inst_to_run = inst_to_run + ((input[i] - '0') * pow(10, input.size() - (i + 1)));
            }

            // Given the number of instructions the user wants
            // to execute this loop will run
            while (inst_to_run > 0) {
                inst_to_run--;
                print_registers_and_memory(registers, memory);
                cout << endl;

                // This do while loop checks to make sure that
                // only valid Hex values are given as input
                do {
                    cout << "Enter any 8 digit hex number: ";
                    cin >> Hex_value;
                    cout << endl;
                    if (!(hex_string_check(Hex_value))) {
                        cout << "You have entered an unusable hex number" << endl << endl;
                    }
                } while (!(hex_string_check(Hex_value)));

                binary_value = hex_to_binary_converter(Hex_value);

                cout << "Binary value: " << binary_value << endl;

                // This line parses through the binary 
                // instruction and saves the first 6
                // chars into a string that will represent 
                // Op_code portion of the instruction
                op_code = binary_value.substr(0, 6);

                // This if statment handles the execution
                // of all I-Format instructions
                if (binary_to_decimal_converter(op_code) > 0) {

                    cout << "Format: I-Format" << endl;
                    cout << "Op_code: " << binary_to_decimal_converter(op_code) << endl;

                    // The next 3 lines parse through the binary 
                    // instruction and saves the next 26
                    // chars after the Op_code portion
                    // into a string that will represent the
                    // Rs, Rt, and address/value portion of the instruction
                    Rs = binary_value.substr(6, 5);
                    Rt = binary_value.substr(11, 5);
                    Rd = binary_value.substr(16, 16);

                    // Prints Rs Rt and the Funtion instructions
                    cout << "Rs = $" << binary_to_decimal_converter(Rs) << endl;
                    cout << "Rt = $" << binary_to_decimal_converter(Rt) << endl;
                    cout << "Function = " << 0 << endl;

                    // Prints the Operation that is occuring
                    cout << function_type(op_code) << ", $" << binary_to_decimal_converter(Rt) << ", $" << binary_to_decimal_converter(Rs) << ", " << binary_to_decimal_converter(Rd) << endl;

                    // Rt and Rd represent the Register and Memory ID in binary
                    // converting Rt and Rt from binary to decimal allows us to 
                    // determine the Register and Memory values that is being used

                    // This handles the Addi operation on the registers
                    if (binary_to_decimal_converter(op_code) == 8) {

                        // This line determines the register that is being added to and 
                        // updates the register to the new Hex value that is returned from 
                        // Addi function
                        registers[binary_to_decimal_converter(Rt)] = Addi(registers[binary_to_decimal_converter(Rs)], registers[binary_to_decimal_converter(Rt)], Rd);

                    }

                    // This handles the sw operation
                    else if (binary_to_decimal_converter(op_code) == 43) {

                        // This line saves the value in the register selected to
                        // the memory location selected
                        memory[binary_to_decimal_converter(Rd)] = registers[binary_to_decimal_converter(Rt)];

                    }

                    // This handles the lw operation
                    else if (binary_to_decimal_converter(op_code) == 35) {

                        // This line loads the value from memory location selected
                        // into the register location selected  
                        registers[binary_to_decimal_converter(Rt)] = memory[binary_to_decimal_converter(Rd)];

                    }
                }
                // This else statment handles the execution
                // of all R-Format instructions 
                else {

                    cout << "Format: R-Format" << endl;
                    cout << "Op_code: " << binary_to_decimal_converter(op_code) << endl;

                    // The next 3 lines parse through the binary 
                    // instruction and saves the next 26
                    // chars after the Op_code portion
                    // into a string that will represent the
                    // Rs, Rt, Rd and Funtion portion of the instruction
                    Rs = binary_value.substr(6, 5);
                    Rt = binary_value.substr(11, 5);
                    Rd = binary_value.substr(16, 5);
                    funct = binary_value.substr(26, 6);

                    // Prints Rs Rt Rd and the Funtion instructions
                    cout << "Rs = $" << binary_to_decimal_converter(Rs) << endl;
                    cout << "Rt = $" << binary_to_decimal_converter(Rt) << endl;
                    cout << "Rd = $" << binary_to_decimal_converter(Rd) << endl;
                    cout << "Function = " << binary_to_decimal_converter(funct) << endl;

                    // Prints the Operation that is occuring
                    cout << function_type(funct) << ", $" << binary_to_decimal_converter(Rt) << ", $" << binary_to_decimal_converter(Rs) << ", $" << binary_to_decimal_converter(Rd) << endl;

                    // This handles the Add operations
                    if (binary_to_decimal_converter(funct) == 32) {

                        // This line determines the registers that are being added together and 
                        // updates the Rd register to the new Hex value that is returned from 
                        // Add function
                        registers[binary_to_decimal_converter(Rd)] = Add(registers[binary_to_decimal_converter(Rs)], registers[binary_to_decimal_converter(Rt)]);

                    }

                    // This handles the Sub operations
                    else if (binary_to_decimal_converter(funct) == 34) {

                        // This line determines the registers that are in the subtraction operation and 
                        // updates the Rd register to the new Hex value that is returned from 
                        // Sub function
                        registers[binary_to_decimal_converter(Rd)] = Sub(registers[binary_to_decimal_converter(Rs)], registers[binary_to_decimal_converter(Rt)]);

                    }

                    // This handles the And operations
                    else if (binary_to_decimal_converter(funct) == 36) {

                        // This line determines the registers that are in the and evaluation and 
                        // updates the Rd register to the new Hex value that is returned from 
                        // And function
                        registers[binary_to_decimal_converter(Rd)] = And(registers[binary_to_decimal_converter(Rs)], registers[binary_to_decimal_converter(Rt)]);

                    }

                    // This handles the Or operations
                    else if (binary_to_decimal_converter(funct) == 37) {

                        // This line determines the registers that are in the or evaluation and 
                        // updates the Rd register to the new Hex value that is returned from 
                        // And function
                        registers[binary_to_decimal_converter(Rd)] = Or(registers[binary_to_decimal_converter(Rs)], registers[binary_to_decimal_converter(Rt)]);

                    }

                    // This handles the Xor operations
                    else if (binary_to_decimal_converter(funct) == 38) {

                        // This line determines the registers that are in the Xor evaluation and 
                        // updates the Rd register to the new Hex value that is returned from 
                        // And function
                        registers[binary_to_decimal_converter(Rd)] = Xor(registers[binary_to_decimal_converter(Rs)], registers[binary_to_decimal_converter(Rt)]);

                    }
                }
            }
            print_registers_and_memory(registers, memory);
        }
        else if (c == "n") {
            cout << "ENJOY YOUR DAY!!!!" << endl;
        }

    } while (c != "n");

}

bool hex_string_check(string hex_number) {
    // if the string is longer than 8 chars it 
    // is to long and will return false
    if (hex_number.size() != 8) {
        return false;
    }
    for (int i = 0; i < hex_number.size(); i++) {
        // string_name[index_number] - '0' will convert
        // the string charecter into its ASCII numerical 
        // equivalent 
        if (hex_number[i] - '0' > 9 || hex_number[i] - '0' < 0) {
            if (hex_number[i] - '0' > 22 || hex_number[i] - '0' < 17) {
                return false;
            }
        }
    }

    return true;

}

string hex_to_binary_converter(string hex_number) {
    string return_hex = "";

    // iterates though the Hex string and determine
    for (int i = 0; i < hex_number.size(); i++) {
        if (hex_number[i] == '0') {
            return_hex = return_hex + "0000";
        }
        else if (hex_number[i] == '1') {
            return_hex = return_hex + "0001";
        }
        else if (hex_number[i] == '2') {
            return_hex = return_hex + "0010";
        }
        else if (hex_number[i] == '3') {
            return_hex = return_hex + "0011";
        }
        else if (hex_number[i] == '4') {
            return_hex = return_hex + "0100";
        }
        else if (hex_number[i] == '5') {
            return_hex = return_hex + "0101";
        }
        else if (hex_number[i] == '6') {
            return_hex = return_hex + "0110";
        }
        else if (hex_number[i] == '7') {
            return_hex = return_hex + "0111";
        }
        else if (hex_number[i] == '8') {
            return_hex = return_hex + "1000";
        }
        else if (hex_number[i] == '9') {
            return_hex = return_hex + "1001";
        }
        else if (hex_number[i] == 'A') {
            return_hex = return_hex + "1010";
        }
        else if (hex_number[i] == 'B') {
            return_hex = return_hex + "1011";
        }
        else if (hex_number[i] == 'C') {
            return_hex = return_hex + "1100";
        }
        else if (hex_number[i] == 'D') {
            return_hex = return_hex + "1101";
        }
        else if (hex_number[i] == 'E') {
            return_hex = return_hex + "1110";
        }
        else if (hex_number[i] == 'F') {
            return_hex = return_hex + "1111";
        }
    }

    return return_hex;

}

void print_registers_and_memory(string registers[], string memory[]) {
    cout << "Registers" << "   Memory" << endl;
    for (int i = 0; i < 16; i++) {
        if (i < 10) {
            cout << "$" << i << "  " << registers[i] << "    Mem[$" << i << "]  " << memory[i] << endl;
        }
        else {
            cout << "$" << i << " " << registers[i] << "    Mem[$" << i << "] " << memory[i] << endl;
        }

    }

}

int binary_to_decimal_converter(string binary_string) {
    int dec_num = 0;
    for (int i = binary_string.size() - 1; i >= 0; i--) {
        if (binary_string[i] == '1') {
            dec_num = dec_num + pow(2, (binary_string.size() - 1) - i);
        }
    }
    return dec_num;
}

string function_type(string funct) {
    if (binary_to_decimal_converter(funct) == 32) {
        return "Add";
    }
    else if (binary_to_decimal_converter(funct) == 34) {
        return "Sub";
    }
    else if (binary_to_decimal_converter(funct) == 36) {
        return "And";
    }
    else if (binary_to_decimal_converter(funct) == 37) {
        return "Or";
    }
    else if (binary_to_decimal_converter(funct) == 38) {
        return "Xor";
    }
    else if (binary_to_decimal_converter(funct) == 8) {
        return "Addi";
    }
    else if (binary_to_decimal_converter(funct) == 35) {
        return "lw";
    }
    else if (binary_to_decimal_converter(funct) == 43) {
        return "sw";
    }
    else if (binary_to_decimal_converter(funct) == 3) {
        return "J";
    }
    else {
        return "Error";
    }

}

string Addi(string Rs, string Rt, string Rd) {

    int sum; // total
    string interger;  // userNum
    string bin_num;  // binaryUserNum
    string apple;    // result - not needed
    string bin_Rs;
    string bin_Rt;
    bin_Rs = hex_to_binary_converter(Rs);
    bin_Rt = hex_to_binary_converter(Rt);


    sum = binary_to_decimal_converter(bin_Rs) + binary_to_decimal_converter(Rd) + binary_to_decimal_converter(bin_Rt);
    interger = to_string(sum);
    bin_num = decimal_to_binary_converter(interger);
    while (bin_num.size() < 16) {
        bin_num = "0" + bin_num;
    }

    apple = binary_to_hex_converter(bin_num);



    return apple;
}

string decimal_to_binary_converter(string dec_num) {

    int number;
    int rem_int;
    string rem_char = "0";

    // This for loop converts the decimal string into a 
    // usable integer and saves it to the int number
    for (int i = dec_num.size() - 1; i >= 0; i--) {
        number = number + ((dec_num[i] - '0') * pow(10, dec_num.size() - (i + 1)));
    }

    dec_num = "";

    // This while loop devides the decimal number by two
    // takes the remainder and adds it to a string 
    // the remainder is either one or zero and represents
    // the binary digit 
    while (number > 0) {
        rem_int = number % 2;
        rem_char[0] = rem_char[0] + rem_int;
        dec_num = rem_char[0] + dec_num;
        rem_char[0] = '0';
        number = number / 2;

    }

    return dec_num;

}

string binary_to_hex_converter(string binary_string) {
    string front_four = binary_string.substr(0, 4);
    string back_four = binary_string.substr(4, 4);
    string next_four = binary_string.substr(8, 4);
    string last_four = binary_string.substr(12, 4);

    return bin_to_hex_assist(binary_to_decimal_converter(front_four)) + bin_to_hex_assist(binary_to_decimal_converter(back_four)) + bin_to_hex_assist(binary_to_decimal_converter(next_four)) + bin_to_hex_assist(binary_to_decimal_converter(last_four));
}

string bin_to_hex_assist(int decimal_number) {
    if (decimal_number == 0)
        return "0";
    else if (decimal_number == 1)
        return "1";
    else if (decimal_number == 2)
        return "2";
    else if (decimal_number == 3)
        return "3";
    else if (decimal_number == 4)
        return "4";
    else if (decimal_number == 5)
        return "5";
    else if (decimal_number == 6)
        return "6";
    else if (decimal_number == 7)
        return "7";
    else if (decimal_number == 8)
        return "8";
    else if (decimal_number == 9)
        return "9";
    else if (decimal_number == 10)
        return "A";
    else if (decimal_number == 11)
        return "B";
    else if (decimal_number == 12)
        return "C";
    else if (decimal_number == 13)
        return "D";
    else if (decimal_number == 14)
        return "E";
    else if (decimal_number == 15)
        return "F";

    return "Error";
}

string Add(string Rs, string Rt) {
    int sum; // total
    string interger; // userNum
    string bin_num;  // binaryNum
    string apple;  // result - not needed
    string bin_Rs; 
    string bin_Rt;
    bin_Rs = hex_to_binary_converter(Rs);
    bin_Rt = hex_to_binary_converter(Rt);

    sum = binary_to_decimal_converter(bin_Rs) + binary_to_decimal_converter(bin_Rt);
    interger = to_string(sum);
    bin_num = decimal_to_binary_converter(interger);
    while (bin_num.size() < 16) {
        bin_num = "0" + bin_num;
    }

    apple = binary_to_hex_converter(bin_num);



    return apple;
}

string Sub(string Rs, string Rt) {
    int sum; // total
    string interger;  // userNum
    string bin_num;  // binaryUserNum
    string apple;   // result - not needed
    string bin_Rs;
    string bin_Rt;
    bin_Rs = hex_to_binary_converter(Rs);
    bin_Rt = hex_to_binary_converter(Rt);

    sum = binary_to_decimal_converter(bin_Rs) - binary_to_decimal_converter(bin_Rt);
    interger = to_string(sum);
    bin_num = decimal_to_binary_converter(interger);
    while (bin_num.size() < 16) {
        bin_num = "0" + bin_num;
    }

    apple = binary_to_hex_converter(bin_num);



    return apple;
}

string And(string Rs, string Rt) {
    string bin_num = "";  // result 
    string apple;  // not needed
    string bin_Rs;
    string bin_Rt;
    bin_Rs = hex_to_binary_converter(Rs);
    bin_Rt = hex_to_binary_converter(Rt);
    for (int i = 0; i < 16; i++) {
        if (bin_Rs[i] == '1' && bin_Rt[i] == '1') {
            bin_num = bin_num + "1";
        }
        else {
            bin_num = bin_num + "0";
        }
    }
    apple = binary_to_hex_converter(bin_num);

    return apple;
}

string Or(string Rs, string Rt) {
    string bin_num = ""; // result
    string apple;   // not needed
    string bin_Rs;  
    string bin_Rt;
    bin_Rs = hex_to_binary_converter(Rs);
    bin_Rt = hex_to_binary_converter(Rt);
    for (int i = 0; i < 16; i++) {
        if (bin_Rs[i] == '1' || bin_Rt[i] == '1') {
            bin_num = bin_num + "1";
        }
        else {
            bin_num = bin_num + "0";
        }
    }
    apple = binary_to_hex_converter(bin_num);

    return apple;
}

string Xor(string Rs, string Rt) {
    string bin_num = "";
    string apple;
    string bin_Rs;
    string bin_Rt;
    bin_Rs = hex_to_binary_converter(Rs);
    bin_Rt = hex_to_binary_converter(Rt);
    for (int i = 0; i < 16; i++) {
        if (bin_Rs[i] != bin_Rt[i]) {
            bin_num = bin_num + "1";
        }
        else {
            bin_num = bin_num + "0";
        }
    }
    apple = binary_to_hex_converter(bin_num);

    return apple;
}

bool decimal_string_check(string dec_num) {
    int number;

    // This for loop converts the decimal string into a 
    // usable integer and saves it to the int number
    for (int i = dec_num.size() - 1; i >= 0; i--) {
        number = number + ((dec_num[i] - '0') * pow(10, dec_num.size() - (i + 1)));
    }
    if (number > 255) {
        return false;
    }
    for (int i = 0; i < dec_num.size(); i++) {
        // string_name[index_number] - '0' will convert
        // the string charecter into its ASCII numerical 
        // equivalent
        if (dec_num[i] - '0' > 9 || dec_num[i] - '0' < 0) {
            return false;
        }
    }
    return true;
}