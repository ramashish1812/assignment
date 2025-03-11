/*Lab 1: Perform a transaction where you create a savepoint, insert records, then rollbacktothe savepoint. 
Lab 2: Commit part of a transaction after using a savepoint and then rollback the remainingchanges.*/

begin 
	
	insert into employess 
    (employee_id,first_name,last_name,hire_date,salary,department_id)
    value 
    (101,'ashish','ram',2023-07-14,14000,90);
    
    savepoint s1;
    
    insert into employees
    (employee_id,first_name,last_name,hire_date,salary,department_id)
    value
    (102,'vijay','ram',2023-05-24,20000,80);
    
    rollback s1;
    
    select count(*) into employees where employee_id in (101,102);
    
end;

begin 
    
    insert into employees
    (empoyee_id,first_name,last_name,hire_date,salary,department_id)
    value 
    (103,'bhavesh','ram',2022-03-12,10000,10);
    
    savepoint s3;
    
    insert into employees
    (employee_id,first_name,last_name,hire_date,salary,department_id)
	value 
    (104,'nitesh''ram',20022-02-24,26000,20);
    
    commit;	
    dbms_output.put_line('commited 	change before the savepoint');
    
    rollback;
    dbms_output.put_line('roll back change after the savepoint ');
    
end;
    
    
    