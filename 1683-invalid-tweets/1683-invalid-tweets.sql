# Write your MySQL query statement below

select tweet_id from Tweets 
where  LENGTH(Tweets.content) > 15 ;