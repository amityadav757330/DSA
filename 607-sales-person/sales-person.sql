select SalesPerson.name from Orders inner join 
Company on (Orders.com_id= Company.com_id and Company.Name ='RED' )
right join SalesPerson on orders.sales_id =SalesPerson.sales_id
where Orders.sales_id is null
