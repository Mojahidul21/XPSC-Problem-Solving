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
        string s,ans="YES";
        cin>>n>>s;
        vector<bool>flag(5,false);
        if(n!=5)ans="NO";
        else{
            for(auto c:s){
                if(c=='T')flag[0]=true;
                else if(c=='i')flag[1]=true;
                else if(c=='m')flag[2]=true;
                else if(c=='u')flag[3]=true;
                else if(c=='r')flag[4]=true;
            }
            for(auto b:flag)if(!b){ans="NO";break;}
        }
        cout<<ans enl
    }

    return 0;
}
