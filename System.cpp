#include"System.h"

void System::insert_employee(){
    int choise;
    cout << "Choose employee's type : " << endl;
    cout << "1 . Experience\n2. Fresher\n3. Intern\n4. Exit" << endl;
    cout << "Enter : " << flush;
    cin >> choise;
    switch (choise)
    {
    case 1:
        {
            system("cls");
            Employee* e = new Experience;
            e->insert();
            Employees.insert(pair<int,Employee*>(e->get_ID(), e));
            cout << "\nComplete insert employee information ! \n" << endl;
            system("pause");
            system("cls");
        }
        break;
    case 2:
        {
            system("cls");
            Employee* e = new Fresher;
            e->insert();
            Employees.insert(pair<int,Employee*>(e->get_ID(), e));
            cout << "\nComplete insert employee information ! \n" << endl;
            system("pause");
            system("cls");
        }
        break;
    case 3:
        {
            system("cls");
            Employee* e = new Intern;
            e->insert();
            Employees.insert(pair<int,Employee*>(e->get_ID(), e));
            cout << "\nComplete insert employee information ! \n" << endl;
            system("pause");
            system("cls");
        }
        break;
    default:
        break;
    }
}

void System::Modify_info(){
    int ID_need, choise;
    system("cls");
    cout << "Enter employee's ID : " << flush;
    cin >> ID_need;
    system("cls");
    if(Employees.find(ID_need)->first == ID_need){
        cout << "1. Modify employee\n2. Delete employee" << endl;
        cout << "Enter : " << flush;
        cin >> choise;
        if(choise == 1) {
            Employees.at(ID_need)->insert();    // or  Employees.find(ID_need)->second->insert()
            cout << "\nCompelte modify info employee!\n" << endl;
        }
        if(choise == 2) {
            Employees.erase(Employees.find(ID_need));
            cout << "\nCompelte delete info employee!\n" << endl;
        }
    }else{
        cout << "\nCan't find this ID !\n" << endl;
    }
    system("pause");
    system("cls");
}

void System::find_Experience(){
    system("cls");
    for(auto itr_ex = Employees.begin(); itr_ex != Employees.end(); itr_ex++){
        if(itr_ex->second->get_type() == 0){
            itr_ex->second->showMe();
        }
    }
    system("pause");
    system("cls");
}

void System::find_Fresher(){
    system("cls");
    for(auto itr_ex = Employees.begin(); itr_ex != Employees.end(); itr_ex++){
        if(itr_ex->second->get_type() == 1){
            itr_ex->second->showMe();
        }
    }
    system("pause");
    system("cls");
}

void System::find_Intern(){
    system("cls");
    for(auto itr_ex = Employees.begin(); itr_ex != Employees.end(); itr_ex++){
        if(itr_ex->second->get_type() == 2){
            itr_ex->second->showMe();
        }
    }
    system("pause");
    system("cls");
}

void System::Quit(){
    exit(0);
}