# calculator program:

#include <stdio.h>
int main()
{
  int choice;
  int n,m;
  printf("Enter two numbers\n");
  scanf("%d%d",&n,&m);
  while(1){
    
    printf("\nChoose the option:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n0.Exit\n");
    scanf("%d",&choice);
    switch(choice){
    	case 1:
    		printf("\nsummation = %d",n+m);
    		break;
    	case 2:
    		printf("\nsubstraction = %d",n-m);
    		break;
    	case 3:
    		printf("\nmultiplication = %d",n*m);
    		break;
    	case 4:
    		printf("Division = %d",n/m);
    		break;
    	case 0:
    		printf("Happy Coding\n\nProgram End!!");
    		exit(0);
	}
  }
}

# calender program:

#include <stdio.h>
int main()
{
  int choice;
  int n;
  while(1){
    
    printf("\nEnter month number\n0.Exit\n");
    scanf("%d",&choice);
    switch(choice){
    	case 1:
    		printf("\nDays are 31");
    		break;
    	case 2:
    		printf("\nDays are 28");
    		break;
    	case 3:
    		printf("\nDays are 31");
    		break;
    	case 5:
    		printf("\nDays are 31");
    		break;
    	case 7:
    		printf("\nDays are 31");
    		break;
    	case 8:
    		printf("\nDays are 31");
    		break;
    	case 10 :
    		printf("\nDays are 31");
    		break;
    	case 4:
    		printf("\nDays are 30");
    		break;
    	case 6:
    		printf("\nDays are 30");
    		break;
    	case 9:
    		printf("\nDays are 30");
    		break;
    	case 11:
    		printf("\nDays are 30");
    		break;
    	case 12:
    		printf("\nDays are 31");
    		break;
    	case 0:
    		printf("Happy Coding\n\nProgram End!!");
    		exit(0);
    	default:
    		printf("\nEnter Proper Month");
    		break;
	}
  }
}
