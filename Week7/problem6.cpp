int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2)
{
    int *res = new int[lenArr1 + lenArr2];
    if (firstArr[0] <= firstArr[lenArr1 - 1] && secondArr[0] <= secondArr[lenArr2 - 1])
    {
        merge(firstArr, firstArr + lenArr1, secondArr, secondArr + lenArr2, res);
    }
    else
    {
        merge(firstArr, firstArr + lenArr1, secondArr, secondArr + lenArr2, res, greater<int>());
    }

    return res;
}