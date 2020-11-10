#include<bits/stdc++.h>

using namespace std;
int n;
int a[20];

void xuly(){
	long long s1=0;
	long long s2=0;
	for(int i=0;i<n;i=i+2){
		s1=s1*10+a[i];
	}
	for(int i=1;i<n;i=i+2){
		s2=s2*10+a[i];
	}
	long long sum = s1+s2;
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
