class Solution {
public:
    int subtractProductAndSum(int n) {
        return productofdigits(n) - sumofdigits(n);
    }
private:
    int sumofdigits(int n)
    {
        if(n == 0)
        {
            return 0;
        }
        return n % 10 + sumofdigits(n/10);
    }
private:
    int productofdigits(int n)
    {
        int product = 1;
        while(n!=0)
        {
            int ld = n % 10;
            product = product * ld;
            n = n/10;
        }
        return product;
    }
};