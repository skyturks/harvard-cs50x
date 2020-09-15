#include <string.h>
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc,string argv[])
{
    if(argc!=2)
    {
        return 1;
    }
    string Gmetin= get_string("Girilen Metin: ");
    int shift = atoi(argv[1]);
    
    printf("Dönüştürülen metin: ");

    for(int i = 0; i<strlen(Gmetin); i++)
    {
        if(!isalpha(Gmetin[i]))
        {
            printf("%c",Gmetin[i]);
        }
        else
        {
            if(Gmetin[i]>'Z')
            {
                printf("%c",(Gmetin[i]-'a'+shift)%26 + 'a');
            }else
            {
                printf("%c",(Gmetin[i]-'A'+shift)%26 + 'A');
            }
        }
    }
    printf("\n");
}

