# Write your MySQL query statement below

select b.product_name , a.year , a.price 
from Product as b inner join  Sales as a 
on a.product_id = b.product_id ;
