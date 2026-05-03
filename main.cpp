#include <iostream>
#include <string>
#include "Employee.h"
#include "EmployeeController.h"

using namespace std;

int main() {
    Employee* model = new Employee(1, "manal ezzat", "manal@email.com");

    EmployeeView* view = new EmployeeView();

    EmployeeController controller(model, view);

    cout << "--- Current Employee Data ---" << endl;
    controller.updateView();

    controller.setEmployeeName("ahmed ezzat");
    controller.setEmployeeEmail("ahmed@email.com");
    controller.setEmployeeId(2024);

    cout << "\n--- Updated Employee Data ---" << endl;
    controller.updateView();

    delete model;
    delete view;

    return 0;
}
