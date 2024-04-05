#include <iostream>
using namespace std;

int main() {
    int N, K, A, B;
    int count{0};

    cin >> N >> K;

    for (int i{0}; i < N+1; i++) {

        if (count == N)
            cout << "ºñ¿ÍÀÌ";
        cin >> A >> B;

        count++;
    }
}