#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int height = (int)floor(sqrt(l));;
    int width = (int)ceil(sqrt(l));
    for(int i=0;i<width;i++){
        int j = i;
        while(j<l){
            cout<<s[j];
            j = j+width;
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}
