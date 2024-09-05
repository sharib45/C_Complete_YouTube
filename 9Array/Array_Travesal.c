#include<stdio.h>

int main (){

int marks[3];

int student_Num = 3;

for(int i = 0;i < student_Num;i++){

printf("please enter marks student %d  :" , i+1);

scanf(" %d",&marks[i]);

}

for(int i = 0; i< student_Num; i++ ){

printf("\n marks student  %d is : %d", i+1,marks[i]);


}


}