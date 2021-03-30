#include <iostream>

using namespace std;

int partitionarr(int a[],int l,int r)
{
    int pi=a[r];
    int j=l-1;
    int i=l;
    for(;i<r;i++)
    {
        if(a[i]<pi)
        {
             j++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }
    int temp=a[j+1];
    a[j+1]=pi;
    a[r]=temp;
    return j+1;
}
void quick_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int pi=partitionarr(a,l,r);
        quick_sort(a,l,pi-1);
        quick_sort(a,pi+1,r);
    }

}
int main()
{
    int n;
    cout<<"enter number of elements"<<"\n";
    cin>>n;
    int a[n];
    cout << "Enter the array" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
