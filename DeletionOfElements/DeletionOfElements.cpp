#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void PrintDeque(deque<string> pets) //method responsible for printing deque
{
    cout << "Deque Pets: ";
    for (int i = 0; i < pets.size(); i++)
    {
        cout << pets[i] << " ";
    }
    cout << "\n\n";
}

void PrintVector(vector<int> num)   //method responsible for printing vector
{
    cout << "Vector Numbers: ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << "\n\n";
}

int main()
{
    deque<string> pets{ "parrot", "bunny", "dog", "cat"};   //random deque
    PrintDeque(pets);

    pets.pop_back();    //removal of an item from the back
    PrintDeque(pets);

    pets.pop_front();   //removal of an item from the front
    PrintDeque(pets);

    vector<int> num{ 9,5,2,6,3,8,9,2,4 };   //random vector
    PrintVector(num);

    num.pop_back(); //removal of an item
    PrintVector(num);
}
