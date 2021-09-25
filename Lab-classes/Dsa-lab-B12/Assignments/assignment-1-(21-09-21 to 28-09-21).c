1. Write a C program to print day of week name using switch case.

soln:- 
#include <stdio.h>
int main()
{
   int optn;
   while(1){
     printf("\nEnter the date:\nChoose from 1 to 7\nPress 0 to exit\n");
     scanf("%d",&optn);
     switch(optn){
       case 1:
           printf("Monday!\n");
           break;
       case 2:
           printf("Tuesday!\n");
           break;
       case 3:
           printf("Wednesday!\n");
           break;
       case 4:
           printf("Thursday!\n");
           break;
       case 5:
           printf("Friday!\n");
           break;
       case 6:
           printf("Saturday!\n");
           break;
       case 7:
           printf("Sunday!\n");
           break;
       case 0:
       	   printf("Happy coding!\n");
           exit(0);
           break;
       default:
           printf("Enter the correct option!\n");
     }
   }
}

2. Write a C program to check whether an alphabet is vowel or consonant using switch case.

soln:-
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
    }

    return 0;
}

3. Write a C program to check whether a number is positive, negative or zero using switch case.

soln:-
#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number:\n");
    scanf("%d", &num);
    int res = num>=0?1:0;

    switch(res){
    	case 0:
    		printf("negative!\n");
    		break;
    	case 1:
    		if(num == 0) printf("Zero!\n");
    		else printf("Positive!");
    		break;
	}
    return 0;
}

4. Write a C program to find maximum between two numbers using switch case.

soln:-
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    
    int res = num1>=num2?num1:num2;

    switch(res){
    	default:
    		printf("Maximum is : %d",res);
    		break;
	}
    return 0;
}

5. Write a C program to create Simple Calculator using switch case.

soln:-

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
