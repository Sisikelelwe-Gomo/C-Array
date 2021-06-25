#include <iostream>

using namespace std;

class Demo
{
    int x;

public:

    void setX(int i)
    {
        x = i;
    }

    int getX()
    {
        return x;
    }
};

int main()
{
    Demo obj[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        obj[i].setX(i);
    }

    for (i = 0; i < 4; i++)
    {
        cout << "obj["<<i<<"].getX():" << obj[i].getX() <<endl;
    }

    return 0;
}
