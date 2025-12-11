/*
Input : day, month, year
Output : {Next day's date}

✅ Next-Day Date Calculator — Explanation & Test Cases

Problem:
Input three integers day, month, year. Output the date of the next day in DD-MM-YYYY
format. Use only if / else logic (no loops). Handle month ends correctly, including 
leap-year February.

How to think about it (clear step-by-step)

Validate month and minimal day check (optional but recommended):

month must be 1..12.

day must be at least 1. (Later you check an upper bound depending on month.)

Decide how many days are in the given month (maxDay):

If month == 2 (February) → determine leap year:

Leap year rules:

If year % 400 == 0 → leap year.

Else if year % 100 == 0 → not leap year.

Else if year % 4 == 0 → leap year.

Else → not leap year.

If leap → maxDay = 29, else maxDay = 28.

Else if month is one of 4, 6, 9, 11 → maxDay = 30.

Else (months 1,3,5,7,8,10,12) → maxDay = 31.

Validate the day against maxDay (optional but good):

If day > maxDay → input invalid (handle as you prefer: print error, or assume 
valid input per problem).

Compute next day:

If day < maxDay → simply day = day + 1 (month and year unchanged).

Else (day == maxDay) →

Set day = 1.

If month < 12 → month = month + 1.

Else (month == 12) → month = 1 and year = year + 1.

Format output: print with two digits for day and month and four digits for year, 
e.g. 02-03-2024.

Important edge cases to handle

February 28 → 29 when leap year.

February 29 → 01-03 when leap year.

30-day months: 30 → 01 next month (e.g., 30-04 → 01-05).

31 December → 01-01 of next year (year increment).

Non-leap February: 28 → 01-03.

(Optional) Invalid input: e.g., 31-04-2023 is invalid because April has 30 days 
— decide whether to print an error or assume inputs are valid.

Recommended test cases
#	Input (d m y)	Expected Output	Why / Notes
1	1 1 2024	02-01-2024	Simple next day in same month
2	28 2 2021	01-03-2021	2021 is not leap → Feb has 28 days
3	28 2 2024	29-02-2024	2024 is leap → Feb has 29 days
4	29 2 2024	01-03-2024	Leap day rolls over to March 1
5	31 1 2023	01-02-2023	31-day month → next month
6	30 4 2025	01-05-2025	April has 30 days
7	31 12 2020	01-01-2021	Year increment at Dec 31
8	15 6 1999	16-06-1999	mid-month increment
9	31 3 2000	01-04-2000	31 → next month (2000 is leap but March unaffected)
10	28 2 1900	01-03-1900	1900 is not leap (divisible by 100 but not 400)
11	28 2 2000	29-02-2000	2000 is leap (divisible by 400)
12	31 7 2022	01-08-2022	July → August
13	30 11 2022	01-12-2022	November has 30 days
14	31 10 2022	01-11-2022	October → November
15	1 3 2020	02-03-2020	after leap Feb (sanity check)
Extra suggestions

If you must strictly only use if/else avoid switch or loops — nest conditions 
carefully and keep readability in mind by using small helper boolean variables 
(e.g., isLeap).

Print invalid input messages (e.g., "Invalid Date") for out-of-range day/month 
values — show one test case with invalid input while testing.

Make sure to format with leading zeros for day/month when printing.
*/
#include <stdio.h>

int main()
{
    int day, month, year, oddMonth=0, leap=0;
    scanf("%d %d %d", &day, &month, &year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        oddMonth = 1;
    }
    if ((year%4==0 && year%100!=0) || year%400==0){
        leap = 1;
    }
    
    if(!leap){
        if (month==12){
            (day<31) ? day++ : (day=1, month=1, year++);
        }
        else if(month==2){
            (day<28) ? day++ : (day=1, month++);
        }
        else{
            (oddMonth) ? ((day<31) ? day++ : (day=1, month++)) : ((day<30) ? day++ : (day=1, month++));
        }
    }
    else{
        if (month==12){
            (day<31) ? day++ : (day=1, month=1, year++);
        }
        else if(month==2){
            (day<29) ? day++ : (day=1, month++);
        }
        else{
            (oddMonth) ? ((day<31) ? day++ : (day=1, month++)) : ((day<30) ? day++ : (day=1, month++));
        }
    }
    
    printf("%02d-%02d-%04d", day, month, year);
    
    return 0;
}
