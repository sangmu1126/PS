#include <iostream>
#include <string>
using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (isdigit(s[i])) {
            int num = s[i] - '0'; 
            while (i + 1 < k && isdigit(s[i + 1])) {
                num = num * 10 + (s[i + 1] - '0'); 
                ++i; 
            }
            sum += num; 
        }
    }

    cout << sum;
    return 0;
}