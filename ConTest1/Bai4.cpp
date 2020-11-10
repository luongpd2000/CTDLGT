#include<iostream>
#include<cstring>
using namespace std;
int n;
string s[10];

void init(){
	for(int i=1;i<=n;i++){
		s[i]="A";
	}
}

void xemmh(){
	for(int i=1;i<=n;i++){
		cout<<s[i];
	}
	cout<<" ";
}

bool kiemtra(){
	for(int i=1;i<=n;i++){
		if(s[i]=="A") return false;
	}
	return true;
}

void sinh(){
	while(!kiemtra()){
		int i=n;
		while(i>0 && s[i]!="A") {
			s[i]="A";
			i--;
		}
		if(i>0) s[i]="B";
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
