#include<bits/stdc++.h>
using namespace std;
int N,X,Y,Z;
int F[1001];

// X them ; Y xoa ; Z nhan doi
int qhd(){
	F[1] = X;
	for(int i=2;i<=N;i++){
		if(i%2 == 0){ // TH nhan doi luon
			if(F[i-1]+X < F[i/2]+Z){ // 1 la bang phan tu ngay sau no cong them X, 2 la bang phan tu thu i/2 nhan doi
				F[i] = F[i-1]+X;
			}
			else F[i] = F[i/2] + Z;
		}else{ // TH le
			int s1=i/2,s2=i/2+1; // 1 la nhan xong cong X, 2 la nhan xong -X(tuc là + Y)
			F[i] = min(min(F[i-1]+X,F[s1]+Z+X),F[s2]+Z+Y);
		}
	}
	return F[N];
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N>>X>>Y>>Z;
		cout<<qhd()<<endl;
	}
}
