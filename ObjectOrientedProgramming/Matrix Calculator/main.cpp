#include <iostream>
#include <vector>


std::vector<std::vector<int>> create_matrix(int m, int n);
void edit_matrix(std::vector<std::vector<int>>& matrix);
void display_matrix(const std::vector<std::vector<int>>& matrix);

int main()
{
    std::vector<std::vector<int>> mat_A, mat_B, mat_C;
    bool A_init = false;
    bool B_init = false;
    bool C_init = false;
    int option, m, n, choice;
    while (1)
    {
        std::cout << "MATRIX CALCULATOR\n";
        std::cout << "-----------------\n";
        std::cout << "1. Create matrix\n";
        std::cout << "2. Edit matrix\n";
        std::cout << "3. Display matrix\n";
        std::cout << "4. Exit\n";
        std::cin >> option;
        switch (option)
        {
        case 1:
            std::cout << "Dimensions?\nMatrix (m x n)\n";
            std::cout << "m = ";
            std::cin >> m;
            std::cout << "n = ";
            std::cin >> n;
            std::cout << "Assign to:\n";
            std::cout << "\t1. Matrix A\n";
            std::cout << "\t2. Matrix B\n";
            std::cout << "\t3. Matrix C\n";
            std::cin >> choice;
            if (choice == 1)
            {
                mat_A = create_matrix(m, n);
                A_init = true;
            }
            else if(choice == 2)
            {
                mat_B = create_matrix(m,n);
                B_init = true;
            }
            else if (choice == 3)
            {
                mat_C = create_matrix(m,n);
                C_init = true;
            }
            else
                std::cout << "Invalid Input\n";
            break;
        case 2:
            std::cout << "\t1. Matrix A\n";
            std::cout << "\t2. Matrix B\n";
            std::cout << "\t3. Matrix C\n";
            std::cin >> choice;
            if (choice == 1)
            {
                if (A_init)
                    edit_matrix(mat_A);
                else
                    std::cout << "Matrix A not initialised\n";
            }
            else if (choice == 2)
            {
                if (B_init)
                    edit_matrix(mat_B);
                else
                    std::cout << "Matrix B not initialised\n";
            }
            else if (choice == 3)
                edit_matrix(mat_C);
            else
                std::cout << "Invalid input\n";
            break;
        case 3:
            std::cout << "\t1. Matrix A\n";
            std::cout << "\t2. Matrix B\n";
            std::cout << "\t3. Matrix C\n";
            std::cin >> choice;
            if (choice == 1)
                display_matrix(mat_A);
            else if (choice == 2)
                display_matrix(mat_B);
            else if (choice == 3)
                display_matrix(mat_C);
            else
                std::cout << "Invalid input\n";
            break;
        case 4:
            return 0;
        default:
            std::cout << "Invalid input\n\n";
        }
    }
}
std::vector<std::vector<int>> create_matrix(int m, int n)
{
    return std::vector<std::vector<int>>(m, std::vector<int>(n, 0));
}

void edit_matrix(std::vector<std::vector<int>>& matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "Enter coord " << i + 1 << ", " << j + 1 << ":\n";
            std::cin >> matrix[i][j];
        }
    }

}

void display_matrix(const std::vector<std::vector<int>>& matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        std::cout << "|";
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j];
            if (j < n - 1)
                std::cout << " ";
        }
        std::cout << "|" << "\n";
    }
}


