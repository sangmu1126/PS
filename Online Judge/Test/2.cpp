#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int k;
    cin >> k;

    string s;
    cin >> s;

    int sum = 0;

    for (int i=0; i < k; i++) {
        if (s[i]-'0' >= 0 && s[i]-'0' <= 9) {
            vector<int> arr;
            int count = 0;
            for (int j=i; j < k; j++) {
                if (s[j]-'0' >= 0 && s[j]-'0' <= 9) {
                    arr.push_back(s[j]-'0');
                    count++;
                }
                else {
                    i += count;
                    for (int b=0; b < arr.size(); b++) {
                        sum+= arr[b] * pow(10, count-1);
                        count--;
                    }
                    break;
                }
            }
        }
    }
    
    cout << sum;
}