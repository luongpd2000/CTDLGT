#include<bits/stdc++.h> 
using namespace std; 
string chuanhoa(string s){
	stack<int> so;
	stack<char> kitu;
	
	string temp="",rs="";
	
	for(int i=0;i<s.length();i++){
		int c = 0;
		if (s[i] >= '0' && s[i] <='9'){
            while (s[i] >= '0' && s[i] <= '9'){ 
                c = c * 10 + s[i] - '0'; 
                i++; 
            } 
            i--; 
            so.push(c); 
        } 
        else if (s[i] == ']'){ 
            temp = ""; 
            c = 0; 
            if (!so.empty()) { 
                c = so.top(); 
                so.pop(); 
            } 
  
            while (!kitu.empty() && kitu.top()!='[' ){
                temp = kitu.top() + temp; 
                kitu.pop(); 
            } 
  
            if (! kitu.empty() && kitu.top() == '[') kitu.pop(); 
  
            for (int j = 0; j < c; j++) rs = rs + temp;
  			
  			
            for (int j = 0; j < rs.length(); j++) kitu.push(rs[j]); 
            rs = ""; 
        }
        else if (s[i] == '['){ 
            if (s[i-1] >= '0' && s[i-1] <= '9') kitu.push(s[i]); 
  			else{
                kitu.push(s[i]); 
                so.push(1); 
            } 
        } 
  
        else kitu.push(s[i]);
	}
	while (! kitu.empty()) { 
        rs = kitu.top() + rs; 
        kitu.pop(); 
    } 
	return rs;
}
main(){ 
	int t;
	cin>>t;
	string s;
	while(t--){
		cin.ignore();
		cin>>s;
		cout<<chuanhoa(s)<<endl;
	}
} 
