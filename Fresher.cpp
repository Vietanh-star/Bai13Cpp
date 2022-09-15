#include"Fresher.h"

void Fresher::insert(){
    Employee::insert();
    Employee_type = 1;
    cout << "Work information" << endl;
    cout << "   Graduation date :  " << flush;
    cin >> Graduation_date;
    cout << "   Graduation rank :  " << flush;
    getline(cin>>ws,Graduation_rank);
    cout << "   Education       :  " << flush;
    getline(cin>>ws,Education);
}

void Fresher::showMe(){
    Employee::showMe();
    cout << "Work information" << endl;
    cout << "   Graduation date :  " << Graduation_date << endl;
    cout << "   Graduation rank :  " << Graduation_rank << endl;
    cout << "   Education       :  " << Education << endl;
}