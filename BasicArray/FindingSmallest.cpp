#include<iostream>
using namespace std;
int main()
{ arr[5]={10,2,5,22,16};
int smallest=arr[0];
for (int i=0;i<5;i++)
{ if(smallest>arr[i])
 smallest=arr[i];
    
}
cout<<"The smallest number of array is "<<smallest;

    return 0;

}