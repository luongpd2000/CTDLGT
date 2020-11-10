#include<iostream>
#include<math.h>

using namespace std;

void matran(int n){
	int m=n*n;
	long long a[100];
	a[0]=1;
	a[1]=1;
	for(int i=2;i<m;i++){
		a[i]=a[0]+a[1];
		a[0]=a[1];
		a[1]=a[i];
	}
	a[0]=1;
	a[1]=1;
	long long c[10][10]={0};
	int b=0;
	int d=0;
	while(b<=n/2){
		for(int i=b;i<n-b;i++)  c[b][i]=a[d++];
		for(int i=b+1;i<n-b;i++) c[i][n-b-1]=a[d++];
		for(int i=n-b-2;i>=b;i--) c[n-b-1][i]=a[d++];
		for(int i=n-b-2;i>b;i--)  c[i][b]=a[d++];
		b++;
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
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		cout<<"Test "<<i<<": "<<endl;
		matran(n);
	}
}
