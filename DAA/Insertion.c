# include <stdio.h>

int main()
{
    int arr[20];
    int i, j, temp, num, x;

    printf("Enter the number of the inputs: ");
    scanf("%d", &num);

    for(x=0; x<num; x++)
    {
        scanf("%d", &arr[x]);
    }

    for(i=1; i<num; i++)
    {
        temp = arr[i];
        j = i-1;

        while(j>=0 && temp <= arr[j])
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }
    printf("Array after sorting: ");

    for(x=0; x<num; x++)
    {
        printf("%d ", arr[x]);
    }
    return 0;
}

