#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string A, B;

    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    if (A < B)
        cout << B;
    else
        cout << A;
}