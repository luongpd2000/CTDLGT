#include<bits/stdc++.h>

using namespace std;

int partition(long long a[],int l, int h){	// tim chot
	long long x=a[h];		// x là chot
	int i=(l-1);
	for(int j=l;j<=h-1;j++){
		if(a[j]<=x) {
			i++;
			swap(a[i],a[j]);
		}
	}
	
	swap(a[i+1],a[h]);
	return (i+1);	// vi tri cua chot
}

void quickSort(long long a[],int l,int h){
	if(l<h){
		int p=partition(a,l,h);
		quickSort(a,l,p-1);
		quickSort(a,p+1,h);
	}
}

main(){
	int t;
	int n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long a[n];
		long long b[m];
		
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
			
		quickSort(a,0,n-1);
		quickSort(b,0,m-1);
		long long kq=b[0]*a[n-1];
		cout<<kq<<endl;
	}
}
