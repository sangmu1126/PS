#include <iostream>
#include <string>
using namespace std;

int main() {

    string hx; 
    int num{0};

    cin >> hx;

    for (int i{0}; i < hx.size(); i++) {
        num *= 16;

        if (hx[i] >= 'A' && hx[i] <= 'Z') {
            num += hx[i] - 'A' + 10;
        }
        else
            num += hx[i] - '0';
    }

    cout << num;

}