#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d",&n);//chota wala
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&m);//wadda wala
    int B[m];
    for(int i=0;i<m;i++){
        scanf("%d",&B[i]);
    }
    sort(A,A+n);
    sort(B,B+m);
    bool Bb[m];
    for(int i=0;i<m;i++){
        Bb[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i]==B[j] && Bb[j]){
                Bb[j]=0;break;
            }
        }
    }
    set<int> st;
    for(int i=0;i<m;i++){
        if(Bb[i]){
            st.insert(B[i]);
        }
    }
    for(int i=0;i<st.size();i++){
        printf("%d ",st[i]);
    }
    printf("\n");
    return 0;
}
