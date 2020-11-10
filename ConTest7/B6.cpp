#include<bits/stdc++.h>
using namespace std;

bool kiemtra(string s){
	int a=s.length(); 
	bool flag;
	stack <char> st; 
	
	for(int i=0;i<a;i++){		// st vào sau ra truoc nen ) xuat hien trc
		if(s[i]==')'){
			flag=true;
			char top=st.top(); st.pop();
			
			while(top!='('){
				if(top=='*'||top=='/'||top=='+'||top=='-'){
					flag=false;
				}
				top=st.top(); 
				st.pop();
			}
			if(flag==true) return true;		// co thua	
		}		
		else st.push(s[i]);
	}	
	return false;	// khong thua
}

main(){
	string s; 
	int t; 
	cin>>t; 
	cin.ignore();
	while(t--){
		cin>>s; 
		kiemtra(s)?cout<<"Yes\n":cout<<"No\n";
	}
}
