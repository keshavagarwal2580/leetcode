# Write your MySQL query stats
select distinct p.email from person as p,person as p1 where p.email=p1.email AND NOT p.id=p1.id;