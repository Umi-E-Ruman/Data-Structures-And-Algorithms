#include <iostream>
using namespace std; 

void bubbleSort(int arr[], int n) {
int count=0;

for (int i = 0; i < n-1; i++) { 

bool swapped = false;





for (int j = 0; j < n-1-i; j++) { 
    count++;

if (arr[j] > arr[j+1]) { 

int temp = arr[j]; 



arr[j] = arr[j+1]; 
arr[j+1] = temp; 



swapped = true; 



}
}
if (!swapped) break; 


} 
cout<<"The total comparision made :"<<count;
}

void printArray(int arr[], int n) {  
for (int i = 0; i < n; i++) 
cout << arr[i] << " "; 



cout << endl; 
}

int main() { 
int arr[] = {64 ,34, 25, 12 ,22};
int n = sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,n);


return 0; 
}  