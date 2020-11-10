#include<iostream>

using namespace std;


void solution(long long a) 
{
	int m, n;
	m = a % 10;
	while (a >= 10) {
		a = a / 10;
	}
	n = a;
	if (m == n) {
		cout << "YES"<<endl;
	}
	else {
		cout << "NO"<<endl;
	}

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long a;
		cin >> a;
		solution(a);
	}
}
