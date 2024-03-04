#include <bits/stdc++.h>

using namespace std;

class AbstractEmployee
{

    // an abstract class is one which has atleast one pure virtual funtion

    // pure virtual function is one which forces it derived class to make an implementaion of virtual function in them
    //  just like here it is askFor Promotion
    // agar yaha ye askForFunction bhi defined hota Work ki tarah to wo pure virtual function na hota keval virtual function hota

    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    // string Name;
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void askForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted" << endl;
        }
        else
        {
            cout << Name << " agli baar" << endl;
        }
    }

    virtual void Work()
    {
        cout << Name << " is checking employees work" << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
class Developer : public Employee
{
public:
    string Language;

    void fixBug()
    {
        cout << getName() << " is fixing bug with " << Language << endl;
    }

    void Work()
    {
        cout << Name << "is writing " << Language << "  code " << endl;
    }

    Developer(string name, string company, int age, string language) : Employee(name, company, age)
    {
        Language = language;
    }
};

class Teacher : public Employee
{
public:
    string subject;

    void Work()
    {
        cout << Name << " is teaching in a  " << subject << " class " << endl;
    }
    void prepareLesson()
    {
        // here Name will not work because the employee has name as private member , so it can only be accessed by its class only
        //  to make it accessible to child class we can make it protected

        // cout << Name << " is preparing lesson for " << subject << " class " << endl;

        cout << Name << " is preparing lesson for " << subject << " class " << endl;
    }

    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {

        this->subject = subject;
    }
};

int main()
{

    Employee employee1 = Employee("ROshan", "yt", 28);
    Employee employee2 = Employee("asdd", "jis", 38);

    employee1.askForPromotion();
    employee2.askForPromotion();

    Developer d = Developer("iuhb", "jiss", 31, "c++");
    d.fixBug();
    d.askForPromotion();

    Teacher t = Teacher("podger", "vlix", 38, "maths");
    t.prepareLesson();

    // d.Work();
    // t.Work();  //these are also case of polymorphism

    Employee *e1 = &d; // the most common use of polymorphism is when
    Employee *e2 = &t; // a base class reference is used to refer to a child class object

    e1->Work();
    e2->Work(); // is case me dono employees ke work me same dikhega jo employee class me define kia gaya hai
                // isko change karna ho to virtual laga do employee wale method me
    // it will ensure if derived class have same method defined then wahi chale
}