#include<iostream>
#include<math.h>

using namespace std;

void solution(int a[20][20],int n){
	int d=n*n,b=0;
	while (b<=n/2){
		for (int i=b;i<n-b;i++) a[b][i]=d--;
		for (int i=b+1;i<n-b;i++) a[i][n-b-1]=d--;
		for (int i=n-b-2;i>=b;i--) a[n-b-1][i]=d--;
		for (int i=n-b-2;i>b;i--) a[i][b]=d--;
		b++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
main(){
	int t,a[20][20],n;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		cout<<"Test "<<i<<":"<<endl;
		solution(a,n);
	}
}
