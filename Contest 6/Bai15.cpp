#include<bits/stdc++.h>
using namespace std;
int n,a[1000001];
void merge(int c[],int l,int m,int r){
	int i, j, k;
    int n1 = m - l + 1; 
    int n2 =  r - m;  
    
    int L[n1],R[n2];
    for(i=0;i<n1;i++){
    	L[i] = c[l+i]; 
	}
	for( j=0;j<n2;j++){
		R[j] = c[m + 1+ j];
	}
	
	 
    i = 0; 
    j = 0; 
    k = l; 
    
    while(i < n1 && j < n2){
    	if(L[i] <= R[j]){ 
    		c[k] = L[i];
    		i++;
		}
		else{
			c[k] = R[j];
			j++;
		}
		k++;
	}
	
    while (i < n1){ 
        c[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2){ 
        c[k] = R[j]; 
        j++; 
        k++; 
    } 
}
void mergeSort(int c[],int left,int right){
	if(left < right){
		int m = (left+right)/2;
	
		mergeSort(c,left,m);		// sx trai 
		mergeSort(c,m+1,right);		// sx phai
		merge(c,left,m,right);		// ghep trai va phai
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i < n;i++){
			cin>>a[i];
		}
		mergeSort(a,0,n-1);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
