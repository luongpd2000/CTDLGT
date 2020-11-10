#include<bits/stdc++.h>
using namespace std;
char hi[100][100]; int chuaxet[100][100];
int a,b,c,d,n;
struct data{
	int hang,cot; 
	int dem;
};
int solve(){
	queue <data> qe;
	data t; t.hang=a; t.cot=b; t.dem=0;
	qe.push(t);
	while(!qe.empty()){
		data dau=qe.front(); qe.pop();
		if(dau.hang==c&&dau.cot==d) return dau.dem;
		data sau;
		for(int i=dau.hang+1;i<n;i++){
			if(hi[i][dau.cot]!='X'){
				if(chuaxet[i][dau.cot]){
					sau.hang=i; sau.cot=dau.cot; sau.dem=dau.dem+1;
					if(sau.hang==c&&sau.cot==d) return sau.dem;
					chuaxet[sau.hang][sau.cot]=0;
					qe.push(sau);
				}
			}
			else break;
		}
		for(int i=dau.hang-1;i>=0;i--){
			if(hi[i][dau.cot]!='X'){
				if(chuaxet[i][dau.cot]){
					sau.hang=i; sau.cot=dau.cot; sau.dem=dau.dem+1;
					if(sau.hang==c&&sau.cot==d) return sau.dem;
					chuaxet[sau.hang][sau.cot]=0;
					qe.push(sau);
				}
			}
			else break;
		}		
		for(int i=dau.cot+1;i<n;i++){
			if(hi[dau.hang][i]!='X'){
				if(chuaxet[dau.hang][i]){
					sau.cot=i; sau.hang=dau.hang; sau.dem=dau.dem+1;
					if(sau.hang==c&&sau.cot==d) return sau.dem;
					chuaxet[sau.hang][sau.cot]=0;
					qe.push(sau);
				}
			}
			else break;
		}		
		for(int i=dau.cot-1;i>=0;i--){
			if(hi[dau.hang][i]!='X'){
				if(chuaxet[dau.hang][i]){
					sau.cot=i; sau.hang=dau.hang; sau.dem=dau.dem+1;
					if(sau.hang==c&&sau.cot==d) return sau.dem;
					chuaxet[sau.hang][sau.cot]=0;
					qe.push(sau);
				}
			}
			else break;
		}	
		}		
}
main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>hi[i][j]; chuaxet[i][j]=1;
		}
	}
	cin>>a>>b>>c>>d;
	cout<<solve();
}
