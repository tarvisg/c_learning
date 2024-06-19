#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;
    int distance2 = 200;
    int distance3 = 300;
    char miles[]  = "I would walk";
    char away[] = "miles away";
    int allthemiles = distance + distance2 + distance3;
    
    // this is also a comment
    //printf("You are %d miles away.\n, Actually you may be %d miles away.\n, No sorry you are %d miles away.\n", distance, distance2, distance3);
    printf("%s, %d, %s\n", miles, distance, away);
    printf("%s, %d, %s\n", miles, distance2, away);
    printf("%s, %d, %s\n", miles, distance3, away);
    printf("That's a total of %d miles away.\n", allthemiles);
    return 0;
}