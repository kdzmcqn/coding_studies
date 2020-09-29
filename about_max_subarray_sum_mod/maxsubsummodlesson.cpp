int curr = 0;
for (int i = 0; i < n; i++)
{
    curr = (arr[i] % M + curr) % M;
    prefix[i] = curr;
}

int ret = 0;
for (int i = 0; i < n; i++)
{
    for (int j = i - 1; j >= 0; j--)
    {
        ret = max(ret, (prefix[i] - prefix[j] + M) % M)
    }
    ret = max(ret, prefix[i]); // Don't forget sum from beginning.
}