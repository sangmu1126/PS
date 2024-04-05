#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;

    vector<int> rect;

    for (int i=0; i < N; i++) {
        for(int j=0; j < N; j++) {
            int k;
            cin >> k;

            rect.push_back(k);
        }
    }
}