#include<bits/stdc++.h>
using namespace std;
// dùng ham doi uu tien
main(){
		int n; 
		cin>>n; 
		long long a[n];
		priority_queue <long long,vector <long long>, greater<long long> > b;
		for(int i=0;i<n;i++) {
			cin>>a[i]; 
			b.push(a[i]);
		}
		
		for(int i=0;i<n;i++) {
			cout<<b.top()<<" "; 
			b.pop();
		}
}
