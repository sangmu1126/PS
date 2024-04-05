#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, x, y;

    cin >> N;

    cout << pow(((x+1) * (y+1) - x * y - x - y), N);
}