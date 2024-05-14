# HW2 Assignments/Explanations

------

## Problem 1: Date Calculator

------

- Prompt the user to enter the month and day of the year (1 for January, 2 for February, etc).
- Prompt the user to enter a period of time in days. Print the date after the period entered by the user has passed.
- For simplicity, assume that each month has 30 days except for February which always counts as 28 days.

**Sample output:**

Enter the month and day : 3 5 <br />
Enter the days forward: 50<br />
After 50 days, the date of 3/5 will be 4/25.<br />

Test cases: (Month Day Period New Date)<br />
(3, 5, 50, 4/25), (1, 1, 15, 1/16), (1, 1, 33, 2/4), (1, 1, 60, 3/3), (1, 1, 370, 1/13)

## Problem 2: Ideal Temperatures

------

- Prompt the user to enter the time of the day. The user should enter d for daytime and n for nighttime.
- Configure a boolean variable to store if it is daytime (true) or nighttime (false).
- Use the boolean variable to store if it is daytime or nighttime and print if the temperature is ideal if it needs to be raised if it needs to be lowered, and by how much.

Ideal temperatures:
Daytime 21.2 C
Nighttime: 18.3 C

Sample Output <br />
Day (d) or Night (n):n <br />
Enter the current temperature:12 <br />
You need to raise the temperature by 6.3 degrees. <br />

Sample Output <br />
Day (d) or Night (n):d <br />
Enter the current temperature:21.2 <br />
The temperature is ideal. <br />

Sample Output <br />
Day (d) or Night (n):n <br />
Enter the current temperature:18.3 <br />
The temperature is ideal. Have a good night's sleep. <br />

Sample Output <br />
Day (d) or Night (n):d <br />
Enter the current temperature:25.5 <br />
You need to lower the temperature by 4.3 degrees. <br />
