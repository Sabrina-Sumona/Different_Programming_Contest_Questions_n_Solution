#include <stdio.h>
#include <string.h>

int main ()
{

  char L[1000];
  scanf("%s",L);
  int i=0,j=0,count=0;
  int l = strlen(L);
   for (i = 0; i < l - 1; i++) 
   {
        for (int j = i + 1; j < l; j++) 
        {
            if (L[i] == L[j]) {
                count++;
            }
        }
    }
  
  if(count==0)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
  
  return 0;
}
