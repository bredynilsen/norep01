void norep(int x, int *iVetor)
{
    int k, j, iAux, iFlag = 0;
    for (k = 0; k < x; k++)
    {
        iAux = 1+ rand()%6;
        for (j = 0; j < k; j++)
        {
            if (iAux == iVetor[j])
                iFlag = 1;
        }
        if (iFlag != 1)
            iVetor[k] = iAux;
        else
            k--;
        iFlag = 0;
    }
}
