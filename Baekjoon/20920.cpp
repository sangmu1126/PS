#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool comp (pair<string,int> a, pair<string, int> b) {
    if (a.second == b.second) {
        if (a.first.length() == b.first.length()) {
            return a.first < b.first;
        }
        else {
            return a.first.length() > b.first.length();
        }
    }
    else return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<pair<string, int>> word;
    map<string, int> words;
    
    while(N--) {
        string s;
        cin >> s;

        if (s.length() >= M) {
            words[s]++;
        }
    }

    for (auto w: words) {
        word.push_back(make_pair(w.first, w.second));
    }
    sort(word.begin(), word.end(), comp);
    for (auto s: word) {
        cout << s.first << '\n';
    }
}