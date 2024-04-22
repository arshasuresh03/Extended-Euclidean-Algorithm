# Extended-Euclidean-Algorithm

The Extended Euclidean Algorithm (EEA) is an extension of the Euclidean Algorithm used to find the greatest common divisor (GCD) of two integers 𝑎a and 𝑏b, as well as their Bézout coefficients 𝑥x and 𝑦y, which satisfy the equation 𝑎𝑥+𝑏𝑦=gcd(𝑎,𝑏)ax+by=gcd(a,b).
Description:
Extended Euclidean Algorithm finds 𝑥x and 𝑦y such that 𝑎𝑥+𝑏𝑦=gcd(𝑎,𝑏)ax+by=gcd(a,b). It's useful for solving linear Diophantine equations and modular inverses.

Step-by-Step:

1.	Initialization:
•	Start with the two integers 𝑎a and 𝑏b, where 𝑎≥𝑏a≥b.
•	Initialize 𝑥0=1x0=1, 𝑦0=0y0=0, 𝑥1=0x1=0, and 𝑦1=1y1=1.

2.	Division:
•	Divide 𝑎a by 𝑏b to get a quotient 𝑞q and remainder 𝑟r.
•	Update 𝑎=𝑏a=b and 𝑏=𝑟b=r.

3.	Update Coefficients:
•	Update the coefficients 𝑥𝑖xi and 𝑦𝑖yi using the previous values and the quotient:
𝑥𝑖+1=𝑥𝑖−1−𝑞⋅𝑥𝑖𝑦𝑖+1=𝑦𝑖−1−𝑞⋅𝑦𝑖xi+1=xi−1−q⋅xiyi+1=yi−1−q⋅yi

4.	Repeat:
•	Repeat steps 2 and 3 until the remainder 𝑟r becomes 0.

5.	Result:
•	The last non-zero remainder obtained is the GCD of 𝑎a and 𝑏b.
•	The coefficients 𝑥x and 𝑦y at that step represent the Bézout coefficients satisfying 𝑎𝑥+𝑏𝑦=gcd(𝑎,𝑏)ax+by=gcd(a,b).

Example:
Let's find the GCD of 𝑎=30a=30 and 𝑏=18b=18 using the Extended Euclidean Algorithm:
1.	Initialize 𝑥0=1x0=1, 𝑦0=0y0=0, 𝑥1=0x1=0, 𝑦1=1y1=1.
2.	30=1×18+1230=1×18+12, so 𝑞=1q=1 and 𝑟=12r=12.
3.	Update: 𝑥2=𝑥0−𝑞×𝑥1=1−1×0=1x2=x0−q×x1=1−1×0=1, 𝑦2=𝑦0−𝑞×𝑦1=0−1×1=−1y2=y0−q×y1=0−1×1=−1.
4.	Repeat until remainder becomes 0.
5.	GCD is 6, and Bézout coefficients are 𝑥=−1x=−1 and 𝑦=2y=2.
This algorithm efficiently computes the GCD and Bézout coefficients of two integers.

DEMO:

![image](https://github.com/arshasuresh03/Extended-Euclidean-Algorithm/assets/160167081/23cb5a10-49ef-4b5d-aeef-8d54822ddca0)
