#include <bits/stdc++.h>
#include<string>
using namespace std;

void chuanhoa(string a){
	string s="";
	for(int i=0;i<a.length();i++){
		if(a[i]==' '){
			int index = i;
			while(a[index+1]==' '){
				index++;
			}
			a.replace(i,index-i,"");
		}
	}
	if(a[0]==' '){
		a.replace(0,1,"");
	}
	
	for(int i=1;i<a.length();i++){
		if(a[i]==' '){
			a[i+1] = toupper(a[i+1]);
			i++;
		}
		else a[i] = tolower(a[i]);
	}
	
	
	a.push_back(',');
	int t=0;
	int index;
	for(int i=0;i<a.length();i++){
		if(a[i]==' '){
			index = i;
			for(int j=0;j<index;j++){
				a[j]=toupper(a[j]);
				s.push_back(a[j]);
			}
			t=1;
		}
		if(t==1) break;
	}
	a.replace(0,index+1,"");
	
	cout<<a<<" "<<s<<endl;
}
main(){
	int t;
	string a;
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,a);
		chuanhoa(a);
	}
}
