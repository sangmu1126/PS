#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <array>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;

    array<vector<pair<int, int>>,10> nums;
    vector<vector<int>> dx;
    vector<vector<int>> dy;

    for (int i=0; i < N; i++) {
        string s;
        cin >> s;

        for (int j=0; j < s.size(); j++) {
            int k = s[j]-'0';
            nums[k].push_back(make_pair(i, j));
        }
    }
    int ans = 1;

    for (int i=0; i < 10; i++) {
        cout << i << " : ";
        for(int j=0; j < nums[i].size(); j++) {
            cout << "(" << nums[i][j].first << nums[i][j].second << ")";
        }
        cout << endl;
    }

    int x;

    for (int i=0; i < 10; i++) {
        for (int j=0; j < nums[i].size(); j++) {
            if (nums[i].size() > 1 && (nums[i][nums[i].size()-1].first - nums[i][0].first == nums[i][nums[i].size()-1].second - nums[i][0].second)) {
                x = i;
                cout << i << ": ";
                cout << "(" << nums[i][j].first << ","<< nums[i][j].second << ")";
                ans = pow(nums[i][nums[i].size()-1].first - nums[i][0].first + 1,2);
            }
        }
    }

    for (int i=0; i < x; i++) {
        for (int j=i; j < x; j++) {
            dx[i][j] = nums[x][j].first - nums[x][i].first;
            dy[i][j] = nums[x][j].second - nums[x][i].second;
        }
    }
    cout << ans;
}