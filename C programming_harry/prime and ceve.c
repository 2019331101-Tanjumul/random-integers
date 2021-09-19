#define sz 100000
int siv[sz], primes[sz], n;

void seive()
{
    int i, j, limit = sqrt(sz+1);

    for (i=3; i<=limit; i+=2)
        if(!siv[i])
            for (j = i*i; j<sz; j+=i+i)
                siv[j] = 1;
    primes[n++]=2;
    for (i=3; i<sz; i+=2)
        if(!siv[i]) primes[n++]=i;
}
