#include<stdio.h>

int main()
{   
    int n ; 
    scanf("%d" , &n) ; 

    for(int i=0 ; i<n ; i++)
    {
        char frase[40] ; 
        scanf(" %[^\n]" , frase) ; 

        int tam = 0 ; 
        for(int i=0 ; frase[i]!='\0' ; i++)
        {
            tam++ ; 
        }

        

    }


    

    return 0 ; 
}