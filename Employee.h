#include<iostream>
#include<string>
#include<map>
#include<utility>

using namespace std;
#ifndef EMPLOYEE
#define EMPLOYEE
class Employee{
    protected:
        int ID,                         // ID employee
            phone,                      // phone call
            day,month,year;             // Birth day
        int Employee_type;              // 0. Experience    1. Fresher   2. Intern 
        string email, full_name;             
    public:
        int get_ID(){ return this->ID;}
        int get_type(){ return this->Employee_type;}
        virtual void insert();
        virtual void showMe();
        virtual ~Employee(){}           // Virtual destructor
};


#endif