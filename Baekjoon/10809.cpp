#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    vector <int> alp(26, -1);

    cin >> s;

    for (int i{0}; i < s.size(); i++) {
        if (alp[s[i] - 'a'] == -1)
            alp[s[i] - 'a'] = i;
    }

    for (int i{0}; i < alp.size(); i++) {
        cout << alp[i] << " ";
    }
}