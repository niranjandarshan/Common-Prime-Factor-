#include<stdio.h>
#include<conio.h>
void main(){
int number,i,j,prime;
printf("\n Enter your number");
scanf("%d",&number);
for(i=2;i<=number;i++){
if(number%i==0)
prime=1;
if(prime==1)
printf("%d",i);
for(j=2;j<=i/2;j++){
if(i%j==0){
prime=0;
break;
}
}
//if(prime==1)

}

}