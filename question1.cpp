ABSTRACT CLASS & VIRTUAL FUNCTION
Ravindran is working in afamous Multinational IT Firm. He has been recently assigned the task of colecting 
salary details of the employees in the company.
The company has two categories of Employees namely Developer and Driver.
The final statistics needs to be submitted to the CEO of the compant today.
Since the number of people working in the firm is huge Ravindran is finding it difficult to format the data,

Test Case 1                             
INPUT (STDIN)
10465
4325
EXPECTED OUTPUT
Salary of Developer:10465
Salary of Driver:4325
	
Test Case 2
INPUT (STDIN)
17231
6390
EXPECTED OUTPUT
Salary of Developer:17231
Salary of Driver:6390
	
	
	
#include <iostream>
using namespace std;

class Employee{
    public: 
    int a,b;
};
class Developer : public Employee{
    public:
    void getSalary(){
        cin>>a;
        cout<<"Salary of Developer:"<<a<<endl;
    }
};
class Driver : public Employee{
    public:
    void getSalary(){
        cin>>b;
        cout<<"Salary of Driver:"<<b<<endl;
    }
};



int main()
{
    Developer d1;
    d1.getSalary();
    Driver d2;
    d2.getSalary();
	return 0;
}
