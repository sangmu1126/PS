#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    int score{1};
    vector <pair<int, int>> arr;
    cin >> n;

    vector<int> rank(n+1);

    arr.resize(n);
    for (int i{0}; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    int max_W{arr[0].first};
    int max_H{arr[0].second};
    for (int i{0}; i < arr.size(); i++) {
        if (max_W < arr[i].first) {
            max_W = arr[i].first;
        }
        if (max_H < arr[i].second) {
            max_H = arr[i].second;
        }
    }

    for (int i{0}; i < arr.size(); i++) {
        if (arr[i].first ==  max_W && arr[i].second == max_H) {
            rank[i] = score;
        }
    }

}