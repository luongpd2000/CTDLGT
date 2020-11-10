#include<bits/stdc++.h>

using namespace std;
string s1 ,s2;
int a,b;
int maxx,minn;

int chuyen(int d,string a){
	int s=0;
	for(int i=0;i<d;i++){
		s=s*10+(a[i]-'0');
	}
	return s;
}

void timMax(){
	for(int i=0;i<a;i++){
		if(s1[i]-'0'==5){
			s1[i]='6';
		}
	}
	for(int i=0;i<b;i++){
		if(s2[i]-'0'==5){
			s2[i]='6';
		}
	}
	maxx=chuyen(a,s1)+chuyen(a,s2);
	cout<<" "<<maxx;
}

void timMin(){
	for(int i=0;i<a;i++){
		if(s1[i]-'0'==6){
			s1[i]='5';
		}
	}
	for(int i=0;i<b;i++){
		if(s2[i]-'0'==6){
			s2[i]='5';
		}
	}
	minn=chuyen(a,s1)+chuyen(a,s2);
	cout<<minn;
}

main(){
	cin>>s1;
	cin.ignore();
	cin>>s2;
	a=s1.length();
	b=s2.length();
	timMin();
	timMax();
}
