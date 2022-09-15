#include"Employee.h"

class Fresher : public Employee{
    private:
        int Graduation_date;
        string Graduation_rank, Education;
    public:
        void insert();
        void showMe();
        ~Fresher(){}     // Destructor
};
