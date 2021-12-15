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