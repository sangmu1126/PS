#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M,N;
    cin >> M >> N;

    int* primeNum = new int[N]{0};

    for (int i=2; i <= N; i++) {
        primeNum[i] = i;
    }

    for (int i=2; i <= sqrt(N); i++) {
        if (primeNum[i]==0) {
            continue;
        }
        for (int j= i*i; j <= N; j += i) {
            primeNum[j] = 0;
        }
    }

    for (int i=M; i <= N; i++) {
        if (primeNum[i] != 0) {
            cout << primeNum[i] << "\n";
        }
    }
}