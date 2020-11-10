#include<bits/stdc++.h>

using namespace std;

main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	bool kt=false;
	
	for(int i=0;i<n;i++){
		kt=false;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				kt=true;
				swap(a[j],a[j+1]);
			}
		}
		
		if(kt==true){
			cout<<"Buoc "<<i+1<<": ";
			for(int h=0;h<n;h++){
				cout<<a[h]<<" ";
			}
			cout<<endl;
		}else{
			break;
		}
		
	}
}
