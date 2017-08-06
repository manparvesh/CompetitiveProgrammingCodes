### Vaccination problem
The world health organization wants to establish a total of B vaccination clinics across N cities to immunization people against fatal diseases. Every city must have at least 1 clinic, and a clinic can only vaccinate people in the same city where they live. The goal is to minimize the number of vaccination kits needed in the largest clinic. For example suppose you have.

1. 2 cities and
2. 7 clinics to be opened
3. 200.000 is the population of first city
4. 50,000 is the population of second city
5. Two clinics can open in the first city and
6. Five in the second. This way
7. 100,000 people can be immunized in each of the two clinics in first city, and
8. 100.000 people can be immunized in the each clinic in the second city
9. So the maximum number of people to be immunized in the largest clinic is 10,000

### Input:
Two integers in the first line, N, the number of cities, and B, the total number of clinics to be opened
Each of the following N lines contains an integer ai, the population of city i

### Output:
One integer representing the maximum number of people to be immunized in any single clinic

### Constraints:
1<=N<=500,000  
N<=B<=2,000,000  
1<=ai<=5,000,000

### Sample input:
2 7  
200000  
500000

### Sample output:
100000