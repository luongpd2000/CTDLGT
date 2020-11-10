#include<iostream>
#include<cstring>

using namespace std;

void ktra(string s){
	int c=0;	// ktra so tang
	int d=0;	// ktra so giam
	int n=s.length()-1;
	for(int i=0;i<n;i++){   	// so tang
		int a=s[i];
		int b=s[i+1];
		if(a>b){
			c=1;
			break;
		}
	}
	for(int i=0;i<n;i++){
		int a=s[i];
		int b=s[i+1];
		if(a<b){ 				// so giam
			d=1;
			break;
		}
	}
	if(c==0 || d==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		ktra(s);
	}
}
