
# Longest common subsequence

## Description

This is a program that returns the length of longest common subsequence and its form. The longest common subsequence (LCS) is defined as the longest subsequence that is common to all the given sequences, provided that the elements of the subsequence are not required to occupy consecutive positions within the original sequences. The solution is created by building 2D array related to appriopriate length of LCS in different positions of strings.
## Example Input
```
Podaj pierwsze wyrazenie:
 str1 = politechnika
Podaj drugie wyrazenie:
 str2 = toaleta
 ```
## Example Output

```
0   0   0   0   0   0   0   0
0   0   0   0   0   0   0   0
0   0   1   1   1   1   1   1
0   0   1   1   2   2   2   2
0   0   1   1   2   2   2   2
0   1   1   1   2   2   3   3
0   1   1   1   2   3   3   3
0   1   1   1   2   3   3   3
0   1   1   1   2   3   3   3
0   1   1   1   2   3   3   3
0   1   1   1   2   3   3   3
0   1   1   1   2   3   3   3
0   1   1   2   2   3   3   4

Najdluzszy wspolny podciag politechnika i toaleta to: olea
```


