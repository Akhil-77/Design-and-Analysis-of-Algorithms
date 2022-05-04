# include <stdio.h>

int main()
{
    int num_list[50];
    int num, x, j, i, temp;

    printf("Enter the number of the elements: ");
    scanf("%d", &num);

    for(x=0; x<num; x++)
    {
        scanf("%d", &num_list[x]);
    }

    for(i=0; i<num-1; i++)
    {
        for(j=0; j<num-i-1; j++)
        {
            if(num_list[j] > num_list[j+1])
            {
                temp = num_list[j];
                num_list[j] = num_list[j+1];
                num_list[j+1] = temp;
            }
        }
    }
    printf("Sorted Array: ");

    for(x=0; x<num; x++)
    {
        printf("%d ", num_list[x]);
    }
    return 0;
}

