#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int extra ;
	cin >> extra;
	int maxi = v[0];
	for(int i = 1; i < n; i++) maxi = max(maxi, v[i]);
	for(int i = 0; i < n; i++) 
		if(v[i] + extra >= maxi) cout << "True ";
		else cout << "False ";
}
