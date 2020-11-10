#include <bits/stdc++.h>
using namespace std;

void input(string &inp, vector<int> &freq){
    int dem[256]{0};
    for(int i=0; i<inp.size(); i++)		// dem so lan xuat hien
    {
        dem[inp[i]]++;
    }

    for(int i=0;i<256;i++)
        if(dem[i]!=0)	
            freq.push_back(dem[i]);			// add vao vector
}

int main(){
    int T;
    cin>>T;
    cin.ignore();

    while(T--){
        string inp;
        int d;
        cin>>d;
        cin.ignore();
        cin>>inp;
		cin.ignore();
        vector<int> freq;
        input(inp, freq);

        sort(freq.begin(), freq.end(),greater<int>());		// sap xep giam so lan xuat hien

        int kq=1;
        for(int i=0;i<freq.size();i++){
            if(i + (freq[i]-1)*d > inp.size()){		// kiem tra dieu kien
                kq=-1;
                break;
            }
        }
        cout<<kq<<endl;
    }
    return 0;
}
