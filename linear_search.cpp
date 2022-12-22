#include<iostream>
using namespace std;
bool is_linear(int* arr, int s,int n, int k)
{
        for(int i=s; i<n ; i++)
        {
            if (arr[i] == k)
            {
               return 1;
            }

        }
        return 0;
}
int main()
{
     int n;
     cout << "Enter the size of array " << endl;
     cin >>n;
     int arr[n];
     cout << "Enter the Element of array " << endl;
     for(int i=0; i<n; i++)
     {
       cin >> arr[i] ;
     }
     cout << endl << "This is Your Array " << endl;
     for(int i=0; i<n; i++)
     {
       cout << arr[i] << " ";
     }
     cout <<endl <<"Enter the You want to find elemnt " << endl;
     int k;
     cin >> k;

     bool found = is_linear(arr, 0, n-1, k);
     if(found)
     {
       cout <<"Element is found " << endl;

     }
     else
     {
       cout << "Element is not found " << endl;
     }
}
