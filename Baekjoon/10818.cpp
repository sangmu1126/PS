    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        int n, k;
        vector <int> ar;

        cin >> n;

        for (int i{0}; i < n; i++) {
            cin >> k;

            ar.push_back(k);
        }

        int max{ar[0]}, min{ar[0]};

        for (int i{0}; i < ar.size(); i++) {

            if (max < ar[i]) {
                max = ar[i];
            }
            
            if (min > ar[i]) {
                min = ar[i];
            }
        }

        cout << min << " " << max;
    }