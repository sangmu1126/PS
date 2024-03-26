#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, x, y;
    cin >> N;

    int maxW=0, maxH = 0;
    vector<pair<int,int>> info;
    vector<int> score;

    for (int i=0; i < N; i++) {
        int w, h;
        cin >> w >> h;
        
        info.push_back(make_pair(w, h));
    }

    for (int i=0; i < info.size(); i++) {
        
    }
}