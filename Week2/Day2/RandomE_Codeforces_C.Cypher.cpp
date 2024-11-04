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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>digit(n);
        for(int i=0;i<n;i++)cin>>digit[i];
        vector<int>moveQty(n);
        vector<string>movePath(n);
        for(int i=0;i<n;i++){
            cin>>moveQty[i]>>movePath[i];
            reverse(movePath[i].begin(),movePath[i].end());
            for(int j=0;j<moveQty[i];j++)movePath[i][j]=='D'?digit[i]++:digit[i]--;
            digit[i]%=10;
            if(digit[i]<0)digit[i]+=10;
            cout<<digit[i]pss;
        }
        dnl
    }

    return 0;
}
