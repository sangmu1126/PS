#include <iostream>
using namespace std;

bool PrimeNum (int x) {
    for (int i{2}; i < x; i++) {
        if(x % i == 0)
            return false;
    }
    return true;
}

int main() {

    int n, k;
    int answer{0};

    cin >> n;

    for (int i{0}; i < n; i++) {
        cin >> k;

        if (PrimeNum(k) && (k != 1))
            answer++;
    }

    cout << answer;
}