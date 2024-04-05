#include <iostream>
#include <vector>
using namespace std;

int main() {

    int x,y,w,h;
    vector<int> ar;

    cin >> x >> y >> w >> h;;

    ar.push_back(x);
    ar.push_back(y);
    ar.push_back(w-x);
    ar.push_back(h-y);

    int min{ar[0]};
    
    for (int i{0}; i < ar.size(); i++) {
        if (min > ar[i])
            min = ar[i];
    }

    cout << min;
}