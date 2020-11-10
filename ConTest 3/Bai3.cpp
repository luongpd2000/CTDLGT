#include<bits/stdc++.h>

using namespace std;
int a[1000000];
int n;

void xuly(){
	long long sum=0;
	long long b=pow(10,9)+7;
	for(int i=0;i<n;i++){
		sum+=a[i]*i;
		if(sum>=b ){
			sum=sum%b;
		}
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
		sort(a,a+n);
		xuly();
	}
}
