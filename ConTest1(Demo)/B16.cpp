#include<iostream>
#include<cstring>
using namespace std;

int value(char a){
	if(a=='I')  return 1;
	if(a=='V')  return 5;
	if(a=='X')  return 10;
	if(a=='L')  return 50;
	if(a=='C')  return 100;
	if(a=='D')  return 500;
	if(a=='M')  return 1000;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin,a);
		int c= a.length();
		
		int sum=value(a[c-1]);
		for(int i=c-1;i>=1;i--){
			if(value(a[i])<= value(a[i-1]) ){  
				sum+=value(a[i-1]);
			}
			else{   
				sum-=value(a[i-1]);
				}
		}
		cout<<sum<<endl;
	}
}
