#include <bits/stdc++.h>
using namespace std;
int n,a[11][11],x[19],dem=0;

void check(){
	bool flag = true;
	int h = 1,c = 1; 
	
	for(int i=1;i<=2*n-2;i++){
		if(x[i] == 0) h++;  
		else c++; 
		
		if(a[h][c] == 0 || h>n || c>n ){ 
			flag = false;
			break;
		}
	}
	
	if(flag){ 
		for(int i=1;i<=2*n-2;i++){
			if(x[i] == 1) cout<<"R";
			else cout<<"D";
		}
		cout<<" ";
		dem++;
	}
}

void sinhNP(int i){
	for(int j=0;j<=1;j++){ // sinh ra cac TH
		x[i] = j;
		if(i == 2*n-2) check();
		else sinhNP(i+1);
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		if(a[1][1] == 0){
			cout<<-1<<endl;
		}
		else{
			sinhNP(1);
			if(dem == 0) cout<<-1;
			dem = 0;
			cout<<endl;	
		}	
	}
}
