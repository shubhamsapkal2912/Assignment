#include<stdio.h>
void display(int iNo,int iFrequency){
if(iFrequency<=0){
    printf("Enter number in frequency greater than 0\n");
}
else{
    int iCnt=0;
    for(iCnt=1;iCnt<=iFrequency;iCnt++){
        printf("%d\t",iNo);
    }
}

}
int main(){
int iValue=0,iFrequency=0;
   printf("Enter Number \n");
   scanf("%d",&iValue);
   printf("Enter Frequency \n");
   scanf("%d",&iFrequency);
   display(iValue,iFrequency);

    return 0;
}