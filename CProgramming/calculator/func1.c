double add(double a, double b)
{
    return(a + b);
}

double sub(double a, double b)
{
    return(a - b);
}

double divd(double a, double b)
{
    return(a / b);
}

double mul(double a, double b)
{
    return(a * b);
}

double pow(double x, double y)
{
    int v = x, i;
    for (i = 0; i < y; i++)
    {
        x *= v;
    }
    return (x);
}