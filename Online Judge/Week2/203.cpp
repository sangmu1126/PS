#include <iostream>
#include <vector>
#define SZ 10000000
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N;
    
    vector<int> pcards(SZ, 0);
    vector<int> mcards(SZ, 0);

    for (int i=0; i<N; i++) {
        int k;
        cin >> k;

        if (k >=0) {
            pcards[k]++;
        }
        else {
            mcards[-k]++;
        }
    }

    cin >> M;
    for (int i=0; i<M; i++) {
        int k;
        cin >> k;

        if (k >=0) {
            cout << pcards[k] << " ";
        }
        else {
            cout << mcards[-k] << " ";
        }
    }
}