#include<stdio.h>
void print(int iNo){
    if(iNo<=10){
        printf("Hello\n");
    }
    else{
        printf("Demo\n");
    }
}

int main(){
   int iValue=0;
   printf("Enter Number \n");
   scanf("%d",&iValue);
   print(iValue);
    return 0;
}