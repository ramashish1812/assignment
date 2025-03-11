/*Lab 1: Create a trigger to automatically log changes to the employees table when a newemployee is added. 
Lab 2: Create a trigger to update the last_modified timestamp whenever an employeerecord is updated.*/

create trigger after_employee_insert
after insert on employees
for each row 
insert into employee_log (employee_id, action) value (new.employee_id, 'insert');

create trigger before_employee_update
before update on employees
for each row   
set new.last_modified =  current_timestamp;

