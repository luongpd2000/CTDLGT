#include<bits/stdc++.h>

using namespace std;
bool chuaxet[1005];
int a[1005][1005] ;

main(){
	int T,m,n;
	cin>>T;
	while(T--){
		cin>>m>>n;	// dinh , canh
		vector<vector<int> > dske(1001, vector<int>());
        for(int i=0; i<n; i++){
            int h,k;
            cin>>h>>k;

            dske[h].push_back(k);
            dske[k].push_back(h);
        }
		bool ktra=true;		
		int dem=0;
		
		for(int u=1;u<=m;u++){
			if(dske[u].size()%2 != 0){
				dem++;
			}
		}
		
		if(dem==0){ 
			cout<<2;
		}else if(dem==2){
			cout<<1;
		}else cout<<0;
		
		cout<<endl;
	}
}
