#include <iostream>

using namespace std;
selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {int temp=a[i];
            a[i]=a[j];
            a[j]=temp;}
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "enter number of elements in array" << endl;
    cin>>n;
    int a[n];
    cout<<"enter array elements"<<"\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    selection_sort(a,n);
    return 0;
}
