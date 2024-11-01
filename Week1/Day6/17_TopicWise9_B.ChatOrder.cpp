#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
#define dnl cout<<'\n';                 // dnl - detached new line
#define pss <<" "                       // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no
#define lli long long int               // lli - long long int
#define con const int c=1e              // con - constant
#define imx INT_MAX;                    // imx - INT_MAX
#define imn INT_MIN;                    // imn - INT_MIN

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<string>recipients(n);
    for(int i=0;i<n;i++)cin>>recipients[i];

    map<string,int>mp;
    for(int i=n-1;i>=0;i--){
        if(!mp[recipients[i]]){
            mp[recipients[i]]++;
            cout<<recipients[i]enl
        }
    }

    return 0;
}
