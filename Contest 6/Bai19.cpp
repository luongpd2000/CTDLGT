
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
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		quickSort(a,0,n-1);	// CÓ THE SORT bthuong cung dung sort(a,a+n)
		int dem=0;
		for(int i=1;i<n;i++) {
			if(a[i]-a[i-1]>1) dem+=a[i]-a[i-1]-1;
		}
		cout<<dem<<endl;
	
		//cout<<a[n-1]-a[0]-n+1<<endl;
	}
}
