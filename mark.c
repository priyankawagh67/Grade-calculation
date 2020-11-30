#include<stdio.h>
main()
{
    int mark;
    printf("Enter your marks:");
    scanf("%d",&mark);

    if(mark>=85)
    {
        printf("You got Grade A");

    }
    else if(mark>=70)
    {
        printf("You got Grade B");
    }

    else if(mark>=55)
    {
        printf("You got Grade C");
    }
    else if(mark<40)
    {
        printf("You got Grade F");

    }
    return 0;
}
