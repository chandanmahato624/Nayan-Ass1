#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the age of Ram : ");
    scanf("%d",&a);
    printf("Enter the age of Shyam : ");
    scanf("%d",&b);
    printf("Enter the age of Rohim : ");
    scanf("%d",&c);

    if(a<b){
        if(a<c){
            printf("Ram is youngest of three");
        }else{
            printf("Rohim is youngest mof three");
        }
    }else{
        if(b<c){
            printf("Shyam is youngest of three");
        }else{
            printf("Rohim is youngest of three");
        }
    }
    return 0;
}