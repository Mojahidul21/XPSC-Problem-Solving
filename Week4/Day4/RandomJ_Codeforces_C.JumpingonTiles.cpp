#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line

#define py  cout<<"YES";                            // py  - print YES
#define pn  cout<<"NO";                             // pn  - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define ll  long long                               // ll  - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

int main(){
    tourist

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<pair<char,int>>v;
        for(int i=1;i<s.size()-1;i++)if(min(s.front(),s.back())<=s[i]&&s[i]<=max(s.front(),s.back()))v.push_back({s[i],i+1});
        cout<<abs(s.front()-s.back())pss<<v.size()+2<<'\n'<<1 pss;
        sort(v.begin(),v.end());
        if(s.front()>s.back())reverse(v.begin(),v.end());
        for(auto[a,b]:v)cout<<b pss;
        cout<<s.size();pnl
    }

    return 0;
}
