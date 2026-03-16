#include<iostream>
using namespace std;
int main()
{int arr[5]={10,2,5,22,16};
int largest=arr[0];
for (int i=0;i<5;i++)
{ if(largest<arr[i])
 largest=arr[i];
    
}
cout<<"The largest number of array is "<<largest;

    return 0;

}