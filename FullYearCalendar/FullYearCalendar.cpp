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

// Full Year Calendar Program
/* This program has the user enter a year, then it will print out a correct  and full calendar for that user-given year. */

// Function Prototype
void printFullCalendar(int year);

// Main Function with calendar function call
int main() {

    int year;

    cout << "Enter a year you want the calendar for: ";
    cin >> year;
    cout << "\n";

    printFullCalendar(year);

    return 0;
}

// Function Definition
void printFullCalendar(int year) {
    int arr[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

    // Int array to hold the days within each month (adjustments made for leap
    // year on lines 52-55)
    int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // String array to hold the names of the months
    string monthNames[] = { "January",   "February", "March",    "April",
                           "May",       "June",     "July",     "August",
                           "September", "October",  "November", "December" };

    // Variables for loops
    int days;
    int currentTracker;
    int y = year - 1;

    /* This line is used to keep track of the number of days in the last week of
    each month, so that the following month will start off on the correct day */
    /* In other words, it keeps track of what the last day of each month is, so
     * that the program knows where to pick up at for the following month */
    currentTracker = (y + y / 4 - y / 100 + y / 400 + arr[0] + 1) % 7;

    /* A for-loop that goes through all 12 months with conditional checks for a
    leap year */
    for (int i = 0; i < 12; i++) {
        if (i == 1)
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                days =
                29; // Assigns "days" to 29 if the leap year conditionals are true
            else {
                days = monthDays[i];
            }
        else {
            days = monthDays[i]; // "days" pulls the amount of days for the month from
                                 // the array "mDays[]"
        }

        cout << "\n";
        cout << "\n";
        cout << setw(20) << monthNames[i] << " " << year << endl;
        cout << "   Su   Mo   Tu   We   Th   Fr   Sa" << endl;
        cout << "  ---------------------------------- " << endl;

        /* This portion of code below is used to create the
        correct spacing for the days in each month */
        int k;
        for (k = 0; k < currentTracker; k++) 
        {
            cout << "     "; // This line is creates the correct amount of spaces for
                             // the first week of each month
        }

        /* This for-loop determines how many numbers there should be for each week.
        So once it exceeds 6, it will go to the next line to represent the next
        week */
        for (int j = 1; j <= days; j++) {
            k++;
            cout << setw(5) << j;
            if (k > 6) {
                k = 0; // resets k to 0 to renew the days count for each week within the
                       // month
                cout << endl;
            }
        }

        if (k) {
            cout << endl;
        }

        /* Reassigning k to "currentTracker" allows the program to know where to
        pick up at for the first day of the following month */
        currentTracker = k;

        // This part is just a visual of how "currentTracker" keeps track of where the
        // last day of each month left off, so that the program knows where to pick up
        // for the following month. 
        /* This part is not necessary for the program to run */
        string dayLeftOff;
        if (currentTracker == 0) {
            dayLeftOff = "Saturday";
        }
        else if (currentTracker == 1) {
            dayLeftOff = "Sunday";
        }
        else if (currentTracker == 2) {
            dayLeftOff = "Monday";
        }
        else if (currentTracker == 3) {
            dayLeftOff = "Tuesday";
        }
        else if (currentTracker == 4) {
            dayLeftOff = "Wednesday";
        }
        else if (currentTracker == 5) {
            dayLeftOff = "Thursday";
        }
        else if (currentTracker == 6) {
            dayLeftOff = "Friday";
        }
        else if (currentTracker == 7) {
            dayLeftOff = "Saturday";
        }
        /*
        cout << "* The last day of this month left off on a " << dayLeftOff << ". *\n";
        cout << "* The first day of the next month should pick up on the day after " << dayLeftOff << ". *\n";
        */
    }
    return;
}