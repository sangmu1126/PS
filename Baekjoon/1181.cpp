#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;
    vector <pair <int, string>> ar;
    cin >> n;

    for(int i{0}; i < n; i++) {
        cin >> s;

        ar.push_back(pair<int, string> (s.size(),s));
    }

    sort(ar.begin(), ar.end());
    ar.erase(unique(ar.begin(), ar.end()), ar.end());

    for (int i{0}; i < ar.size(); i++) {
        cout << ar[i].second << endl;
    }
}