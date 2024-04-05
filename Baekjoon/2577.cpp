#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num(10);

    int a,b,c,r;

    cin >> a >> b >> c;

    r = a * b * c;

    while(r!=0) {
        num[r % 10]++;

        r /= 10;
    }

    for (int i{0}; i < num.size(); i++) {
        cout << num[i] << endl;
    }
    
}