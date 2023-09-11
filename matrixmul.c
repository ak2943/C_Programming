#include <stdio.h>
 
int main()
{
  int m, n, a, b, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
 printf("\t\tlINEAR SEARCH\n\n");
  printf("Enter the number of rows and columns of first matrix\n");
             //m and n assigned to rows n col
  scanf("%d%d", &m, &n);            
  printf("Enter the elements of first matrix\n");
             //for 1st matrix elements c and d
  for (  c = 0 ; c < m ; c++ )
    for ( d = 0 ; d < n ; d++ )
      scanf("%d", &first[c][d]);
 
  printf("Enter the number of rows and columns of second matrix\n");
              //for 1st matrix elements a and b
  scanf("%d%d", &a, &b);
 
  if ( n != a )
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for ( c = 0 ; c < a ; c++ )
      for ( d = 0 ; d < b ; d++ )
        scanf("%d", &second[c][d]);
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < b ; d++ )
      {
        for ( k = 0 ; k < a ; k++ )
        {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < b ; d++ )
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}

