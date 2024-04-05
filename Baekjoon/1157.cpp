#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector <int> alp(26);

    string s;
    
    cin >> s;

    for (int k{0}; k < s.size(); k++) {

        if (s[k] < 91)
            alp[s[k] - 'A']++;
        else
            alp[s[k] - 'a']++;
    }
    
    int max{alp[0]};
    int m{0};
    int idx{0};

    for (int j{0}; j < alp.size(); j++) {
        if (max < alp[j]) {
            max = alp[j];
            idx = j;
        }
    }

    for (int j{0}; j < alp.size(); j++) {
        if (max == alp[j])
            m++;
    }

    if (m == 1)
        cout << static_cast<char>('A' + idx);
    else
        cout << "?";
}