//Given an integer K and an array height[] where height[i] denotes the height of the ith tree in a forest. The task is to make a cut of height X from the ground such that exactly K unit wood is collected. If it is not possible then print -1 else print X.
//
//Examples:
//
//Input: height[] = {1, 2, 1, 2}, K = 2
//Output: 1
//Make a cut at height 1, the updated array will be {1, 1, 1, 1} and
//the collected wood will be {0, 1, 0, 1} i.e. 0 + 1 + 0 + 1 = 2.
//
//Input: height = {1, 1, 2, 2}, K = 1
//Output: -1

#include <bits/stdc++.h>

using namespace std;
int find_col(int a[],int x,int n)
{
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]-x<=0)
            break;
        else
        {int f=(a[i]-x);
            sum+=f;}
    }
    return sum;
}
int find_if_collect_collected_wood_equal_to_k(int a[],int n,int k){
    sort(a,a+n); //1 1 2 2
    int high=a[n-1],low=0;
    while(low<=high)
    {
        int  mid=(low+high)/2;
        int collection=find_col(a,mid,n);
        if(collection==k)
            return mid;
        else if(collection>k)
        {
            low=mid+1;

        }
        else{
             high=mid-1;
        }
    }
    return -1;
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
    int k;
    cin>>k;
    int x=find_if_collect_collected_wood_equal_to_k(a,n,k);
    cout<<x<<"\n";
    return 0;
}
