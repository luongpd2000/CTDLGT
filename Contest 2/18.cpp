#include <bits/stdc++.h>
using namespace std;
long long a[31],k;
int n;

main(){
	cin>>n>>k;
	long long dem = 0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n;i>0;i--){
		if(k >= a[i]){
			dem += k/a[i];
			k = k % a[i];
		}
		if(k == 0){
			break;
		}
	}
	if(dem != 0){
		cout<<dem<<endl;	
	}
}
