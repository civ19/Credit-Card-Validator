#include <iostream>
#include <string>
#include <limits>

int main()
{
    int num[16];
    std::string inp;

    while(true)
    {
        std::cout << "Enter your 16 digit card number: ";
        std::cin >> inp;

        if(inp.length()!=16)
        {
            std::cout << "Credit card is invalid. Not 16 digits." << "\n\n";
            continue;
        }
        else
        {
            break;
        }
    }

    for(int i = 0; i < 16; i++)
    {
        num[i] = inp[i] - '0';
    }

    for(int i = 0; i<16; i++)
    {
        if(i%2 == 0)
        {
            num[i] *= 2;
            if(num[i]>=10)
            {
                num[i]-=9;
            }
        }
    }

    std::cout << "\n";
    int sum = 0;

    for(int i = 0; i < 16; i++)
    {
        sum += num[i];

    }

    if(sum%10==0)
    {
        std::cout << "Credit card is valid!";
    }
    else
    {
        std::cout << "Credit card is invalid" << std::endl;
        std::cout << "Press Enter to Finish";
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
