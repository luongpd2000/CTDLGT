#include <bits/stdc++.h>
using namespace std;
long long F[1000];

char FiboWord(int n ,long long k){	// vi tri thu k cua xau n
	if(n==1) return 'A';		// xau 1 là A
	if(n==2) return 'B';		// xau 2 là B
	if(k<=F[n-2])				// neu vi tri can tim nho hon do dai xau n-2 thi de quy n-2
		return FiboWord(n-2,k);
	return FiboWord(n-1,k-F[n-2]);		// neu khong thi tim xau n-1 vi tri k- do dai xau n-2
}

main(){
	int t,n;
	long long k;
	F[1]=1;
	F[2]=1;
	for(int i=3;i<=92;i++)
		F[i]=F[i-1]+F[i-2];		// tinh day fbn 1 lan
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<FiboWord(n,k)<<endl;		// vi tri k cua xau n
	}
}

