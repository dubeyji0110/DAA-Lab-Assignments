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
    file.open("input_3.txt");
    if(!file){
        cout<<"File not found!"<<endl;
        return 0;
    }
    int n,i,j;
    file>>n;
    int arr1[n];
    for(i=0; i<n; i++)
        file>>arr1[i];
    int m;
    file>>m;
    int arr2[m];
    for(j=0;j<m;j++)    
        file>>arr2[j];
    i=0;j=0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j])
            {cout<<arr1[i++]<<" ";}
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;
    }
    return 0;
}