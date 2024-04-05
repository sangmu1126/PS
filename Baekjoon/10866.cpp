#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> a;

    int T;
    cin >> T;

    for (int t=0; t < T; t++) {
        string s;
        cin >> s;

        if (s=="push_front") {
            int k;
            cin >> k;

            a.push_front(k);
        }
        else if (s=="push_back") {
            int k;
            cin >> k;

            a.push_back(k);
        }
        else if (s=="front") {
            if(a.empty()) {
                cout << "-1" << endl;
            }
            else {
                cout << a.front() << endl;
            }
        }
        else if (s=="back") {
            if(a.empty()) {
                cout << "-1" << endl;
            }
            else {
                cout << a.back() << endl;
            }
        }
        else if (s=="size") {
            cout << a.size() << endl;
        }
        else if (s=="pop_front") {
            if (a.empty()) {
                cout << "-1" << endl;
            }
            else {
                cout << a.front() << endl;
                a.pop_front();
            }
        }
        else if (s=="pop_back") {
            if (a.empty()) {
                cout << "-1" << endl;
            }
            else {
                cout << a.back() << endl;
                a.pop_back();
            }
        }
        else if (s=="empty") {
            if (a.empty()) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
    }
}