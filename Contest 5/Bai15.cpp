#include<bits/stdc++.h>

using namespace std;
string s1 , s2 ,s3;
int s[101][101][101]={0};

int xuly(int a, int b ,int c){
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				if((s1[i-1]==s2[j-1]) && (s2[j-1]==s3[k-1])) 
					s[i][j][k]=s[i-1][j-1][k-1]+1;
				else
					s[i][j][k]= max(max(s[i-1][j][k] , s[i][j-1][k]) , s[i][j][k-1]);
			}
		}
	}
	return s[a][b][c] ;
}

main(){
	int t;
	int a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		cin.ignore();
		cin>>s1>>s2>>s3;
		cout<<xuly(a,b,c)<<endl;
	}
}
