#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int count = 0;
    char default1[8][8];
    char default2[8][8];

    for (int i=0; i < 8; i++) {
        for (int j=0; j < 8; j++) {
            if ((i+j)%2==0) {
                default1[i][j] = 'w';
            }
            else {
                default1[i][j] = 'B';
            }
        }
    }

    for (int i=0; i < 8; i++) {
        for (int j=0; j < 8; j++) {
            if ((i+j)%2==0) {
                default2[i][j] = 'B';
            }
            else {
                default2[i][j] = 'W';
            }
        }
    }

    vector<vector<int>> inputTable(n, vector<int>(m, 0));

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
                char c;
                cin >> c;
            if ((i+j)%2==0) {
                if (c=='B') {
                    inputTable[i][j] = 1;
                }
                else {
                    inputTable[i][j] = -1;
                }
            }
            else {
                if (c=='W') {
                    inputTable[i][j] = 1;
                }
                else {
                    inputTable[i][j] = -1;
                }
            }
        }
    }

    int sum = 0;
    int max = 0;
    int min = 0;
    vector<vector<int>> sumTable(n-8+1, vector<int>(m-8+1, 0));

    for (int i=0; i < n-8; i++) {
        for (int j=0; j < m-8; j++) {
             sum += sumTable[i][j];           
        }
    }


    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cout << sumTable[i][j];
        }
        cout << endl;
    }



    for (int i=0; i < m-8+1; i++) {
        for (int j=0; j < 8; j++) {
            
        }
    }
}