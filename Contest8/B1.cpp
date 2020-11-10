#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int b,lc;
		queue<int> q;
		cin>>b; 
		while(b--){
			cin>>lc;
			switch(lc){
				case 1 :{
					cout<<q.size()<<endl;
					break;
				}
				case 2 :{
					if(q.empty()) cout<<"YES"<<endl;
					else cout<<"NO"<<endl;
					break;
				}
				case 3 :{
					int n;
					cin>>n;
					q.push(n);
					break;
				}
				case 4 :{
					if(!q.empty()) q.pop();
					break;
				}
				case 5 :{
					if(q.empty()) cout<<"-1"<<endl;
					else cout<<q.front()<<endl;
					break;
				}
				case 6 :{
					if(q.empty()) cout<<"-1"<<endl;
					else cout<<q.back()<<endl;
					break;
				}
			
			}
		}
		
	}
}
