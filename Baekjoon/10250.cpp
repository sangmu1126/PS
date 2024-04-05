#include <iostream>
using namespace std;

int main() {
    int T, H, W, N;

    cin >> T;

    for (int i{0}; i < T; i++) {
        cin >> H >> W >> N;

        int m;

        if (N%H == 0)
            m = H;
        else
            m = N%H;

        int n;
        
        if (N%H == 0)
            n = N/H;
        else
            n = N/H + 1;

        if (n < 10) {
            cout << m << "0" << n << endl;
        }
        else
            cout << m << n << endl;
    }
}