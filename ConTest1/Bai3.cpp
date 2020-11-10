#include<iostream>

using namespace std;

int n;
int X[100];

void xemmh(){
	for(int i=1;i<=n;i++){
		cout<<X[i]<<" ";
	}
	cout<<endl;
}

bool kiemtra(){
	for(int i=1;i<=n;i++){
		if(X[i]!=n-i+1) return false;
	}
	return true;
}

void sinhhoanvi(){
	if(!kiemtra()){
		int i=n;
		int k=n;
		while(i>0 && X[i-1]>X[i]) i--;
		i--;
		while(X[k]<X[i]) k--;   // tìm phan tu nho nhat lon hon X[i] de thay the
		swap(X[i],X[k]);
		int l=i+1;
		int s=n;
		while(l<s){
			int h=X[l] ; X[l]=X[s] ;X[s]=h;
			s-- ; l++;
		}
		xemmh();	
	}else{
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int m=1;m<=n;m++){
			cin>>X[m];
		}
		sinhhoanvi();
	}
}
