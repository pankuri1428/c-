#include<iostream>
using namespace std;
int main()
{
	char name[100];
	float hindi,english,maths,science,social,total,age,avg;
	int rollno,clas,i,n;
	cout<<"ENTER NUMBER OF STUDENTS OF YOUR CLASS FOR MAKING REPORT FILE\n";
	cin>>n;
	cout<<"---------------------------STUDENTS REPORT CARD FILE------------------------------";
for(i =0;i<=n;i++)
{

	
    cout<<"\n enter name of the student\n";
    cin>>name;
	 cout<<"\n enter class of the student\n";
    cin>>clas;
    
    cout<<"enter age of the student\n";
    cin>>age;
    cout<<"enter roll no. of the student\n";
    cin>>rollno;
    cout<<"  MAXIMUM MARKS IS 100 \n\n";
    cout<<"*---------------please eneter the marks o all subjects one by one------------------------------*\n\n";
    cout<<"enter hindi subject marks\n";
    cin>>hindi;
	cout<<"enter english subject marks\n";
	cin>>english;

    cout<<"enter maths subject marks\n";
    cin>>maths;
    cout<<"enter science subject marks\n";
     cin>>science;
    cout<<"enter social subject marks\n\n";
     cin>> social;
     
     if((hindi>=33)&&(science>=33)&&(english>=33)&&(maths>=33)&&(social>=33))
     {
	 
     total=hindi+science+maths+social+english;
     	cout<<"---------------------------CONGRATULATIONS---------------------------\n\n";
     	cout<<"STUDENT IS AFFILATED TO NEXT CLASS\n";
     	avg=(total/600)*100;
     	cout<<"   PERCENTAGE   : "      << avg;
 }
	 else
	 {
	 	cout<<"    STUDENT IS FAIL   ";
		 }	}
		 return 0;
}
