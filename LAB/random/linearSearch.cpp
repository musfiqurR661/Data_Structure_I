#include<iostream>
using namespace std ;
int Bsearch(int ar[], int a, int b)
{ 
    int index ;

    int flag =0;
    for( int i= 0; i<a; i++)
    {
    if (ar[i]==b)
    {
        flag++;
        index=i;
    }
    }
    int sum = 0;
    if(flag>0)
    {
        for(int i= index;i<=(index+4); i++)
        {
            sum+=ar[index];
        }
    }
    else
    {
        cout<<"Wrong";
    }
   cout << "Result:"<<sum;

    //return sum;
}


int main()
{
    int n;
    cout<<"ënter the number:";
    int ar[n];
     
     for (int i= 0; i<n ; i++)
     {
        cin>> ar[i];
     }
    int x;
    cout<<"Enter the number:";
    cin>>x;

}