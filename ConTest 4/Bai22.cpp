#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1000001];

int binarySearch(int arr[1000001], int l, int r, int x) {
	if (r >= l) {
    	int mid =(l+r)/2;
 
    	if (arr[mid] == x)
      		return mid;
      	else{
    		if (arr[mid] > x){
      			return binarySearch(arr, l, mid - 1, x);
    		}else{
    			return binarySearch(arr, mid + 1, r, x);
  			}
  		}
  	}
  // N?u không tìm th?y
  	return -1;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
  		int result = binarySearch(a,0,n-1,k);
  		
  		if(result==-1) {
		  	cout<<"NO"<<endl;
  		}else{
		   cout<<result+1<<endl;
 		}
	 }
}
