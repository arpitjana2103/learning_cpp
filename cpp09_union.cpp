#include <iostream>
using namespace std;

union Data {
    int intVal;
    float floatVal;
    char charVal;
};

int main(){
    union Data data;
    data.intVal = 5;
    cout << "data.intVal : " << data.intVal << endl;
    data.floatVal = 4.5;
    cout << "data.intVal : " << data.intVal << endl;
    cout << "data.floatVal : " << data.floatVal << endl;
    return 0;
}