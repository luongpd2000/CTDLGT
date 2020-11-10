#include<bits/stdc++.h>

using namespace std;
char s1[1000] , s2[1000] ;
int c[1000][1000];

void xuly(int a,int b){
	
	for(int i=0;i<=a;i++) c[i][0]=i;
	
	for(int j=0;j<=b;j++) c[0][j]=j;
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			
			if(s1[i-1]==s2[j-1]) 
				c[i][j]=c[i-1][j-1];
			else
				c[i][j]= min(c[i-1][j] ,min(c[i][j-1] , c[i-1][j-1]))+1;
		}
	}
	
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		cin>>s1>>s2;
		int a = strlen(s1);
		int b = strlen(s2);
		xuly(a,b);
		cout<<c[a][b]<<endl;
	}
}
