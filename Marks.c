// Find students markss & absent list for exm & findour avg ,max, min marks in exams.

#include<stdio.h>
int main()
{
	int mark[10],n,present=0,t=0,i,sum=0,high=0,low=0,avg,absent=0;
		printf("Enter no of students:");
		scanf("%d",&n);
		printf("\nEnter there marks: \n For absent put(-1)\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&mark[i]);
	}
		printf("Marks of students are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",mark[i]);
	}
	for(i=0;i<n;i++)
	{	
		if(mark[i]!=-1)
		{ 
		 present++;
		 sum=sum+mark[i];
		}
	}
		avg=sum/present;
		printf("Avg marks of students:%d\n",avg);
		low=mark[0];
	for(i=0;i<n;i++)
	{
		if(mark[i]<low && mark[i]!=-1)
		{
			low=mark[i];
		}
	}
		printf("Lowest marks are:%d\n",low);
		high=mark[0];
	for(i=0;i<n;i++)
	{
		if(mark[i]>high)
		high=mark[i];
	}
		printf("Highest marks are:%d\n",high);
	for(i=0;i<n;i++)
	{
		if(mark[i]==-1)
		absent++;
	}	
		printf("No of Present students:%d \n",present);
		printf("No of Absent students:%d \n",absent);
			
	for(i=0;i<n;i++)
	{
		if(mark[i]==high)
		t++;
	}
		printf("No of toppers:%d\n",t);
return 0;
}
