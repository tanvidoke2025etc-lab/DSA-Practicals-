#include <stdio.h> 
Int binarysearch(int A[], int low, int high, int key) 
{ 
    int mid; 
    if (low > high) 
    { 
        return -1; 
    mid = (low + high) / 2; 
    if (A[mid] == key) 
    { 
        return mid; 
    } 
    else if (key < A[mid]) 
    { 
        return binarysearch(A, low, mid - 1, key); 
    } 
    else 
    { 
        return binarysearch(A, mid + 1, high, key); 
    } 
} 
int main() 
{ 
    int A[10]; 
    int n, i, key, result; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter elements in sorted order:\n"); 
    for (i = 0; i < n; i++) 
    { 
        scanf("%d", &A[i]); 
    } 
    printf("Enter search element: "); 
    scanf("%d", &key); 
    result = binarysearch(A, 0, n - 1, key); 
    if (result == -1) 
    { 
        printf("Element not found"); 
    } 
    else 
    { 
        printf("Element found at position %d", result + 1); 
    } 
 
    return 0; 
} 
