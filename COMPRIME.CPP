#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	 int number,i,sum=0,sum1=0,que,rem,que1;
	 clrscr();
	 printf("\n Enter number:-");
	 scanf("%d",&number);


 if(number>1&&number<=9){
	sum1=sum1+number;
}


if(number>=10 &&number<=99) {
 que=number/10;
rem =number%10;
sum1=sum1+que+rem;

}


if(number>=100 &&number<=999) {
 que=number/100;


 que1=(number%100)/10;

 rem =(number%100)%10;

sum1=sum1+que+rem+que1;

}


 while (number%2 == 0){
	number = number/2;
	sum=sum+2;
    }


   for (i = 3; i <= sqrt(number); i = i+2)
    {
    while (number%i == 0)
	{ sum=sum+i;
	    number = number/i;
	}
    }
    if (number > 2)
    sum=sum+number;

if(sum==sum1){
	printf("\n output:-1");
}
else
	printf("\noutput:- 0");
}