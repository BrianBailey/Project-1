#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    int counter = 0;
    
    do
    {
        printf("Well hello there, How much change is owed?\n");
        dollars = GetFloat();
    }
    
    while (dollars <= 0);
    
    
    int cent = round(dollars * 100);
    
    while (cent >= 25)
    {
        counter++;
        cent = cent - 25;
    } 
    
    while (cent >= 10)
    {
        counter++;
        cent = cent - 10;
    }
    
    while (cent >= 5)
    {
        counter++;
        cent = cent - 5;
        
    }
    
    while (cent >= 1)
    {
        counter++;
        cent = cent - 1;
    }
    
    printf("%d\n" , counter);
}
    
