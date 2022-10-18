#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

void ispassed(int n1, int n2, int ntest);

void Testing(int ntest);

int main()
{
//  int s = sum(5, 2, 10, 24, 54);
    for (int i = 0; i < 8; i++)
        Testing(i);
    
}

void Testing(int ntest)
{
    switch (ntest)
    {
        case 1:
            ft_printf("\n\nTESTING 'S' ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
            ispassed(
                ft_printf("My printf : ### %s #### %s ##### %s ##### %s ###### %s ###### %s ######\n","HELLO WORLD", "hello world", "abcdef", "",NULL, NULL),
                   printf("og printf : ### %s #### %s ##### %s ##### %s ###### %s ###### %s ######\n","HELLO WORLD", "hello world", "abcdef", "",NULL, NULL),
                    ntest);
            break;
        case 2:
            ft_printf("\n\nTESTING 'c' ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
            ispassed(
                ft_printf("My printf : ### %c #### %c ##### %c ##### %c ###### %c ###### %c ######\n",'H', 'h', 65, 255, '\325', 0),
                   printf("og printf : ### %c #### %c ##### %c ##### %c ###### %c ###### %c ######\n",'H', 'h', 65, 255, '\325', 0),
                    ntest);
            break;
        case 3:
            ft_printf("\n\nTESTING 'D and I' ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
            ispassed(
                ft_printf("My printf : ### %d #### %d ##### %d ##### %d ###### %d ###### %d ######\n",152565645, -152565645, 0, INT_MIN, INT_MAX, LONG_MIN),
                   printf("og printf : ### %d #### %d ##### %d ##### %d ###### %d ###### 0 ######\n",152565645, -152565645, 0, INT_MIN, INT_MAX, LONG_MIN),
                    ntest);
            break;
        case 4:
            ft_printf("\n\nTESTING 'x' ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
            ispassed(
                ft_printf("My printf : ### %x #### %x ##### %x ##### %x ###### %x ###### %x ######\n",65 , 255, 'A', 0, -542, INT_MAX),
                   printf("og printf : ### %x #### %x ##### %x ##### %x ###### %x ###### %x ######\n",65 , 255, 'A', 0, -542, INT_MAX),
                    ntest);
            break;
        case 5:
            ft_printf("\n\nTESTING 'X' ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
            ispassed(
                ft_printf("My printf : ### %X #### %X ##### %X ##### %X ###### %X ###### %X ######\n",65 , 255, 'A', 0, -542, INT_MAX),
                   printf("og printf : ### %X #### %X ##### %X ##### %X ###### %X ###### %X ######\n",65 , 255, 'A', 0, -542, INT_MAX),
                    ntest);
            break;
        case 6:
            ft_printf("\n\nTESTING 'P' ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
            ispassed(
                ft_printf("My printf : ### %p #### %p ##### %p ##### %p ###### %p ######   %p %p  ######\n",&"Hello", &"H", &"\200", NULL, &"\0", ULONG_MAX, -ULONG_MAX) + 8,
                   printf("og printf : ### %p #### %p ##### %p ##### %p ###### %p ######   %lu %lu  ######\n",&"Hello", &"H", &"\200", NULL, &"\0", ULONG_MAX, -ULONG_MAX),
                    ntest);
            break;
        case 7:
            ft_printf("\n\nTESTING 'Percent' ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
            ispassed(
                ft_printf("My printf : ### %% ==== %%   =====  %%%%  === %%%%%    %%%%%% %d \n"),
                   printf("og printf : ### %% ==== %%   =====  %%%%  === %%%%%    %%%%%% %d \n"),
                    ntest);
            break;
        default:
            break;
    }
}

void ispassed(int n1, int n2, int ntest)
{
    if (n1 == n2)
        ft_printf("\n%d  ==  %d \nTest %d ====================================> passed !\n\n", n1, n2, ntest);
    else
        ft_printf("\n%d  ==  %d \nTest %d ====================================> failed !\n\n", n1, n2, ntest);
}