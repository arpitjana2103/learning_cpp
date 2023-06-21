#include <iostream>
using namespace std;

struct EmployeeS {
    string eID;
    string name;
    int age;
    void introduce(){
        cout << "Hello I am " << name << " my age is " << age << endl;
    };
};

int main(){
    struct EmployeeS harry;
    harry.eID = "harry35"; 
    harry.name = "Harry";
    harry.age = 35;
    harry.introduce();

    return 0;
}