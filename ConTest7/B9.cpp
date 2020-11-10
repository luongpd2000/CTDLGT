#include<bits/stdc++.h>

using namespace std;

int x[1000]={0},n,d=0;

struct cap{
	int start;	// vi tri (
	int end;	// vi tri )
} a[1000];

vector <string> dau;
string s;

void check(){
	stack<int> ngoac;
	
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') ngoac.push(i);
		if(s[i]==')'){
			a[d].start=ngoac.top();
			a[d].end=i;
			ngoac.pop();
			d++;
		}
	}
}

void xoa(){
	int b[1000]={0},c=0;
	
	for(int i=0;i<d;i++){
		if(x[i]){
			b[a[i].start]++;
			b[a[i].end]++;
			c=1;
		}
	}
	
	if(c!=0){
		string tmp;
		
		for(int i=0;i<s.length();i++){
			if(b[i]) continue;
			tmp+=s[i];
		}
		dau.push_back(tmp);
	}
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==d-1) xoa();
		else Try(i+1);
	}
}

main(){
	cin>>s;
	check();
	Try(0);
	sort(dau.begin(),dau.end());
	
	for(int i=0;i<dau.size();i++){
		if(i!=0 && dau[i-1]!=dau[i]) cout<<dau[i]<<endl;
		else if(i==0) cout<<dau[i]<<endl;
	}
}

