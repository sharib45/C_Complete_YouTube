#include<stdio.h>

int main(){

int num;

printf("pleae enter number to print table: ");

scanf("%d",&num);

for(int i =1;i<=100;i++)

{

int table = num*i;

printf("%d\n",table);

if(i==15){

break;

}



}


}