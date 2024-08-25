#include<stdio.h>

int main(){

//int a = 3;

//printf("value of a is %d", a);

//printf("\nvaluve of address %p", &a);
//printf("\nvaluve of address at adrees %d", *(&a));

int i = 3;

int *j = &i;

printf("Address of i = %p",&i);

printf("\n Address of i = %p",j);

printf("\n Address of i = %p",&j);

printf("\n Address of i = %d",i);

printf("\n Address of i = %d",*(&i));

printf("\n Address of i = %d",*j);

return 0;


}