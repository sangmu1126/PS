#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;

    getline(cin, s);

    int count{0};

    if (s[0] == '\0' || s == " ") {
        cout << count;
    }
    else {
        for (int i{0}; i < s.size(); i++){
            if (s[i] == ' '){
                if (i != 0 && i != s.size() - 1)
                    count++;
            }
        }
        cout << count + 1;
    }
}