#include <stdio.h>
int main() {
 int arr[100], n, i, sum = 0;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 printf("Enter %d elements: ", n);
 for (i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 for (i = 0; i < n; i++) {
 sum = sum + arr[i];
 }
 printf("Sum of the array elements = %d\n", sum);
 return 0;
}
}
 }
 for (i = 0; i < rows; i++) {
 for (j = 0; j < cols; j++) {
 C[i][j] = A[i][j] + B[i][j];
 }
 }
 printf("\nResultant Matrix (A + B):\n");
 for (i = 0; i < rows; i++) {
 for (j = 0; j < cols; j++) {
 printf("%d\t", C[i][j]);
 }
 printf("\n");
 }
 return 0;
}
