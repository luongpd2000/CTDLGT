#include<bits/stdc++.h>

using namespace std;
// ktra day ngoac dung
main(){
	int t;
	string s;
	stack <char> dau;
	cin>>t;
	
	while(t--){
		cin>>s;
		int kq=1;
	
		for(int i=0;i<s.length();i++){
			if(s[i]=='(' || s[i]=='[' || s[i]=='{') dau.push(s[i]);
			else{
				if(!dau.empty() &&((s[i]==')' && dau.top()!='(') 
					|| (s[i]==']' && dau.top()!='[') 
					|| (s[i]=='}' && dau.top()!='{'))){
					
					kq=0;	
					break;
				}else{
					if(!dau.empty()) dau.pop();
				}
			}
		}
		
		if(kq==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
