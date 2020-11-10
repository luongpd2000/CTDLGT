#include<bits/stdc++.h>

using namespace std;
int k;
string s;

void findMax(int h,string& maxx){	// h la so lan doi cho
	if(h==0) return;
	int n=s.length();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[i]<s[j]){			// so sanh
				swap(s[i],s[j]);	// doi cho
				if(s.compare(maxx) >0) maxx=s;		// cap nhat gia tri
				findMax(h-1,maxx);			// quaylui
				swap(s[j],s[i]);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		bool kiemtra3=true;  //  =0 vdu 000 kiem tra xau nhap vao co toan 0 hay ko
		
		cin>>k;		// so lan doi cho
		cin.ignore();
		cin>>s;
		cin.ignore();
		string maxx=s;
		for(int i=0;i<s.length();i++){
			if((s[i]-'0')!=0){
				kiemtra3=false;
				break;
			} 
		}
		if(kiemtra3==true){ 
			cout<<"0"<<endl;
		}else{
			findMax(k,maxx);
			cout<<maxx<<endl;
		}
	}
}

