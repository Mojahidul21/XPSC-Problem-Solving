#include<bits/stdc++.h>

#define snl cout<<'\n'                      // snl - staring new line
#define enl <<'\n';                         // enl - ending new line
#define dnl cout<<'\n';                     // dnl - detached new line
#define pss <<" "                           // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";        // pyn - print yes no

#define lli long long int                   // lli - long long int
#define con const int c=1e                  // con - constant
#define imx INT_MAX;                        // imx - INT_MAX
#define imn INT_MIN;                        // imn - INT_MIN

#define vin for(int i=0;i<n;i++)cin>>v[i];  // vin - vector input

using namespace std;

int t;
string a,b;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a.back()<b.back())cout<<'>'enl
        else if(a.back()>b.back())cout<<'<'enl
        else if(a.back()=='M')cout<<'='enl
        else if(a.back()=='S'&&a.size()<b.size())cout<<'>'enl
        else if(a.back()=='S'&&a.size()>b.size())cout<<'<'enl
        else if(a.back()=='S')cout<<'='enl
        else if(a.size()<b.size())cout<<'<'enl
        else if(a.size()>b.size())cout<<'>'enl
        else cout<<'='enl
    }

    return 0;
}
