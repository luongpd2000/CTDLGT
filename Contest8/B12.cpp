#include<bits/stdc++.h>
#include <tr1/unordered_map>
#include <tr1/unordered_set>
using namespace std;

std::tr1::unordered_map<std::string, int> M;

void xuly(int n,string a,string b){
	M.clear();
	
	std::tr1::unordered_set<std::string> S; // ko sx thu tu , chi de luu tru
	
	for(int i=0;i<n;i++){
		string t;
		cin>>t;
		S.insert(t);
		M[t]=0;
	}
	
	M[a]=1;
	queue <string> q;
	q.push(a);
	string s1,s2;
	
	while(!q.empty()){
		s1=q.front();
		q.pop();
		
		if(s1==b){
			cout<<M[s1]<<endl;
			return;
		}
		
		for(int i=0;i<s1.length();i++){
			for(char c='A';c<='Z';c++){
				s2=s1;
				s2[i]=c;
				
				if(S.find(s2)!=S.end() && M[s2]==0){		// tìm kiem xem co phan tu nao giong voi s1 khi thay 1 ký tu bat ky
					M[s2] = M[s1] +1;		// tang do dai buoc di
					q.push(s2);				// day s2 vao queue
				}
			}
		}
	}	
}

main(){
	int t;
	
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string a,b;
		cin>>a>>b;
		xuly(n,a,b);
	}
}
