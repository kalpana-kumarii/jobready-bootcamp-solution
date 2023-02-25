// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>
int rotateArray(int arr[], int n, int d)
{
  int leftRotation(int *, int);
  int rightRotation(int *, int);

  if (d == -1)
  {
    // left rotaion
    leftRotation(arr, n);
  }
  if (d == 1)
  {
    rightRotation(arr, n);
  }
  return arr[5];
}

int leftRotation(int arr[], int n)
{
  int temp;
  while (n > 0)
  {
    int i;
    temp = arr[0];
    for (i = 1; i < 5; i++)
    {
      arr[i - 1] = arr[i];
    }
    arr[5 - 1] = temp;
    n--;
  }
}

int rightRotation(int arr[], int n)
{
  int temp;
  while (n > 0)
  {
    int i;
    temp = arr[4];
    for (i = 4; i > 0; i--)
    {
      arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    n--;
  }
}
int main()
{
  int n = 2;
  // char d[]="left";
  int d = 1;
  int arr[5] = {32, 29, 40, 12, 70};
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  rotateArray(arr, n, d);
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}