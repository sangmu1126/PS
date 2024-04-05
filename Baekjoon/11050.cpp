#include <iostream>
using namespace std;

int fac (int a) {
    if (a == 1 || a == 0)
        return 1;
    return a * fac(a-1);
}

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n,k;

    cin >> n >> k;

    cout << fac(n) / (fac(k) * fac(n-k));   
}