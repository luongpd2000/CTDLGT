#include<bits/stdc++.h>
using namespace std;
int T,v,e; 
bool chuaxet[1005];
vector<int> a[1005];
int kt;
// Tai dinh dang xet neu gap dinh ke voi no da co trong queue thi YES

bool BFS(int u){
	queue <int> st; 
	st.push(u);  
	chuaxet[u]=false;
	
	while(!st.empty()){
		int t= st.front(); 
		st.pop();  // moi lan pop la 1 lan xet
		for(int i=0;i<a[t].size();i++){
			if(chuaxet[a[t][i]]){
				st.push(a[t][i]); 
				chuaxet[a[t][i]]=false;
			}
			else if(a[t][i]==u) return true;
		}
	}
	return false;
}
int main(){
	cin>>T;
	while(T--){
		cin>>v>>e;
		for(int i=1;i<=v;i++) {
			a[i].clear();
			chuaxet[i]=true;
		}
		for(int i=1;i<=e;i++){
			int x,y;cin>>x>>y;
			a[x].push_back(y);
		}
		
		kt=0;
		for(int i=1;i<=v;i++){
			
				if(BFS(i)){
					cout<<"YES"<<endl; 
					kt=1; break;
				}
				else memset(chuaxet,true,sizeof(chuaxet));
		}
		if(kt==0) cout<<"NO"<<endl;
	}
	return 0 ;
}

