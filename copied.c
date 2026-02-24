#include <stdio.h>

int main()
{
    int n, i, j;

    // Step 1: Input array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];
    int visited[n];

    for(i = 0; i < n; i++)
        visited[i] = 0;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("\nArray elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", A[i]);

    // Step 2: Frequency count
    int count;
    int H = 0;
    int L = n;   // maximum possible frequency

    printf("\n\nFrequencies:\n");

    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(A[i] == A[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("Element %d occurs %d times\n", A[i], count);

        if(count > H)
            H = count;

        if(count < L)
            L = count;
    }

    // Step 3: Compute D
    int D = H + L;
    printf("\nH = %d", H);
    printf("\nL = %d", L);
    printf("\nD = H + L = %d\n", D);

    // Step 4: Find Dth palindrome between 10 and 1001
    int num, temp, reverse, remainder;
    int palindromeCount = 0;
    int found = 0;

    for(num = 10; num <= 1001; num++)
    {
        temp = num;
        reverse = 0;

        while(temp > 0)
        {
            remainder = temp % 10;
            reverse = reverse * 10 + remainder;
            temp /= 10;
        }

        if(reverse == num)
        {
            palindromeCount++;

            if(palindromeCount == D)
            {
                printf("\nDth palindrome number = %d\n", num);
                found = 1;
                break;
            }
        }
    }

    if(!found)
        printf("\nDth palindrome not found in the range.\n");

    return 0;
}
