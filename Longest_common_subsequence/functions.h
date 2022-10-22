#pragma once
#include <exception>
#include <iostream>
#include <algorithm>
#include <iomanip>

/// <summary>
/// Funkcja tworz�ca dwuwymiarow� tablic� dynamiczn�
/// </summary>
/// <param name="row"> - Liczba wierszy</param>
/// <param name="col"> - Liczba kolumn</param>
/// <returns>Tablica wska�nik�w</returns>
int** createArray2D(int** tab, int row, int col);

/// <summary>
/// Funkcja zwalniaj�ca pami�� po tablicy dynamicznej 2D
/// </summary>
/// <param name="T"> - Tablica wska�nik�w</param>
/// <param name="col"> - Liczba wierszy</param>
void deleteTab(int** T, int row);

/// <summary>
/// Funkcja znajduj�ca tablic� d�ugo�ci LCS dw�ch ci�g�w
/// </summary>
/// <param name="tab"> - dwuwymiarowa tablica dynamiczna</param>
/// <param name="X"> - ci�g pierwszy</param>
/// <param name="Y"> - ci�g drugi</param>
/// <returns>Tablica d�ugo�ci LCS dw�ch ci�g�w</returns>
int** lcs(int** tab, std::string str1, std::string str2);

/// <summary>
/// Funkcja odczytuj�ca warto�� LCS na podstawie tablicy d�ugo��i LCS dw�ch ci�g�w
/// </summary>
/// <param name="tab"> - dwuwymiarowa tablica d�ugo��i LCS dw�ch ci�g�w</param>
/// <param name="str1"> - ci�g pierwszy</param>
/// <param name="str2"> - ci�g drugi</param>
/// <returns>Warto�� LCS</returns>
std::string readSubsequence(int** tab, std::string str1, std::string str2);

/// <summary>
/// Funkcja wy�wietlaj�ca dwuwymiarow� tablic� dynamiczn�
/// </summary>
/// <param name="tab"> - dwuwymiarowa tablica dynamicza</param>
/// <param name="row"> - ilo�� wierszy</param>
/// <param name="col"> - ilo�� kolumn</param>
void ShowTab(int** tab, int row, int col);