#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	string a;getline(cin,a);


	while(t--)
	{
		string s; getline(cin,s);

		int i=0;
		for(i=8;s[i]!='"';i++);
		int j=i+=2;
		int k=j-2;
		for(int i=8;i<k;i++)
		{
			if(s[i]!='%'){
				cout<<s[i];
            }
			else
			{
				i++;

				if(s[i] == 'd')
				{
					int x=0;
					while(s[j]!=',' && s[j]!=')')
					{
						x=x*10+s[j]-48;
						j++;
					}
					cout<<x;
					j++;
				}

				else if(s[i] == 'c')
				{
					char x;
					j++;
					x=s[j];
					cout<<x;
					j+=3;
				}

				else if(s[i] == 'f')
				{
					float x=0; string y="";
					for(;s[j]!=',' && s[j]!=')';j++){
                        y+=s[j];
                        //cout<<s[j]<<" ";
					}

                    //cout<<y<<endl;
					stringstream ss;
					ss<<y; ss>>x;
					//float z=stof(y);
					//cout<<setprecision(6)<<fixed<<z;
                    printf("%.6f",x);
					//cout<<setprecision(10)<<fixed<<x;
					j++;
				}

				else if(s[i] == 's')
				{
					j++;
					while(s[j]!='"')
						cout<<s[j++];

					j+=2;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
