#include"System.h"

int main(){                 // g++ -o main.exe main.cpp System.cpp Employee.cpp Experience.cpp Fresher.cpp Intern.cpp
    int choise = 0;
    System E;
    while (1)
    {
        cout << "Enter you choise\n" << endl;
        cout << "1. Add employee" << endl;
        cout << "2. Modify information employee" << endl;
        cout << "3. Find Experience employee" << endl;
        cout << "4. Find Fresher employee" << endl;
        cout << "5. Find Intern employee" << endl;
        cout << "6. Quit" << endl;
        cout << endl;
        cout << "Enter : " << flush;
        cin >> choise;
        switch (choise)
        {
        case 1:
            E.insert_employee();
            break;
        case 2:
            E.Modify_info();
            break;
        case 3:
            E.find_Experience();
            break;
        case 4:
            E.find_Fresher();
            break;
        case 5:
            E.find_Intern();
            break;
        case 6:
            E.Quit();
            break;
        default:
            break;
        }
    }
    // thu cho main 2
    // them cho ucu2

    return 0;
}