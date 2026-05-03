#ifndef EMPLOYEECONTROLLER_H
#define EMPLOYEECONTROLLER_H

#include "Employee.h" 

class EmployeeController {
private:
    Employee* model;
    EmployeeView* view;

public:
    EmployeeController(Employee* m, EmployeeView* v);

    void setEmployeeName(string name);
    void setEmployeeEmail(string email);
    void setEmployeeId(int id);

    string getEmployeeName();
    string getEmployeeEmail();
    int getEmployeeId();

    void updateView();
};

#endif
