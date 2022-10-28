// My First Project :) date:26/july/2022 by~aryan_0.8.2.3
// Calculator example using C code
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define KEY "Enter the calculator Operation you want to do:"

// Function prototype declaration
void add();
void sub();
void multi();
void cal_division();
void mod();
void cal_power();
int fac();
void cal_oprtns();

// Start of Main Program
int main()
{
    int T=1;
    char operations_calculations;

    // Function call
    cal_oprtns();

    while(T)
    {
        printf("\n");
        printf("%s : ", KEY);

        operations_calculations=getche();

        switch(operations_calculations)
        {
            case '+': add();
                      break;

            case '-': sub();
                      break;

            case '*': multi();
                      break;

            case '/': cal_division();
                      break;

            case '?': mod();
                      break;

            case '!': fac();
                      break;

            case '^': cal_power();
                      break;

            case 'H':
            case 'h': cal_oprtns();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      cal_oprtns();
                      break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      cal_oprtns();
        }
    }
}

//Function Definitions

void cal_oprtns()
{
    //system("cls");  use system function to clear
    //screen instead of clrscr();
    printf("\n             Welcome to C calculator \n\n");

    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}

void add()
{
    int z, cal_total=0, q=0, cal_num;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&z);
    printf("Please enter %d numbers one by one: \n",z);
    while(q<z)
    {
        scanf("%d",&cal_num);
        cal_total=cal_total+cal_num;
        q=q+1;
    }
    printf("Sum of %d numbers = %d \n",z,cal_total);
}

void sub()
{
    int l, m, n = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &l);
    printf("Please enter second number : ");
    scanf("%d", &m);
    n = l - m;
    printf("\n%d - %d = %d\n", l, m, n);
}

void multi()
{
    int o, p, multi_calculate=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &o);
    printf("Please enter second number: ");
    scanf("%d", &p);
    multi_calculate=o*p;
    printf("\nMultiplication of entered numbers = %d\n",multi_calculate);
}

void cal_division()
{
    int e, f, g=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &e);
    printf("Please enter second number : ");
    scanf("%d", &f);
    g=e/f;
    printf("\nDivision of entered numbers=%d\n",g);
}

void mod()
{
    int r, s, t=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &r);
    printf("Please enter second number  : ");
    scanf("%d", &s);
    t=r%s;
    printf("\nModulus of entered numbers = %d\n",t);
}

void cal_power()
{
    double h,numb, f;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&h);

    printf("power : ");
    scanf("%lf",&numb);

    f=pow(h,numb);

    printf("\n%lf to the power %lf = %lf \n",h,numb,f);
}

int fac()
{
    int s,factoring=1,numbering;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&numbering);

    if (numbering<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(s=1;s<=numbering;s++)
    factoring=factoring*s;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",numbering,factoring);
    return 0;
}
