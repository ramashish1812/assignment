/*Lab 1: Write a PL/SQL block to print the total number of employees fromthe employeestable. 
 Lab 2: Create a PL/SQL block that calculates the total sales from an orders table*/
 
declare
	total_employees number;
begin
	select count(*) into total_employees from employees;
	dbms_output.put_line(' total number of employees : '||total_employees);
end;