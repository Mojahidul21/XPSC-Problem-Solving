#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define snl cout<<'\n'                              // snl - staring new line
#define enl <<'\n';                                 // enl - ending new line
#define dnl cout<<'\n';                             // dnl - detached new line

#define py  cout<<"YES";                            // py  - print YES
#define pn  cout<<"NO";                             // pn  - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define pss <<" "                                   // pss - print single space

#define ll  long long                               // ll  - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

int main(){
    tourist

    map<int,char>m;
    for(int i=1,j='a';i<=26;i++,j++)m[i]=(char)j;
    int q;
    cin>>q;
    while(q--){
        int n;
        string t;
        cin>>n>>t;
        string s;
        while(!t.empty()){
            if(t.back()=='0'){s+=m[stoi(t.substr(t.size()-3,2))];t.erase(t.size()-3,3);}
            else{s+=m[stoi(string(1,t.back()))];t.pop_back();}
        }
        for(auto it=s.rbegin();it!=s.rend();it++)cout<<*it;
        if(q)dnl
    }

    return 0;
}
