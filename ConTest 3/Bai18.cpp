#include<bits/stdc++.h>

using namespace std;
int a,b;
int n;

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int i;
		for(i=0; ;i++){
			if((n-4*i)%7==0) {
				b=(n-4*i)/7;
				for(int j=0;j<i;j++){
					cout<<4;
				}
				for(int j=0;j<b;j++){
					cout<<7;
				}
				cout<<endl;
				break;
			}
			if(4*i>n) {
				cout<<-1<<endl;
				break ;
			}
		}
	}
}

