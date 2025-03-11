/*Lab 1: Create two tables: departments and employees. Perform an INNER JOINtodisplay employees along with their respective departments. 
 Lab 2: Use a LEFT JOIN to show all departments, even those without employees.*/
 
 create table employees(
 employee_id int primary key,
 employee_name varchar(25) not null,
 employee_salary int not null
 );
 
 create table department(
 employee_id int,
 department_id int not null,
 manager_id int not null,
 FOREIGN  key (employee_id) REFERENCES employees(employee_id)
 );
 
 insert into employees value (101,'ashish',15000),(102,'divyesh',20000),(103,'vijay',23000);
 
 insert into department value (101,80,105),(102,90,106),(103,60,106);
 
 select employees.employee_id,employees.employee_name,employees.employee_salary,department.department_id from employees left join department on employees.employee_id = department.employee_id;
  
  
 