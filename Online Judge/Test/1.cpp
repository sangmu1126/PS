#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> len;
    for (int i=0; i < 4; i++) {
        int k;
        cin >> k;
        
        len.push_back(k);
    }

    sort(len.begin(), len.end());

    cout << len[0]*len[2];
}