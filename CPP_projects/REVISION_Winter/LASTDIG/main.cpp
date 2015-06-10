#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,res;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        a%=10;
        switch(a){
        case 1:
            res=1;
        case 2:{
            switch(b%4){
            case 1:
                res=2;
            case 2:
                res=4;
            case 3:
                res=8;
            case 0:
                res=6;
            }}
        case 3:{
            switch(b%3){
            case 1:
                res=3;
            case 2:
                res=9;
            case 0:
                res=7;
            }}
        case 4:{
            switch(b%2){
            case 1:
                res=4;
            case 0:
                res=6;
            }}
        case 5:
            res=5;
        case 6:
            res=6;
        case 7:{
            switch(b%4){
            case 1:
                res=7;
            case 2:
                res=9;
            case 3:
                res=3;
            case 0:
                res=1;
            }}
        case 8:{
            switch(b%4){
            case 1:
                res=8;
            case 2:
                res=4;
            case 3:
                res=2;
            case 0:
                res=6;
            }}
        case 9:{
            switch(b%2){
            case 1:
                res=9;
            case 0:
                res=1;
            }}
        case 0:
            res=0;
        }
        printf("%d\n",res);
    }
    return 0;
}
