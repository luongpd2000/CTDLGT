#include <bits/stdc++.h>
using namespace std;

int n;
int X[101];

void init(){
	for(int i=1;i<=n;i++){
		X[i]=n-i+1;
	}
}

void xemmh(){
	for(int i=1;i<=n;i++){
		cout<<X[i];
	}
	cout<<" ";
}

bool kiemtra(){
	for(int i=1;i<=n;i++){
		if(X[i]!=i) return false;
	}
	return true;
}

void sinhhoanvi(){
	while(!kiemtra()){
		int i=n;
		int k=n;
		while(i>0 && X[i-1]<X[i]) i--;
		i--;
		
		while(X[k]>X[i]) k--;  
		swap(X[k],X[i]);
		
		int l=i+1;
		int s=n;
		while(l<s){
			swap(X[l],X[s]);
			s-- ; l++;
		}
		xemmh();	
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		init();
		xemmh();
		sinhhoanvi();
		cout<<endl;
	}
}
