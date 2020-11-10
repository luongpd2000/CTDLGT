#include<iostream>

using namespace std;
int n;
int X[100];
int dem;

void init(){
	for(int i=1;i<=n;i++){
		X[i]=0;
	}
}

void xemmh(){
	int d=0;
	for(int j=1;j<=n;j++){
		if(X[j]==1) d++;
	}
	if(d==dem){
		for(int i=1;i<=n;i++){
			cout<<X[i];
		}
		cout<<endl;
	}	
}

bool kiemtra(){
	for(int i=1;i<=n;i++){
		if(X[i]==0) return false;
	}
	return true;
}

void sinh(){
	while(!kiemtra()){
		
		int i=n;
		while(i>0 && X[i]!=0) {
			X[i]=0;
			i--;
		}
		if(i>0) X[i]=1;	
		xemmh();
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>dem;
		init();
		xemmh();
		sinh();
	}
}
