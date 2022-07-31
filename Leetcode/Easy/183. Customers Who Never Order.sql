select name as Customers from customers 
where id not in (
    select distinct customerId from Orders
);