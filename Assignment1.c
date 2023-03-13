//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

int main()
{
  //add your code here
	int limit;
	scanf("enetr limit of N numbers:%d",&limit);
  int Numbers[limit];
  for(int i=0;i<limit;i++)
	{
		scanf("%d",&Numbers[i];
  }
	for(int i=0;i<limit;i++)
	{
		printf("%d  ",Numbers[i]);
	}
	int poscount=0,negcount=0;
	for(int i=0;i<limit;i++)
	{
		for(Numbers[i]>0)
		{
			poscount++;
		}
		for(Numbers[i]<0)
		{
			negcount++;
		}
	}
  return 0;
}
