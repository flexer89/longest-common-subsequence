#include <iostream>
#include "functions.h"

int main()
{
    int** tab = nullptr;
    std::string str1;
    std::string str2;

    std::cout << "Podaj pierwsze wyrazenie:\n str1 = ";
    std::cin >> str1;
    std::cout << "Podaj drugie wyrazenie:\n str2 = ";
    std::cin >> str2;
    
    int m = str1.length();
    int n = str2.length();
    
    tab = createArray2D(tab, m + 1, n + 1);
    tab = lcs(tab,str1, str2);
    ShowTab(tab, m + 1, n + 1);

    std::cout << "Najdluzszy wspolny podciag " << str1 << " i " << str2 << " to: " << readSubsequence(tab, str1, str2);

    deleteTab(tab, m + 1);
    return 0;

}
