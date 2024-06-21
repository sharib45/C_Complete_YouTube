#include<stdio.h>


void swap(int,int);



int main(){

int x = 5;

int y =10;

swap(x,y);


printf("\n org x is %d and y is %d\n", x ,y);


}



void swap(int first,int second ){


   int tem = first;
   first = second;

   second = tem;

    

   printf("valuve of x is %d and y is %d",first,second) ;






}