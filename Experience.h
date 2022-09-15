#include"Employee.h"

class Experience: public Employee{
    private:
        int exp_in_year;
        string Pro_skill;
    public:
        void insert();
        void showMe();
        ~Experience(){}       // Destructor
};
