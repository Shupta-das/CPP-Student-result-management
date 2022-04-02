#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

string pass,spass,line,word,temp;


class Student:public Result
{
    public:
        int student_roll,year;string password;
        void sshow_option()
        {
            cout<<"CHOOSE YOUR OPTION : 1.Login 2.Register 3.Exit\n";
            cin>>nn;
            /*switch(nn)
            {
                case 1:login_option();
                    break;
                case 2: add_student();
                    break;
                case 3:
                    break;
                default:
                    cout<<"Enter a valid option!\n";
                    sshow_option();
            }*/
            try
            {
                if(nn==1)
                {
                    login_option();
                }
                else if(nn==2)
                {
                    add_student();
                }
                else if(nn==3)
                {
                    throw('e');
                }
                else
                {
                    throw(nn);
                }
            }
            catch(char x)
            {

            }
            catch(int x)
            {
                cout<<"Enter a valid option!\n";
                sshow_option();
            }
        }
    void stid11()
    {
        fstream st1;
        st1.open("student_id1.csv",ios::app);
        cout<<"Enter password: ";
        getpassword();
        st1<<student_roll<<","<<password<<","<<endl;
        st1.close();
    }
    void stid22()
    {
        fstream st2;
        st2.open("student_id2.csv",ios::app);
        cout<<"Enter password: ";
        getpassword();
        st2<<student_roll<<","<<password<<","<<endl;
        st2.close();

    }
    void stid33()
    {
        fstream st3;
        st3.open("student_id3.csv",ios::app);
        cout<<"Enter password: ";
        getpassword();
        st3<<student_roll<<","<<password<<","<<endl;
        st3.close();
    }
    void stid44()
    {
        fstream st4;
        st4.open("student_id4.csv",ios::app);
        cout<<"Enter password: ";
        getpassword();
        st4<<student_roll<<","<<password<<","<<endl;
        st4.close();
    }

