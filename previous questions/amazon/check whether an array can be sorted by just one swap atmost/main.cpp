#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    int first=0,second=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {    c++;
        if(first==0)
            first=i;
        else
            second=i;}
    }
    if(c>2)
        cout<<"NO\n";
    else
        {
            if(c==2)
                swap(a[first-1],a[second]);
            else if(c==1)
                swap(a[first-1],a[first]);
            int flag=0;
            for(int i=1;i<n;i++)
            {
                if(a[i]<a[i-1])
                {
                    cout<<"NO\n";
                    flag=1-flag;
                    break;
                }
            }
            if(flag==0)
                cout<<"YES\n";
        }
	return 0;
}
