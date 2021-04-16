/*You are given N number of books. Every ith book has Ai number of pages.
You have to allocate books to M number of students. There can be many ways or permutations to do so.

In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations,

the task is to find that particular permutation in which the maximum number of pages allocated to a student is minimum of those
in all the other permutations and print this minimum value.

Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order
Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output:
113
*/

#include <bits/stdc++.h>

using namespace std;
bool isvalid(int a[],int n,int m,int mid)
{
    int sum=0;
    int c=1; //number of student always start with one at least one student should be given all the books
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>mid)
            {sum=a[i];
            c++;}
    }
    if(c>m)
        return false;
    return true;
}
int find_pages(int a[],int n,int m)
{
    if(n<m)
        return -1;
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    int low=*max_element(a,a+n);
    int high=sum;
    int res=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(isvalid(a,n,m,mid))
        {
            res=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return res;

}
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int res=find_pages(a,n,m);
    cout<<res<<"\n";
    return 0;
}
