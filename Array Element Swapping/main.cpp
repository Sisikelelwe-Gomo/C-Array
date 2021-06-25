#include <iostream>

using namespace std;

int main()
{
    //variable declaration
int arr[100], n, i, temp;

cout << "Enter number of elements you want to insert :";
cin >> n;
for (i=0; i<n; i++)
{
    cout<<"Enter element "<<i+1<<" : ";
    cin>> arr[i];
}

// array swapping loguc
temp = arr[0];
arr[0] = arr[n-1];
arr[n-1] = temp;

cout<<"\nArray after swapping"<<endl;
for(i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}
