#include<iostream>

using namespace std;

int main()
{

    int i, inputarray[10], no, pos;

    cout << "Enter 10 data elements in array: ";
    for (i = 0; i < 10; i++)
    {
        cin >> inputarray[i];
    }
    cout << "\nEnter position of element to delete: ";
    cin >> pos;

    if (pos > 10)
    {
        cout << "\n position value is not in range: ";
    }
    else
    {
        --pos;
        for (i = pos; i <= 9; i++)
        {
            inputarray[i] = inputarray[i + 1];
        }

        cout << "\n\nNew data in array: ";

        for (i = 0; i < 9; i++)
        {
            cout << inputarray[i];
            cout << " ";
        }
    }
    return 0;
}
