#include<bits/stdc++.h> 
using namespace std;
long long a,n;
main(){ 
	int t;
	cin>>t;
	while(t--){
		priority_queue<long long,vector<long long>,greater<long long> > q;	// ham doi uu tien sx theo thu tu giam dan
		int n;
		long long sum = 0;
		cin>>n;
		long long a=0;
		for(int i=1;i<=n;i++){
			cin>>a;
			q.push(a);
		}
		while(q.size() > 1){	// moi lan tinh tong thi lai sx lai 1 lan
			int k = q.top();q.pop();
			int h = q.top();q.pop();
			sum += h + k; // noi 2 day lai voi nhau
			q.push(h+k);
		}
		cout<<sum<<endl;
	}
	
} 


