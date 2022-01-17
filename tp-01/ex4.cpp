#include <iostream>
#include <vector>

void count_lower(std::vector<unsigned int>& occ, const std::string& in)
{
    for (char c : in)
    {
        if (c >= 'a' && c <= 'z')
        {
            occ[c - 'a']++;
        }
    }
}

void display_lower_occ(const std::vector<unsigned int>& occ)
{
    for (int i = 0; i < (int)occ.size(); i++)
    {
        std::cout << (char)('a' + i) << " : " << occ[i] << std::endl;
    }
}

int main()
{
    std::string               in;
    std::vector<unsigned int> occ(26);

    while (true)
    {
        std::cin >> in;
        if (in == "QUIT")
        {
            break;
        }

        count_lower(occ, in);
    }

    display_lower_occ(occ);

    return 0;
}