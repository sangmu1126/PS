#include <iostream>
#include <vector>
using namespace std;

// 좌표를 재배열하는 함수
void snakeTraversal(vector<pair<int, int>>& coordinates) {
    int n = coordinates.size();
    bool moveRight = true; // 처음에는 우측으로 이동

    vector<pair<int, int>> result;

    for (int k = 0; k < n; ++k) {
        int i = coordinates[k].first;
        int j = coordinates[k].second;

        result.push_back({i, j});

        if (moveRight) {
            if (j == 2) { // 우측 끝에 도달하면 다음 행으로 이동
                moveRight = false; // 아래쪽으로 이동
            } else {
                j++;
            }
        } else {
            if (j == 0) { // 좌측 끝에 도달하면 다음 행으로 이동
                moveRight = true; // 우측으로 이동
            } else {
                j--;
            }
        }
    }
}

int main() {
    int num_coords;
    cout << "Enter the number of coordinates: ";
    cin >> num_coords;

    vector<pair<int, int>> coordinates(num_coords);

    cout << "Enter the coordinates:" << endl;
    for (int i = 0; i < num_coords; ++i) {
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    snakeTraversal(coordinates);

    for (int k = 0; k < num_coords; ++k) {
        cout << "(" << coordinates[k].first << ", " << coordinates[k].second << ") ";
    }
}
