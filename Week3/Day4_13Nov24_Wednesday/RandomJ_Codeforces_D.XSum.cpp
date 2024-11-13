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

int n,m;
map<pair<int,int>,pair<int,int>>l;
map<pair<int,int>,pair<int,int>>r;
map<pair<int,int>,int>lCost;
map<pair<int,int>,int>rCost;

void diagonal_head_lnr(int i,int j){
    int a=i,b=j;
    while(i>0&&j>0)i--,j--;
    l[{a,b}]={i,j},i=a,j=b;
    while(i>0&&j<m-1)i--,j++;
    r[{a,b}]={i,j};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        l.clear(),r.clear(),lCost.clear(),rCost.clear();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)diagonal_head_lnr(i,j);
        }

        vector<vector<int>>cellCost(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>cellCost[i][j];
                lCost[l[{i,j}]]+=cellCost[i][j],rCost[r[{i,j}]]+=cellCost[i][j];
            }
        }

        int mx=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)mx=max(mx,lCost[l[{i,j}]]+rCost[r[{i,j}]]-cellCost[i][j]);
        }
        cout<<mx enl
    }

    return 0;
}
