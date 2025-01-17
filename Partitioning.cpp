// Partitioning algorithms
// Assumes pivot is at array[right]
// Returns index of pivot after partitioning
///////////////////////////////////////////////

// Lomuto partitioning
int
Lomuto(int array[], int left, int right)
{
    int pivot = array[right];
    int s = left;
    int temp;
    
    for (int i = left; i <= right; ++i)
    {
        if (array[i] <= pivot)
        {
            temp = array[s];
            array[s] = array[i];
            array[i] = temp;
            ++s;
        }
    }
    return s - 1;
}


// Hoare partitioning
int
Hoare(int array[], int left, int right)
{
    int pivot = array[right];
    int i = left;
    int j = right;
    int temp;
    while(i < j)
    {
        while (i < j && array[i] <= pivot)
            ++i;
        while (i < j && array[j] >= pivot)
            --j;
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
    }
	temp = array[i];
	array[i] = array[right];
	array[right] = temp;
	/*
    temp = array[i];
    array[i] = array[right];
    array[right] = array[j];
    array[j] = temp;
    */
    return i;
}
