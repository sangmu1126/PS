#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	int  r = 0;
	for(int i = 0; i < s.size(); i++)
		r = (r * 10 +( s[i] - '0')) % 20000303;	
	
	cout<<r;
}