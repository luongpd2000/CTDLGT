#include <bits/stdc++.h> 
using namespace std; 
int convert(int m, int n) 
{ 
	if (m == n) return 0; 
	if (m > n) return m - n; // neu m>n chi co the dung phep "-"
	if (n % 2 == 1) return 1 + convert(m, (n + 1)); 
	else return 1 + convert(m, n / 2); 
} 
int main() 
{ 
	int m , n,t; 
	cin>>t;
	while(t--){
		cin>>m>>n;
		cout<<convert(m, n)<<endl; 
	}
	return 0; 
} 

