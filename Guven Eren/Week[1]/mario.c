#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int deger;

    do 
    {
        deger=get_int("1 ile 8 arasında bir deger gir!!");
    }
    while(deger<1 || deger>8);

    for(int i =0;i<deger;i++)
    {
        for(int k=0;k<deger-i-1;k++)
        {
            printf(" ");
        }

        for(int j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("  ");

        for(int j=0;j<=i;j++)
        {
            printf("#");
        }

        printf("\n");
    }

    
    

}
