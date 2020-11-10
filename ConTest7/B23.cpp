#include<bits/stdc++.h>

using namespace std;

void xuly(string s){
	string kq;
	int n=s.length();
	int vt=0;
	for(int i=n-1;i>0;i--){
		int index=0;
		
		if(s[i]=='['){
			index=i;
			i++;
			
			while(s[i]!=']'){
				kq+=s[i];
				i++;
			}
			
			vt=index;
			while(s[vt]!=']'){
				vt--;
			}
			int heso=0;
			for(int j=vt+1;j<index;j++){
				heso = heso*10 + s[vt]-'0';
			}
			for(int k=0;k<heso;k++){
				kq+=kq;
			}
		}
		if(index!=0) i=vt;
	}
	
	cout<<kq<<endl;
}

main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin.ignore();
		cin>>s;
		xuly(s);
	}
}
