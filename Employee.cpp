#include "Employee.h"
#include <iostream> 
#include <string> 
using namespace std;
Employee::Employee(int id, string name, string email):
ID(id), Name(name), Email(email){}
void Employee::setName(string name) {
	Name = name;
}
void Employee::setEmail(string email) {
	Email = email;
}
void Employee::setID(int id) {
	ID = id;
}
string Employee::getName() {
	return Name;
}
string Employee::getEmail() {
	return Email;
}
int Employee::getID() {
	return ID;
}
void EmployeeView::printEmployeeDetails(Employee* e) {
	cout << "Employee Details: " << endl;
	cout << "ID: " << e->getID() << endl;
	cout << "Name: " << e->getName() << endl;
	cout << "Email: " << e->getEmail() << endl;
}
