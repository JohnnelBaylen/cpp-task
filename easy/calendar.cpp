#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "           May " << endl << endl;
    cout << "Mon  Tue  Wed  Thu  Fri  Sat  Sun" << endl;

    // May 1 is on a Thursday (so startDay = 4)
    int startDay = 4, daysInMonth = 31; 

    // Print initial spaces for days before May 1
    for (int i = 1; i < startDay; i++) {
        cout << "     "; // 5 spaces for alignment
    }

    // Print all days of May
    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(4) << day << " ";
        
        // Check if the current position is Sunday (7th day in the week)
        if ((day + startDay - 1) % 7 == 0) {
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}
