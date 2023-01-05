#include<stdio.h>


void printff(char* l) ; 


int main()
{   
    int n ; 
    scanf("%d" , &n) ; 

    for(int i=0 ; i<n ; i++)
    {
        char frase[40] ; 
        scanf(" %[^\n]" , frase) ; 

        printf("unmodfied : ") ; printff(frase) ; 

        int tam = 0 ; 
        for(int i=0 ; frase[i]!='\0' ; i++)
        {
            tam++ ; 
        }

        char c = frase[tam-1] ; 
        for(int i=tam-1 ; i > 0 ; i--)
        {
            //L U C A S ===> S L U C A
            frase[i] = frase[i-1] ; 
        }
        frase[0] = c ; 

        for(int i=tam/2 ; i<tam ; i++)
        {
            frase[i] += 3;
        }

        for(int i=0 ; frase[i]!='\0' ; i++)
        {
            if(frase[i] >= 'a' && frase[i] <= 'j')
            {
                int k = (0 - 'a') + frase[i] ; 
                frase[i] = k + '0' ; 
            }
            else if(frase[i] >= 'A' && frase[i]<= 'Z')
            {
                int k = (0 - 'A') + frase[i] ; 
                frase[i] = k + '0' ; 
            }
        }

        for(int i=tam/2 ; frase[i]!='\0' ; i++)
        {
            if(frase[i] >= 'a' && frase[i] <= 'z')
                frase[i] = ('A' - 'a') + frase[i] ; 
        }

        printf("modified : ") ; printff(frase) ; 
        
    } 

    return 0 ; 
}   

void printff(char* l)
{
    for(int i=0 ; l[i]!='\0' ; i++)
        printf("%c" , l[i]) ; 

    printf("\n\n") ; 
}