#include<bits/stdc++.h>

using namespace std;

main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int key,j,i;
	
	for(i=0;i<n;i++){
		j=i-1;
		key=a[i];
		
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		
		cout<<"Buoc "<<i<<": ";
		for(int h=0;h<=i;h++){
			cout<<a[h]<<" ";
		}
		cout<<endl;
	}

}
