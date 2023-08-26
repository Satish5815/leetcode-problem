# Write your MySQL query statement below
SELECT today.id from Weather as today INNER JOIN Weather as yesterday ON today.recordDate=DATE_ADD(yesterday.recordDate,INTERVAL 1 DAY) where today.temperature>yesterday.temperature;
