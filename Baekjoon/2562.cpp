#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector <int> ar;

    for (int i{0}; i < 9; i++) {
        cin >> n;

        ar.push_back(n);
    }

    int max{ar[0]};
    int max_idx{0};

    for (int j{0}; j < ar.size(); j++) {
        if (max < ar[j]) {
            max = ar[j];
            max_idx = j;
        }
    }

    cout << max << endl;
    cout << max_idx+1;
}