#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    cout << setw(15) << left << "NFC West" << setw(4) << "W" << setw(3) << "L" << setw(1) << "T" << endl;
    for (int i{0}; i < 23; i++) cout << "-";
    cout << endl;
    cout << setw(15) << left << "Seattle" << setw(4) << 13 << setw(3) << 3 << setw(1) << 0 << endl;
    cout << setw(15) << left << "San Francisco" << setw(4) << 12 << setw(3) << 4 << setw(1) << 0 << endl;
    cout << setw(15) << left << "Arizona" << setw(4) << 10 << setw(3) << 6 << setw(1) << 0 << endl;
    cout << setw(15) << left << "St. Louis" << setw(4) << 7 << setw(3) << 9 << setw(1) << 0 << endl;
    cout << endl;
    cout << setw(15) << left << "NFC North" << setw(4) << "W" << setw(3) << "L" << setw(1) << "T" << endl;
    for (int i{0}; i < 23; i++) cout << "-";
    cout << endl;
    cout << setw(15) << left << "Green Bay" << setw(4) << 8 << setw(3) << 7 << setw(1) << 1 << endl;
    cout << setw(15) << left << "Chicago" << setw(4) << 8 << setw(3) << 8 << setw(1) << 0 << endl;
    cout << setw(15) << left << "Detroit" << setw(4) << 7 << setw(3) << 9 << setw(1) << 0 << endl;
    cout << setw(15) << left << "Minnesota" << setw(3) << 5 << setw(4) << 10 << setw(1) << 1 << endl;
}