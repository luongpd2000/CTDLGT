#include<bits/stdc++.h>
using namespace std;
string a="",b="";
struct data{
	string xau;
	int dem;
};
string clock1(string s){
	char s1=s[0];
	s[0]=s[3]; s[3]=s[4];s[4]=s[1]; s[1]=s1;
	return s;
}
string clock2(string s){
	char s1=s[1];
	s[1]=s[4]; s[4]=s[5];s[5]=s[2]; s[2]=s1;
	return s;
}
int solve(){
	set <string> chuaxet;
	queue <data> hi; data t; t.xau=a; t.dem=0;
	hi.push(t);
	while(!hi.empty()){
		data truoc=hi.front(); hi.pop();
		
		chuaxet.insert(truoc.xau);
		
		if(truoc.xau.compare(b)==0) return truoc.dem;
		
		data sau; sau.xau=clock1(truoc.xau);
		if(chuaxet.find(sau.xau)==chuaxet.end()){
			sau.dem=truoc.dem+1;
			if(sau.xau.compare(b)==0) return sau.dem;
			hi.push(sau);
		}
		
		data sau2; sau2.xau=clock2(truoc.xau);
		if(chuaxet.find(sau2.xau)==chuaxet.end()){
			sau2.dem=truoc.dem+1;
			if(sau2.xau.compare(b)==0) return sau2.dem;
			hi.push(sau2);
		}
	}
}
main(){
	string c,d;
	getline(cin,c); getline(cin,d);
	int j=0,k=0;
	for(int i=0;i<c.length();i++) if(c[i]!=' ') a+=c[i];
	for(int i=0;i<d.length();i++) if(d[i]!=' ') b+=d[i];
	cout<<solve();
}
