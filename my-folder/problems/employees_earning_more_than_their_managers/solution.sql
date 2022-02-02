# Write your MySQL query statement below
#select E1.Name
#from Employee as E1, Employee as E2
#where E1.managerId = E2.id and E1.salary > E2.salary

select E1.Name as 'Employee'
from Employee as E1, Employee as E2 
where E1.ManagerId = E2.Id and E1.Salary > E2.Salary