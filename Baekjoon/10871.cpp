#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,x,k;
    vector <int> ar;

    cin >> n >> x;

    for (int i{0}; i < n; i++) {
        cin >> k;

        ar.push_back(k);
    }

    for (int i{0}; i < ar.size(); i++) {
        if (x > ar[i])
            cout << ar[i] << " "; 
    }
}