        void add_student();
        void show_result();
        void show();
        void login_option();
        void login_varify();
        void reg_varify();
        void getpassword();

};
void Student::show()
{
    fstream fin;
    if(year==1)
    {
        fin.open("f1input.csv",ios::in);
    }
    else if(year==2)
    {
        fin.open("f2input.csv",ios::in);
    }
    else if(year==3)
    {
        fin.open("f3input.csv",ios::in);
    }
    else
    {
        fin.open("f4input.csv",ios::in);
    }
    nn=0;
string tem;vector<string>row;

    while(getline(fin,tem))
    {
        row.clear();
        stringstream s(tem);
        while(getline(s,word,','))
        {
            row.push_back(word);
        }
        croll=stoi(row[0]);
        if(student_roll==croll)
        {
            nn=1;
            if(year==1)
            {
                cout<<endl;cout<<"ROLL: "<<row[0]<<endl;cout<<endl;cout<<endl;
                cout<<"Course results are: \n";cout<<endl;
                cout<<"Course1 : "<<row[1]<<endl;
                cout<<"Course2 : "<<row[2]<<endl;
                cout<<"Course3 : "<<row[3]<<endl;
                cout<<"Course4 : "<<row[4]<<endl;
                cout<<"Course5 : "<<row[5]<<endl;cout<<endl;cout<<endl;
                cout<<"Lab results are: \n";cout<<endl;
                cout<<"Lab1 :"<<row[6]<<endl;cout<<"Lab2 :"<<row[7]<<endl;cout<<"Lab3 :"<<row[8]<<endl;cout<<"Lab4 :"<<row[9]<<endl;cout<<endl;
                cout<<"CG : ";
                 for(int d=0;d<4;d++)
                {
                    if(row[10][0]=='4')
                    {
                        cout<<"4.00"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<row[10][d];
                    }
                }

            }
            else if(year==2)
            {
                cout<<endl;cout<<"ROLL: "<<row[0]<<endl;cout<<endl;cout<<endl;
                cout<<"Course results are: \n";cout<<endl;
                cout<<"Course1 : "<<row[1]<<endl;
                cout<<"Course2 : "<<row[2]<<endl;
                cout<<"Course3 : "<<row[3]<<endl;
                cout<<"Course4 : "<<row[4]<<endl;
                cout<<"Course5 : "<<row[5]<<endl;cout<<endl;cout<<endl;
                cout<<"Lab results are: \n";cout<<endl;
                cout<<"Lab1 :"<<row[6]<<endl;cout<<"Lab2 :"<<row[7]<<endl;cout<<"Lab3 :"<<row[8]<<endl;cout<<endl;
                cout<<"CG : ";
                for(int d=0;d<4;d++)
                {
                    if(row[9][0]=='4')
                    {
                        cout<<"4.00"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<row[9][d];
                    }
                }
            }
            else if(year==3)
            {
                cout<<endl;cout<<"ROLL: "<<row[0]<<endl;cout<<endl;cout<<endl;
                cout<<"Course results are: \n";cout<<endl;
                cout<<"Course1 : "<<row[1]<<endl;
                cout<<"Course2 : "<<row[2]<<endl;
                cout<<"Course3 : "<<row[3]<<endl;
                cout<<"Course4 : "<<row[4]<<endl;
                cout<<"Course5 : "<<row[5]<<endl;cout<<endl;cout<<endl;
                cout<<"Lab results are: \n";cout<<endl;
                cout<<"Lab1 :"<<row[6]<<endl;cout<<"Lab2 :"<<row[7]<<endl;cout<<"Lab3 :"<<row[8]<<endl;cout<<"Lab4 :"<<row[9]<<endl;cout<<"Lab5 :"<<row[10]<<endl;cout<<endl;
                cout<<"CG : ";
                for(int d=0;d<4;d++)
                {
                    if(row[11][0]=='4')
                    {
                        cout<<"4.00"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<row[11][d];
                    }
                }
            }
            else if(year==4)
            {
                cout<<endl;cout<<"ROLL: "<<row[0]<<endl;cout<<endl;cout<<endl;
                cout<<"Course results are: \n";cout<<endl;
                cout<<"Course1 : "<<row[1]<<endl;
                cout<<"Course2 : "<<row[2]<<endl;
                cout<<"Course3 : "<<row[3]<<endl;
                cout<<"Course4 : "<<row[4]<<endl;
                cout<<"Course5 : "<<row[5]<<endl;cout<<endl;cout<<endl;
                cout<<"Lab results are: \n";cout<<endl;
                cout<<"Lab1 :"<<row[6]<<endl;cout<<"Lab2 :"<<row[7]<<endl;cout<<"Lab3 :"<<row[8]<<endl;cout<<"Lab4 :"<<row[9]<<endl;cout<<"Lab5 :"<<row[10]<<endl;cout<<endl;
                cout<<"CG : ";
                 for(int d=0;d<4;d++)
                {
                    if(row[11][0]=='4')
                    {
                        cout<<"4.00"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<row[11][d];
                    }
                }
            }
            cout<<endl<<endl<<endl<<endl;

            sshow_option();

        }
    }
    if(nn==0)
    {
        cout<<"Result is not uploaded,please try again later!\n";
        cout<<endl<<endl<<endl<<endl;
        sshow_option();
    }

}
void Student::show_result()
{
     cout<<"ENTER ANY OPTION: 1.SHOW RESULT 2.EXIT\n";
     int op;
     cin>>op;
     switch(op)
     {
         case 1:show();
         break;
         case 2: break;
         default:
            cout<<"Enter any valid option\n";
            show_result();
     }
}
void Student::login_option()
{
    cout<<"Enter your recent year(in integer value): ";cin>>year;
    cout<<"Enter your roll: ";cin>>student_roll;
    cout<<"Enter your password: ";getpassword();
    switch(year)
    {
        case 1:login_varify();
        break;
        case 2:login_varify();
        break;
        case 3:login_varify();
        break;
        case 4:login_varify();
        break;
        default:
            cout<<"Please enter a valid year";
            login_option();
    }

}
void Student::getpassword()
{
    string str;
    for(int k=0;k<100;k++)
    {
        char ch=_getch();
        if(ch!=8&&ch!=13)
        {
            cout<<"*";
            str+=ch;
        }
        else if(ch==8)
        {
            cout<<"\b\b";
            k--;
            if(str.size())str.erase(str.end()-1);
        }
        else if(ch==13)
        {
            cout<<endl;
            break;
        }
    }
    password=str;
}
void Student::login_varify()
{
    fstream fin;
    if(year==1)
    {
        fin.open("student_id1.csv",ios::in);
    }
    else if(year==2)
    {
        fin.open("student_id2.csv",ios::in);
    }
    else if(year==3)
    {
        fin.open("student_id3.csv",ios::in);
    }
    else
    {
        fin.open("student_id4.csv",ios::in);
    }
    lg=0;
    vector<string>row;

    while(fin>>temp)
    {
        row.clear();
        stringstream s(temp);
        while(getline(s,word,','))
        {
            row.push_back(word);
        }
        roll=stoi(row[0]);
        pass=row[1];
        if(roll==student_roll)
        {
            if(pass==password)
            {
                fin.close();
                lg=1;
                cout<<"LOGIN SUCCESSFULL\n";
                show_result();
                break;
            }
        }
    }
    if(lg==0)
    {
        cout<<"\n\nIf you are not registered yet,please register or enter a valid password\n\n";
        sshow_option();
    }

}

void Student::add_student()
{
    cout<<"YOU ARE A STUDENT OF 1.First year 2.Second year 3.Third year 4.Fourth year\n";
    cin>>year;
    switch(year)
    {
    case 1:
        cout<<"Enter your roll: ";cin>>student_roll;
        reg_varify();
        if(mm==0)
        {
            stid11();show_result();
        }
        break;

    case 2:
         cout<<"Enter your roll: ";cin>>student_roll;
         reg_varify();
        if(mm==0)
        {
            stid22();show_result();
        }
        break;

    case 3:
        cout<<"Enter your roll: ";cin>>student_roll;
        reg_varify();
        if(mm==0)
        {
            stid33();show_result();
        }
        break;

    case 4:
        cout<<"Enter your roll: ";cin>>student_roll;
        reg_varify();
        if(mm==0)
        {
            stid44();show_result();
        }
        break;

    default:
        cout<<"ENTER A VALID CHOISE\n";
        add_student();
    }

}
void Student::reg_varify()
{
    fstream fin;
    if(year==1)
    {
        fin.open("student_id1.csv",ios::in);
    }
    else if(year==2)
    {
        fin.open("student_id2.csv",ios::in);
    }
    else if(year==3)
    {
        fin.open("student_id3.csv",ios::in);
    }
    else
    {
        fin.open("student_id4.csv",ios::in);
    }
    mm=0;
    vector<string>row;

    while(fin>>temp)
    {
        row.clear();
        stringstream s(temp);
        while(getline(s,word,','))
        {
            row.push_back(word);
        }
        rroll=stoi(row[0]);
        if(student_roll==rroll)
        {
            cout<<"You are already registered! Please go to login option.\n\n";
            mm=1;
            login_option();

        }
    }

}
