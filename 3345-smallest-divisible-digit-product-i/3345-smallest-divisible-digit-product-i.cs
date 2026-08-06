public class Solution
{
    public bool Can(int num, int t)
    {
        int product = 1;

        while (num > 0)
        {
            product *= num % 10;
            num /= 10;
        }

        return product % t == 0;
    }

    public int SmallestNumber(int n, int t)
    {
        while (!Can(n, t))
            n++;

        return n;
    }
}