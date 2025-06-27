#include<stdio.h>
int main(){
    char adjective1[20], noun1[20], verb1[20], adjective2[20];
    printf("enter an  adjective(discription):\n");
    fgets(adjective1,sizeof(adjective1), stdin);


    printf("enter an noun (animal or person):\n");
    fgets(noun1,sizeof(noun1), stdin);
    adjective1[strcspn(adjective1, "\n")] = 0; // Remove newline

    printf("Enter an adjective (Discription):\n");
    fgets(adjective2,sizeof(adjective2), stdin);
    noun1[strcspn(noun1, "\n")] = 0;

    printf("enter a verb '(Ending w / -ing )':\n");
    fgets(verb1,sizeof(verb1), stdin);
    verb1[strcspn(verb1, "\n")] = 0; // Remove newline

    printf("Enter an adjective (Discription):\n");
    fgets(adjective2,sizeof(adjective2), stdin);
    adjective2[strcspn(adjective2, "\n")] = 0; // Remove newline

    printf(" Today i went to a %s zoo.\n", adjective1);
    printf("In an exhibit i saw a %s .\n", noun1);
    printf("%s was sweety and %s.\n", noun1, verb1);
    printf("I was %s .\n",adjective2);
}