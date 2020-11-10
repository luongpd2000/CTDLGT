#include<bits/stdc++.h>
using namespace std;
int nv,ne,neMST,dH; 

struct dinh{
	int num,id;
};

struct canh{
	dinh u,v; // u.num<v.num
	int TS;
};

bool cmp(canh a, canh b){
	return a.TS<b.TS;
}

int Kruskal(canh E[]){
	sort(E+1,E+ne+1,cmp);
	
	dinh V[1005];
	
	for(int i=1; i<=nv; i++){	
		V[i].num=i;	
		V[i].id=i;
	}
	
	if(ne==1) return E[1].TS;	// neu co 1 canh
	int i=1;
	
	while(neMST < nv-1 && i<ne){
		
		if(V[E[i].u.num].id != V[E[i].v.num].id){	// 2 dinh có 2 id khac nhau thi ko tao thanh chu trinh
			
			neMST++;
			dH+=E[i].TS;
			
			int minID, IDtochange;
			
			if(V[E[i].u.num].id < V[E[i].v.num].id){	// cap nhat lai id cho dinh
				minID = V[E[i].u.num].id;
				IDtochange = V[E[i].v.num].id;
			}
			else{
				minID = V[E[i].v.num].id;
				IDtochange = V[E[i].u.num].id;
			}
			
			for(int j=1;j<=nv;j++){
				if(V[j].id == IDtochange){
					V[j].id = minID;
				}
			}
		}
		i++;
	}
	return dH;
}

main(){
	int t,a,b,c; cin>>t;
	while(t--){
		cin>>nv>>ne; dH=0; 
		neMST=0;	// so canh cua cay khung
		canh E[10005]; 
		
		for(int i=1;i<=ne;i++){
			cin>>a>>b>>c;
			E[i].u.num=a; 
			E[i].v.num=b; 
			E[i].TS=c;
		}
		
		cout<<Kruskal(E)<<endl;
	}
}
