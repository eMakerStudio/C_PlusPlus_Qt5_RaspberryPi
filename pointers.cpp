#include <cstdio>
#include <iostream>
/* A function with no return value. */
void fun(int, int *);
int main()
{
  /* Initialise two int variables */
  int np = 1, p = 1;
  /* Print the address */
  printf("&np=%p, p=%p\n" , &np, &p);
  /* Print the values */
  printf("Before fun(): np=%d, p=%d\n" , np, p);
  /* Pass the value of np and the address of p. */
  fun(np, &p);
  /* Return success to the operating system */
  return 0;
}

void fun(int np, int *p)
{
  /* Assign 2 to the local variable np. */
  np = 2;
  /* Assign 2 to the memory of p defined in main. */
  *p = 2;
  /* Print the address. */
  printf("&np=%p, p=%p\n" , &np, p);
}
