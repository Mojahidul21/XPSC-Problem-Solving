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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        lli n;
        string s;
        cin>>n>>s;
        lli ilv=0;                  // initial line value
        priority_queue<lli>netInc;  // net-increment for each optimal-direction-change
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                ilv+=i;
                if(i<=n/2-1)netInc.push(n-2*i-1);
            }
            else{
                ilv+=n-i-1;
                if(i>n/2-1)netInc.push(2*i-n+1);
            }
        }

        lli curInc=0;               // current-increment for current-total optimal-direction-change (prefix-sum of netInc)
        for(int i=1;i<=n;i++){
            if(!netInc.empty()){
                curInc+=netInc.top();
                netInc.pop();
            }
            cout<<ilv+curInc pss;
        }
        dnl
    }

    return 0;
}
