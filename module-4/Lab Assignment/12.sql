/*Lab 1: Group employees by department and count the number of employees in eachdepartment using GROUP BY.
Lab 2: Use the AVG aggregate function to find the average salary of employees in eachdepartment.*/

select employee_id,count(employee_id) as employee_count from employees group by employee_id;

select employee_id,avg(employee_salary) as avg_salary from employees group by employee_id;