
#include <iostream>
using namespace std;


# pragma once



class Student{

private:
    int id;
    char name[20];
    char fathername[20];
    long long phnumber;
    char email[20];
    char address[30];

public:

    student();
    student(int id, char name[],char fathername[],long long phnumber,char email[],char address[]);

    void setid(int id1);
    void setname(char name1[]);
    void setfathername(char fathername1[]);
    void setphnumber(long long phnumber1);
    void setemail(char email1[]);
    void setaddress(char address1[]);

    int   getid();
    char*  getname();
    char*  getfathername();
    long long getphnumber();
    char*  getemail();
    char*  getaddress();


};







