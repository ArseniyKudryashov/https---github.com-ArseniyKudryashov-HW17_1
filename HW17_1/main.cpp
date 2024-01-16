#include <iostream>
#include <vector>
#include <algorithm>
#include "Worker.h"
using namespace std;

int main()
{
    vector <Worker> employees {
            {"White", 1950, "Manager", 65000, "Higher"},
            {"Green", 1955, "Accountant", 50000, "Secondary"},
            {"Pink", 1960, "Director", 70000, "Higher"},
            {"Yellow", 1985, "Accountant", 60000, "Higher"},
            {"Brown", 1967, "Manager", 80000, "Secondary"}
        };

        int count = 0;
        cout << "Employees older than 60 years:" << endl;
        for (const auto& employee : employees)
        {
            if (2024 - employee.yearBirth > 60)
            {
                cout << "Surname: " << employee.surname << ", Year of birthday: " << employee.yearBirth
                    << ", Job title : " << employee.jobTitle << ", Salary: " << employee.salary
                    << ", Education: " << employee.education << "\n";
                count++;
            }
        }
        cout << endl << "Total employees older than 60 years: " << count << endl;

}
