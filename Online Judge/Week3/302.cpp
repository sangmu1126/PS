#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> a;
  vector<int> b;
  
  for (int i=0; i<N; i++) {
    int k;
    cin >> k;

    a.push_back(k);
  }
  
  for (int i=0; i < N; i++){
    int k;
    cin >> k;
    
    if(a[i]==0) {  
      b.push_back(k);
    }
  }
  
  int M;
  cin >> M;

  reverse(b.begin(), b.end());

  for (int i=0; i < M; i++) {
    int k;
    cin >> k;

    b.push_back(k);
  }
  for(int i=0; i < M; i++){
    cout << b[i] << " ";
  } 
}