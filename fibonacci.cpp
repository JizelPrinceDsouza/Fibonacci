#include<iostream>
using namespace std;
int main()
{
    int first=0,second=1,next,n;
    cout<<"Enter the number of series:"<<endl;
    cin>>n;
    cout<<"FIBONACCI SERIES"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}
