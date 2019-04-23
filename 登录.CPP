// µÇÂ¼.cpp : Defines the entry point for the console application.
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
	cout<<"ÇëÑ¡Ôñ·þÎñ\n"; //µÇÂ¼»ò×¢²á
	cin>>i;
	fstream file("dl.txt");         //ÎÄ¼þ
	fstream fi;
	system("cls");
	if(i==1)
	{
	if(!file.fail())
	{
		int e=1;
		cout<<"×¢²á:"<<endl;
		printf("//////////////////\n");
		do                //×¢²á
		{
		cout<<"ÇëÊäÈëÓÃ»§Ãû:"<<endl;
		cin>>name;
		cout<<"ÇëÊäÈëÃÜÂë:\n";
		cin>>password;
		printf("ÔÙ´ÎÊäÈëÃÜÂë:\n");
		cin>>passs;
		if(password==passs)
		if(name.length()>=2 && name.length()<=72)
		if(password.length()>=7 && password.length()<=15)
		{
		file<<name<<endl;
		file<<password<<endl;
		system("cls");
		cout<<"×¢²á³É¹¦!!!"<<endl;
		e=2;
		}
		else
		{
        cout<<"ÕË»§»òÃÜÂëÌ«¶ÌÁË!!!"<<endl;         //×¢²áÊ§°Ü
		e=1;
		}
		}
		while(e==1);
	}
	}
	else
		if(i==2)                                  //µÇÂ½
		{
			if(!fi.fail())
			{
			char buf[128];
			char buffer[128];
			cout<<"µÇÂ¼:"<<endl;
			printf("////////////////\n");
			do
			{
			cout<<"ÇëÊäÈëÃû×Ö:"<<endl;
			cin>>n;
			cout<<"ÇëÊäÈëÃÜÂë:"<<endl;
			cin>>p;
			file.getline(buf,128);
			file.getline(buffer,128);
			if(strcmp(n,buf)==0 && strcmp(p,buffer)==0)
			{
				cout<<"µÇÂ¼³É¹¦!!!"<<endl;              //µÇÂ½³É¹¦
				d=2;
				system("pause");  
                system("cls");
				cout<<"ÓÎÏ·¿ªÊ¼!"<<endl;                //²ÂÊýÓÎÏ·
				srand(int(time(0)));
	            abc=rand()%100;
					do                                  //Ñ­»·ÅÐ¶ÏÇ¶Ì×
					{
					cout<<"ÇëÊäÈëÒ»¸öÊý:\n";            
					cin>>bb;
					if(bb==abc)
					{
						cout<<"ÄãÓ®ÁË!!!\n";
						cout<<e<<endl;
						break;
					}
					else if(bb>abc)
					{
						cout<<"ÄãÌ«´óÁË!!!\n";
						e--;
						cout<<e<<"\n";
					}
					else if(bb<abc)
					{
						cout<<"ÄãÌ«Ð¡ÁË!!!\n";
					    e--;
						cout<<e<<"\n";
					}
					else if(bb>100)
					{
						cout<<endl;
					}
					if(e==0)
					{
					    cout<<"ÄãÊäÁË!!!"<<endl;
					}
				    }
					while(e>0);
			}
			        else 
					{
                    cout<<"µÇÂ¼Ê§°Ü!!!"<<endl;            //µÇÂ¼Ê§°Ü
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
