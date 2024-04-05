#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int count{0};
    vector<int> ar;

    for (int i{0}; i < 10; i++) {

        cin >> n; 

        ar.push_back(n%42);
    }
    sort(ar.begin(), ar.end());
    ar.erase(unique(ar.begin(), ar.end()), ar.end());
    
    cout << ar.size();
}