#include<bits/stdc++.h> 
using namespace std; 
long long a[100001],n;
long long getMaxArea(){ 
    // tao 1 stack giu chi so
    //cac thanh trong nay co thu tu tang
    stack<int> s; 
    long long max_area = 0;
    int tp; 
    long long area_with_top;  
    // chay qua cac thanh
    int i = 0; 
    while (i < n){ 
        // neu thanh nay cao hon thanh tren cung thi day no vao stack 
        if (s.empty() || a[s.top()] <= a[i]) s.push(i++); 	// day vao vi tri cua thanh
  
        // neu thanh nay thap hon thanh o dinh ngan xep  
        else{ 
            tp = s.top();	// tp se la thanh phan nho nhat trong khu vuc tinh dien tich
            s.pop();  // pop

            //area_with_top = a[tp] * (s.empty() ? i:i-s.top()-1); 
  			
  			if(s.empty()){
			  	area_with_top = a[tp] *i;
			}else{
				area_with_top = a[tp] * (i-s.top()-1);
			}
  			
            if (max_area < area_with_top) max_area = area_with_top; 
        } 
    } 
  
    // lay cac thanh con lai trong ngan xep 
    while (!s.empty()){ 		// dien tich cac thanh don le
        tp = s.top(); 
        s.pop(); 
        //area_with_top = a[tp] * (s.empty() ? i:i - s.top() - 1); 
        
  		if(s.empty()){
			  	area_with_top = a[tp] *i;
		}else{
				area_with_top = a[tp] * (i-s.top()-1);
		}
		
        if (max_area < area_with_top) max_area = area_with_top; 
    } 
    return max_area; 
} 

main(){ 
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<getMaxArea()<<endl;
	}
} 
