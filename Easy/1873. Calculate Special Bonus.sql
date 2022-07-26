select employee_id, if(employee_id in (
    select employee_id from Employees
    where name not like 'M%' and employee_id%2 = 1
), salary, 0) as bonus
from Employees
order by employee_id;