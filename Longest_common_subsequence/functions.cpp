#include "functions.h"

int** createArray2D(int** tab, int row, int col)
{
	try
	{
		tab = new int* [row];
	}
	catch (const std::bad_alloc&)
	{
		std::cerr << "error";
	}

	for (int i = 0; i < row; i++)
	{
		try
		{
			tab[i] = new int[col];
		}
		catch (const std::bad_alloc&)
		{
			std::cerr << "error";
		}
	}
	return tab;

}

void deleteTab(int** T, int row)
{
	for (int j = 0; j < row; j++)
	{
		delete[] T[j];
	}
	delete[] T;
}

int** lcs(int** tab, std::string str1, std::string str2)
{
	int m = str1.length();
	int n = str2.length();
	for (int i = 0; i <= m; i++) 
	{
		for (int j = 0; j <= n; j++) 
		{
			//Zerujemy pierwszy wiersz i kolumnê (wype³nienie stanów pocz¹tkowych)
			if (i == 0 || j == 0)
			{
				tab[i][j] = 0;
			}
			else if (str1[i - 1] == str2[j - 1])
			{
				tab[i][j] = tab[i - 1][j - 1] + 1;
			}
			else
			{
				tab[i][j] = std::max(tab[i - 1][j], tab[i][j - 1]);
			}
		}
	}
	return tab;
}
std::string readSubsequence(int** tab, std::string str1, std::string str2)
{
	int m = str1.length();
	int n = str2.length();

	std::string lcs = "";

	//Zaczynamy od prawego dolnego rogu tablicy
	while (m > 0 and n > 0) 
	{
		//Jeœli znaki s¹ takie same, dodajemy je do LCS
		if (str1[m - 1] == str2[n - 1]) 
		{
			lcs += str1[m - 1];
			m--;
			n--;
		}
		// Jeœli nie s¹ te same idŸ do komórki s¹siedniej (lewo lub góra)
		else if (tab[m - 1][n] > tab[m][n - 1])
			m--;
		else
			n--;
	}
	int len = lcs.length();

	//Odwracanie LCS
	for (int i = 0; i < len / 2; i++)
	{
		std::swap(lcs[i], lcs[len - i - 1]);
	}
	return lcs;
}

void ShowTab(int** tab, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << tab[i][j] << std::setw(3) << " ";
		}
		std::cout << std::endl;
	}
}