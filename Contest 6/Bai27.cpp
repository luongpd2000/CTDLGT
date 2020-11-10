#include<bits/stdc++.h>

using namespace std;

main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min_idx;
	
	for(int i=0;i<n-1;i++){
		min_idx=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_idx]){
				min_idx=j;
			}
		}
			swap(a[i],a[min_idx]);
			cout<<"Buoc "<<i+1<<": ";
			for(int h=0;h<n;h++){
				cout<<a[h]<<" ";
			}
			cout<<endl;
	}

}
