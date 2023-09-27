#include <stdio.h>
#include <arpa/inet.h>

int main(void) {
  int numeri []={1000,12890,54163,34012,62984};
  int numeri2[]={19875,5499,59821,43120,26489};

  for(int i=0; i<numeri[i];i++)
    {
      int host= htonl(numeri[i]);
      printf("%x\n",host);
      
    }
  
  for(int y=0; y<numeri2[y];y++)
  {
    int host2=htons(numeri2[y]);
    printf("%x\n",host2);
  
  }


  return 0;
}