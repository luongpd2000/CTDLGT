#include<iostream>

using namespace std;


void solution(long long a[],int n){
	int t=0;
	for(int i=0;i<n;i++){
		if(a[i]!=a[n-1-i]){
			cout<<"NO"<<endl;
			t=1;
			break;
		}
	}
	if(t==0) cout<<"YES"<<endl;
}

int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		solution(a,n);
	}
}
