#include<stdio.h>

int divide(int iNo1, int iNo2){

    int iAns = 0;
    if(iNo2==0){
        return -1;
    }
    else{
        return iNo1/iNo2;
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    float iRet=0.0;
printf("Enter Number 1\n");
scanf("%d",&iValue1);
printf("Enter Number 2\n");
scanf("%d",&iValue2);
iRet=divide(iValue1,iValue2);
printf("ANS : %f",iRet);
    return 0;
}