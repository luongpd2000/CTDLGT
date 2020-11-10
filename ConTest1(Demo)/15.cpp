#include <bits/stdc++.h>
using namespace std;
void find(int *a,int n){
	int *b = new int[n];
	bool flag = false;
	int index  =0;
	for(int i=0;i<n;i++){ // tim so lan xuat hien 
		b[i] = 1;
		for(int j=i+1;j<n;j++){
			if(a[i] == a[j]){
				b[i]++;
			}
			if(b[i] == 2){
				index = i;
				flag = true;
				break;
			}
		}
		if(flag){
			cout<<a[index]<<endl;
			break;
		}
	}
	if(!flag) cout<<"NO"<<endl;
}
main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		find(a,n);
	}
}
