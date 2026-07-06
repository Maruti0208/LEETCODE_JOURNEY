# Write your MySQL query statement below
select e.product_name , v.year , v.price
from product e
join Sales v
on v.product_id = e.product_id;