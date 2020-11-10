#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int j=1;j<=t;j++){
	int a[100]={0};
	int b[100]={0};
	int n,m,p;
	cin>>n>>m>>p;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	cout<<"Test "<<j<<":"<<endl;
	for(int i=0;i<p;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	for(int i=p;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	}
}
