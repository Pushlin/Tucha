#include <stdio.h>
#include <math.h>
#define INFINITE -1

int solve(float a,float b, float c, float* x1, float* x2);


int main()
    {
    float x1 = 0,x2 = 0;
    printf ("\t EQUATION SOLVER v1.0\n");

    printf ("Enter the coefficients of the equation\n");

    float a, b, c;                                       /*coefficients*/
    scanf("%f %f %f", &a, &b, &c);

    int amount = solve(a, b, c, &x1, &x2);
    switch (amount)
        {
        case 0:  printf ("Equation doesn't have any roots\n");  break;

        case 1:  printf ("Equation has one root: x=%.2f\n",x1); break;

        case 2:  printf ("Equation has two roots: x1=%.2f and x2=%.2f\n",x1,x2); break;

        case INFINITE:  printf ("Equation has infinite amount of roots\n"); break;

        default: printf ("a? excuse me?");
        };
    };


int solve(float a,float b, float c, float* x1, float* x2)
    {
    if (a == 0)
        {
        if (b == 0)
            {
            if (c == 0) return INFINITE;
            else return 0;
            }
        else *x1=-c/b;
        }
    else
        {
        int disc = b*b-4.0*a*c;

        if (disc > 0)
            {
            *x1 =  ((-b+sqrt(disc))/4*a*c);
            *x2 =  ((-b-sqrt(disc))/4*a*c);
            return 2;
            }
        else if (disc == 0)
            {
            *x1 =  ((-b+sqrt(disc))/4*a*c);
            return 1;
            }
        else return 0;
        }
    };



