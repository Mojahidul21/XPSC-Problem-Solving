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

#define ivi for(int i=0;i<n;i++){       // ivi - index_wise vector input

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>svr;            // song vs rating
        ivi cin>>svr[i];}

        string s;
        cin>>s;
        map<int,bool>svl;           // song vs like
        map<int,int>rvsL;           // rating vs song map for liked
        map<int,int>rvsD;           // rating vs song map for disliked
        ivi
            svl[i]=(s[i]=='0'?0:1);
            s[i]=='0'?(rvsD[svr[i]]=i):(rvsL[svr[i]]=i);
        }

        map<int,int>svrLN;          // song vs rating map for liked_new_rating
        int rnkLN=rvsD.size()+1;    // lowest rank (key) for the rvsLN map
        for(auto it=rvsL.begin();it!=rvsL.end();it++)svrLN[it->second]=rnkLN,rnkLN++;

        map<int,int>svrDN;          // song vs rating map for disliked_new_rating
        int rnkDN=1;                // lowest rank (key) for the rvsDN map
        for(auto it=rvsD.begin();it!=rvsD.end();it++)svrDN[it->second]=rnkDN,rnkDN++;

        ivi cout<<(svl[i]?svrLN[i]:svrDN[i])pss;}
        dnl
    }

    return 0;
}
