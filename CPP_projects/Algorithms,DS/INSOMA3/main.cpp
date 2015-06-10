#include <iostream>
using namespace std;

int main(){
	long n,i,j,cnt=0,max;
	cin>>n;
	long a[n];
	cin>>a[0];
//	max=a[0];
	for(i=1;i<n;i++){
		cin>>a[i];
	//	if(a[i]>max){
		//	max=a[i];
			//continue;
		//}
		for(j=0;j<i;j++){
			if(a[i]<a[j])
				cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
