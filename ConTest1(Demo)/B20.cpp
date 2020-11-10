#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int a[100];
	int b[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	bool flag = true;
	for(int i=0;i<n;i++){
		if(a[i]>b[i]){
			flag = false;
			break;
		}
		if(flag== false) {
			break;
		}
	}
	if(flag== true){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
