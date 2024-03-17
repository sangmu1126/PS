#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int count = 0;

    for (int i=0;; i++) {
        if (i%2==0) {
            m--;
            count++;
        }
        else {
            n--;
            count++;
        }
        if (m==1||n==1) {
            break;
        }
    }
    cout << count+1 << endl;
}