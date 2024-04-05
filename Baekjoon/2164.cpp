#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;

    for (int i=0; i < N; i++) {
        q.push(i+1);
    }

    int count = 1;

    while(1) {
        if (q.size() == 1) {
            break;
        }
        else {
            if(count==1) {
                q.pop();
                count = 0;
        }
            else {
                int k = q.front();
                q.push(k);
                q.pop();
                count = 1;
            }
        }
    }
    cout << q.front() << endl;
}