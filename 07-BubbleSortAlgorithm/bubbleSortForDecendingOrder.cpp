 #include <iostream>
using namespace std; 

void bubbleSort(int arr[], int n) {

for (int i = 0; i < n-1; i++) { 

bool swapped = false;





for (int j = 0; j < n-1-i; j++) { 

if (arr[j] < arr[j+1]) { 

int temp = arr[j]; 



arr[j] = arr[j+1]; 
arr[j+1] = temp; 



swapped = true; 


}
}
if (!swapped) break; 


} 
}

void printArray(int arr[], int n) {  
for (int i = 0; i < n; i++) 
cout << arr[i] << " "; 



cout << endl; 
}

int main() { 
int arr[] = {5, 1, 9, 3, 7, 2, 8};
int n = sizeof(arr)/sizeof(arr[0]); 

cout << "Before: ";
printArray(arr, n); 
bubbleSort(arr, n);



cout << "After in decending order: ";
printArray(arr, n); 
return 0; 
} 