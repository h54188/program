// ��¼.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
using namespace std;
void main()
{
	int abc=0;
	string name;
	string password;
	string passs;
	char n[128];
	char p[128];
	int e=8;
	int bb,i,d=1;
	cout<<"��ѡ�����\n"; //��¼��ע��
	cin>>i;
	fstream file("dl.txt");         //�ļ�
	fstream fi;
	system("cls");
	if(i==1)
	{
	if(!file.fail())
	{
		int e=1;
		cout<<"ע��:"<<endl;
		printf("//////////////////\n");
		do                //ע��
		{
		cout<<"�������û���:"<<endl;
		cin>>name;
		cout<<"����������:\n";
		cin>>password;
		printf("�ٴ���������:\n");
		cin>>passs;
		if(password==passs)
		if(name.length()>=2 && name.length()<=72)
		if(password.length()>=7 && password.length()<=15)
		{
		file<<name<<endl;
		file<<password<<endl;
		system("cls");
		cout<<"ע��ɹ�!!!"<<endl;
		e=2;
		}
		else
		{
        cout<<"�˻�������̫����!!!"<<endl;         //ע��ʧ��
		e=1;
		}
		}
		while(e==1);
	}
	}
	else
		if(i==2)                                  //��½
		{
			if(!fi.fail())
			{
			char buf[128];
			char buffer[128];
			cout<<"��¼:"<<endl;
			printf("////////////////\n");
			do
			{
			cout<<"����������:"<<endl;
			cin>>n;
			cout<<"����������:"<<endl;
			cin>>p;
			file.getline(buf,128);
			file.getline(buffer,128);
			if(strcmp(n,buf)==0 && strcmp(p,buffer)==0)
			{
				cout<<"��¼�ɹ�!!!"<<endl;              //��½�ɹ�
				d=2;
				system("pause");  
                system("cls");
				cout<<"��Ϸ��ʼ!"<<endl;                //������Ϸ
				srand(int(time(0)));
	            abc=rand()%100;
					do                                  //ѭ���ж�Ƕ��
					{
					cout<<"������һ����:\n";            
					cin>>bb;
					if(bb==abc)
					{
						cout<<"��Ӯ��!!!\n";
						cout<<e<<endl;
						break;
					}
					else if(bb>abc)
					{
						cout<<"��̫����!!!\n";
						e--;
						cout<<e<<"\n";
					}
					else if(bb<abc)
					{
						cout<<"��̫С��!!!\n";
					    e--;
						cout<<e<<"\n";
					}
					else if(bb>100)
					{
						cout<<endl;
					}
					if(e==0)
					{
					    cout<<"������!!!"<<endl;
					}
				    }
					while(e>0);
			}
			        else 
					{
                    cout<<"��¼ʧ��!!!"<<endl;            //��¼ʧ��
				    d=1;
			}
			}
			    while(d==1);
			}
		}
		if(i>2)
		{
			cout<<"you're wrong!!!"<<endl;
		}
}
