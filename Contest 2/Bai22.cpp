#include<bits/stdc++.h>

using namespace std;
int n;
int A[100][100];
char B[100];
bool diemcuoi;

void quaylui(int x,int y,int a){	// xy hang cot a la diem bat dau
		if(x==n && y==n){
			diemcuoi=true;
			for(int i=0;i<a;i++){
				cout<<B[i];
			}
			cout<<" ";
			return;
		}else{
			if(x<n && A[x+1][y]==1)	{
				B[a]='D';
				quaylui(x+1,y,a+1);
			}
			if(y<n && A[x][y+1]==1) {
				B[a]='R';
				quaylui(x,y+1,a+1);
			} 
		}
}


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		diemcuoi=false;
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>A[i][j];
			}
		}
		if(A[1][1]==0){		// neu diem dau tien ko tm thi ko di dc
			cout<<"-1";
		}else{
			quaylui(1,1,0);
			if(diemcuoi==false) cout<<"-1";	
		}
		cout<<endl;
	}
}


