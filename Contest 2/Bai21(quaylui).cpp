#include<bits/stdc++.h>

using namespace std;
int n;
string S;
int X[11];
bool chuaxet[11];

void init(){
	for(int i=0;i<n;i++){
		chuaxet[i]=true;
	}
}

void xemmh(){
	for(int i=0;i<n;i++){
		cout<<S[X[i]];
	}
	cout<<" ";
}

void quaylui(int m){
	for(int j=0;j<n;j++){
		if(chuaxet[j]){
			X[m]=j;
			chuaxet[j]=false;
			if(m==(n-1)){
				xemmh();
			}else{
				quaylui(m+1);
			}
			chuaxet[j]=true;
		}
	}
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,S);
		n=S.length();
		init();
		quaylui(0);
		cout<<endl;
	}

}
