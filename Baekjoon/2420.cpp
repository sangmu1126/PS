#include <iostream>
using namespace std;

int main() {

    long long N, M;

    cin >> N >> M;

    if ( N-M < 0)
        cout << (-1) * (N-M);
    else
        cout << N-M;
}