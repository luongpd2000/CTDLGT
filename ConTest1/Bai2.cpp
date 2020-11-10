#include<iostream>

using namespace std;

int n;
int k;
int X[1001];
void xemmh(){
	for(int i=1;i<=k;i++){
		cout<<X[i]<<" ";
	}
	cout<<endl;
}

void sinhtohop(){
		int i=k;
		while(i>0 && X[i]==n-k+i) i--;
		
		if(i>0) {
			X[i]=X[i]+1;
			for(int j=i+1;j<=k;j++){
				X[j]=X[i]+j-i;
			}
			xemmh();
		}
		else{
			for(int j=1;j<=k;j++){
				cout<<j<<" ";
			}
			cout<<endl;
		}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int m=1;m<=k;m++){
			cin>>X[m];
		}
		sinhtohop();
	}
}
