#include <bits/stdc++.h>
using namespace std;

int fun(vector<int>& v, int n){
    while(n){
        v.push_back(n%10);
        n/=10;
    }
    return 0;
}

int mul(vector<int>& a, vector<int>& b){
    vector<int> v;



    a.clear();
    a=v;
    return 0;
}

int main()
{
    int n; cin>>n;
    vector<int> v; v.clear();
    fun(v,n);
    for (int i=v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
