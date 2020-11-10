#include<bits/stdc++.h>

using namespace std;

int n;
int X[1001];

void xemmh(){
	for(int i=0;i<n;i++){
		cout<<X[i];
	}
	cout<<endl;
}

void sinhhoanvi(){
		int i=n-2;
		int k=n-1;
		
		while(i>-1 && X[i]>=X[i+1]) i--;
		if(i>-1){
		
		while(X[k]<=X[i]) k--;  
		swap(X[k],X[i]);
		
		int l=i+1;
		int s=n-1;
		while(l<s){
			swap(X[l],X[s]);
			s-- ; l++;
		}
		
		xemmh();	
	}
	else{
		cout<<"BIGGEST"<<endl;
	}
}

main(){
	int t;
	cin>>t;
	cin.ignore();
	for(int m=1;m<=t;m++){
		int T;
		string s;
		cin>>T>>s;
		n=s.length();
		for(int h=0;h<n;h++){
			X[h]=s[h]-'0';
		}
		cout<<T<<" ";
		sinhhoanvi();
	}
}
