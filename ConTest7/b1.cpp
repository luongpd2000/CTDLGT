#include<bits/stdc++.h>

using namespace std;

main(){
	string s;
	int a[205];
	cin.tie(NULL);
	int i=0;
	while(cin>>s){
		
		if(s=="push"){
			cin>>a[i];
			i++;
		}
		
		if(s=="pop"){
			i--;
		}
		
		if(s=="show"){
			if(i==0) cout<<"empty";
			else{
				for(int j=0;j<i;j++){
					cout<<a[j]<<" ";
				}
			}
			cout<<endl;
		}
	}
}
