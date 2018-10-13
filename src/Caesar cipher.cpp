#include<iostream>
using namespace std;
char exchange(char a,int b)
{
	char all_l[26];
	char all_s[26];
	int i=0;
	int k=0;
	for(i=0;i<26;i++)
	{
		all_l[i]='a'+char(i);
	}
	for(i=0;i<26;i++)
	{
		all_s[i]='A'+char(i);
	}
	for(i=0;i<26;i++)
	{
		if(all_l[i]==a)
			{
				k=i;
				k=(k+b)%26;
				return all_l[k];
			}
	}
	for(i=0;i<26;i++)
	{
		if(all_s[i]==a)
			{
				k=i;
				k=(k+b)%26;
				return all_s[k];
		    }
	}
}
char dxchange(char a,int b)
{
	char all_l[26];
	char all_s[26];
	int i=0;
	int k=0;
	for(i=0;i<26;i++)
	{
		all_l[i]='a'+char(i);
	}
	for(i=0;i<26;i++)
	{
		all_s[i]='A'+char(i);
	}
	for(i=0;i<26;i++)
	{
		if(all_l[i]==a)
			{
				k=i;
				k=(k+26-b)%26;
				return all_l[k];
			}
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
void encrept()
{
	char secret[30];
	int i;
	int key_shift;
	cout<<"Press your key_shift:"<<endl;
	cin>>key_shift;
	cout<<"press your plaintext:"<<endl;
	cin>>secret;
	for(i=0;secret[i]!='\0';i++)
	{
		secret[i]=exchange(secret[i],key_shift);
	}
	cout<<"Your secret is:"<<secret<<endl;
}
void decrept()
{
	char secret[30];
	int i;
	int key_shift;
	cout<<"Press your key_shift:"<<endl;
	cin>>key_shift;
	cout<<"press your plaintext:"<<endl;
	cin>>secret;
	for(i=0;secret[i]!='\0';i++)
	{
		secret[i]=dxchange(secret[i],key_shift);
	}
	cout<<"Your secret is:"<<secret<<endl;
}

int main()
{
	
	cout<<"Please choose the function:"<<endl;
	cout<<"1-encrept,2-decrept"<<endl;
	int choose;
	cin>>choose;
	if(choose==1)
	{
		encrept();
	}
	if(choose==2)
	{
		decrept();
	}
}