#include<bits/stdc++.h>
using namespace std;
int roll,stn,nn,sroll,year,croll,mm,lg,rroll;
 double c1,c2,c3,c4,c5,cg,l1,l2,l3,l4,l5,result;
class Result
{

public:
    double cgpa;

    void file1();
    void file2();
    void file3();
    void file4();
    virtual void sshow_option()
    {

    }
};

void Result::file1()
{
    fstream f1;
    f1.open("f1input.csv",ios::app);

    cout<<"student number to add: ";
    cin>>stn;
    nn=0;
    cout<<"\nEnter the values for roll,course1,course2,course3,course4,course5,lab1,lab2,lab3,lab4\n";

    while(nn<stn)
    {
         cout<<"student no "<<nn+1<<": ";
         cin>>roll;cin>>c1>>c2>>c3>>c4>>c5>>l1>>l2>>l3>>l4;
         Course first_year(c1,c2,c3,c4,c5,l1,l2,l3,l4);
         cgpa=first_year.countcgpa1();
         f1<<roll<<","<<c1<<","<<c2<<","<<c3<<","<<c4<<","<<c5<<","<<l1<<","<<l2<<","<<l3<<","<<l4<<","<<cgpa<<endl;
         nn++;
}
cout<<"\n\nSuccessfully Added.\n";
cout<<"Anything more?\n";
}
void Result::file2()
{
    fstream f2;
    f2.open("f2input.csv",ios::app);
     cout<<"student number to add: ";
    cin>>stn;
    nn=0;
    cout<<"\nEnter the values for roll,course1,course2,course3,course4,course5,lab1,lab2,lab3\n";

    while(nn<stn)
    {
         cout<<"student no "<<nn+1<<": ";
         cin>>roll;cin>>c1>>c2>>c3>>c4>>c5>>l1>>l2>>l3;
         Course second_year(c1,c2,c3,c4,c5,l1,l2,l3);
         cgpa=second_year.countcgpa2();
         f2<<roll<<","<<c1<<","<<c2<<","<<c3<<","<<c4<<","<<c5<<","<<l1<<","<<l2<<","<<l3<<","<<cgpa<<endl;
         nn++;
}
cout<<"\n\nSuccessfully Added\n";
cout<<"Anything more?\n";

}
void Result::file3()
{
    fstream f3;
    f3.open("f3input.csv",ios::app);

    cout<<"student number to add: ";
    cin>>stn;
    nn=0;
    cout<<"\nEnter the values for roll,course1,course2,course3,course4,course5,lab1,lab2,lab3,lab4,lab5\n";

    while(nn<stn)
    {
         cout<<"student no "<<nn+1<<": ";
         cin>>roll;cin>>c1>>c2>>c3>>c4>>c5>>l1>>l2>>l3>>l4>>l5;
         Course third_year(c1,c2,c3,c4,c5,l1,l2,l3,l4,l5);
         cgpa=third_year.countcgpa3();
         f3<<roll<<","<<c1<<","<<c2<<","<<c3<<","<<c4<<","<<c5<<","<<l1<<","<<l2<<","<<l3<<","<<l4<<","<<l5<<","<<cgpa<<endl;
         nn++;
}
cout<<"\n\nSuccessfully Added\n";
cout<<"Anything more?\n";


}
void Result::file4()
{
    fstream f4;
    f4.open("f4input.csv",ios::app);

    cout<<"student number to add: ";
    cin>>stn;
    nn=0;
    cout<<"\nEnter the values for roll,course1,course2,course3,course4,course5,lab1,lab2,lab3,lab4,lab5\n";

    while(nn<stn)
    {
         cout<<"student no "<<nn+1<<": ";
         cin>>roll;cin>>c1>>c2>>c3>>c4>>c5>>l1>>l2>>l3>>l4>>l5;
         Course fourth_year(c1,c2,c3,c4,c5,l1,l2,l3,l4,l5);
         cgpa=fourth_year.countcgpa3();
         f4<<roll<<","<<c1<<","<<c2<<","<<c3<<","<<c4<<","<<c5<<","<<l1<<","<<l2<<","<<l3<<","<<l4<<","<<l5<<","<<cgpa<<endl;
         nn++;
}
cout<<"\n\nSuccessfully Added\n";
cout<<"Anything more?\n";

}

