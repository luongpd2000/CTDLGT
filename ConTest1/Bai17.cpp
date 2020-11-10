#include<bits/stdc++.h>
#include <string>
using namespace std;
int X[100];
int n;
bool ok=false;

void init(int h){
	for(int i=1;i<h;i++){
		X[i]=0;
	}
	X[h]=9;
}
bool kiemtra(int h){
	for(int j=1;j<=h;j++){
		if(X[j]==0) return false;
	}
	return true;
}

void next(int h){
	int i=h;
	while(i>0 && X[i]!=0) {
		X[i]=0;
		i--;
	}
	if(i>0) X[i]=9;
}
long long boi(int h){
	long long S=0;
	for(int i=1;i<=h;i++){
		S=S*10+X[i];
	}
	return S;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		int kt=0;
		cin>>a;
		cin.ignore();
		n=0;
		
		int b=a;
		while(b>0){
			b=b/10;
			n++;
		}
		
		for(int k=n;;k++){
			init(k);
			kiemtra(k);
			while(kiemtra(k)==false){
				if(boi(k)%a==0){
					kt=1;
					cout<<boi(k)<<endl;
					break;
				}
				next(k);
			}
			if(kt==1) break;
		}
	}

}
