#include <stdio.h> 
// Function to display array 
void display(int arr[], int n) 
{ int i; 
for (i = 0; i < n; i++) 
{ 
} 
printf("%d ", arr[i]); 
printf("\n"); 
} 
void bubbleSort(int arr[], int n) 
{ 
int i, j, temp; 
for (i = 0; i < n - 1; i++) 
{ 
for (j = 0; j < n - i - 1; j++) 
{ 
if (arr[j] > arr[j + 1]) 
{ 
temp = arr[j]; 
arr[j] = arr[j + 1]; 
arr[j + 1] = temp; 
}} }} 
void selectionSort(int arr[], int n) 
{int i, j, min, temp; 
for (i = 0; i < n - 1; i++) 
{ 
} 
min = i; 
for (j = i + 1; j < n; j++) 
{ 
if (arr[j] < arr[min]) 
{ 
min = j; 
}  } 
temp = arr[i]; 
arr[i] = arr[min]; 
arr[min] = temp; 
// Insertion Sort 
void insertionSort(int arr[], int n) 
{ 
int i, j, key; 
for (i = 1; i < n; i++) 
{ 
}} 
key = arr[i]; 
j = i - 1; 
while (j >= 0 && arr[j] > key) 
{ 
} 
arr[j + 1] = arr[j]; 
j--; 
arr[j + 1] = key; 
int partition(int arr[], int low, int high) 
{ int pivot, i, j, temp; 
pivot = arr[high]; 
i = low - 1; 
for (j = low; j < high; j++) 
{ 
if (arr[j] < pivot) 
{ 
i++; 
temp = arr[i]; 
arr[i] = arr[j]; 
arr[j] = temp; 
}  } 
temp = arr[i + 1]; 
arr[i + 1] = arr[high]; 
arr[high] = temp; 
return i + 1; 
} 
void quickSort(int arr[], int low, int high) 
{ 
int pi; 
if (low < high) 
{ 
} } 
pi = partition(arr, low, high); 
quickSort(arr, low, pi - 1); 
quickSort(arr, pi + 1, high); 
void merge(int arr[], int low, int mid, int high) 
{ 
int temp[100]; 
int i, j, k; 
i = low; 
j = mid + 1; 
k = low; 
    while (i <= mid && j <= high) 
    { 
        if (arr[i] < arr[j]) 
        { 
            temp[k] = arr[i]; 
            i++; 
        } 
        else 
        { 
            temp[k] = arr[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i <= mid) 
    { 
        temp[k] = arr[i]; 
        i++; 
        k++; 
    } 
    while (j <= high) 
    { 
        temp[k] = arr[j]; 
j++; 
k++; 
} 
for (i = low; i <= high; i++) 
{ 
}} 
arr[i] = temp[i]; 
void mergeSort(int arr[], int low, int high) 
{ 
int mid; 
if (low < high) 
{ 
}} 
mid = (low + high) / 2; 
mergeSort(arr, low, mid); 
mergeSort(arr, mid + 1, high); 
merge(arr, low, mid, high); 
int main() 
{ 
int arr[100]; 
int n, i, choice; 
printf("Enter number of elements: "); 
scanf("%d", &n); 
printf("Enter %d elements:\n", n); 
for (i = 0; i < n; i++) 
{scanf("%d", &arr[i]);  } 
printf("\n----- SORTING MENU -----\n"); 
printf("1. Bubble Sort\n"); 
printf("2. Selection Sort\n"); 
printf("3. Insertion Sort\n"); 
printf("4. Quick Sort\n"); 
printf("5. Merge Sort\n"); 
printf("Enter your choice: "); 
scanf("%d", &choice); 
switch (choice) 
{ 
case 1: 
bubbleSort(arr, n); 
printf("\nUsing Bubble Sort\n"); 
break; 
case 2: 
selectionSort(arr, n); 
printf("\nUsing Selection Sort\n"); 
break;  
case 3: 
insertionSort(arr, n); 
printf("\nUsing Insertion Sort\n"); 
break; 
case 4: 
quickSort(arr, 0, n - 1); 
printf("\nUsing Quick Sort\n"); 
break; 
case 5: 
mergeSort(arr, 0, n - 1); 
printf("\nUsing Merge Sort\n"); 
break; 
default: 
printf("\nInvalid choice!\n"); 
return 0; 
} 
printf("Sorted array: "); 
display(arr, n); 
return 0; 
}
