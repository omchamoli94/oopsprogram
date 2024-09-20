#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int  n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter the element of the array\n";
    int  ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    
    }
    int max =-1;
    for(int k=0;k<n;k++)
    {
        int sum = ar[k];
        int x =1;
        int j;
        for(int i=k+1;i<n;i++)
    {
        if((i+x)<n)
        {
            for(int j=i;j<=x+i;j++)
            {
                sum = sum+ar[j];
            }
            x++;
        }
    }
    if(sum>max)
    {
        max =sum;
    }
    }
    cout<<max<<endl;
    return 0;
}
