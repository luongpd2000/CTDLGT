#include <bits/stdc++.h>
using namespace std;

void chuanhoa(string a){
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
	a[0] = toupper(a[0]);
	for(int i=1;i<a.length();i++){
		if(a[i]==' '){
			a[i+1] = toupper(a[i+1]);
			i++;
		}
		else a[i] = tolower(a[i]);
	}
	cout<<a<<endl;
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
