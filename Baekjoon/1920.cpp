#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    cin.tie(NULL);
	ios::sync_with_stdio(false);
    
    int n; cin >> n;
    int arr[100000];

    for (int i{0}; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int m;
    cin >> m; int tar;
    
    for (int i{0}; i < m; i++) {
        cin >> tar;
        if (binary_search(arr, arr+n, tar))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
}