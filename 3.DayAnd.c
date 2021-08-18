#include<stdio.h>
int main (){
   int months, days ;
   printf("Enter days\n") ;
   scanf("%d", &days) ;
   months = days / 30 ;
   days = days % 30 ;
   printf("Months = %d Days = %d", months, days) ;
   

//    OUTPUT
//    Enter days
//    145
//    Months = 4 Days = 25
}