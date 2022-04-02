class Teacher:public Result
{
public:
    string teacher_id;
    bool varify()
    {
        {
            string temp;
            fstream fin;
            fin.open("teacher.txt",ios::in);
            while(fin>>temp)
            {
                if(temp==teacher_id)
                {
                    {
                        fin.close();
                        cout<<"LOGIN SUCCESSFULL\n\n\n";
                        return 1;
                        break;
                    }
                }
            }
            {
                cout<<"Please enter a valid id\n";
                return 0;
            }

        }

    }
    void tshow_option()
    {

        cout<<"CHOOSE YOUR OPTION: 1.CREATE RESULT 2.EXIT\n";
        int a;
        cin>>a;
        switch(a)
        {
        case 1:
            create_result();
            break;
        case 2:
            break;
        default:
            cout<<"PLEASE ENTER A VALID CHOISE\n\n";
            tshow_option();
        }
    }

    void create_result();
    friend void operator>>(istream &,Teacher & );
};
void operator >>(istream &in,Teacher &t)
{
    cout<<"\nEnter ID: ";
    in>>t.teacher_id;
}
void Teacher::create_result()
{
    cout<<"CREATE RESULT FOR FIRST SEMISTER OF 1.First year 2.Second Year 3.Third Year 4.Fourth Year\n";
    int cr;
    cin>>cr;
    switch(cr)
    {
    case 1:
        file1();
        tshow_option();
        break;

    case 2:
        file2();
        tshow_option();
        break;

    case 3:
        file3();
        tshow_option();
        break;

    case 4:
        file4();
        tshow_option();
        break;

    default:
        cout<<"ENTER A VALID CHOISE\n\n";
        create_result();
    }
}
