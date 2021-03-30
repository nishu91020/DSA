#include <iostream>

using namespace std;
void sort_binary(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
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
    cout << "Enter number of elements in the array" << endl;
    cin>>n;
    int a[n];
    cout<<"enter array elements"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort_binary(n,a);
    return 0;
}
