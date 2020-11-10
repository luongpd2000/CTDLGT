#include<iostream>

using namespace std;
// sinh to hop ke tiep rooi dem so phan tu trung nhau
int n;
int k;
int X[41];
int S[41];
void xemmh(){
	int dem=0;
	for(int m=1;m<=k;m++){
		for(int h=1;h<=k;h++){
			if(S[h]==X[m])  dem++;
		}
	}
	cout<<k-dem<<endl;
}

bool kiemtra(){
	for(int i=1;i<=k;i++){
		if(X[i]!=n-k+i) return false;
	}
	return true;
}

void sinhtohop(){
	if(!kiemtra()){
		int i=k;
		while(i>0 && X[i]==n-k+i) i--;
		
		if(i>0) {
			X[i]=X[i]+1;
			for(int j=i+1;j<=k;j++){
				X[j]=X[i]+j-i;
			}
		}
		xemmh();	
	}else{
		cout<<k<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int m=1;m<=k;m++){
			cin>>X[m];
			S[m]=X[m];
		}
		sinhtohop();
	}
}
