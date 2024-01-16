#pragma once
#include <iostream>
using namespace std;

class Worker
{
public:
    string surname;
    int yearBirth;
    string jobTitle;
    string salary;
    string education;
    
    
    Worker()
    {
        string surname;
        int yearBirth;
        string jobTitle;
        string salary;
        string education;
    };
    Worker(string surname, int yearBirth, string jobTitle, string salary, string education)
    {
        setSurname(surname);
        setYearBirth(yearBirth);
        setJobTitle(jobTitle);
        setSalary(salary); 
        setEducation(education);
    };
    void setSurname(string surname)
    {
        if (surname.length() > 2)
        {
            this->surname = surname;
        }
    }
    void setYearBirth(int yearBirth) 
    {
        if (yearBirth > 0)
        {
            this->yearBirth = yearBirth;
        }
    }
    void setJobTitle(string jobTitle) 
    {
        if (jobTitle.length() > 2)
        {
            this->jobTitle = jobTitle;
        }
    }
    void setSalary(string salary) 
    {
        if (salary.length() > 2)
        {
            this->salary = salary;
        }
    }
    void setEducation(string education) 
    {
        if (education.length() > 2)
        {
            this->education = education;
        }
    }
    
    string getSurname() const 
    { 
        return surname;
    }
    
    int getYearBirth() const 
    {
        return yearBirth;
    }
    string getJobTitle() const 
    {
        return jobTitle;
    }
    string getSalary() const 
    {
        return salary;
    }
    string getEducation() const 
    {
        return education;
    }
    
    void description()
    {
        cout << "=========================" << endl;
        cout << "Surname " << surname << endl;
        cout << "Year of birthday " << yearBirth << endl;
        cout << "Job title " << jobTitle << endl;
        cout << "Salary " << salary << endl;
        cout << "Education " << education << endl;
        cout << "=========================" << endl;
    }
};
