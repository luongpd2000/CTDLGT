#include<bits/stdc++.h>

using namespace std;

int F[1001][1001];

long long qhd(string &a,string &b){
	int m=a.size();
	int n=b.size();
	
	a=''+a;
	b=''+b;
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i]==b[j]) F[i][j] = F[i-1][j-1] +1;
			else F[i][j] = max(F[i-1][j] , F[i][j-1]);
		}
	}
	
	string kq;
	while(F[m][n]>0){
		if(a[m]==b[n])  {
			kq+=a[m] ;
			m-- ;
			n--;
		}else if(F[m][n] = F[m-1][n]) m--;
		else n--;
	}
	
	reverse(kq.begin(),kq.end());
	return kq.length();
}

main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin.ignore();
		cin>>a;
		
		string b=a;
		
		reverse(b.begin(),b.end());			// dao nguoc xau
		
		cout<<qhd(a,b)<<endl;
	}
}
