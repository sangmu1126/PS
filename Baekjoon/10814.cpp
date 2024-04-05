#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
}

int main() {
    int n;
    vector <pair<int, string>> list;

    cin >> n;
    list.resize(n);

    for (int i{0}; i < n; i++) {
        cin >> list[i].first >> list[i].second;
    }

    stable_sort(list.begin(), list.end(), cmp);

    for (int i{0}; i < list.size(); i++) {
        cout << list[i].first << " " << list[i].second << "\n";
    }
}