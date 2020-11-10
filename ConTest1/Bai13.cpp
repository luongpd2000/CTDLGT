#include<iostream>
#include<cstring>
using namespace std;
int n;
int k;
string s[16];
bool OK=false;
string X[1001];


void init(){
	for(int i=1;i<=n;i++){
		s[i]="A";
	}
}
void sinh(){		// sinh nhi phan
		int h=n;
		while(h>0 && s[h]!="A") {
			s[h]="A";
			h--;
		}
		if(h==0){ 
			OK=true;
		}else{
			s[h]="B";
		}	
}
void demkq(){
	init();
	int kq=0;
	
	OK=false;
	while(OK!=true){
		int demSL = 0;
		int kt=0;
		for(int i=1;i<n;i++){
			if(s[i]=="A"){
				demSL++;
			}else{
				if(demSL ==k ){
					kt=1;
				}
				demSL = 0;
			}
		}
		if(demSL==k) kt=1;
		if(kt==1){
			kq++;
			int d=1;
			for(int i=(kq-1)*n+1 ; i<=(kq*n);i++){
				X[i]=s[d];
				++d;
			}
		}
		sinh();
	}
	
	cout<<kq<<endl;
	for(int i=1;i<=kq;i++){
		for(int j=(i-1)*n+1 ; j<=i*n ; j++){
			cout<<X[j];
		}
		cout<<endl;
	}
}




main(){
	cin>>n>>k;
	demkq();
	//xemmh();
}
