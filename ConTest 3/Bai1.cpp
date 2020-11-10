#include<bits/stdc++.h>

using namespace std;
int a[10]={1000,500,200,100,50,20,10,5,2,1};
int n;
int soto;
void xuly(){
	soto=0;
	int b;
	for(int i=0;i<10;i++){
		b=n/a[i];
		soto+=b;
		n-=b*a[i];
		if(n==0){
			cout<<soto<<endl;
			break;
		}
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		xuly();
	}
}
