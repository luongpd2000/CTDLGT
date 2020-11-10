#include<bits/stdc++.h>

using namespace std;

int X[11][11];
int n;
int A[11];

void inmh(){
	int c=1;
	for(int i=n;i>=1;i--){
		cout<<"[";
		for(int j=1;j<c;j++){
			cout<<X[i][j]<<" ";
		}
		cout<<X[i][c]<<"] ";
		//if(c==n) break;
		c++;
	}
	cout<<endl;
}

void sinh(){
	int b=n;
	for(int i=1;i<=n;i++){
		X[1][i]=A[i];
	}
	
	for(int i=2;i<=n;i++){
		for(int j=1;j<=b;j++){
			X[i][j]=X[i-1][j]+X[i-1][j+1];
		}
		b--;
	}
	inmh();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>A[i];
		}
	sinh();
	}
}
