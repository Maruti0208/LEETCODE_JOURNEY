# Write your MySQL query statement below
select e.unique_id , v.name 
from Employees v
left join EmployeeUNI e
on v.id=e.id;