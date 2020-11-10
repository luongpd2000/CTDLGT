#include <bits/stdc++.h> 
using namespace std; 

long long MAX = 1000000007,n;

void nhanMaTran(long long F[2][2],long long M[2][2]){ // nhan 2 ma tran
	long long x = F[0][0] * M[0][0] + F[0][1] * M[1][0];			// hàng nhân côt
	long long y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
	long long z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
	long long w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
	
	// gan lai sau khi nhan
	F[0][0] = x%MAX; // chia dong du
  	F[0][1] = y%MAX; 
  	F[1][0] = z%MAX; 
  	F[1][1] = w%MAX;
}
void hamMu(long long F[2][2],long long n){		// tính F^n
	if(n==0 || n==1) return ;
	long long M[2][2] = {{1,1},{1,0}};
	hamMu(F,n/2);
	nhanMaTran(F,F); // nhan 2 ma tran voi nhau
	if(n%2 != 0){ // neu so mu le 
		nhanMaTran(F,M);
	}
}
long long fibo(long long n){
	long long F[2][2] = {{1,1},{1,0}};
	if(n==0) return 0;
	hamMu(F,n-1); // tim so fibonacci thu n
	return F[0][0]%MAX;		// F0 0 là Fn
}
main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		cout<<fibo(n)<<endl;
	}
}

