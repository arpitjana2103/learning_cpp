#include <iostream>
using namespace std;

enum Status
{
    OK = 200,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

int main()
{
    Status responseStatus = SERVER_ERROR;

    if (responseStatus == OK)
        cout << "Response status: OK (200)" << endl;

    if (responseStatus == NOT_FOUND)
        cout << "Response status: Not Found (404)" << endl;

    if (responseStatus == SERVER_ERROR)
        cout << "Response status: Server Error (500)" << endl;

    return 0;
}
