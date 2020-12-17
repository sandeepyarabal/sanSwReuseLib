#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef struct 
{
    string name;
    string address;
}employee;

class PayRolDataBase
{
    public:
    employee* getEmployeeData(int empId)
    {
      return itsEmployees[empId]; 
    }
    void addEmployeeData(int empId, employee * e)
    {
        itsEmployees[empId]= e;
    }
    
    private:
    map<int , employee*> itsEmployees;
};

using namespace std;

int main()
{
    employee E1 = {"sandeep","400camelotCt"};
    employee* e1;
    e1 = &E1;

    employee E2 = {"shilpa","800camelotCt"};
    employee* e2;
    e2 = &E2;
    
    employee* d1;
    employee* d2;
    PayRolDataBase pdb;
    pdb.addEmployeeData(1,e1);
    pdb.addEmployeeData(2,e2);
    d1=pdb.getEmployeeData(1);
    d2=pdb.getEmployeeData(2);
    cout<<d1->name<<'\n'<< d1->address<<'\n';
    cout<<d2->name<<'\n'<< d2->address<<'\n';
    cout<<"Hello World";

    return 0;
}
