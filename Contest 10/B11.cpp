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

int Prim(canh E[], int src){
	sort(E+1,E+ne+1,cmp);
	
	dinh V[1005];
	
	for(int i=1; i<=nv; i++){	
		if(i==src){
			V[i].num=src; 
			V[i].id=0;
		}
		else{
			V[i].num=i; 
			V[i].id=1;
		}
	}
	
	if(ne==1) return E[1].TS;
	
	bool is_V_Empty=true;
	
	while(is_V_Empty){
		is_V_Empty=false;
		
		for(int i=1;i<=ne;i++){
			
			if(V[E[i].u.num].id != V[E[i].v.num].id){
				dH+=E[i].TS;
				
				if(V[E[i].u.num].id==1){	// chuyen id tu trang thai nay sang trang thai kia
					V[E[i].u.num].id=0;
				}
				else V[E[i].v.num].id=0;
				
				is_V_Empty=true;
				break;
			}
			
		}
	}
	return dH;
}
main(){
	int t,a,b,c; 
	cin>>t;
	while(t--){
		cin>>nv>>ne; 
		dH=0; neMST=0;
		canh E[10005]; 
		
		for(int i=1;i<=ne;i++){
			cin>>a>>b>>c;
			E[i].u.num=a; 
			E[i].v.num=b; 
			E[i].TS=c;
		}
		
		cout<<Prim(E,1)<<endl;
	}
}
