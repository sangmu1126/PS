#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cards;
    for (int i=0; i<N; i++) {
        int k;
        cin >> k;

        cards.push_back(k);
    }

    int max = 0;
    int sum;

    for (int a=0; a < N; a++) {
        for (int b=1; b < N; b++) {
            for (int c=2; c<N; c++) {
                sum = cards[a] + cards[b] + cards[c];
                if (a!=b && b!=c && c!=a) {
                    if (max < sum && sum <= M) {
                        max = sum;
                    }
                }
            }
        }
    }
    cout << max << endl;
}