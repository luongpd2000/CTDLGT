#include <bits/stdc++.h>
using namespace std;

int a[100],n;
bool check(){ //check xem da la cau hinh cuoi cung chua
	for(int i=1;i <=n;i++){
		if(a[i]!=n-i+1) return false;
	}
	return true;
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void sinh(){
	int t = n; // xet tu cuoi day
	while(a[t] < a[t-1]) t--; // phan tu dau tien lam cho tinh tang sai
	int h = n; 
	while(a[h] < a[t-1]) h--; // phan tu dau tien lon hon phan tu thu t-1 
	swap(a[h],a[t-1]); // doi cho 
	sort(a+t,a+n+1);
	in();
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			a[i] = i;
		}
		in();
		while(!check()){
			sinh();
		}	
		cout<<endl;
	}
}







