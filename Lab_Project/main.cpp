#include<bits/stdc++.h>
#include "Course.h"
#include "Result.h"
#include "Teacher.h"
#include "Student.h"

using namespace std;

void intro()
{
    Teacher t;
    Result *bptr;
    Student s;
    bptr=&s;
    cout<<"CHOOSE YOUR OPTION: 1.STUDENT  2.TEACHER\n";
    int n;
    cin>>n;
    switch(n)
    {
        case 1:bptr->sshow_option();
        break;

        case 2:
            cin>>t;//.................operator overloading with friend function
            if(t.varify()) t.tshow_option();
            else cin>>t;
        break;
        default:
            cout<<"PLEASE ENTER A VALID CHOISE: \n";
            intro();
}
}
int main()
{
    cout<<"KHULNA UNIVERSITY OF ENJINEERING & TECHNOLOGY\n\n"<<"DEPARTMENT OF CSE\n";
    intro();
    return 0;
}
