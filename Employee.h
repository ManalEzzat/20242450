#pragma
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <srting>
using namespace std;
class Employee{
	int ID;
	string Name, Email;
public:
	Employee(int id, string name, string email);
	void setName(string name);
	void setEmail(string email);
	void setID(int id);
	string getName();
	string getEmail();
	int getID();
	
};
class EmployeeView {
public:
	void printEmployeeDetails(Employee* e);
};
#endif 
