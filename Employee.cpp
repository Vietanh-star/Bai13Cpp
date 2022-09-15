#include"Employee.h"

void Employee::insert(){
    cout << "--------------------------------------" << endl;
    cout << "Personnal infomation" << endl;
    cout << "-  Full-name :  " << flush;
    getline(cin>>ws,full_name);
    cout << "-  ID        :  " << flush;
    cin >> ID;
    cout << "-  Birthday  :  " << flush;
    cin >> day; cout << " / ";
    cin >> month ; cout << " / ";
    cin >> year;
    cout << "-  Phone     :  " << flush;
    cin >> phone;
    cout << "-  Email     :  " << flush;
    cin >> email;    
}

void Employee::showMe(){
    cout << "--------------------------------" << endl;
    if(Employee_type == 0)      cout <<"This is 'Experience' employee \n" << endl;
    else if(Employee_type == 1) cout <<"This is 'Fresher' employee \n" << endl;
    else if(Employee_type == 2) cout <<"This is 'Intern' employee \n" << endl;
    cout << "Personnal infomation" << endl;
    cout << "-  Full-name :  " << full_name << endl;
    cout << "-  ID        :  " << ID << endl;
    cout << "-  Birthday  :  " << day << " / " << month << " / " << year << endl;
    cout << "-  Phone     :  " << phone << endl;
    cout << "-  Email     :  " << email << endl;
}