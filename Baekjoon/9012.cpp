#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i{0}; i < t; i++) {
        int count{0};
        string s;

        cin >> s;

        for (int j{0}; j < s.size(); j++) {

            if (count < 0)
                break;
            if (s[j] == '(')
                count++;
            if (s[j] == ')')
                count--;
        }

        if (count == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}