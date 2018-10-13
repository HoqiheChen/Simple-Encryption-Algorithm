#include<iostream>
using namespace std;
char space[26][26];
char secret[30];
char key[30];
char mm[30];//加密后的密文
char nn[30];//解密后的明文
void init()
{
	int i;
	int j;
	for(i=0;i<26;i++)
	{
		space[i][0]=char('A'+i);
		for(j=1;j<26;j++)
		{
			space[i][j]=char((space[i][0]+j-'A')%26+'A');
		}
	}
}
void jiami()
{
	int i;
	cout<<"Please input your secret:"<<endl;
	cin>>secret;
	for(i=0;secret[i]!='\0';i++)
	{
		if(secret[i]>='a'&&secret[i]<='z')
			secret[i]=char(secret[i]-32);
	}
	cout<<"press your key(Equals to secret&&MUST  Capital!!!):"<<endl;
	cin>>key;
	int temp;
	int k;
	int c;
	int s;
	for(i=0;secret[i]!='\0';i++)
	{
		for(temp=0;temp<26;temp++)
		{
			if(space[temp][0]==secret[i])
				c=temp;
			if(space[0][temp]==key[i])
				s=temp;
		}
		mm[i]=space[c][s];
	}
	cout<<"密文为："<<mm<<endl;
}
void jiemi()
{
	int i;
	cout<<"Please input your secret:"<<endl;
	cin>>secret;
	for(i=0;secret[i]!='\0';i++)
	{
		if(secret[i]>='a'&&secret[i]<='z')
			secret[i]=char(secret[i]-32);
	}
	cout<<"press your key(Equals to secret&&MUST  Capital!!!):"<<endl;
	cin>>key;
	int temp;
	int k;
	int c;
	int s;
	for(i=0;key[i]!='\0';i++)
	{
		for(temp=0;temp<26;temp++)
		{
			if(space[0][temp]==key[i])
				{
					s=temp;
					break;
			    }
		}
		for(temp=0;temp<26;temp++)
		{
			if(space[s][temp]==secret[i])
			{
				c=temp;
				break;
			}
		}
		nn[i]=space[c][0];
	}
	cout<<"明文为："<<nn<<endl;
}
int main()
{
	int i;
	init();
	cout<<"**********     Welcome to Vigenere cipher     **********"<<endl;
	cout<<" Copyright  2017 - 2027 Gechen Inc. All Rights Reserved"<<endl;
	while(1)
		{
			cout<<"Please input your choise:1-encryption，2-decrypt，3-quit"<<endl;
			cin>>i;
			if(i==1) jiami();
			if(i==2) jiemi();
			if(i==3) break;
	}
}
