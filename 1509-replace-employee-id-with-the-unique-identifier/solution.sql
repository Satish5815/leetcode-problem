# Write your MySQL query statement below
SELECT en.unique_id,e.name from Employees as e LEFT JOIN EmployeeUNI as en on e.id=en.id;
