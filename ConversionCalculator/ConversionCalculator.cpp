#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// Computer Organization - Conversion Assignment 

/* 
This program allows a user to convert:
Binary to Decimal and Decimal to Binary
Binary to Hexadecimal and Hexadecimal to Binary 
and so on... (will progressively add more conversion operations)

The program should ask the user to enter a value and then display the corresponding number/value.
Remember to have input validation and //Comments...//Comments...//Comments 
*/


// Function Prototypes
int binaryToDecimal(string x);
void decimalToBinary(int x);

string hexadecimalToBinary(string x);
string hexToBinHelper(char c);    // Helper Function

string binaryToHexadecimal(string x);
string binToHexHelper(string s);  // Helper Function



// Main Function
int main() {
    // Variable to hold user input 
    int userChoice;

    while (userChoice != 0) {

        cout << setw(50) << "CONVERSION CALCULATOR\n";
        cout << "\n";
        cout << "Select a conversion you would like to do OR exit the program\n";

        // This is a display table, so the user can select what kind of conversion they'd like to do
        cout << setw(2) << "1: Decimal     -> Binary\n";
        cout << setw(2) << "2: Binary      -> Decimal\n";

        cout << setw(2) << "3: Hexadecimal -> Binary\n";
        cout << setw(2) << "4: Binary      -> Hexadecimal\n";

        cout << setw(2) << "0: Exit Program.\n";
        cout << "\n";

        // Prompt the user for a conversion operation
        cout << "Select Option: ";
        cin >> userChoice;
        cout << "\n";
        cout << "\n";



        // If/else if statements to determine what the user chose and what conversion to do
        if (userChoice == 0) { break; } // Exits and ends the program (0)


        // Decimal -> Binary option (Option 1)
        else if (userChoice == 1) {
            int userDecimalVal;

            cout << setw(55) << "* DECIMAL TO BINARY CONVERSION *\n";
            cout << "\n";

            cout << "You have chosen to do a DECIMAL -> BINARY conversion.\n";
            cout << "\n";

            cout << "Now enter a Decimal Value to convert: ";
            cin >> userDecimalVal;
            cout << "\n";

            // Prints the conversion value that we got from the function call to the console
            cout << "Converted Value: ";
            cout << userDecimalVal << " = ";
            decimalToBinary(userDecimalVal);  // Function call will print out the converted binary value
            cout << "\n";
        }


        // Binary -> Decimal (Option 2)
        else if (userChoice == 2) {
            // Variables hold the number of bits and the actual value of the binary value the user inputs
            int convertedAnswer;
            string userBinaryVal;

            cout << setw(55) << "* BINARY TO DECIMAL CONVERSION *\n";
            cout << "\n";

            cout << "You have chosen to do a BINARY -> DECIMAL conversion.\n";
            cout << "\n";

            // Prompt the user to enter a Binary value and input validation
            cout << "Binary value can be no longer than 8 bits.\n";
            cout << "Now enter in an 8-bit Binary Value: ";
            cin >> userBinaryVal;
            cout << "\n";

            // Function call will return the converted value 
            convertedAnswer = binaryToDecimal(userBinaryVal);

            // Prints the conversion value from the function, out to the console
            cout << "Converted Value: ";
            cout << userBinaryVal << " = " << convertedAnswer << endl;
        }



        // Hexadecimal -> Binary (Option 3)
        else if (userChoice == 3) {
            string userHexVal, convertedAnswer;

            cout << setw(55) << "* HEXADECIMAL TO BINARY CONVERSION *\n";
            cout << "\n";

            cout << "You have chosen to do a HEXADECIMAL -> BINARY conversion.\n";
            cout << "\n";

            // Prompt the user to enter a hex value
            cout << "Now enter a Hexadecimal Value to convert: ";
            cin >> userHexVal;
            cout << "\n";

            // Function call will return the converted value
            convertedAnswer = hexadecimalToBinary(userHexVal);

            // Prints the conversion value from the function, out to the console
            cout << "Converted Value: ";
            cout << userHexVal << " = " << convertedAnswer << endl;
        }



        // Binary -> Hexadecimal (Option 4)
        else if (userChoice == 4) {
            string userBinVal, convertedAnswer;

            cout << setw(55) << "* BINARY TO HEXADECIMAL CONVERSION *\n";
            cout << "\n";

            cout << "You have chosen to do a BINARY -> HEXADECIMAL conversion.\n";
            cout << "\n";

            // Prompt the user to enter a binary value
            cout << "Now enter an 8 bit Binary Value to convert: ";
            cin >> userBinVal;
            cout << "\n";

            // Input validation
            while (userBinVal.length() != 8) {
                if (userBinVal.length() > 8) {
                    cout << "The bit value is longer than 8 bits.\n";
                    cout << "Enter an 8-bit value: ";
                    cin >> userBinVal;
                }

                else if (userBinVal.length() < 8) {
                    cout << "The bit value is less than 8 bits.\n";
                    cout << "Enter an 8-bit value: ";
                    cin >> userBinVal;
                }
                cout << "\n";
            }

            // Function call will return the converted value
            convertedAnswer = binaryToHexadecimal(userBinVal);

            // Prints the conversion value from the function, out to the console
            cout << "Converted Value: ";
            cout << userBinVal << " = " << convertedAnswer << endl;
        }



        cout << "\n";
        cout << "\n";
        cout << "--------------------------------------------------------------";
        cout << "\n";
        cout << "\n";
        cout << "\n";
    }
}






