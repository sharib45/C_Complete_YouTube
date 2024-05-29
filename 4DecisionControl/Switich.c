#include<stdio.h>


int main(){

int day;

printf("please enter day in between 0 t0 7:  ");

scanf("%d",&day);





switch (day)
{

case 1 :
    printf("Today is monday");
break;


case 2: 
   printf("Today is tuesday");
break;


case 3 : 
  printf("Today is wensday");
break;

case 4: 
   printf("Today is thursday");
break;

case 5 :
 printf("Today is friday");
break;

case 6:
  printf("Today is satday");
break;


case 7:
 printf("Today is sunday");
break;

default :

printf("your day number incorect");

break;




}









}