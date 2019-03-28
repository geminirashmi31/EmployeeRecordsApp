#include "pch.h"
#include "Employee.h"
#include <iostream>

using namespace std;

namespace EmployeeRecordsApp {
	//implementing constructor to the class
	Employee::Employee(const std::string& firstName, const std::string& lastName) :
		mFirstName(firstName), mLastName(lastName)
	{

	}

	void Employee::hire() {
		mHired = true;
	}

	void Employee::fire() {
		mHired = false;
	}

	int Employee::getSalary() const {
		return mSalary;
	}

	void Employee::setSalary(int newSalary) {
		mSalary = newSalary;
	}
		 
	const std::string& Employee::getFirstName() const {
		return mFirstName;
	}

	void Employee::setFirstName(const std::string& firstName) {
		mFirstName = firstName;
	}

	const std::string& Employee::getLastName() const {
		return mLastName;
	}

	void Employee::setLastName(const std::string& lastName) {
		mLastName = lastName;
	}

	bool Employee::isHired() const {
		return mHired;
	}

	void Employee::promote(int raiseAmount) {
		setSalary(getSalary() + raiseAmount);
	}

	void Employee::demote(int demeritAmount) {
		setSalary(getSalary() - demeritAmount);
	}

	int Employee::getEmployeeNumber() const {
		return mEmployeeNumber;
	}

	void Employee::setEmployeeNumber(int employeeNumber) {
		mEmployeeNumber = employeeNumber;
	}

	void Employee::display() const {
		cout << "Employee" << getLastName() << "," << getFirstName() << endl;
		cout << "-----------------------------------" << endl;
		cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
		cout << "Employee Number: " << getEmployeeNumber() << endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << endl;
	}
}