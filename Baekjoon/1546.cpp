#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int N,s;
    double sum{0};

    vector <int> score;

    cin >> N;

    for (int i{0}; i < N; i++) {
        cin >> s;
        score.push_back(s);
    }

    int max{score[0]};

    for (int j{0}; j < score.size(); j++) {
        if (max < score[j])
            max = score[j];
    }

    for (int k{0}; k < score.size(); k++) {
        sum += static_cast<double>(score[k])/max * 100;
    }

    cout << setprecision(6) << fixed << sum/N;
}