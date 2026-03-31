#include <iostream>
using namespace std;

int main() {
// binary search with loop
int size=5;
int arr[size]={1,2,3,4,5};
int target;
int start=0;
int end=size-1;
int result=-1;
int mid;


cout<<"Enter the number you want to find :";
cin>>target;
while(start<=end)
{mid=start+(end-start)/2;
if(target==arr[mid])
{result= mid;
break;
}
else if (target<arr[mid])
end=mid-1;
else if(target>arr[mid])
start=mid+1;
else
return -1;
    
}
if(result==-1)
cout<<"sorry not found";
else
cout<<result;



return 0;
}