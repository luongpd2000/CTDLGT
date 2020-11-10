#include<bits/stdc++.h>
// 1 la cong
// 2 la  tru
// 3 la nhan
using namespace std;

int dau[5],a[6],x[6];
bool flag[6],kt = false;

void init_dau(){ 			// 4 vi tri tao dau
	for(int i=1;i<=4;i++){
		dau[i] = 1;
	}
}
bool check_dau(){			// *** la truong hop cuoi
	for(int i=1;i<=4;i++){
		if(dau[i] != 3) return false;
	}
	return true;
}
void sinh_dau(){			// sinh co ca truong hop giong nhau vdu 111 , 222
	for(int i=4;i>=1;i--){
		if(dau[i] < 3){
			dau[i] = dau[i] + 1;
			break;
		}else{
			dau[i] = 1;
		}
	}
}
void init_hoanvi(){
	for(int i=1;i<=5;i++){
		x[i] = i;
	}
}
bool check_hoanvi(){ // 54321 la toi da
	for(int i=1;i<=5;i++){
		if(x[i] != 5-i+1) return false;
	}
	return true;
}
void tinh(){
	init_dau(); // moi lan tinh lai khoi tao dau 1 lan 
	while(!check_dau()){
		int sum = a[x[1]];
		for(int i=2;i<=5;i++){
			if(dau[i-1] == 1){
				sum = sum + a[x[i]];
			}else if(dau[i-1] == 2){
				sum = sum - a[x[i]];
			}else{
				sum = sum * a[x[i]];
			}
		}
		if(sum == 23){ // neu thoa man thi break luon
			kt = true;
			break;
		}
		sinh_dau(); // sinh dau tiep theo
	}
}
void sinh_hoanvi(){
	int t = 5;
	while (x[t-1] > x[t]) t--; // tim chi so dau tien tu ben phai sang thoa man x[t-1] < x[t]
	int h = 5;
	while (x[h] < x[t-1]) h--; // tim chi so dau tien tu ben phai sang lon hon x[t-1]
	swap(x[h],x[t-1]); // doi cho 2 phan tu nay
	int c = 5;int l = t;
	while (c>=l){  // dao chuoi tu vi tri t
		swap(x[c],x[l]);
		c--;l++;
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		kt= false; // ban dau sai
		for(int i=1;i<=5;i++){ // nhap gia tri
			cin>>a[i];
		}
		init_hoanvi(); // khoi tao
		while(!check_hoanvi() && !kt){
			tinh();
			sinh_hoanvi();
		}
		if(kt){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
