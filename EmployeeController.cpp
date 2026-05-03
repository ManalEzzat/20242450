#include "EmployeeController.h"

EmployeeController::EmployeeController(Employee* m, EmployeeView* v)
    : model(m), view(v) {
}

void EmployeeController::setEmployeeName(string name) {
    model->setName(name);
}

void EmployeeController::setEmployeeEmail(string email) {
    model->setEmail(email);
}

void EmployeeController::setEmployeeId(int id) {
    model->setID(id);
}

string EmployeeController::getEmployeeName() {
    return model->getName();
}

string EmployeeController::getEmployeeEmail() {
    return model->getEmail();
}

int EmployeeController::getEmployeeId() {
    return model->getID();
}

void EmployeeController::updateView() {
    view->printEmployeeDetails(model);
}
