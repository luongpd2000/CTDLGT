#include<bits/stdc++.h>
using namespace std;
int n,x[1000],k;
void in(){ // in 
	for(int i=1;i<=n;i++){
		if(x[i] == 0) cout<<"A";
		else cout<<"B";
	}
	cout<<endl;
}
bool check1(){ // kiem tra xem da la cau hinh cuoi cung chua
	for(int i=1;i<=n;i++){
		if(x[i] == 0) return false;
	}
	return true;
}
bool check2(){ // xet dieu kien
	int dem = 0;
	int dem1 = 0;
	for(int i=1;i<=n;i++){
		if(x[i] == 0){ // neu == 0 thi dem++
			dem++;
		}
		else{ // neu == 1 thi xet dem,neu dem == k thi dem1 ++;
			if(dem == k){
				dem1++;
			}
			dem = 0;
		}
	}
	if(dem==k) dem1++; // TH nay la k ki tu A o cuoi cung cua chuoi
	if(dem1 == 1) return true; // neu chi xuat hien k ki tu a 1 lan duy nhat
	return false;
}
int sinh1(){ // tim so lan
	int c = 0;
	while(!check1()){
		for(int i=n;i>0;i--){
			if(x[i] == 1) x[i] = 0;
			else{
				x[i] = 1;
				break;
			}
		}	
		if(check2()){
			c++;
		}
	}
	return c;
}
void sinh2(){ // in ra
	while(!check1()){
		for(int i=n;i>0;i--){
			if(x[i] == 1) x[i]=0;
			else{
				x[i] = 1;
				break;
			}
		}	
		if(check2()){
			in();
		}
	}
}
main(){
	cin>>n>>k;
	cout<<sinh1()<<endl;
	for(int i = 1;i<=n;i++){
		x[i] = 0;
	}
	sinh2();
}
