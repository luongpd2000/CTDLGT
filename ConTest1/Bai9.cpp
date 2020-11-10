#include<iostream>

using namespace std;
int n;
int X[101];
int gray[101];

void init(){
	for(int i=1;i<=n;i++){
		X[i]=0;
	}
}

int gray_xnor (int a, int b){
	if(a==b) return 0;
	else return 1;
}

void xemmh(){	
	gray[1]=X[1];
	for(int j=2;j<=n;j++){
		gray[j]= gray_xnor(X[j-1],X[j]);   // 2 bit giong nhau thi tra ve 0 , khac 1
	}
	
	for(int m=1;m<=n;m++){
		cout<<gray[m];
	}
	cout<<" ";
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
		cin>>n;
		init();
		xemmh();
		sinh();
		cout<<endl;
	}
}
