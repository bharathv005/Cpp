#include<iostream>
using namespace std;
int main ()
{
  int k = 12;
LOOP:do
    {
      if (k == 14)
	{
	  k = k + 1;
	  goto LOOP;      //goto statemet
	}
	
      printf ("value of k: %d\n", k);
      k++;

    }
  while (k < 25);

  return 0;
}
