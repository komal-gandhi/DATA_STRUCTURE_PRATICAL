
/*to check if x = 26 is present in the array*/
/*#include <stdio.h>

int main() {
    int A[7] = {11, 5, 45, 26, 12, 34, 19};
    int x = 26;
    int found = 0;
    
    for (int i = 0; i < 7; i++) {
        if (A[i] == x) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element %d is present in the array.\n", x);
    else
        printf("Element %d is not present in the array.\n", x);

    return 0;
}*/





/*BINARY SEARCH*/
/*#include <stdio.h>

int binarySearch(int A[], int size, int key) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (A[mid] == key)
            return mid;
        if (A[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1;
}

int main() {
    int A[10] = {1, 5, 7, 12, 13, 16, 17, 22, 24};
    int key;
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int result = binarySearch(A, 9, key); // Array size is 9
    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);
    
    return 0;
}*/
/*LINEAR SEARCH*/
/*#include <stdio.h>

int main() {
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int A[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("Enter the value to search: ");
    scanf("%d", &key);
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == key) {
            found = 1;
            break;
        }
    }
    
    if (found)
        printf("Element %d is present in the array.\n", key);
    else
        printf("Element %d is not present in the array.\n", key);
    
    return 0;
}*/


/* C program for non-recursive binary search:*/
/*#include <stdio.h>
int binarySearch(int A[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;  
        if (A[mid] == key)
            return mid;
        if (A[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int A[n];
    printf("Enter the elements in sorted order: ");
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &A[i]);
    }
    int key;
    printf("Enter the value to search: ");
    scanf("%d", &key);
    int result = binarySearch(A, n, key);
    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);
    return 0;
}
*/


 /*C program for recursive binary search:*/
/*#include <stdio.h>
int binarySearch(int A[], int left, int right, int key) {
    if (right >= left) {
        int mid = left + (right - left) / 2;  
        if (A[mid] == key)
            return mid;
        if (A[mid] > key)
            return binarySearch(A, left, mid - 1, key);
        return binarySearch(A, mid + 1, right, key);
    }
    return -1;
}
     int main()
      {
        int n;
         printf("Enter number of elements: ");
          scanf("%d", &n);  
              int A[n];
               printf("Enter the elements in sorted order: ");
                for (int i = 0; i < n; i++)
                 {
                    scanf("%d", &A[i]);
                 }
                       int key;
                         printf("Enter the value to search: ");
                       scanf("%d", &key); 
                        int result = binarySearch(A, 0, n - 1, key);
                       if (result != -1)
                    printf("Element %d found at index %d.\n", key, result);
                    else
                     printf("Element %d not found in the array.\n", key);
                  return 0;
}
*/



