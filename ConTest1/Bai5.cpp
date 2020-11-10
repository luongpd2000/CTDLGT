#include<iostream>

using namespace std;

int n;
int k;
int X[100];

void init(){
	for(int i=1;i<=k;i++){
		X[i]=i;
	}
}

void xemmh(){
	for(int i=1;i<=k;i++){
		cout<<X[i];
	}
	cout<<" ";
}

bool kiemtra(){
	for(int i=1;i<=k;i++){
		if(X[i]!=n-k+i) return false;
	}
	return true;
}

void sinhtohop(){
	while(!kiemtra()){
		int i=k;
		while(i>0 && X[i]==n-k+i) i--;
		
		if(i>0) {
			X[i]=X[i]+1;
			for(int j=i+1;j<=k;j++){
				X[j]=X[i]+j-i;
			}
		}
		xemmh();	
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		init();
		xemmh();
		sinhtohop();
		cout<<endl;
	}
}

