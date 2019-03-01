#include<stdio.h>

int main(void)
{
    char a, b, c;

    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);

    if(a == "vertebrado")
    {
        if(b == "ave")
        {
            if( c == "carnovoro")
                printf("aguiya\n");

            if (c == "onivoro")
                printf("pomba\n");
        }

        if( b == "mamifero")
        {
            if (c == "onivoro")
                printf("homem\n");

            if(c == "herbivoro")
                printf("vaca\n");
        }
    }

    /////////////////////////////////

     if(a == "invertebrado")
    {
        if(b == "inseto")
        {
            if( c == "hematofago")
                printf("pulga\n");

            if (c == "herbivoro")
                printf("lagarta\n");
        }

        if( b == "anelideo")
        {
            if (c == "hematofago")
                printf("sanguessuga\n");

            if(c == "onivoro")
                printf("minhoca\n");
        }
    }


    return 0;
}
