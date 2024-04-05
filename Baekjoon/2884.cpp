#include <iostream>
using namespace std;

int main() {
    int H, M;

    cin >> H >> M;

    if (H == 0) {
        if (M < 45)
            cout << 23 << " " << M + 15;
        else
            cout << H << " " << M - 45;
    }
    else {
        if (M < 45)
            cout << H-1 << " " << M + 15;
        else
            cout << H << " " << M - 45;
    }
}