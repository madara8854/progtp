
int factorial(int x)
{
    int d;
    if(x!=0)
    {
    	d = x;
        while((x-1)!=0)
        {
        	d *= (x-1);
        	x = x-1;
    	}
    }
    else
        d = 1;

    return d;
}

