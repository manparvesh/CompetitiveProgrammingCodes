#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b=1000000000;
    int ar[b];
    for(int i=2;i<b;i++) ar[i]=1;
    for(int i=2;i<b;i++){
        for(int j=i;j*i<=b;j++){
            ar[i*j]=0;
        }
    }
    ofstream myfile;
    myfile.open ("example.txt");
    myfile << "{";
    printf("\{");
    for(int i=2;i<=b;i++){
        if(ar[i])
            myfile<<i<<",\n";
            //printf("%d ,",i);
    }
    myfile<<"}";
    myfile.close();
    return 0;
}
