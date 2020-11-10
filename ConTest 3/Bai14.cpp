#include <bits/stdc++.h> 
using namespace std; 

string findLargest(string num,  long long int n){  
	int digitsOfNumber = num.length(); // so ki tu cua chuoi chung ta xet	
    for (long long int i = n; i >= 1; i--) { 
        long long int temp = i*i*i;
  		ostringstream strg;
  		strg << temp;
  		string str = strg.str();
  		
        int digitsOfCube = str.length(); // so ki tu cua so lap phuong thu i
        int index = 0; 
        
        for (int j = 0; j < digitsOfNumber; j++){ // kiem tra xem chuoi dang xet co giong voi chuoi lap phuong ko
            if (num[j] == str[index])  index++; 
            if (digitsOfCube == index) return str; // neu so ki tu cua chuoi dang xet co the bang thi in ra luon             
        } 
    } 
    return "-1"; 
} 
 
void findLargestCube(long long int n){ 
	float sum1 = pow(n,(float)1/3);
	long long int sum = (long long int) sum1;

  	ostringstream strg;
  	strg << n;
    string num = strg.str(); // khoi tao ban dau la n
    string ans = findLargest(num, sum); // tim

    cout<<ans<<endl;
} 
  
main() { 
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		findLargestCube(n);
	} 
} 

