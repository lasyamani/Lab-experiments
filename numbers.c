#include<stdio.h>
#include<math.h>

void main()

{
    

    float num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter choice (1: Add, 2: Subtract, 3: Multiply, 4: Divide): ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            result = num1 + num2;
            printf("\n Result: %.2f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("\n Result: %.2f", result);
            break;
        case 3:
            result = num1 * num2;
            printf("\n Result: %.2f", result);
            break;
        case 4:
            if (num2 == 0) 
                printf("\n Division by zero is not possible");
            else 
            {
                result = num1 / num2;
                printf("\n Result: %.2f", result);
            }
            break;
        default:
            printf("\n Invalid option");
    
}

    
    
    
    
 }