#include <iostream>
int romanToInt(std::string s);
int main()
{
    std::cout << romanToInt("MCMXCIV") << std::endl;
    std::cout << romanToInt("LX") << std::endl;
    return 0;
}

int romanToInt(std::string s)
{
    int result = 0;
    const unsigned int length = s.length();
    const unsigned int I = 1;
    const unsigned int V = 5;
    const unsigned int X = 10;
    const unsigned int L = 50;
    const unsigned int C = 100;
    const unsigned int D = 500;
    const unsigned int M = 1000;
    for (size_t i = 0; i < length; i++)
    {

        char c = s[i];
        char c2 = s[i + 1];
        switch (c)
        {
        case 'I':

            if (c2 == 'V')
            {
                i++;
                result += V - I;
            }

            else if (c2 == 'X')
            {
                i++;
                result += X - I;
            }
            else
            {
                result += I;
            }
            break;
        case 'X':

            if (c2 == 'L')
            {
                result += L - X;
                i++;
            }

            else if (c2 == 'C')
            {
                result += C - X;
                i++;
            }

            else
                result += X;
            break;
        case 'C':
            if (c2 == 'D')
            {
                result += D - C;
                i++;
            }

            else if (c2 == 'M')
            {
                i++;
                result += M - C;
            }

            else
                result += C;
            break;
        case 'V':
            result += V;
            break;
        case 'L':
            result += L;
            break;
        case 'D':
            result += D;
            break;
        case 'M':
            result += M;
            break;
        default:
            break;
        }
    }
    return result;
}