#include <iostream>

using namespace std;
insertion(int n,int a[])
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && temp<a[j])
            {

                a[j+1]=a[j];
                j--;
            }

            a[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "enter size of array" << endl;
    cin>>n;
    int a[n];
    cout<<"enter elements of array"<<"\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    insertion(n,a);
    return 0;
}
