/*Lab 1: Write a PL/SQL block using an explicit cursor to retrieve and display employee details. 
Lab 2: Create a cursor to retrieve all courses and display them one by one.*/

declare
     cursor emp_cursor is
        select employees_id, first_name, last_name, department_id, salary from employees;
        
    v_employee_id number;
    v_first_name varchar2(50);
    v_last_name varchar(50);
    v_department_id number;
    v_salary number;
begin
    open emp_cursor;
    loop
        fetch emp_cursor into v_employee_id, v_first_name, v_last_name, v_department_id, v_salary;
        exit when emp_cursor%NOTFOUND; 

        dbms_output.put_line('Employee id: ' || v_employee_id ||', Name: ' || v_first_name || ' ' || v_last_name || ', Department: ' || v_department_id || ', Salary: ' || v_salary);
    end loop;
    close emp_cursor;
end;

declare
    cursor course_cursor is
        select course_id, course_name from courses;
        
    v_course_id   number;
    v_course_name varchar2(100);
begin
    open course_cursor;
    loop
        fetch course_cursor into v_course_id, v_course_name;
        exit when course_cursor%NOTFOUND;

        dbms_output.put_line('Course ID: ' || v_course_id || ', Course Name: ' || v_course_name);
    end loop;
    close course_cursor;
end;
