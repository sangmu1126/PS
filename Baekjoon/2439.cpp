#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cin >> n;
    
    for (int i{0}; i < n; i++) {
        for (int j{1}; j < n - i; j++)
            cout << " ";
        for (int j{i}; j >= 0; j--)
            cout << "*";
        cout << endl;
    }   
}