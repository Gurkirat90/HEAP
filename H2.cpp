class solution
{
int kth(int arr[],int l,int r,int k)
{
  priority_queue<int> pq;
  for(int i=0;i<k;i++)
    {
      pq.push_back(arr[i]);
    }
  for(int i=k;i<r;i++){
    if(arr[i]<pq.top())
    {
      pq.pop();
      pq.push(arr[i]);
    }
  }
  return pq.top();
}
};
