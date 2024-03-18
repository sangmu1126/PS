#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    bool isZero = 0;

    for (int i=N; i > 0; i--) {
        string num = to_string(i);
        for (int j=0; j < num.size(); j++) {
            count ++;
            if (num[j]=='0') {
                isZero = 1;
                break;
            }
        }
        if (isZero==1) {
            break;
        }
    }
    if (isZero==0) {
        count = 0;
    }
    if (N==0) {
        count = 1;
    }

    
    cout << count << endl;
}