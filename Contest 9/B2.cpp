#include<bits/stdc++.h>

using namespace std;

vector<int> q[1005];

void cut(string s , int row){
	
	int n=s.size(); 

	for(int i=0;i<n;i++){
		int temp = 0;
		while(s[i] != ' ' && i <n){		// lay dinh de push vao ds canh
			temp = temp*10 + (s[i]-'0');	// truong hop co dinh >10
			i++;
		}
		q[row].push_back(temp);
	}
}

main(){
//	int t;
//	cin>>t;
//	while(t--){
	int n;
	cin>>n;
	string s;
	cin.ignore();
	
	for(int i=1;i<=n;i++){
		getline(cin,s);
		if(s.length()==0) {
			i--;
			continue;
		}
		cut(s,i);
	}
	
	for(int i=1;i<=n;i++){
		while(!q[i].empty()){
			if(q[i].front()>i)  cout<<i<<" "<<q[i].front()<<endl;		// vo h??ng chi in canh 1 lan 
			
			q[i].erase(q[i].begin()+0);		// in xong thi xoa , xoa phan tu front
		}
		
	}
//	}
	
}