// Function Definitions

// Function definition for converting Decimal Values to Binary
void decimalToBinary(int x) {
    int binaryNum[32];          // An array to store the Binary Value
    int i = 0;
    while (x > 0) {
        binaryNum[i] = x % 2;   // Array holds the remainder value of x being divided by 2
        x = x / 2;              // x is divided by 2 since its a BINARY value, just like in DR method
        i++;
    }

    // For loop prints the array backwards just like in the divisional remainder method
    for (int k = i - 1; k >= 0; k--) {
        cout << binaryNum[k];
    }
};




// Function definition for converting Binary Values to Decimal
int binaryToDecimal(string x) {
    int convertedVal = 0;
    int power = 0;
    int stringSize = x.length();

    // The loop reads the string from right to left, just like in positional notation, 
    // and then carries out the same multiplication process (1^i * 1) or (1^i * 0)
    for (int i = stringSize - 1; i >= 0; i--) {
        if (x[i] == '1') {                  // If the binary bit is equal to 1, then it will multiply it
            convertedVal += (1 << power);   // Bitwise operator that shifts bits to the left
        }
        power++;
    }
    return convertedVal;
};




// Function definition for converting Hexadecimal Values to Binary
string hexadecimalToBinary(string x)
{
    string convertedVal;
    int userValLength = x.length();


    for (int i = 0; i < userValLength; i++) {
        convertedVal += hexToBinHelper(x[i]);   // Use of helper function to convert each hex value
    }
    return convertedVal;                        // Returns the binary value as a string
};

// Helper function for hexadecimalToBinary function
string hexToBinHelper(char c)
{
    // If/else statements to convert each hex value to its corresponding binary set
    if (c == '0') { return "0000"; }
    else if (c == '1') { return "0001"; }
    else if (c == '2') { return "0010"; }
    else if (c == '3') { return "0011"; }
    else if (c == '4') { return "0100"; }
    else if (c == '5') { return "0101"; }
    else if (c == '6') { return "0110"; }
    else if (c == '7') { return "0111"; }
    else if (c == '8') { return "1000"; }
    else if (c == '9') { return "1001"; }
    else if (c == 'A') { return "1010"; }
    else if (c == 'B') { return "1011"; }
    else if (c == 'C') { return "1100"; }
    else if (c == 'D') { return "1101"; }
    else if (c == 'E') { return "1110"; }
    else if (c == 'F') { return "1111"; }
    else {
        return " *INVALID* "; // If the hex value is invalid, it will return as such
    }
};




// Function definition for converting Binary to Hexadecimal
string binaryToHexadecimal(string x) {
    // xSize will always be 8 because the prompt forces the user to make an 8-bit entry
    // But xSize is here to allow for flexibility with the user's entry
    int xSize = x.length();
    string convertedVal, firstHalf, secondHalf;

    // Groups the first 4 binary values, so that they can be converted with the helper function
    for (int i = 0; i < 4; i++) {
        firstHalf += x[i];
    }

    // Groups the last 4 binary values, so that they can be converted with the helper function
    for (int i = 4; i != 8; i++) {
        secondHalf += x[i];
    }

    // Concatenates the two results from the helper function and stores it in the return value
    convertedVal = (binToHexHelper(firstHalf) + binToHexHelper(secondHalf));

    return convertedVal;
};

// Helper function for binaryToHexadecimal function
string binToHexHelper(string s) {

    // If/else statements to convert each binary set to its corresponding hex value
    if (s == "0000") { return "0"; }
    else if (s == "0001") { return "1"; }
    else if (s == "0010") { return "2"; }
    else if (s == "0011") { return "3"; }
    else if (s == "0100") { return "4"; }
    else if (s == "0101") { return "5"; }
    else if (s == "0110") { return "6"; }
    else if (s == "0111") { return "7"; }
    else if (s == "1000") { return "8"; }
    else if (s == "1001") { return "9"; }
    else if (s == "1010") { return "A"; }
    else if (s == "1011") { return "B"; }
    else if (s == "1100") { return "C"; }
    else if (s == "1101") { return "D"; }
    else if (s == "1110") { return "E"; }
    else if (s == "1111") { return "F"; }
    else {
        return "x"; // If the binary value is invalid, it will return as such
    }
};