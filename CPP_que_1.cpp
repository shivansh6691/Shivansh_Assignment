        // Write a program by creating an 'Employee' class having the following functions and print the final salary.
        // 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
        // 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
        // 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.



#include <iostream>
using namespace std;


class Employee{
    public:
    
    void getInfo(float salary, float hour){
        cout<<"salary = "<<salary<<endl;
        cout<<"Hour Working per week = "<<hour;
    }
    
    void AddSal(float salary, float hour){
            salary+=10;
        cout<<"salary = "<<salary<<endl;
        cout<<"Hour Working per week = "<<hour;
    }
    
    void AddWork(float salary, float hour){
        if(salary>=500){
            salary+=5;
        }
        else{
            salary+=15;    
        }
        cout<<"salary = "<<salary<<endl;
        cout<<"Hour Working per week = "<<hour;
        
    }
    
};

int main()
{   
    float salary,hour;
    Employee e1;

    cout<<"Enter Current Salary of Employee = \n";
    cin>>salary;
    
    cout<<"Enter how many hour Employee is working per week = \n";
    cin>>hour;
    
    if (salary<500 && hour<=6){
        e1.AddSal(salary,hour);
    }
    
    else if(hour>6){
        e1.AddWork(salary,hour);
    }
    else{
        e1.getInfo(salary,hour);
    }
    return 0;
}
