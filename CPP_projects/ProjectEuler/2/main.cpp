#include<iostream>

using namespace std;

int main() {

	int i = 1;
	int j = 1;
	int k;
	int sum = 0;

	while(j <= 4000000) {

		if(j % 2 == 0)
			sum += j;

		k=j;
		j += i;
		i=k;

		}

	cout << sum << endl;

	return 0;

}
