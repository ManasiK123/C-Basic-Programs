/* Write a program to declare a various variable for personal deatils like name,age,address.
phone number,blood group ,gender and print it with a proper message.*/

#include <iostream>
using namespace std;
int main()
{
char name[30] , ad[100] , gender[10] , bg[30];
int age,phonenumber;
cout<<"Enter Your Name - ";
cin>>name;

cout<<"Enter Your age - ";
cin>>age;

cout<<"Enter Your Address - ";
cin>>ad;

cout<<"Enter Your Phone number -  ";
cin>>phonenumber;

cout<<"Enter Your Gender - ";
cin>>gender;

cout<<"Enter Your Blood Group - ";
cin>>bg;

cout<<endl<<endl<<endl<<endl<<endl;

cout<<" YOUR PERSONAL DETAILS ARE :" <<endl <<endl;

cout<<"Your Name is : " << name << endl;
cout<<"Your Age is : " << age << endl;
cout<<"Your Address is : " << ad << endl;
cout<<"Your Phone Number is : " << phonenumber << endl;
cout<<"Your Blood Group is : " << bg ;

}
