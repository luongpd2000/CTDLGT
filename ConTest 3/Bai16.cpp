#include<bits/stdc++.h>

using namespace std;
int s,d;
char kq[1000];


main(){
	int t;
	cin>>t;
	while(t--){
		bool kt=true;
		cin>>s>>d;
		if(s-9*(d-1)>0 ) {			// neu tat ca cac chu so(tru chu so dau tien) deu =9 
			if(s-9*(d-1)>9) {		// neu chu so dau tien >9 thi loai
				kt=false;
			}else{					// nguoc lai thì lây ket qua : tat ca cac cs sau =9 , chu so dau tien = tong - các chu so kia
				kq[0]=s-9*(d-1)+'0';
				for(int i=1;i<d;i++) kq[i]=9+'0'; 
			}
		}else{						// cac chu so sau deu ko the =9
			int index;		
			int sum=s-1;
			kq[0]=1+'0';			// vi nho nhat nen chu so dau tien =1
			for(int i=1;i<d;i++){
				int b=sum-9*(d-1-i);		// tim gia tri cua vi tri i , gia su tat ca cac so sau nó =0
				if(b<0)  kq[i]=0+'0';		// so sánh giá tri b voi 0 neus <0 thì tat ca cac so sau no ko the =9 nên i min =0
				else {	
					kq[i]=b+'0';
					sum=sum-b;
					index=i+1;
					break;
				}
			}
			
			for(int i=index;i<d;i++){
				kq[i]=9+'0';
			}
		}
		
		
		if(kt==true){
			for(int i=0;i<d;i++){
				cout<<kq[i];
			}
			cout<<endl;
		}
		else cout<<-1<<endl;
	}
}
