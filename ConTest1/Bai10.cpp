#include<bits/stdc++.h>

using namespace std;

char gray_xnor (char a, char b){
	if(a==b) return '0';
	else return '1';
}

void bnrToGray(string binary){
	string gray="";
	gray+=binary[0];
	for(int i=1;i<binary.length();i++){
		gray+= gray_xnor(binary[i-1],binary[i]);   // 2 bit giong nhau thi tra ve 0 , khac 1
	}
	
	cout<<gray<<endl;
}

main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string b;
		cin>>b;
		bnrToGray(b);
	}
}

