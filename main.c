#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];
  
  scanf("%d", &n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  
  scanf("%d", &search);
  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("The searched element is found at the index %d of the array.",  middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("The searched element is not found in the array");

  return 0;
}