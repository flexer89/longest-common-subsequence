#pragma once
#include <exception>
#include <iostream>
#include <algorithm>
#include <iomanip>

/// <summary>
/// Funkcja tworz¹ca dwuwymiarow¹ tablicê dynamiczn¹
/// </summary>
/// <param name="row"> - Liczba wierszy</param>
/// <param name="col"> - Liczba kolumn</param>
/// <returns>Tablica wskaŸników</returns>
int** createArray2D(int** tab, int row, int col);

/// <summary>
/// Funkcja zwalniaj¹ca pamiêæ po tablicy dynamicznej 2D
/// </summary>
/// <param name="T"> - Tablica wskaŸników</param>
/// <param name="col"> - Liczba wierszy</param>
void deleteTab(int** T, int row);

/// <summary>
/// Funkcja znajduj¹ca tablicê d³ugoœci LCS dwóch ci¹gów
/// </summary>
/// <param name="tab"> - dwuwymiarowa tablica dynamiczna</param>
/// <param name="X"> - ci¹g pierwszy</param>
/// <param name="Y"> - ci¹g drugi</param>
/// <returns>Tablica d³ugoœci LCS dwóch ci¹gów</returns>
int** lcs(int** tab, std::string str1, std::string str2);

/// <summary>
/// Funkcja odczytuj¹ca wartoœæ LCS na podstawie tablicy d³ugoœæi LCS dwóch ci¹gów
/// </summary>
/// <param name="tab"> - dwuwymiarowa tablica d³ugoœæi LCS dwóch ci¹gów</param>
/// <param name="str1"> - ci¹g pierwszy</param>
/// <param name="str2"> - ci¹g drugi</param>
/// <returns>Wartoœæ LCS</returns>
std::string readSubsequence(int** tab, std::string str1, std::string str2);

/// <summary>
/// Funkcja wyœwietlaj¹ca dwuwymiarow¹ tablicê dynamiczn¹
/// </summary>
/// <param name="tab"> - dwuwymiarowa tablica dynamicza</param>
/// <param name="row"> - iloœæ wierszy</param>
/// <param name="col"> - iloœæ kolumn</param>
void ShowTab(int** tab, int row, int col);