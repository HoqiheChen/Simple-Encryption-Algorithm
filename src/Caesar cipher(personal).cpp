#include<iostream>
using namespace std;
char dxchange(char a,int b)
{
	char all_s[26];
	int i=0;
	int k=0;
	for(i=0;i<26;i++)
	{
		all_s[i]='A'+char(i);
	}
	for(i=0;i<26;i++)
	{
		if(all_s[i]==a)
			{
				k=i;
				k=(k+26-b)%26;
				return all_s[k];
		    }
	}
}
void decrept()
{
	char secret[30];
	int i;
	int key_shift;
	cout<<"press your plaintext:"<<endl;
	cin>>secret;
	for(i=0;secret[i]!='\0';i++)
	{
		if(secret[i]>='a'&&secret[i]<='z')
		{
			secret[i]=char(secret[i]-32);
		}
	}
	for(key_shift=0;key_shift<26;key_shift++)
	{
		for(i=0;secret[i]!='\0';i++)
		{
			secret[i]=dxchange(secret[i],key_shift);
		}
		cout<<"Your secret is:"<<secret<<"  (key_shift="<<key_shift<<")"<<endl;
	}
}
int main()
{
	
	cout<<"This Algorithm doesn`t distinguish capital or lower"<<endl;
	decrept();

}