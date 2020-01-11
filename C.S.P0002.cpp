#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	
 long int n, number, x;
       printf("Enter a number: ");
       scanf("%ld", &n);
    if(n == 0){
	printf("Zero\n");
    exit(0);
   }
      if(n > 9999) {//Enter the number below 9999
    printf("Enter the number below 9999");
    exit(0);
	}
       printf("---------------------\n");
 x = (n/1000000 % 1000);// after division, and basically check if is between 1000 to 100000
 
  if(x <= 999 && x >= 1) {//after division, x is in 999 -> 1
  if (x <= 999 &&  x>= 100){//after division, x is in 999 -> 100
 
     number = (x /100);

           switch(number) {
   case 1: printf("One Hundred ");break;
   case 2: printf("Two Hundred ");break;
   case 3: printf("Three Hundred ");break;
   case 4: printf("Fourth Hundred ");break;
   case 5: printf("Five Hundred ");break;
   case 6: printf("Six Hundred ");break;
   case 7: printf("Seven Hundred ");break;
   case 8: printf("Eight Hundred ");break;
   case 9: printf("Nine Hundred ");break;
   }
}
 
    number = (n /10 % 10);
    if(number == 1 ) {
     number = (x % 10);
           switch(number) {
    case 0 : printf("ten ");break;
	case 1 : printf("eleven ");break;
	case 2 : printf("twelve ");break;
	case 3 : printf("thirteen ");break;
	case 4 : printf("fourteen ");break;
	case 5 : printf("fifteen ");break;
	case 6 : printf("sixteen ");break;
	case 7 : printf("seventeen ");break;
	case 8 : printf("eighteen ");break;
	case 9 : printf("nineteen ");
        }
 
    }
    else {
         if (number <= 90 && number >= 20){
            switch(number) {
    case 20: printf("twenty ");break;
    case 30: printf("thirty ");break;
	case 40: printf("forty ");break;
	case 50: printf("fifty ");break;
	case 60: printf("sixty ");break;
	case 70: printf("seventy ");break;
	case 80: printf("eighty ");break;
	case 90: printf("ninty ");
}
  }
 }
  }
 
 // Here is basically the same but with 4 numbers
 x = (n/1000 % 1000);
  if(x <= 999 && x >= 1) {
   if (x <= 999 && x >= 100){
   number = (x /100);
        switch(number) {
   case 1: printf("One Hundred ");break;
   case 2: printf("Two Hundred ");break;
   case 3: printf("Three Hundred ");break;
   case 4: printf("Fourth Hundred ");break;
   case 5: printf("Five Hundred ");break;
   case 6: printf("Six Hundred ");break;
   case 7: printf("Seven Hundred ");break;
   case 8: printf("Eight Hundred ");break;
   case 9: printf("Nine Hundred ");break;
   }
}
 
   number = (n /10 % 10);
   if(number == 1 ) {
    number = (x % 10);
       switch(number) {
    case 0 : printf("ten ");break;
	case 1 : printf("eleven ");break;
	case 2 : printf("twelve ");break;
	case 3 : printf("thirteen ");break;
	case 4 : printf("fourteen ");break;
	case 5 : printf("fifteen ");break;
	case 6 : printf("sixteen ");break;
	case 7 : printf("seventeen ");break;
	case 8 : printf("eighteen ");break;
	case 9 : printf("nineteen ");
 
    }
 
}
    else {
         if (number <= 90 && number >= 20){
            switch(number) {
    case 20: printf("twenty ");break;
    case 30: printf("thirty ");break;
	case 40: printf("forty ");break;
	case 50: printf("fifty ");break;
	case 60: printf("sixty ");break;
	case 70: printf("seventy ");break;
	case 80: printf("eighty ");break;
	case 90: printf("ninty ");
}
 
  }
  number = (x % 10);
  if (number <= 9 && number >= 1)
     switch(number) {
    case 1 : printf("one ");break;
	case 2 : printf("two ");break;
	case 3 : printf("three ");break;
	case 4 : printf("four ");break;
	case 5 : printf("five ");break;
	case 6 : printf("six ");break;
	case 7 : printf("seven ");break;
	case 8 : printf("eight ");break;
	case 9 : printf("nine ");
      }
   }
printf("Thousand ");
 }
 // Here is basically the same but with 3  to 1 numbers
  x = (n/1 % 1000);
  if(x <= 999 && x >= 1) {
  if (x <= 999 && x >= 100){
   number = (x /100);
          switch(number) {
   case 1: printf("One Hundred ");break;
   case 2: printf("Two Hundred ");break;
   case 3: printf("Three Hundred ");break;
   case 4: printf("Fourth Hundred ");break;
   case 5: printf("Five Hundred ");break;
   case 6: printf("Six Hundred ");break;
   case 7: printf("Seven Hundred ");break;
   case 8: printf("Eight Hundred ");break;
   case 9: printf("Nine Hundred ");break;
   }
}
 
 number = (n /10 % 10);
 if(number == 1 ) {
 number = (x % 10);
        switch(number) {
    case 0 : printf("ten ");break;
	case 1 : printf("eleven ");break;
	case 2 : printf("twelve ");break;
	case 3 : printf("thirteen ");break;
	case 4 : printf("fourteen ");break;
	case 5 : printf("fifteen ");break;
	case 6 : printf("sixteen ");break;
	case 7 : printf("seventeen ");break;
	case 8 : printf("eighteen ");break;
	case 9 : printf("nineteen ");
 
    }
}
    else {
         if (number <= 9 && number >= 2){
            switch(number) {
    case 2: printf("twenty ");break;
	case 3: printf("thirty ");break;
	case 4: printf("forty ");break;
	case 5: printf("fifty ");break;
	case 6: printf("sixty ");break;
	case 7: printf("seventy ");break;
	case 8: printf("eighty ");break;
	case 9: printf("ninty ");
}
 
  }
  number = (x % 10);
  if (number <= 9 && number >= 1)
     switch(number) {
    case 1 : printf("one ");break;
	case 2 : printf("two ");break;
	case 3 : printf("three ");break;
	case 4 : printf("four ");break;
	case 5 : printf("five ");break;
	case 6 : printf("six ");break;
	case 7 : printf("seven ");break;
	case 8 : printf("eight ");break;
	case 9 : printf("nine ");
   }
 }
  printf("\n-------------------\n");
 return 0;
 }


}
