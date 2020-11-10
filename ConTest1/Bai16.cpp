#include<bits/stdc++.h>

using namespace std;

int B[11],n,k,A[11][11];
int C[11][11];
bool ok=false;

void sinhkt(){		// sinh hoan vi cach chon
	int i=n;
	int k=n;
	while( i>0 && B[i-1]>B[i]) i--;
	i--;
	if(i>0){
		while(B[k]<B[i]) k--;  
		swap(B[i],B[k]);
		
		int l=i+1;
		int s=n;
		while(l<s){
			swap(B[l],B[s]);
			s-- ; l++;
		}
	}else{
		ok=true;
	}
}

void xuly(){

	int kq=0;
	int sum;
	for(int i=1;i<=n;i++){	// khoi tao
		B[i]=i;
	}
	while(ok!=true){				// sinh hoan vi chon khac nhau
		sum=0;
		for(int i=1;i<=n;i++){		// tong cac ptu trong hoan vi
			sum+= A[i][B[i]];
		}
		if(sum==k) {
			kq++;			// dem so truong hop
		
			for(int i=1;i<=n;i++){		// gan kq vao mang 2 chieu
				C[kq][i]=B[i];
			}
		}
		sinhkt();
	}

	cout<<kq<<endl;					// in truong hop
	for(int i=1;i<=kq;i++){
		for(int j=1;j<=n;j++){
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>A[i][j];
		}
	}
	xuly();
}

