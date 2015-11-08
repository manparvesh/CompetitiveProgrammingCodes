#include <iostream>
using namespace std;

#define MAXN 1e5
#define endl '\n'
#define min(x,y) (x<y?x:y)
#define ar_sz(ar) (sizeof(ar)/sizeof(ar[0]))

int ar[MAXN], SegTree[1024*1024/10];

int nextGreaterPowerOf2(int n){
    n--;
    n |= n<<1;
    n |= n<<2;
    n |= n<<4;
    n |= n<<8;
    n |= n<<16;
    n |= n<<32;
    n++;
    return n;
}

void pel(){
    cout<<endl;
}

//build tree
void bt(int )

int main(){
    ios_base::sync_with_stdio(false);
    int n, stn;
    cin>>n;
    stn = nextGreaterPowerOf2(n);
    int ar[n], st[stn];
    for(int i=0;i<n;i++) cin>>ar[i];
    cout<<"Queries:";
    pel();
    bt(ar,st,0,ar_sz(ar)-1);
    return 0;
}
