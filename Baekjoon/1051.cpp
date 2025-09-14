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

    for (int i=0; i < 10; i++) {
        for (int j=0; j < nums[i].size(); j++) {
            if (nums[i].size() > 1 && (nums[i][nums[i].size()-1].first - nums[i][0].first == nums[i][nums[i].size()-1].second - nums[i][0].second)) {
                cout << i << ": ";
                cout << "(" << nums[i][j].first << ","<< nums[i][j].second << ")";
            }
        }
    }

    for (int a=0; a < 10; a++) {
        int x = nums[a].size();
        for (int i=0; i < x; i++) {
            for (int j=i+1; j < x; j++) {
                int dx = nums[a][j].first - nums[a][i].first;
                int dy = nums[a][j].second - nums[a][i].second;
                if (dx==dy) {
                    cout << a << ": ";
                    cout << "(" << nums[a][i].first << ","<< nums[a][i].second << ")" << endl;
                    cout << "(" << nums[a][j].first << ","<< nums[a][j].second << ")" << endl;
                }
            }
        }
    }
    // for (int i=0; i < x; i++) {
    //     for (int j=i; j < x; j++) {
    //         int dx = nums[x][j].first - nums[x][i].first;
    //         int dy = nums[x][j].second - nums[x][i].second;
    //         if (dx==dy && nums[x][0].first==x) {
    //             ans = pow(nums[i][nums[i].size()-1].first - nums[i][0].first + 1,2);
    //         }
    //     }
    // }
    cout << ans;
}