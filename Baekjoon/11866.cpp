#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, k, target;
    int cnt = 0;

    cin >> N >> k;
    
    queue<int> q;

    for (int i=0; i < N; i++) {
        q.push(i+1);
    }
    cout << "<";
    while(!q.empty()) {
        for (int i=1; i < k; i++) {
            q.push(q.front());
            q.pop();
        }
        target = q.front();
        if (cnt == N-1) {
            cout << target << ">";
        }
        else {
            cout << target << ", ";
        }
        q.pop();
        cnt++;
    }
}