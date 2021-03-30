#include <iostream>

using namespace std;
int merge_arr[1000];
void merge_fun(int a[],int l,int r,int mid)
{
        int i=l,j=mid+1;
        int q=l;
        while(i<mid+1 && j<=r)
        {
            if(a[i]<=a[j])
            {
                merge_arr[q]=a[i];
                q++;
                i++;
            }
            else{
                merge_arr[q]=a[j];
                q++;
                j++;

            }
        }
        while(i<mid+1)
        {
           merge_arr[q]=a[i];
                q++;
                i++;
        }
        while(j<=r)
        {
            merge_arr[q]=a[j];
                q++;
                j++;
        }
        for(int i=l;i<=r;i++)
            a[i]=merge_arr[i];
}

void merge_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge_fun(a,l,r,mid);
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
    merge_sort(a,0,n-1);
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
