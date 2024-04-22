#include <stdio.h>
#include <stdlib.h>



void max_profit(int size, int *arr){

    int maxprofit = 0;
    int buy = 0;

    for (int i = 1; i < size; i++)
    {
        if(buy>arr[i]){
            buy = arr[i];
        }

        else if(arr[i] - buy > maxprofit){
            maxprofit = arr[i] - buy;
        }
    }
    
    printf("Your max profit is: %d",    maxprofit);
}

int main(){
    
    int size;

    printf("Enter the number of days");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size ; i++)
    {
        printf("Enter the stock price at day %d", i+1);
        scanf("%d",  &arr[i]);
    }

    printf("Your stock array is: ");

    for (int i = 0; i < size; i++)
    {
       printf("%d", arr[i]); 
    }

    max_profit(size, arr);

    return 0;
    
    
}