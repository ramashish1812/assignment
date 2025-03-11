/*Lab 1: Write a stored procedure to retrieve all employees from the employees table basedon department. 
Lab 2: Write a stored procedure that accepts course_id as input and returns the coursedetails.*/

delimiter &&
create procedure dept(in d_department_id int )
select * from employees where department_id=80;
department_id = d_department_id;
end &&

call dept(80);

delimiter &&
create procedure cdetail(in c_detail int)
select * from courses where course_id = 101;
course_id =  c_detail;
end &&

call cdetail(101);