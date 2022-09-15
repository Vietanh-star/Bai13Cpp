#include"Experience.h"

void Experience::insert(){
    Employee::insert();
    Employee_type = 0;
    cout << "Work information" << endl;
    cout << "-  Experience year  :  " << flush;
    cin >> exp_in_year;
    cout << "-  Pro_skill        :  " << flush;
    getline(cin>>ws,Pro_skill);
}

void Experience::showMe(){
    Employee::showMe();
    cout << "Work information" << endl;
    cout << "-  Experience year  :  " << exp_in_year << endl;
    cout << "-  Pro_skill        :  " << Pro_skill << endl;
}