#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> word;
    
    while(N--) {
        string s;
        cin >> s;

        if (s.length() >= M) {
            word.push_back(s);
        }
    }

    for (int i=0; i < word.size(); i++) {
        cout << word[i] << endl;
    }
}