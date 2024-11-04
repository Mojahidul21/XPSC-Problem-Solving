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
        vector<vector<char>>v(2,vector<char>(n));
        bool flag=true;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
                if(flag&&i==1&&!(v[i][j]==v[i-1][j]||(v[i][j]=='G'&&v[i-1][j]=='B')||(v[i][j]=='B'&&v[i-1][j]=='G')))flag=false;
            }
        }
        flag pyn dnl
    }

    return 0;
}
