# Write your MySQL query statement below
SELECT Visits.customer_id,COUNT(Visits.customer_id) as count_no_trans From Visits LEFT JOIN Transactions ON Visits.visit_id=Transactions.visit_id where Transactions.transaction_id IS NULL GROUP BY Visits.customer_id;
