#include <bits/stdc++.h> 
using namespace std; 
// can la tim kiem nhi phan nh?ng them truong hop so sanh key voi 2 dau mut cua doan 
int search(int arr[], int l, int h, int key) { 
    if (l > h) return -1; 
  
    int mid = (l+h)/2; 
    if (arr[mid] == key) return mid; 
  
    if (arr[l] <= arr[mid]) { 
        if (key >= arr[l] && key <= arr[mid]){ 
        	return search(arr, l, mid-1, key);
		} 
        return search(arr, mid+1, h, key); 
    } 
  
    if (key >= arr[mid] && key <= arr[h]){ 
        return search(arr, mid+1, h, key); 
	}  
    //return search(arr, l, mid-1, key); 
} 
  
main() { 
	int t,n,key;
	cin>>t;
	while(t--){
		cin>>n>>key;
		
		int a[n];
		
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		
		cout<<search(a,1,n,key)<<endl;
	}
} 
