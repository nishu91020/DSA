
//binary search
#include <bits/stdc++.h>

using namespace std;
void binary_search_algo(int a[],int l,int r,int mid,int searched)
{
        if(l>r)
    {
        cout<<"Not Found!!\n";
        return;
    }
        if(a[mid]<searched)
        {
            l=mid+1;
            mid=(l+r)/2;
            binary_search_algo(a,l,r,mid,searched);
        }
        else if(a[mid]>searched)
        {
            r=mid-1;
            mid=(l+r)/2;
            binary_search_algo(a,l,r,mid,searched);
        }
        else{
            cout<<"element found!! "<<"\n";
            return;
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
    int sr;
    cout<<"enter element to be searched"<<"\n";
    cin>>sr;
    sort(a,a+n);
    binary_search_algo(a,0,n-1,(n-1)/2,sr);
    return 0;
}
