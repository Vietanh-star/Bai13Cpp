#include"Intern.h"

void Intern::insert(){
    Employee::insert();
    Employee_type = 2;
    cout << "Work information" << endl;
    cout << "   Majors           :  " << flush;
    getline(cin>>ws,Majors);
    cout << "   University       :  " << flush;
    getline(cin>>ws,University_name);
    cout << "   Semester         :  " << flush;
    cin  >> Semester;
}

void Intern::showMe(){
    Employee::showMe();
    cout << "Work information" << endl;
    cout << "   Majors           :  " << Majors << endl;
    cout << "   University       :  " << University_name << endl;
    cout << "   Semester         :  " << Semester << endl;
}