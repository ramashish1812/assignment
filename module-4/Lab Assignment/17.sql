/*Lab 1: Write a PL/SQL block using an IF-THEN condition to check the department of anemployee. 
Lab 2: Use a FOR LOOP to iterate through employee records and display their names.*/

declare
    v_employee_id number := 101;
    v_department_id number;
begin
    select department_id into v_department_id
    from employees
    where employees_id = v_employee_id;

    if v_department_id = 90 then
       dbms_output.put_line('Employee to department 90.');
	elsif v_department_id = 60 then
       dbms_output.put_line('Employee to department 60.');
	else 
		dbms_output.put_line('Employee to another department: ' || v_department_id);
	end if;
end;

begin 
	for ref in (select first_name, last_name from employees) loop
        dbms_output.put_line('Employee Name: ' || ref.first_name || ' ' || ref.last_name);
    end loop;    
end;
