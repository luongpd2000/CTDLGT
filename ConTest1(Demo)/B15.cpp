#include<iostream>
#include<math.h>
using namespace std;
void xuly(int a[100000],int n){
	int ktra=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n-1;j++){
			if(a[i]==a[j]){
				cout<<a[i]<<endl;
				ktra=1;
				break;	
			}
		}
		if(ktra==1) break;
	}
	if(ktra==0) cout<<"NO"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100000] ={0};
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		xuly(a,n);
	}
}
