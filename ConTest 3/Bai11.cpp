#include<bits/stdc++.h> 
using namespace std; 
long long a[2000000],n;
main(){ 
		priority_queue<long long,vector<long long>,greater<long long> > q;
		long long n;
		long long sum = 0;
		cin>>n;
		long long a=0;
		for(long long i=1;i<=n;i++){
			cin>>a;
			q.push(a);
		}
		long long b=1e9 +7;
		while(q.size() > 1){
			long long k = q.top();q.pop();
			long long h = q.top();q.pop();
			sum += h + k; // noi 2 day lai voi nhau
			if(sum>=b)  sum=sum%b;
			q.push((h+k)%b);
		}
		
		cout<<sum<<endl;
} 
