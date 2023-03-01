#include<stdio.h>

int main () {

   int b;
   
   printf("1. prepaid\n");
   printf("2. postpaid\n");
   
   printf("Enter your choice :");
   scanf("%d",&b);
   
   switch(b) {
   	
   	case 1:
   		
   		 printf("\n1. 666 RS/ - 84 days validity and 1.5/day 100 Sms/day\n");
   		 printf("2. 2499 RS/ - 1 year validity and 2.5/day 200 Sms/day\n\n");
   		 
   		 printf("Enter Your choice :");
   		 scanf("%d",&b);
   		 switch(b){
   		 	
   		 	case 1 :
   		 		
   		 		  printf(" Your recharge of 666 RS/ is sucessfully Done\n\n");
   		 		  
   		 	case 2 :
				
				 printf(" Ypour recharge of 2499 RS/ is sucessfully Done\n\n");
				 	  
   		 		  
			}
			
			break;
		case 2:
		      printf("\nplease try agian\n\n");
			  break;
			  
		default:
		     printf(" Invalid Input\n\n");
			 	  	
			   }
}	

