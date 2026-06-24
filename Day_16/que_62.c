// Q62	Write a program to Find maximum frequency element.

#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter number of elements in array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int max_frequency=0;
    int max_element;
    for ( i = 0; i < n; i++)
    {
        int already_counted = 0;
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                already_counted = 1;
                break;
            }
        }

        if(already_counted)
        {
            continue;
        }

         int count=0;
        for ( j = i; j < n; j++)
        {
            if(a[i]==a[j])
           count++;
        }
        
        printf("%d occurs %d times!\n",a[i],count);
        if(count>max_frequency)
        {
            max_frequency=count;
            max_element=a[i];
        }
    }

    printf("Hence %d has maximum freqency as it occurs %d times!",max_element,max_frequency);
    
     return 0;
}

// Sample Output:
// Enter number of elements in array:10                
// Enter elements of array: 1 2 2 3 4 4 4 5 6 8
// 1 occurs 1 times!
// 2 occurs 2 times!
// 3 occurs 1 times!
// 4 occurs 3 times!
// 5 occurs 1 times!
// 6 occurs 1 times!
// 8 occurs 1 times!
// Hence 4 has maximum freqency as it occurs 3 times!
