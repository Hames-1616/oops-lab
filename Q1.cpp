#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int small,largest;
    float total=0;
    small=INT_MAX;
    largest=INT_MIN;
    int n,numb;
    float aver;
    cout<<"How many numbers are you going to enter\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number "<<i+1<<":";
        cin>>numb;
        total=total+numb;
        if(numb>largest)
        {
            largest=numb;
        }
        if(numb<small)
        {
            small=numb;    
        }
    }
    aver=total/n;
    cout<<"Smallest number = "<<small<<endl;
    cout<<"Largest number = "<<largest<<endl;
    cout<<"average = "<<aver;

}
