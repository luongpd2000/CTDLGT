#include<bits/stdc++.h>

using namespace std;

char thaythe(char a){
	if(a=='0') return '1';
	else return '0';
}

void grayToBnr(string gray){
	string binary="";
	binary+=gray[0];
	for(int i=1;i<gray.length();i++){
		 if(gray[i]=='0'){
		 	binary+=binary[i-1];
		 }else{
		 	binary+=thaythe(binary[i-1]);
		 }
	}
	
	cout<<binary<<endl;
}

main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string g;
		cin>>g;
		grayToBnr(g);
	}
}

