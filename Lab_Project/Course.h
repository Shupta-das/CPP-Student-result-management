class Course
    {

public:
    double course1,course2,course3,course4,course5,lab1,lab2,lab3,lab4,lab5,cg;
    Course(){}

    Course(double c1,double c2,double c3,double c4,double c5,double l1,double l2,double l3,double l4)
    {
        course1=c1;course2=c2;course3=c3;course4=c4;course5=c5;lab1=l1;lab2=l2;lab3=l3;lab4=l4;
    }
    Course(double c1,double c2,double c3,double c4,double c5,double l1,double l2,double l3)
    {
        course1=c1;course2=c2;course3=c3;course4=c4;course5=c5;lab1=l1;lab2=l2;lab3=l3;
    }
    Course(double c1,double c2,double c3,double c4,double c5,double l1,double l2,double l3,double l4,double l5)
    {
        course1=c1;course2=c2;course3=c3;course4=c4;course5=c5;lab1=l1;lab2=l2;lab3=l3;lab4=l4;lab5=l5;
    }


    double countcgpa1();
    double countcgpa2();
    double countcgpa3();

};
double Course::countcgpa1()
{
     cg=(3*course1 +3*course2 + 3*course3 + 3*course4 + 3*course5 + 1.5*lab1 + 1.5*lab2 + 1.5*lab3 + 1.5*lab4)/21;
    return cg;
}
double Course::countcgpa2()
{
    cg=(3*course1 +3*course2 + 3*course3 + 3*course4 + 3*course5 + 1.5*lab1 + 1.5*lab2 + 1.5*lab3)/19.5;
    return cg;
}
double Course:: countcgpa3()
{
    cg=(3*course1 +3*course2 + 3*course3 + 3*course4 + 3*course5 + 1.5*lab1 + 1.5*lab2 + 1.5*lab3 + 1.5*lab4+1.5*lab5)/22.5;
    return cg;
}

