#include<bits/stdc++.h>

using namespace std;
int a[1005][1005];

void xuly(string s,int row){
	
	int n=s.size();
	int col=0,flag=0;
	
	for(int i=0;i<n;i++){
		
		if(s[i]!=' '){
				if(!flag){
					flag=1;
				}
				col = col*10 +  (s[i]-'0');	// neu so cot lon hon 10 thì ph?i *10 
		}else{
			if(flag==1){
				flag =0;
				a[row][col]=1;
				col=0;
			}	
		}
		
		if(i==n-1 && col!=0 ){
		  a[row][col]=1;
		}
		
	}
	
}

main(){
	int n;
	cin>>n;
	string s;
	cin.ignore();
	
	for(int i=1;i<=n;i++){
		getline(cin,s);
		xuly(s , i);
	}	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
