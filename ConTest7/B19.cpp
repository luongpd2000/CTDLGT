#include<bits/stdc++.h>
using namespace std;


main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        cin>>str;

        stack<int> st;
        string kq="";

        for(int i=0;i<=str.size();i++){
            st.push(i+1);

            if(str[i]=='I' || i==str.size()){
                while(!st.empty()){
                    kq+=st.top()+'0';		// chuyen so thanh string 
                    st.pop();
                }
            }
        }

        cout<<kq<<endl;
    }
}
