#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define INF 999


void bubble_sort(int array[],int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void chocolate_distribution(int arr[],int n,int m)
{
	int min_diff = INF,diff=0,i;
	if (m == 0 || n == 0)
        printf("\nAll zero\n");
    bubble_sort(arr,n);
	if(n<m)
		printf("Insufficient packets\n");
	else{
		for (i = 0; i + m - 1 < n; i++) 
		{
	        diff = arr[i + m - 1] - arr[i];
	        if (diff < min_diff)
	            min_diff = diff;
	    }
	    printf("Minimum diff is: %d",min_diff);
	}
	
}

int main ()
{
	int packet[MAX], n, m;
	printf("Enter the number of packets: ");
	scanf("%d", &n);
	printf("\nEnter the chocolates in each packet(Array elements):\n ");
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nChocolates in packet %d: ",i+1);
		scanf ("%d",&packet[i]);
	}
	printf("Enter the number of children: ");
	scanf("%d", &m);
	chocolate_distribution(packet,n,m);
	return 0;
}



















