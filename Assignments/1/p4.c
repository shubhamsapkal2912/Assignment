#include<stdio.h>
#include<stdbool.h>

bool checkDivisible(int iNo){
    if (iNo%5==0)
    {
        return true;
    }
    else {
        return false;
    }
}


int main(){
int iValue=0;
printf("Enter Number \n");
scanf("%d",&iValue);
bool bRet=false;
bRet=checkDivisible(iValue);
if (bRet==true)
{
   printf("%d is divisible by 5\n",iValue);
}
else
{
     printf("%d is NOT divisible by 5\n",iValue);
}

    return 0;
}