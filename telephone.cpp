#include <iostream>
#include"telephone.h"
#include <fstream>
#include <string.h>
using namespace std;





void Student :: setid(int id1)
    {id=id1;}

void Student ::setname(char name1[])
    {strncpy(name,name1,sizeof(name)-1);}

void Student ::setfathername(char fathername1[])
    {strncpy(fathername,fathername1,sizeof(fathername)-1);}

void Student ::setemail(char email1[])
    {strncpy(email,email1,sizeof(email)-1);}

void Student ::setaddress(char address1[])
    {strncpy(address,address1,sizeof(address)-1);}

void Student ::setphnumber(long long phnumber1)
    {phnumber=phnumber1;}




int Student:: getid()
    {return id;}

char *  Student:: getname()
    {return name;}

char * Student :: getfathername()
  {return fathername;}

long long Student :: getphnumber()
  {return phnumber;}

char * Student:: getemail()
     {return email;}

char *  Student :: getaddress()
  {return address;}
