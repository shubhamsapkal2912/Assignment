#include<stdio.h>

void displayEven(int iNo){
    int iCnt=0;
    int iEven=2;

    if(iNo<=0){
        printf("Enter Number Greater Than 0\n");
    }
    else{
    for(iCnt=1;iCnt<=iNo;iCnt++){
        printf("%d \t",iEven);
        iEven+=2;
    }
    }
}

int main(){
    int iFrequency=0;
    printf("Enter Frequency\n");
    scanf("%d",&iFrequency);
    displayEven(iFrequency);
    return 0;
}