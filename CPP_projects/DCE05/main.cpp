#include <cmath>
#include <cstdio>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
        long long n;
		scanf("%lld",&n);
		printf("%lld\n", (int)pow(2,(int)log2(n)));
	}
}
