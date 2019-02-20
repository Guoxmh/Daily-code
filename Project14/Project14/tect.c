int main()
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	int tmp = 0;
	int arr[] = { 1, 2, 3, 2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		tmp ^= arr[i];

	}
	for (j = 0; j < 32; j++)
	{
		if ((tmp >> j) & 1 == 1)
			break;
	}
	for (i = 0; i < sz; i++)
	{
		if ((arr[i] >> j) & 1 == 1)
		{
			b ^= arr[i];
			arr[i] = 0;
		}
	}
	for (i = 0; i < sz; i++)
	{

		a ^= arr[i];

	}

	printf("%d  %d", a, b);
	system("pause");
	return 0;
}
