/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 4 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class.
  Update: Benefit class added. iEmployee abstract class added.*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
#include "Benefit.h"

Employee::Employee() //no-arg default constructor
{
	firstName = "Not Given";
	lastName = "Not Given";
	gender = 'U';
	dependents = 0;
	annualSalary = 20000;
	numEmployees++;
}

Employee::Employee(string first, string last, char gen, int dep, double salary, Benefit ben) : benefit(ben) //constructor with arguments
{
	firstName = first;
	lastName = last;
	gender = gen;
	dependents = dep;
	annualSalary = salary;
	numEmployees++;
}

double Employee::calculatePay()
{
	return annualSalary / 52;
}

void Employee::displayEmployee()
{
	cout << "\nEmployee Information" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Gender: " << gender << endl;
	cout << "Dependents: " << dependents << endl;
	cout << "Annual Salary: $" << setprecision(2) << showpoint << fixed << annualSalary << endl;
	cout << "Weekly Salary: $" << setprecision(2) << showpoint << fixed << calculatePay() << endl;
	benefit.displayBenefits();
}

string Employee::getFirstName()
{
	return firstName;
}

void Employee::setFirstName(string first)
{
	firstName = first;
}

string Employee::getLastName()
{
	return lastName;
}

void Employee::setLastName(string last)
{
	lastName = last;
}

char Employee::getGender()
{
	return gender;
}

void Employee::setGender(char gen)
{
	gender = gen;
}

int Employee::getDependents()
{
	return dependents;
}

void Employee::setDependents(int dep)
{
	dependents = dep;
}

void Employee::setDependents(string dep)
{
	dependents = stoi(dep); //string is converted to int.
}

double Employee::getAnnualSalary()
{
	return annualSalary;
}

void Employee::setAnnualSalary(double salary)
{
	annualSalary = salary;
}

void Employee::setAnnualSalary(string salary)
{
	annualSalary = stod(salary); //string is converted to double.
}

int Employee::numEmployees = 0; //initialize static variable numEmployees to 0.
int Employee::getNumEmployees() //static member function
{
	return numEmployees;
}


