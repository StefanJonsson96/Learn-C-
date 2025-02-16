#include <stdio.h>

int pointers(){
    int nums1[5] = {1, 2, 3, 4, 5};
    int *nums2 = nums1; // Pointer to the first element of nums1
 
    printf("nums1: %p\n", nums1); // Print memory address of pointers
    printf("nums2: %p\n", nums2); 
 
    nums2 += 2; // Move the pointer 2 byes to the right, since int takes up 4 bytes, it will move 8 bytes to the right.
 
    printf("nums1: %p\n", nums1);
    printf("nums2: %p\n", nums2); 
  
    *nums2 = 100; // * is used to access the value of the pointer instead of the pointer itself.
 
    for(int i=0; i<5; i++)
       printf("%d ", nums1[i]);
 
    return 0;
 
 }