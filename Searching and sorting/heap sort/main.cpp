#include <iostream>

using namespace std;
void heapify(int a[],int n,int x)
{
    int largest=x;
    int left=2*x+1;
    int right=2*x+2;
    if(left<n && a[left]>a[largest])
        largest=left;
    if(right<n && a[right]>a[largest])
        largest=right;
    if(largest!=x)
    {
        swap(a[largest],a[x]);
        heapify(a,n,largest);
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n/2-1;i>=0;i--)
        heapify(a,n,i);
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
