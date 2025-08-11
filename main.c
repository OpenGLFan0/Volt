#include <stdlib.h>
#include <stdio.h>
int main(){
int *ptr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 5 integers
if (ptr == NULL) {
// Handle error, e.g., print a message and exit
}
void modify_array(int *arr, int size) {
for (int i = 0; i < size; i++) {
arr[i] = i * 10; // Modify the content
}
}
// In main: modify_array(ptr, 5);
void allocate_and_assign(int **arr_ptr, int value) {
*arr_ptr = (int *)malloc(sizeof(int));
if (*arr_ptr != NULL) {
**arr_ptr = value;
}
}
        // In main:
        // int *my_data = NULL;
        // allocate_and_assign(&my_data, 100);
free(ptr);
ptr = NULL;
return 0;
}
