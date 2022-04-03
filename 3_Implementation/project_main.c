#include<numberconversion.h>
int decimaltobinary(long int n)
{
long int r[50],i=0,len=0;
while(n>0)
{
 r[i]=n%2;
 n=n/2;
 i++;
 len++;
 }
printf("\nThe Binary number: ");
     for(i=len-1;i>=0;i--)
             printf("%ld",r[i]);
}
int decimaltooctal(long int num)   
{
long int r[50],i=0,a=0;
while(num>0)
 {
 r[i]=num%8;
 num=num/8;
 i++;
 a++;
 }
printf("\nThe Octal number: ");
     for(i=a-1;i>=0;i--)
             printf("%ld",r[i]);
}
int decimaltohexadecimal(long int num)   
{
long int rem[50],i=0,length=0;
while(num>0)
   {
      rem[i]=num%16;
      num=num/16;
      i++;
      length++;
   }
printf("\nThe Hexadecimal number: ");
for(i=length-1;i>=0;i--)
  {
    switch(rem[i])
    {
      case 10:
          printf("A");
          break;
      case 11:
          printf("B");
          break;
      case 12:
          printf("C");
          break;
      case 13:
          printf("D");
          break;
      case 14:
          printf("E");
          break;
      case 15:
          printf("F");
          break;
      default :
         printf("%ld",rem[i]);
    }
  }
}
int binarytooctal(long int n){
    int a=1,dec=0,i=1,j,b,octal=0,d;
	for (j=n;j>0;j=j/10)
	{  
          b= j % 10;
            if(i==1)
                  a=a*1;
            else
                 a=a*2;
	   dec=dec+(b*a);
	   i++;
	}
    i=1;
    for(j=dec;j>0;j=j/8){
        octal=octal+(j % 8)*i;
        i=i*10;
        n=n/8;
    }
    printf("\nThe octal  number: %d ",octal);
}
int binarytodecimal(long int num) {
    int decimal = 0, base = 1, r;
    while(num> 0)
    {
        r = num % 10;
        decimal = decimal + r * base;
        num = num / 10;
        base = base * 2;
    }
    printf("\nThe Decimal number: %d ", decimal);
}
int binarytohexa(long int bin)
{
    long int hexa = 0, i = 1, rem;
	while (bin != 0){
		rem=bin % 10;
		hexa= hexa + rem * i;
		i= i*2;
		bin= bin/10;
	}
   printf("\nThe hexadecimal number: %lX", hexa);
}
int main()
{
    printf("-----------Number Conversion Calculator-----------\n");
    printf("\t 1.Decimal to Binary Conversion\n\t 2.Decimal to Octal Conversion\n\t 3.Decimal to Hexadecimal Conversion\n\t 4.Binary to Decimal Conversion\n\t 5.Binary to Octal Conversion\n\t 6.Binary to Hexadecimal Conversion\n");
    printf("--------------------------------------------------");
    int options;
    long int num;
    printf("\nEnter the conversion you want: ");
    scanf("%d",&options);
    switch(options){
     case 1:{
         printf("\nEnter the decimal number: ");
         scanf("%ld",&num);
         decimaltobinary(num); 
         break;
     }
     case 2:{
         printf("\nEnter the decimal number: ");
         scanf("%ld",&num);
         decimaltooctal(num);
         break;
     }
     case 3:{
         printf("\nEnter the decimal number: ");
         scanf("%ld",&num);
         decimaltohexadecimal(num);
         break;
     }
     case 4:{
         printf("\nEnter the binary number: ");
         scanf("%ld",&num);
         binarytodecimal(num);
         break;
     }
     case 5:{
         printf("\nEnter the binary number: ");
         scanf("%ld",&num);
         binarytooctal(num);
         break;
     }
     case 6:{
         printf("\nEnter the binary number: ");
         scanf("%ld",&num);
         binarytohexa(num);
         break;
     }
     default:
     printf("Enter correct option");
 }
}