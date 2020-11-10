#include<bits/stdc++.h>

using namespace std;

long long chuyendoi(char s[]){
	int l=strlen(s);
	long long sum=0;
	int k=0;
	for(int i=l-1;i>=0;i--){
		sum+=(s[i]-'0')*pow(2,k);
		k++;
	}
	return sum;
}


main(){
	int t;
	cin>>t;
	while(t--){
		char s1[31] ,s2[31];
		cin.ignore();
		cin>>s1>>s2;
		
		long long num1=chuyendoi(s1);
		long long num2=chuyendoi(s2);
		
		long long int kq=num1*num2;
		cout<<kq<<endl;	
	}
}
