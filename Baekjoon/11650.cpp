#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n;
    vector<pair<int, int>> cdt;

    cin >> n;
    cdt.resize(n);

    for (int i{0}; i < n; i++) {
        cin >> cdt[i].first >> cdt[i].second;
    }

    sort(cdt.begin(), cdt.end());

    for (int i{0}; i < cdt.size(); i++) {
        cout << cdt[i].first << " " << cdt[i].second << "\n";
    }
}