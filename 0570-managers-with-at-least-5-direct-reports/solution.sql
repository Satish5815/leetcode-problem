# Write your MySQL query statement below
SELECT e1.name from Employee e1 INNER JOIN Employee e2 ON e1.id=e2.managerId Group BY e1.id HAVING COUNT(e2.managerId)>=5;
