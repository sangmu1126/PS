#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count2 = 0;
    int count5 = 0;
    
    for (int i=N; i > 0; i--) {
        int k = i;
        for(int j=2; j*j <= k; j++) {
            while(k%j==0) {
                if (j==2) {
                    count2++;
                }
                if (j==5) {
                    count5++;
                }
                k /= j;
            }
            if (k==2) {
                count2++;
            }
            if (k==5) {
                count5++;
            }
        }
    }
    if (count2 > count5) {
        cout << count5 << endl;
    }
    else {
        cout << count2 << endl;
    }
}