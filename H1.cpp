#include<iostream>
//BELOW FUNCTION IS TO HEAPIFY AS INGLE CELL THEREFORE->O(log n)
void heapify(vector<int> &arr,int n,int i)
{
  int largest=i;;
  int left=2*i;
  int right=2*i+1;
  if(left<n&&arr[largest]<arr[left])
  {
    largest=left;
  }
  if(right<n&&arr[largest]<arr[right])
  {
    largest=right;
  }
  if(largest!=i)
    swap(arr[largest],arr[i]);
  heapify(arr,n,largest);
}
int main()
{
  vector<int> arr={-1,54,53,52,50};
  int n=5;
  for(i=n/2;i<0;i--)//----------------->O(n)
    {
      heapify(arr,n,i);//----------------->O(log n )
    }
  //this is build a heap therefore complexity should be O(n*log n)but is   O(n)
  
}
