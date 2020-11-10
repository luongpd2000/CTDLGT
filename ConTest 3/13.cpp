#include<iostream>
#include<string>

#include<algorithm>
using namespace std;
string s;
int d;
int c[400]={0};
 
void solve() {
	for (int i = 0; i < s.length(); i++) {
			c[s[i] - '\0']++;
		}
		sort(c, c + 400, greater <int>());
	int i = 0, check = 1;
	while (c[i] != 0) {
		if ((i + ((c[i]-1) * d)) >= s.length()) {
				check = -1;
				break;
			}
		i++;
	}
	cout<<check<<endl;
}
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> d >> s;
		
		solve();
	}
}
