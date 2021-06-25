#include<iostream>
using namespace std;

int main()
  {

   int numarr[100],evenarr[100],i,j=0,k=0,num;

   cout<<"Enter Size of Array : ";
   cin>>num;

   cout<<"Enter "<<num<<" Data elements in Array : ";
   for(i=0; i<num;i++)
   {
        cin>>numarr[i];
   }

   for(i=0; i<num;i++)
   {
        if(numarr[i]%2==0)
        {
            evenarr[j]=numarr[i];
            j++;
        }
   }

   cout<<"\nEven Elements : ";

    for(i=0; i<j ;i++)
    {
        cout<<evenarr[i]<<"  ";
    }
  }
