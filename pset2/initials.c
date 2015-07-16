#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // prompt user for their name
    string name = GetString();
    
    // cycle through all characters, capitalizing and
    // displaying any letter found after a space
    for (int i = 0, length = strlen(name); i < length; i++)
    {
        if ((i == 0 && isalpha(name[0])) || 
            (isalpha(name[i]) && isspace(name[i - 1])))
        {
            printf("%c", toupper(name[i]));
        }
    }
    
    printf("\n");
    
    // this was CS50 pset2.
    return 0;
}
