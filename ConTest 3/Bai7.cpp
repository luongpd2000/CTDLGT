#include<bits/stdc++.h>

using namespace std;
int n;
long long a[1000000];
long long b[1000000];

void xuly(){
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]*b[i];
	}
	cout<<sum<<endl;
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		xuly();
	}
}
