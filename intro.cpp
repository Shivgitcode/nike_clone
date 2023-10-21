/*#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // int value;
    // Number(int value) : value(value) {};
    // void display() {cout << "value: " << value << endl;}
    // operator int() {return value;}

    string name;
    int age;
    Person(string name, int age) : name(name), age(age){};
    operator string() { return name + ":" + to_string(age); };
};

int main()
{
    // Number numb(10);
    // numb.display();
    // int x = numb;
    // cout << "numb: " << x << endl;

    string s1, s2, s3;
    Person p1("Amit", 40);
    Person p2("Anki", 30);
    Person p3("Keshav", 45);

    s1 = p1;
    s2 = p2;
    s3 = p3;

    cout << "Person: " << s1 << endl;
    cout << "Person: " << s2 << endl;
    cout << "Person: " << s3 << endl;

    return 0;
}*/

#include <iostream>
using namespace std;

class two
{
public:
    int value2;
    two(int y)
    {
        value2 = y;
    }
    void disp()
    {
        cout << "Value is:" << value2;
    }
};

class one
{
public:
    int value1;
    one(int x)
    {
        value1 = x;
    }
    void disp()
    {
        cout << "Value is;" << value1;
    }
    operator two()
    {
        return two(value1);
    }
};

int main()
{
    one c1(10);
    two c2 = c1;
    c1.disp();
    c2.disp();

    return 0;
}