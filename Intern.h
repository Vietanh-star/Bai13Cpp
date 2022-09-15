#include"Employee.h"

class Intern : public Employee{
    private:
        string Majors, University_name;
        int Semester;
    public:
        void insert();
        void showMe();
        ~Intern(){}      // Destructor
};
