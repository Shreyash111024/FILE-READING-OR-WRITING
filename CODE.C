#include <stdio.h>


int main()
{
    char goals[1000]= ("Objective 1: Run a 5K race.\nObjective 2: Get 9+ CGPA.");
    int choice;
    printf("Enter Either You want to write or read the Goals\n Enter 1 for Write or 2 for Read\n Enter choice:");
    scanf("%d",&choice);
    if(choice==1){
    FILE *file;
    file = fopen("goals.txt", "w");  
    fprintf(file, "%s", goals); 
    fclose(file);  
    }
    
    else if(choice==2){
    FILE *file;
    file = fopen("goals.txt", "r");  
    fscanf(file, "%s", goals); 
    fclose(file);  
    }
    else{
        printf("invalid input");
    }


    return 0;
}
