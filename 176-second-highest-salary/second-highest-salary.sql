-- select max(salary)  as SecondHighestSalary from Employee
-- where salary<(select max(salary) from Employee);
Select ( select distinct salary from Employee order by Salary  desc limit 1 offset 1)as SecondHighestSalary;