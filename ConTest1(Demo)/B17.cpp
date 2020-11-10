#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a1,b1;
	int a2,b2;
	int a3,b3;
	int c;
	int d;
	cin>>a1>>b1;
	cin>>a2>>b2;
	cin>>a3>>b3;
	c= a1*b1+a2*b2+a3*b3;
	d = sqrt(c);
	if(d*d==c){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
