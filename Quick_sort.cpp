#include<iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
      // first we build pivot
      int pivot = arr[s];
      int cnt = 0;
      // if any number of less than pivot element we are incrament the count
      for(int i=s+1; i<=e; i++)
      {
        if(arr[i] < pivot)
        {
          cnt++;
        }
      }
      // Lets puts the elemnt in right place in position
      int pivotIndex = s + cnt;
      swap(arr[pivotIndex] ,arr[s]);

      //Left part sorting
      int i=s, j=e;
      while(i < pivotIndex && j > pivotIndex)
      {
        while(arr[i] <= pivot)
        {
          i++;
        }
        while(arr[j] > pivot)
        {
          j--;
        }

        if( i < pivotIndex && j > pivotIndex)
        {
          swap(arr[i++], arr[j--]);
        }
      }
      return pivotIndex;

}
void Quick_Sort(int arr[], int s, int e)
{
  // base case
  if (s>=e)
  {
    return ;
  }
  // partition
  int p = partition(arr, s,e);

  // left part sorting
  Quick_Sort(arr, s, p-1);
  // right part sorting
  Quick_Sort(arr, p+1, e);
}
int main()
{
  int n;
  cout <<"Enter the Size of array "<< endl;
  cin  >> n;
  int arr[n];
  cout << "Enter the Element of array "<< endl;
  for (int i =0; i<n; i++)
  {
    cin >> arr[i];

  }
  cout << "Befor sort "<< endl;
  for (int i=0; i<n; i++)
  {
    cout << arr[i] << " ";

  }
  cout <<endl << endl;

  Quick_Sort(arr, 0, n-1);
  cout << "Sort array" << endl;
  for(int i=0; i<n; i++)
    {
      cout <<arr[i] << " " ;
    }
    cout << endl;
}
