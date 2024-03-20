#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unsigned long long ans = 1;

    if (m/2 < m-n) {
        for(int i=m; i > m-n; i--) {
            ans *= i;
        }
        for(int i=n; i > 1; i--) {
            ans /= i;
        }
    }
    else {
        for(int i=m; i > n; i--) {
            ans *= i;
        }
        for(int i=m-n; i > 1; i--) {
            ans /= i;
        }
    }

    cout << ans << endl;
}