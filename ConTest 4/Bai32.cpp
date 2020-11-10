#include <bits/stdc++.h> 
using namespace std; 
long long dem = 0;
void merge(long long arr[], long long l, long long m, long long r){ 
    long long i, j, k;
    long long n1 = m - l + 1; // 
    long long n2 =  r - m;  // 
  
    // mang tam thoi
    long long L[n1], R[n2];  
    // copy du lieu vao mang tam thoi
    for (i = 0; i < n1; i++){
    	L[i] = arr[l + i]; 	
	}
    for (j = 0; j < n2; j++){
    	R[j] = arr[m + 1+ j];	
	}  
  
    // hop nhat mang tam vao arr
    i = 0; // chi so ban dau cua day 1
    j = 0; // chi so ban dau cua day 2 
    k = l; // chi so cua mang da dc sx 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]){ // neu ben phai lon hon ben trai 
            arr[k] = L[i]; 
            i++; 
        } 
        else{ // L[i] lon hon han R[j] 
            arr[k] = R[j]; 
            j++; 
            dem += (n1-i); // so phan tu ben trai 
            // neu 1 so ben phai ma nho hon 1 so ben trai thi no se nho hon tat ca cac so tu so ben trai dang xet ve sau 
        } 
        k++; 
    } 
  	
  	// cac phan tu con lai cua L
    while (i < n1){ 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // cac phan tu con lai cua R
    while (j < n2){ 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(long long arr[], long long l, long long r){ 
    if (l < r){ 
        long long m = l+(r-l)/2; 
  
        mergeSort(arr, l, m); // chia ben trai 
        mergeSort(arr, m+1, r); // chia phai
        merge(arr, l, m, r); // hop nhat mang
    } 
} 

main(){ 
    int T;
    long long n;
	cin>>T;
	while(T--){
		cin>>n;
		long long *a = new long long[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		mergeSort(a,0,n-1);
		cout<<dem<<endl;
		dem=0;
	} 
} 
