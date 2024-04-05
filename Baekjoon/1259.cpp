#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int n;
    string s;
    vector<int> ar;

    cin >> n;
    while(n!=0) {

        s = to_string(n);

        for (int i{0}; i < s.size(); i++) {

            ar.push_back(s[i]);
        }

        int count{0};
        
        if (! s.size()%2==0) {
            for (int i{0}; i < s.size()/2; i++) {
                if (s[i] == s[s.size() - i-1]) {
                    count++;
                }
            }
        }

        if (count == s.size()/2)
            cout << "yes";
        else
            cout << "no";

        cout << endl;
        cin >> n;
    }
}