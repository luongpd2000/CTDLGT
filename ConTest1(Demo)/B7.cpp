#include<iostream>
#include<math.h>

using namespace std;

void tich(int a[100][100],int n,int m){
	int c[100][100]={0};
	int b[100][100]={0};
	for(int i=0;i<n;i++){			// tim ma tran cvi
		for(int j=0;j<m;j++){
			b[j][i]=a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<m;l++){
				c[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int t;
	int n,m;
	int a[100][100];
	cin>>t;
	for(int h=1;h<=t;h++){
		
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		cout<<"Test "<<h<<":"<<endl;
		tich(a,n,m);
	}
}
