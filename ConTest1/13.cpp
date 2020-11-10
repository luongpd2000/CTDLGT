#include<iostream>
#include<Bits.h>
using namespace std;
int n,x[1000],k;
void in(){
	for(int i=1;i<=n;i++){
		if(x[i] == 0) cout<<"A";
		else cout<<"B";
	}
	cout<<endl;
}
bool ktracauhinh(){
	for(int i=1;i<=n;i++){
		if(x[i] == 0) return false;
	}
	return true;
}
bool ktradk(){
	int dem = 0;
	int dem1 = 0;
	for(int i=1;i<=n;i++){
		if(x[i] == 0){
			dem++;
		}
		else{
			if(dem == k){
				dem1++;
			}
			dem = 0;
		}
	}
	if(dem==k) dem1++;
	if(dem1 == 1) return true;
	return false;
}
int demkq(){
	int c = 0;
	while(!ktracauhinh()){
		for(int i=n;i>0;i--){
			if(x[i] == 1) x[i] = 0;
			else{
				x[i] = 1;
				break;
			}
		}	
		if(ktradk()){
			c++;
		}
	}
	return c;
}
void inkq(){
	while(!ktracauhinh()){
		for(int i=n;i>0;i--){
			if(x[i] == 1) x[i]=0;
			else{
				x[i] = 1;
				break;
			}
		}	
		if(ktradk()){
			in();
		}
	}
}
main(){
	cin>>n>>k;
	cout<<demkq()<<endl;
	for(int i = 1;i<=n;i++){
		x[i] = 0;
	}
	inkq();
}
