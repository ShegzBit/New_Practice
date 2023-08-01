#include "main.h"

int main(int ac, char *av[])
{
    char store;
    func opt;
    if (ac == 4)
    {
        opt = get_op_func(av[2]);
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < strlen(av[i]); j++)
            {
                store = av[i][j];
                if((i % 2 != 0) && !(isdigit(store)))
                {
                    std::cout << "Error" << std::endl;
                    exit(EXIT_FAILURE);
                }
            }
        }
    }
    else if (ac > 4 && ac % 2 == 0)
    {
        
    }

    

    std::cout << av[1] << av[2] << av[3] << " = " << opt(atoi(av[1]), atoi(av[3])) << std::endl;
}