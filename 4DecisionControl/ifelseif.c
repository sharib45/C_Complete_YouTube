#include<stdio.h>


int main(){



int age ;


printf("welcome in arto bijnor \n please enter your age :");

scanf("%d",&age);

if(age <18)
{

printf("you are to young to apply \n");


} 

else if(age >70){


printf("you are too old to apply\n");



}


else{

printf("you are eligible for licesnse\n");


}

printf("your age is %d",age);




}