#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    ifstream file;
    file.open("input_1.txt");
    if(!file){
        cout<<"File not found!";
        return 0;
    }
    int t;
    file>>t;
    while(t--){
        int n;
        file>>n;
        char arr[n];
        multimap<int,char> mpp;
        map<char,int> freq;
        for(int i=0; i<n; i++){
            file>>arr[i];
            freq[arr[i]]++;
        }
        int flag=0;
        for(auto i: freq)
            mpp.insert({i.second,i.first});
        if(mpp.rbegin()->first>1){
            cout<<mpp.rbegin()->second<<"-"<<mpp.rbegin()->first<<endl;
            flag=1;}
        if(!flag)
            cout<<"No Duplicate Present"<<endl;
    }
    return 0;
}