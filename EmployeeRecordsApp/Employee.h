#pragma once
#include <string>

namespace EmployeeRecordsApp {

	class Employee
	{
	public:
		Employee() = default;
		Employee(const std::string& firstName, const std::string& lastName); //& is pointer/reference

		//getters and setters
		int getSalary() const;
		void setSalary(int newSalary);

		int getEmployeeNumber() const;
		void setEmployeeNumber(int employeeNumber);

		bool isHired() const;

		const std::string& getFirstName() const;
		void setFirstName(const std::string& firstName);

		const std::string& getLastName() const;
		void setLastName(const std::string& lastName);

		void hire();
		void fire();
		void promote(int raiseAmount = 100);
		void demote(int demeritAmount = 100);
		void display() const;


	private:
		std::string mFirstName;
		std::string mLastName;
		int mEmployeeNumber = -1;
		int mSalary = 30000;
		bool mHired = false;
	};
}
