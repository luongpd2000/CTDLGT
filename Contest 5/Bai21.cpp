#include<bits/stdc++.h>

using namespace std;
long long f[1001] , a[1001] ,n,k;
long long m=1e9+7;

int tinh(){
    memset(f,0,sizeof(f));
    int i,j;
    f[0]=1;

    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(a[j]<=i)
                f[i]=(f[i]+f[i-a[j]]) %m;
        }
    }

    return f[k];
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		
		cout<<tinh()<<endl;
	}
}
