#include<bits/stdc++.h>

using namespace std;

int partition(int a[],int l, int h){	// tim chot
	int x=a[h];		// x là chot
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

void quickSort(int a[],int l,int h){
	if(l<h){
		int p=partition(a,l,h);
		quickSort(a,l,p-1);
		quickSort(a,p+1,h);
	}
}

main(){
	int t;
	int n;
	int *a=new int[1000001];
	int *b=new int[1000001];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
			
		//quickSort(a,0,n-1);
		sort(a,a+n);
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<" ";
//		}
		int idx_min=-1;
		int idx_max=-1;
		
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				idx_min=i;
			}
			if(idx_min!=-1){
				break;
			}
		}
		
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]){
				idx_max=i;
			}
			if(idx_max!=-1){
				break;
			}
		}
		
		cout<<idx_min+1<<" "<<idx_max+1<<endl;
	}
}
