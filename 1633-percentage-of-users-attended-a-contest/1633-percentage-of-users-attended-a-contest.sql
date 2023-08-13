# Write your MySQL query statement below

select contest_id , round(100*count(contest_id)/(select count(*) from Users) , 2) as percentage
from Register 
group by contest_id 
order by percentage desc , contest_id ; 
