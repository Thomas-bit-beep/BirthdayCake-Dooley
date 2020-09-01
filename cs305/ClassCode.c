#include <stdio.h>
#include <stdlib.h>

/* Lecture 3
 * Examples of using arrays
 * Tammy VanDeGrift
 */

double *create_array(int n) {
  double *arr = NULL;

  if(n < 0) {
    return NULL;
  }

  // allocate memory for array of length n doubles
  arr = malloc(sizeof(double)*n);
  // initialize array values
  int i;
  
  for(i=0; i<n; i++) {
    arr[i] = i;
  }
  return arr;
}

/* determine how the contents of my_array changes */
int part1(int len) {
  int my_array[len];
  int *p = my_array;

  int i;
  for(i=0; i<len; i++) {
    my_array[i] = 20*i;
  }
  // what are the contents of my_array at this point?

  *p = *p + 2;
  // what are the contents of my_array at this point?

  *(p+3) = *(p+3) + 8;
  // what are the contents of my_array at this point?

  for(i=0; i<len; i++) {
    printf("%d\t", my_array[i]);
  }
  printf("\n");
  return 0;
}

/* determine contents of my_array */
int part2(void) {
  double * my_array = create_array(4); //note that the scope of my_array is local
                                       //to this function
  printf("my_array:\n");
  int i;
  for(i=0; i<4; i++) {
    printf("%f\t", my_array[i]);
  }
  printf("\n");
  free(my_array);
  return 0;
}

/* call both parts */
int main(void) {
  part1(6);
  part2();
  return EXIT_SUCCESS;
}
