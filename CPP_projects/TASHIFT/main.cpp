#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    string a,b;
    cin>>n>>a>>b;
    b+=b;
    int m=0, i=0, j=0, shift=0;

    for(int x=0;x<n;x+=i){
        i=0;j=0;
        for(int ii=x;ii<n;ii++){
            if(b[ii]!=a[0]){
                x++;
            }else{
                break;
            }
        }//kitho compare karna shuru karna hai
        for(int ii=x;ii<2*n;ii++){
            if(b[ii]==a[j++]){
                i++;
            }else{
                break;
            }
        }
        if(m<i){
            m=i;
            shift=x;
        }
    }
    cout<<shift<<endl;
    return 0;
}
