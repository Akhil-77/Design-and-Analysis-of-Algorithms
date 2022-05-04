# include <stdio.h>

void MergeSort(int arr[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid-beg+1;
    int n2 = end-mid;

    int LeftArray[n1], RightArray[n2];

    for(i=0; i<n1; i++)
        LeftArray[i] = arr[beg + i];

    for(j=0; j<n2; j++)
        RightArray[j] = arr[mid+1+j];

    i=0;
    j=0;
    k=beg;

    while(i<n1 && j<n2)
    {

        if(LeftArray[i] <= RightArray[j])
        {
            arr[k] = LeftArray[i];
            i++;
        }
        else
        {
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

void merge(int arr[], int beg, int end)
{
    if(beg < end)
    {
        int mid = (beg+end)/2;
        merge(arr, beg, mid);
        merge(arr, mid+1, end);
        MergeSort(arr, beg, mid, end);
    }
}

void PrintArray(int arr[], int num)
{
    for(int h; h<num; h++)
    {
        printf("%d ", arr[h]);
    }
}

int main()
{
    int arr[] = {12, 31, 25, 8, 32, 17};
    int num = sizeof(arr)/sizeof(arr[0]);

    printf("Array before sorting: ");
    PrintArray(arr, num);

    merge(arr, 0, num-1);

    printf("\nArray after the sorting: ");
    PrintArray(arr, num);

    return 0;
}

