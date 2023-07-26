#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    // Create an unordered set of integers
    unordered_set<int> mySet;

    // Insert elements using insert()
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Emplace elements using emplace()
    mySet.emplace(40);
    mySet.emplace(50);

    // Print the elements using iterators
    cout << "Elements in the set: ";
    for (const auto &element : mySet)
    {
        cout << element << " ";
    }
    cout << endl;

    // Find an element
    int elementToFind = 20;
    auto it = mySet.find(elementToFind);
    if (it != mySet.end())
    {
        cout << "Element " << elementToFind << " found in the set." << endl;
    }
    else
    {
        cout << "Element " << elementToFind << " not found in the set." << endl;
    }

    // Erase an element
    int elementToDelete = 30;
    size_t numErased = mySet.erase(elementToDelete);
    if (numErased > 0)
    {
        cout << "Element " << elementToDelete << " erased from the set." << endl;
    }
    else
    {
        cout << "Element " << elementToDelete << " not found in the set, no erasing performed." << endl;
    }

    // Check if the set is empty
    if (mySet.empty())
    {
        cout << "The set is empty." << endl;
    }
    else
    {
        cout << "The set is not empty." << endl;
    }

    // Get the size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    // Count the occurrences of a specific element
    int elementToCount = 10;
    size_t occurrences = mySet.count(elementToCount);
    cout << "Occurrences of " << elementToCount << " in the set: " << occurrences << endl;

    return 0;
}
