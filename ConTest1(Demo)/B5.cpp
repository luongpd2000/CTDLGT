#include<iostream>
#include<cstring>

using namespace std;

void solution(string s){
	int a = s[0]-'0';
	int b = s[4]-'0';
	int c = s[8]-'0';
	int d=a+b;
	
	if(c==d){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main(){
		string s;
		getline(cin,s);
		solution(s);

}
