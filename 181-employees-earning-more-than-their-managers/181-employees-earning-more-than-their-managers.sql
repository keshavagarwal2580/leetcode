# Write your MySQL query statement below
select s.name as employee from employee as s,employee as s1 where s.salary>s1.salary AND s1.id=s.managerid; 