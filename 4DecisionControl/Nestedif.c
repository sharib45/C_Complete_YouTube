#include<stdio.h>


int main(){



int age ;

char is_indian;


printf("welcome in arto bijnor \n please enter your age :");

scanf("%d",&age);

printf("are you indian Citizen please enter [y\n]");

scanf(" %c",&is_indian);



if(is_indian == 'y'){


if(age <18)
{

printf("you are to young to apply \n");


} 

else if(age >70){


printf("you are too old to apply\n");



}

else{

printf("you are eligible for liciense");



}

}



else{

printf("only indian citizen can apply\n");


}

printf(" your age is %d",age);




}