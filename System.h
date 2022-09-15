#include"Experience.h"
#include"Fresher.h"
#include"Intern.h"

class System
{
private:
    map<int, Employee*> Employees;  // all employee is contained in here.
    int Employee_count;             // each employee added then count ++
public:
    void insert_employee();
    void Modify_info();
    void find_Experience();
    void find_Fresher();
    void find_Intern();
    void Quit();
};


    
