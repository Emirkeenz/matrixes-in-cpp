# matrixes-in-cpp
1) sumOfPositiveInMatrix.cpp
Matrix of size n⋅n is given. Find the sum of its positive elements.

2) evenNegativeNumbersInMatrix.cpp
Given matrix of size n⋅n. Find the number and the sum of its even negative elements.

3) diagonals.cpp
In the square table n⋅n find the sum of integers at the main and the secondary diagonals

4) filling.cpp
Fill the array n × n with a "snake".

5) theaterRevenue.cpp
The theater has n rows with m seats. Two matrices are given. The first matrix contains the ticket prices for each seat. The second matrix tells which tickets are sold and which are not (
1 means the ticket is sold for a corresponding seat, 0 is not sold).
Determine the total revenue from the performance.

6) cinema.cpp
Once the pupils of the B-th school of city G decided to go to cinema. Cinema Administration has placed them in the hall of size n × m, which has been specially selected so that all the seats were occupied by pupils. Each cinema visitor was given a number.
Pupils took their places in the following way: they entered the hall in the order of their numbers, and fully occupied initially the first row, then second row, then third row, etc.
![image](https://github.com/Emirkeenz/matrixes-in-cpp/assets/119420721/33626d38-c6e9-4c2a-be1d-29856fdfadd9)
However the class teacher decided that such seating is bad for the behavior of pupils and replaced them in another way: the pupils first occupied all the first places of each row, then all the second places in each row, etc. (see picture)
![image](https://github.com/Emirkeenz/matrixes-in-cpp/assets/119420721/28cb6f00-7f2a-4c7e-8eac-b6bc627b1ede)
The administration has decided to find out how many pupils do not change their place after replacement.

7) transposeMatrix.cpp
Given matrix A. Transpose it.
Let B be the transposed matrix A. Then B[ij] = A[ji].
![image](https://github.com/Emirkeenz/matrixes-in-cpp/assets/119420721/98f00c30-4978-4ea1-a5b0-2381efe56eab)

8) cramersFormula.cpp
Solve the system of two linear equations with two variables using the Kramer's rule.
The system of equations given in the example has the form:
![image](https://github.com/Emirkeenz/matrixes-in-cpp/assets/119420721/5e7a439b-8603-4a54-b496-0c5f4536f951)
It is known that system has a unique solution.

9) matrixMultiplication.cpp
Given two square matrices A and B of dimensions m × n and n × q respectively:
![image](https://github.com/Emirkeenz/matrixes-in-cpp/assets/119420721/2ac60b97-00e7-422c-8660-7d0d439fd938)
Then the matrix C of dimension m × q is called their product:
![image](https://github.com/Emirkeenz/matrixes-in-cpp/assets/119420721/b7bcf8a7-f918-4cc3-bc22-c986ce28345b)
where:
![image](https://github.com/Emirkeenz/matrixes-in-cpp/assets/119420721/f98f7d82-a23f-424e-80ff-725ded63afd7)
The operation of multiplication of two matrices is feasible only if the number of columns in the first factor equals to the number of rows in the second. In this case we say that the shape of the matrices is consistent.
Given two matrices A and B. Find their product.

10) bonusLevel.cpp
Серёжа играл в змейку и почти успевал на поезд в ЛКШ. Но он не знал, что за последним уровнем последует дополнительный "бонусный".
Он представляет собой поле N×N, в каждой клетке которого лежит яблочко. Серёжина змея последовательно ползёт по диагоналям данного поля, поедая фрукты. Чтобы совершать такие поползновения, ей приходится после каждой диагонали менять направление движения (подробнее см. примеры).
input: 3
output: 
1 3 4
2 5 8
6 7 9
