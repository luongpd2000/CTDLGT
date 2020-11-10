#include<bits/stdc++.h>

using namespace std;
char s1[1000] , s2[1000] ;
int c[1000][1000];

void xuly(int a,int b){
	
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			if(i==0 || j==0 ) c[i][j]=0;
			else{
				if(s1[i-1]==s2[j-1]) 
					c[i][j]=c[i-1][j-1]+1;
				else
					c[i][j]= max(c[i-1][j] , c[i][j-1]);
			}
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
		c[0][0]=0;
		xuly(a,b);
		cout<<c[a][b]<<endl;
	}
}
