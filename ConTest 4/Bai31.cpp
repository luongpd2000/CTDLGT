#include <bits/stdc++.h> 

using namespace std; 
long long MAX = 1000000007;
long long M[11][11];

void nhanMaTran(long long F[11][11],long long M[11][11],int n){
	long long temp[11][11];		//luu kq
	
	for(int i=0;i<n;i++){ // lap tren tung hang
		for(int j=0;j<n;j++){
			long long k = 0;
			for(int h=0;h<n;h++){
				k += (F[i][h]*M[h][j])%MAX; 
				k = k % MAX;
			}
			temp[i][j] = k;		
		}
	}
	
	for(int i=0;i<n;i++){			// gan kq vao F
		for(int j=0;j<n;j++){
			F[i][j] = temp[i][j];
		} 
	}
}
void hamMu(long long F[11][11],int n,long long k){
	if(k==0 || k==1) return ;
	hamMu(F,n,k/2);					// de quy giam tinh toan
	nhanMaTran(F,F,n);				//F là ma tran da nhan roi	, k chan
	if(k%2 != 0){					// k le
		nhanMaTran(F,M,n);			// M la ma tran goc
	}
}
main(){
	int T,n;
	cin>>T;
	long long F[11][11],k;
	while(T--){
		cin>>n>>k;
		for(int i=0;i<n;i++){ // nhap mang
			for(int j=0;j<n;j++){
				cin>>F[i][j];
				M[i][j] = F[i][j];
			}
		}

		hamMu(F,n,k);
		for(int i=0;i<n;i++){		// in kq
			for(int j=0;j<n;j++){
				cout<<F[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}

