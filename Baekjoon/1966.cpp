#include <iostream>
#include <queue>
using namespace std;

int main() {
    int T;
    cin >> T;

    queue<int> doc;
    priority_queue<int> max_heap;

    for(int t=0; t < T; t++) {
        int N, M;
        cin >> N >> M;

        int max;

        for (int i=0; i < N; i++) {
            int k;
            cin >> k;

            
            if (max < k) {
                max = k;
            }

            a.push(k);
        }
    }
}