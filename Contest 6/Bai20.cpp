#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll t,n,k,A;
vector <ll> a;

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll dem=0;
		
		for(ll i=1;i<=n;i++){
			cin>>A;
			a.push_back(A);
		}
		
		sort(a.begin(),a.end());
		
		for(ll i=0;i<n-1;i++){
			ll vt = lower_bound(a.begin() , a.end() , a.at(i)+k) - a.begin();	// tra ve vi tri phan tu dau tien >= a[i]+k
			dem+=(vt-1-i);
			
		}
		cout<<dem<<endl;
		a.clear();
	}
}

