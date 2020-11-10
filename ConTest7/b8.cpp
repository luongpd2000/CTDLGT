#include<bits/stdc++.h>
using namespace std;

void xuly(string &s){
    for(int i=0;i<s.size();i++){
        if(s[i]==')'){
        	
            int lop=i-1;
            while(s[lop] != '(') lop--;

            if(s[lop-1]=='-'){		// neu la - thi doi dau
                for(int k=lop+1;k<i;k++){
                    if(s[k]=='+')
                        s[k]='-';
                    else if(s[k]=='-')
                        s[k]='+';
                }
            }
            
            s.erase(s.begin() + lop);	// xoa (
            s.erase(s.begin() + i-1);	// xoa )
            i-=2;
        }
    }
}

main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--){
        string s;
        //getline(cin,s);
        cin>>s;
		xuly(s);
        cout<<s<<endl;
    }
}
