#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string k;
    int sum{0};

    cin >> n;

    cin >> k;

    for (int i{0}; i < n; i++) {
        sum += k[i] - '0';
    }

    cout << sum;
}