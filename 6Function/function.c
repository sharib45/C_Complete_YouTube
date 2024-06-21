#include<stdio.h>






int sum (int a , int b)
{


int tot = a+b;

return tot;


}


void table()
{


for(int i=1;i<100;i++){


printf("%d\n",i);

}

}


int main(){

   int x = 5;

   int y = 8;

  int add = sum(x,y);

   printf("sum is %d \n",add);

  table();
  

  return 0;


}