#include<bits/stdc++.h>

using namespace std;

int n;
int X[11];
string S;
// sinh hoan vi nhu binh thuong nh?ng luc in mh thi in theo thu tu cua ky tu trong sau 

void init(){
	for(int i=0;i<n;i++){
		X[i]=i;
	}
}

void xemmh(){
	for(int i=0;i<n;i++){
		cout<<S[X[i]];
	}
	cout<<" ";
}

bool kiemtra(){
	for(int i=0;i<n;i++){
		if(X[i]!=n-i-1) return false;
	}
	return true;
}

void sinhhoanvi(){
	while(!kiemtra()){
		int i=n-1;
		int k=n-1;
		
		while(i>-1 && X[i-1]>X[i]) i--;
		i--;
		if(i>-1){
			while(X[k]<X[i]) k--;  
			swap(X[k],X[i]);
		
			int l=i+1;
			int s=n-1;
			while(l<s){
				swap(X[l],X[s]);
				s-- ; l++;
			}
		xemmh();
		}	
	}
}

main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,S);
		n=S.length();
		init();
		xemmh();
		sinhhoanvi();
		cout<<endl;
	}
}
