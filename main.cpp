#include <iostream>
#include"telephone.h"
#include"telephone.cpp"
#include <fstream>
#include <string.h>
using namespace std;

void intro()
{
cout<<endl;
cout<<"***********************************************************************************************************"<<endl;
cout<<"                              Welcome To Telephone Directory Management System                             "<<endl;
cout<<"***********************************************************************************************************"<<endl;
cout<<endl;

}





int main()
{

    int id1;
    char name1[20];
    char fathername1[20];
    long long phnumber1;
    char email1[20];
    char address1[30];
    int userchoice;


    intro();
    Student std1[2];
    int choice=0;
while(choice!=6)
    {
cout<<endl;
cout<<" 1. Press to Enter New Student  "<<endl;
cout<<" 2. Press to Search Student     "<<endl;
cout<<" 3. Press to Update Student     "<<endl;
cout<<" 4. Press to Delete New Student "<<endl;
cout<<" 5. Press to Show all Student   "<<endl;
cout<<" 6. Press to Exit :             "<<endl;
cout<<endl;
cout<<" Please Enter Your Choice >>>> ";
cin>>choice;

switch(choice)
{

case 1:  // New student
{

      cout<<endl;
      ofstream outputFile("student_data.txt",ios::out); // Open the file for writing and don't overwrite

    if (outputFile.is_open()) {
        for (int i = 0; i < 2; i++) {
            cout << "Please enter Student ID: ";
            cin >> id1;
            std1[i].setid(id1);
            std1[i].getid();

            cout << "Please enter Student name: ";
            cin.ignore();
            cin.getline(name1, 20);
            std1[i].setname(name1);
            std1[i].getname();

            cout << "Please enter Student Phone Number: ";
            cin >> phnumber1;
            std1[i].setphnumber(phnumber1);
            std1[i].getphnumber();

            cout << "Please enter Student Father name: ";
            cin.ignore();
            cin.getline(fathername1, 20);
            std1[i].setfathername(fathername1);
            std1[i].getfathername();

            cout << "Please enter Student Email: ";
            cin.ignore();
            cin.getline(email1, 20);
            std1[i].setemail(email1);
            std1[i].getemail();

            cout << "Please enter Student Address: ";
            cin.ignore();
            cin.getline(address1, 20);
            std1[i].setaddress(address1);
            std1[i].getaddress();

            cout << endl;

            // Write student data to the file
            outputFile << "Student ID: " << std1[i].getid() << endl;
            outputFile << "Name: " << std1[i].getname() << endl;
            outputFile << "Phone Number: " << std1[i].getphnumber() << endl;
            outputFile << "Father's Name: " << std1[i].getfathername() << endl;
            outputFile << "Email: " << std1[i].getemail() << endl;
            outputFile << "Address: " << std1[i].getaddress() << endl;
            outputFile << endl;
        }

        outputFile.close(); // Close the file after writing
        cout << "Student data has been written to the file." << endl;
    } else {
        cout << "Unable to open the file for writing." << endl;
    }

break;
      }

case 2: // Search Student
{

   ifstream inputFile("student_data.txt",ios::in);

 if (inputFile.is_open())

    {


 int choice=0;
   int findid;
   char findname[10];
  cout<<endl;
  cout<<" 1. Press to find student by ID "<<endl;
  cout<<" 2. Press to find student by name "<<endl;
  cout<<" Please Enter your choice >>> ";
  cin>>choice;
  switch(choice)
  {

   case 1:
       {
    bool studentFound = false;
   cout<<endl;
   cout<<" Please Enter Student id: ";
   cin>>findid;
 for(int i=0;i<2;i++)
 {
     if(findid==std1[i].getid())
     {
         cout<<endl;
         cout<<" Student Found ";
         cout<<endl;
            cout << "ID: " << std1[i].getid() << endl;
            cout << "Name: " << std1[i].getname() << endl;
            cout << "Phone Number: " << std1[i].getphnumber() << endl;
            cout << "Father's Name: " << std1[i].getfathername() << endl;
            cout << "Email: " << std1[i].getemail() << endl;
            cout << "Address: " << std1[i].getaddress() << endl;
            cout << endl;
         cout<<endl;
          studentFound = true;
         break;
        }
 }
 if (!studentFound)
    {cout << "Sorry, Not Found" << endl;}

break;
       } // case 1


    case 2:
       {
 bool studentFound = false;
cout<<endl;
cout<<" Please Enter Student name ";
cin.ignore();
cin.getline(findname,10);
for (int i=0;i<2;i++)
{
 if(strcmpi(findname,std1[i].getname())==0)
{
         cout<<endl;
         cout<<" Student Found ";
         cout<<endl;
            cout << "ID: " << std1[i].getid() << endl;
            cout << "Name: " << std1[i].getname() << endl;
            cout << "Phone Number: " << std1[i].getphnumber() << endl;
            cout << "Father's Name: " << std1[i].getfathername() << endl;
            cout << "Email: " << std1[i].getemail() << endl;
            cout << "Address: " << std1[i].getaddress() << endl;
            cout << endl;
         cout<<endl;
         studentFound = true;
         break;
}
}
if (!studentFound)
    {
        cout << "Sorry, Not Found" << endl;
    }

 break;
       }

    default:
        {
            cout<<endl;
            cout<<" Error! Invalid input ";
            cout<<endl;
        }

  }
inputFile.close();
    }

  else {
        cout << "Unable to open the file for reading." << endl;
    }

}

case 3: // Update Student
     {
      char namefind[20];
      bool studentfound=false;
      cout<<endl;
      ofstream outputFile("student_data.txt",ios::app); // Open the file for writing and don't overwrite
    if (outputFile.is_open())
        {
  cout<<endl;
 cout<<" Please Enter ID which record you want to update: ";
  cin.ignore();
  cin.getline(namefind,20);
for (int i = 0; i < 2; i++)
{

            if(strcmpi(namefind,std1[i].getname())==0)
             {
            cout << "Please Enter New Student ID: ";
            cin >> id1;
            std1[i].setid(id1);
            std1[i].getid();

            cout << "Please Enter New Student name: ";
            cin.ignore();
            cin.getline(name1, 20);
            std1[i].setname(name1);
            std1[i].getname();

            cout << "Please enter New Student Phone Number: ";
            cin >> phnumber1;
            std1[i].setphnumber(phnumber1);
            std1[i].getphnumber();

            cout << "Please enter New Student Father name: ";
            cin.ignore();
            cin.getline(fathername1, 20);
            std1[i].setfathername(fathername1);
            std1[i].getfathername();

            cout << "Please enter New Student Email: ";
            cin.ignore();
            cin.getline(email1, 20);
            std1[i].setemail(email1);
            std1[i].getemail();

            cout << "Please enter New Student Address: ";
            cin.ignore();
            cin.getline(address1, 20);
            std1[i].setaddress(address1);
            std1[i].getaddress();

            cout << endl;

            // Write student data to the file
            outputFile << "Student ID: " << std1[i].getid() << endl;
            outputFile << "Name: " << std1[i].getname() << endl;
            outputFile << "Phone Number: " << std1[i].getphnumber() << endl;
            outputFile << "Father's Name: " << std1[i].getfathername() << endl;
            outputFile << "Email: " << std1[i].getemail() << endl;
            outputFile << "Address: " << std1[i].getaddress() << endl;
            outputFile << endl;
           studentfound=true;
        }



if(!studentfound)
{

    cout<<endl;
    cout<<"Student NOt Found "<<endl;
}

        }
        outputFile.close(); // Close the file after writing
        cout << "Student data has been written to the file." << endl;
    }


    else {
        cout << "Unable to open the file for writing." << endl;
    }

         break;
     }


case 4: //delete Student
{

 cout<<endl;
      ofstream outputFile("student_data.txt",ios::app); // Open the file for writing and don't overwrite
    if (outputFile.is_open())

    {

 int choice=0;
   int findid;
   char findname[10];
  cout<<endl;
  cout<<" 1. Press to Delete student by ID "<<endl;
  cout<<" 2. Press to Delete student by name "<<endl;
  cout<<" Please Enter your choice >>> ";
  cin>>choice;
  switch(choice)
  {

   case 1:
       {

    bool studentFound = false;
   cout<<endl;
   cout<<" Please Enter Student id: ";
   cin>>findid;
 for(int i=0;i<2;i++)
 {
     if(findid==std1[i].getid())
     {
         cout<<endl;
         cout<<" Student Found ";
         cout<<endl;
            cout << "ID: " << std1[i].getid() << endl;
            cout << "Name: " << std1[i].getname() << endl;
            cout << "Phone Number: " << std1[i].getphnumber() << endl;
            cout << "Father's Name: " << std1[i].getfathername() << endl;
            cout << "Email: " << std1[i].getemail() << endl;
            cout << "Address: " << std1[i].getaddress() << endl;
            cout << endl;

         cout<<" Do you Want to Delete this Record? "<<endl;
cout<<endl;
cout<<" 1. FOR YES "<<endl;
cout<<" 2. FOR NO "<<endl;
cin>>userchoice;
switch(userchoice)
{
  case 1: // for delete
      {

    int id1=0;
    char name1[20]={0};
    char fathername1[20]={0};
    long long phnumber1=0;
    char email1[20]={0};
    char address1[30]={0};

    std1[i]. setid(id1);
    std1[i].getid();
    std1[i].setname(name1);
    std1[i].getname();
    std1[i].setfathername(fathername1);
    std1[i].getfathername();
    std1[i].setphnumber(phnumber1);
    std1[i].getphnumber();
    std1[i]. setemail(email1);
    std1[i].getemail();
    std1[i].setaddress(address1);
    std1[i].getaddress();

    // Write student data to the file
            outputFile << "Student ID: " << std1[i].getid() << endl;
            outputFile << "Name: " << std1[i].getname() << endl;
            outputFile << "Phone Number: " << std1[i].getphnumber() << endl;
            outputFile << "Father's Name: " << std1[i].getfathername() << endl;
            outputFile << "Email: " << std1[i].getemail() << endl;
            outputFile << "Address: " << std1[i].getaddress() << endl;
            outputFile << endl;

 cout<<" Record has been Deleted Successfully "<<endl;
break;
      }

  case 2:
      {break;}

  default:
    {
    cout<<endl;
    cout<<" Error! Invalid input ";
    cout<<endl;
    }

}



         cout<<endl;
          studentFound = true;
         break;
        }
 }
 if (!studentFound)
    {cout << "Sorry, Not Found" << endl;}

break;
       } // case 1


    case 2:
       {
 bool studentFound = false;
cout<<endl;
cout<<" Please Enter Student name ";
cin.ignore();
cin.getline(findname,10);
for (int i=0;i<2;i++)
{
 if(strcmpi(findname,std1[i].getname())==0)
{
         cout<<endl;
         cout<<" Student Found ";
         cout<<endl;
            cout << "ID: " << std1[i].getid() << endl;
            cout << "Name: " << std1[i].getname() << endl;
            cout << "Phone Number: " << std1[i].getphnumber() << endl;
            cout << "Father's Name: " << std1[i].getfathername() << endl;
            cout << "Email: " << std1[i].getemail() << endl;
            cout << "Address: " << std1[i].getaddress() << endl;
            cout << endl;


            cout<<" Do you Want to Delete this Record? "<<endl;
cout<<endl;
cout<<" 1. FOR YES "<<endl;
cout<<" 2. FOR NO "<<endl;
cin>>userchoice;
switch(userchoice)
{
  case 1: // for delete
      {

    int id1=0;
    char name1[20]={0};
    char fathername1[20]={0};
    long long phnumber1=0;
    char email1[20]={0};
    char address1[30]={0};

    std1[i]. setid(id1);
    std1[i].getid();
    std1[i].setname(name1);
    std1[i].getname();
    std1[i].setfathername(fathername1);
    std1[i].getfathername();
    std1[i].setphnumber(phnumber1);
    std1[i].getphnumber();
    std1[i]. setemail(email1);
    std1[i].getemail();
    std1[i].setaddress(address1);
    std1[i].getaddress();

   // Write student data to the file
            outputFile << "Student ID: " << std1[i].getid() << endl;
            outputFile << "Name: " << std1[i].getname() << endl;
            outputFile << "Phone Number: " << std1[i].getphnumber() << endl;
            outputFile << "Father's Name: " << std1[i].getfathername() << endl;
            outputFile << "Email: " << std1[i].getemail() << endl;
            outputFile << "Address: " << std1[i].getaddress() << endl;
            outputFile << endl;

 cout<<" Record has been Deleted Successfully "<<endl;
break;
      }

  case 2:
      {break;}

  default:
    {
    cout<<endl;
    cout<<" Error! Invalid input ";
    cout<<endl;
    }

}




         cout<<endl;
         studentFound = true;
         break;
}
}
if (!studentFound)
    {
        cout << "Sorry, Not Found" << endl;
    }

 break;
       }

    default:
        {
            cout<<endl;
            cout<<" Error! Invalid input ";
            cout<<endl;
        }

  }
outputFile.close();
    }

  else {
        cout << "Unable to open the file for reading." << endl;
    }

}













case 5:  // show all student
     {

ifstream inputFile("student_data.txt",ios::in);

 if (inputFile.is_open()) {
  for (int i = 0; i < 2; i++) {
            cout << "Student " << i + 1 << ":\n";
            cout << "ID: " << std1[i].getid() << endl;
            cout << "Name: " << std1[i].getname() << endl;
            cout << "Phone Number: " << std1[i].getphnumber() << endl;
            cout << "Father's Name: " << std1[i].getfathername() << endl;
            cout << "Email: " << std1[i].getemail() << endl;
            cout << "Address: " << std1[i].getaddress() << endl;
            cout << endl;
        }
    inputFile.close();
 }
    else {
        cout << "Unable to open the file for reading." << endl;
    }



         break;
     }


 case 6:
     {
         break;
     }



    default:
        {
            cout<<endl;
            cout<<" Error! Invalid input ";
            cout<<endl;
        }





}
 }

    return 0;
}
