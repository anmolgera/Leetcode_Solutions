# Write your MySQL query statement below
SELECT max(Salary) as SecondHighestSalary
From Employee
WHERE Salary not in (SELECT max(Salary) FROM Employee )