#include<bits/stdc++.h>
using namespace std;
int T,v,e,chuaxet[1005];
vector<int> a[1005];
vector<int> hi;
bool cmp(int x,int y,int z,int t){
	if(x==z&&y==t) return false;
	if(x==t&&y==z) return false;
	return true;
}
void DFS(int u,int x, int y){
	stack <int> st;
	st.push(u); 
	hi.push_back(u); 
	chuaxet[u]=0;
	
	while(!st.empty()){
		int t= st.top(); st.pop(); 
		for(int i=0;i<a[t].size();i++){
			if(chuaxet[a[t][i]]&&cmp(t,a[t][i],x,y)){
				chuaxet[a[t][i]]=0;
				st.push(t); 
				st.push(a[t][i]);
				hi.push_back(a[t][i]);
				break;
			}
		}
	}
}
void CanhCau(){
	for(int i=1;i<=v;i++){
		for(int j=0;j<a[i].size();j++){
			if(i<a[i][j]){ // chi xet canh 1 2, con 2 1 khong xet lai
				hi.clear();
				memset(chuaxet,1,sizeof(chuaxet));
				DFS(1,i,a[i][j]);
				if(hi.size()!=v) cout<<i<<" "<<a[i][j]<<" "; // khac size ton tai canh cau
			}
			
		}
	}
}  
int main(){
	cin>>T;
	while(T--){
		cin>>v>>e;
		for(int i=1;i<=v;i++) a[i].clear();
		for(int i=1;i<=e;i++){
			int x,y;cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		CanhCau();
		cout<<endl;
	}
	return 0 ;
}

