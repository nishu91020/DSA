#include <iostream>

using namespace std;

void shell_sort(int a[],int n)
{
    for(int gap=n/2;gap>=1;gap=gap/2)
    {
        for(int i=gap;i<n;i++)
        {
            for(int j=i-gap;j>=0;j-=gap)
            {
                if(a[j+gap]<a[j])
                {
                    int temp=a[j+gap];
                    a[j+gap]=a[j];
                    a[j]=temp;
                }
            }
        }
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
    shell_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
