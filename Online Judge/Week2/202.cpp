#include <iostream>
#include <set>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int count = 0;
    set<int> a;
    set<int> b;

    for (int i=0; i < A; i++) {
        int k;
        cin >> k;
        a.insert(k);
    }
    for (int i=0; i < B; i++) {
        int num = a.size();

        int k;
        cin >> k;
        a.insert(k);

        if (a.size()==num) {
            count++;
        }
    }
    cout << a.size()-count << endl;
}