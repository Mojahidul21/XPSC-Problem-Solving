#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();

        string a;
        getline(cin,a);
        string word;
        stringstream ssA(a);
        map<string,int>mp;
        vector<string>aa,bb,cc;
        while(ssA>>word){
            aa.push_back(word);
            mp[word]++;
        }

        string b;
        getline(cin,b);
        stringstream ssB(b);
        while(ssB>>word){
            bb.push_back(word);
            mp[word]++;
        }

        string c;
        getline(cin,c);
        stringstream ssC(c);
        while(ssC>>word){
            cc.push_back(word);
            mp[word]++;
        }

        int aSum=0,bSum=0,cSum=0;
        for(auto word:aa){
            if(mp[word]==1)aSum+=3;
            else if(mp[word]==2)aSum++;
        }

        for(auto word:bb){
            if(mp[word]==1)bSum+=3;
            else if(mp[word]==2)bSum++;
        }

        for(auto word:cc){
            if(mp[word]==1)cSum+=3;
            else if(mp[word]==2)cSum++;
        }

        cout<<aSum pss<<bSum pss<<cSum enl
    }

    return 0;
}
