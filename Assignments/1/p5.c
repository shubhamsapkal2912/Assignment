#include<stdio.h>

void display(int iNo){
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
    
}
int main(){
int iValue=0;
printf("Enter Number \n");
scanf("%d",&iValue);
 display(iValue);
    return 0;
}