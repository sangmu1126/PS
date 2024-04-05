#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;

    for (int i{0}; i < n; i++) {
        int sum{0};
        int score{1};
        cin >> s;

        if (s[0] == 'O')
            sum += score;
        for (int j{1}; j < s.size(); j++) {
            if (s[j] == 'O') {
                if (s[j - 1] == 'O') {
                    score++;
                    sum += score;
                }
                else {
                    score = 1;
                    sum += score;
                }
            }
        }
        cout << sum << endl;
    }
}