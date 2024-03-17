#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int x1, x2, y1, y2;
    x1 = n/4;
    y1 = m/4;
    x2 = n%4;
    y2 = m%4;
    
    if (!x2) {
        x1--;
    }
    if (!y2) {
        y1--;
    }
    cout << abs(x1-y1)+abs(x2-y2) << endl;
}