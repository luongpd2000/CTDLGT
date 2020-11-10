#include<iostream>

using namespace std;
bool kiemtra;

void subset(int a, int S[],int sum){
	if(sum==0) return 1;
	if(sum<0 || a==0) return 0;
	if(subset())
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		int S[21];
		cin>>n>>k;
		int T=0;
		for(int i=1;i<=n;i++){
			cin>>S[i];
			kiemtra=true;
			T+=S[i];	
		}
		if(T%k==0){
			subset(a,S,T/k,k);
		}else{
			cout<<"0"<<endl;
		}
	}
}
