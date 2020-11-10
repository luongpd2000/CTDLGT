#include<bits/stdc++.h>

using namespace std;

int partition(int a[],int l,int h){
	int x=a[h];
	int i=l-1;
	
	for(int j=l;j<h;j++){
		if(a[j]<=x){
			i++;
			swap(a[j],a[i]);
		}
	}
	
	swap(a[i+1],a[h]);
	return (i+1);
}

void quickSort(int a[],int l,int h){
	if(l<h){
		int p=partition(a,l,h);
		quickSort(a,l,p-1);
		quickSort(a,p+1,h);
	}
}

main(){
	int t,n,k;
	int a[1001];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		//quickSort(a,0,n-1);
		sort(a,a+n);
		for(int i=n-1;i>=n-k;i--){
			cout<<a[i]<<" ";
		}
		
		cout<<endl;
	}
}
