#include<bits/stdc++.h>

using namespace std;
int n;
int X[15];
int A[15];
int C[15];
int k;
bool ok=false;

void xemmh(){
	int sum=0;
	for(int i=1;i<=n;i++){		// tinh ti=ong day
		if(X[i]==1){
			sum+=A[i];
		}
	}
	
	if(sum==k){		// neu tong =k
		int j=0;
		ok=true;
		bool kt=false;
		cout<<"[";
		for(int i=1;i<=n;i++){
			if(X[i]==1 ){
				if(kt==true) cout<<" ";
				cout<<A[i];
				kt=true;
			}
			
		}
		cout<<"] ";
	}
}

void quaylui(int i){		// sinh nhi phan
	for(int j=1;j>=0;j--){
		X[i]=j;
		if(i==n) xemmh();
		else quaylui(i+1);
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		ok=false;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>A[i];
		}
		sort(A+1,A+n+1);		// sx day tang dan
		quaylui(1);
		if(ok==false) cout<<-1;
		
		cout<<endl;
	}
}
