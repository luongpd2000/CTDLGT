#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string s;
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		int X[1001];
		//getline(cin,s);
		cin>>s;
		n=s.length();
		for(int i=0;i<n;i++){
			X[i]=s[i]-'0';
		}
		int m=n-1;
		
		
		while(m>-1 && X[m]!=0) {
			X[m]=0;
			m--;
		}
		if(m>-1) X[m]=1;
		
		for(int j=0;j<n;j++){
			cout<<X[j];
		}
		cout<<endl;
	}
}

