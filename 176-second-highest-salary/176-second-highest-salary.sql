# Write your MySQL query statement below
select max(salary) as secondhighestsalary from employee where salary not in(select max(salary) from employee);