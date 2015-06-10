#include <iostream>
using namespace std;

int func(vector<int>& v, int n ){
    while(n){
        v.push_back(n%10);
        n/=10;
    }
    return 0;
}

int addvec(vector<int>& a, vector<int>& b, vector<int>& c){
    for(int i=0;i<((a.size>b.size)?a.size:b.size);i++){
        for(int j=0;j<((a.size<b.size)?a.size:b.size);j++){

        }
    }
    return 0;
}

int main() {
    int a,b;
    vector<int> v1,v2,v3;
    func(v1,a);
    func(v2,b);

    addvec(v1,v2,v3);

    for(int c=0;c<v3.size;c++){
        cout<<v3[c]<<" ";
    }

    return 0;
}
