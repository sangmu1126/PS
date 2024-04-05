#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << setprecision(0) << fixed << N * 0.78 << " " << N - (N * 0.2 * 0.22);
}