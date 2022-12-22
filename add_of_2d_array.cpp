#include<iostream>
using namespace std;
class addition2d_Array{

  int arr1[10][10],arr2[10][10],sum[10][10];
  int row, col;

public:
  void getAarry_first_array()
  {
    cout << "Enter the size of array "<< endl;
    cin >> row >> col;
    cout <<"Enter the element of array 1" << endl;

    for (int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        cin >> arr1[i][j];
      }
    }
  }
  void getArray_second_array(){
    cout <<"Enter the element of array 2 " << endl;
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        cin >> arr2[i][j];
      }
    }
  }
  void addition_of_Array()
  {
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        sum[i][j] = arr1[i][j] + arr2[i][j];
      }
    }
  }
  void arrayDispay1()
  {
    cout <<"First Matrix\n";
    for( int i = 0; i < row; i++){
     for(int j = 0; j < col; j++){
         cout << arr1[i][j] << " ";
     }
     cout << "\n";
    }
  }
  void arrayDispay2()
  {
    cout <<"Second  Matrix\n";
    for( int i = 0; i < row; i++){
     for(int j = 0; j < col; j++){
         cout << arr2[i][j] << " ";
     }
     cout << "\n";
    }
  }
    void RES()
    {
      cout <<"Sum Matrix\n";
      for( int i = 0; i < row; i++){
       for(int j = 0; j < col; j++){
           cout << sum[i][j] << " ";
       }
       cout << "\n";
      }
    }


};
int main()
{
  addition2d_Array obj;
  obj.getAarry_first_array();
  obj.getArray_second_array();
  obj.addition_of_Array();
  obj.arrayDispay1();
  obj.arrayDispay2();

  obj.RES();


}
