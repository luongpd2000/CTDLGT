#include <bits/stdc++.h> 
using namespace std; 
string find(string s){
	int n=s.length(),Max=0; string m="";
	stack <int> st;
	for(int i=0;i<n;i++){
		if(s[i]=='(') st.push(i);
		else if(s[i]==')'){
			int tp=st.top(); st.pop();
			if(tp==0) continue; //mo ngoac o vi tri dau tien thi ko lam gi
			else if(s[tp-1]=='+') continue;
			else if(s[tp-1]=='-'){
				for(int k=tp;k<=i;k++){
					if(s[k]=='-') s[k]='+';
					else if(s[k]=='+') s[k]='-';
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]!='('&&s[i]!=')') m+=s[i];
	}
	return m;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		string s3,s4; s3=find(s1); s4=find(s2);
		if(s3==s4) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}


