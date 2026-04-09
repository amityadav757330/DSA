-- select c.name as Customers from Customers c left join Orders o on c.id=o.id where o.customerId not in (select id from Customers); 
SELECT c.name AS Customers
FROM Customers c
LEFT JOIN Orders o
ON c.id = o.customerId
WHERE o.customerId IS NULL;