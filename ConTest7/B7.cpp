#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	string s;
	stack <char> dau;
	cin>>t;
	
	while(t--){
		cin.ignore();
		cin>>s;
		
		int kt=0;
		
		for(int i=0;i<s.length();i++){
			if(!dau.empty() && s[i]==')' && dau.top()=='('){
				dau.pop();
			}else{		// neu là (
				dau.push(s[i]);
			}
		}
		
		while(!dau.empty()){
			char ngoac=dau.top();
			dau.pop();
			
			if(dau.top()==')' && ngoac=='(') kt+=2;		// doi chieu ca 2 dau
			else{
				kt++;	 // cac thop con lai chi can doi 1 dau
			}
			dau.pop();	// xoa cap da sua
		}
		cout<<kt<<endl;
	}
}
