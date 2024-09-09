#include<stdio.h>



void printstd(int a[] , int b);

int main (){

int marks[3];

int student_Num = 3;

for(int i = 0;i < student_Num;i++){

printf("please enter marks student %d  :" , i+1);

scanf(" %d",&marks[i]);

}



printstd(marks,student_Num);


}

void printstd(int marks[],int student){

for(int i = 0; i< student; i++ ){

printf("\n marks student  %d is : %d", i+1,marks[i]);


}


}