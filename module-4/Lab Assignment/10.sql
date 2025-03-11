/*Lab 1: Insert a few rows into the courses table and use COMMIT to save the changes. 
 Lab 2: Insert additional rows, then use ROLLBACK to undo the last insert operation. 
 Lab 3: Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes.*/
 
 insert into courses 
 (course_id,course_name,course_duration)
 value
 (1,'m.com',2),
 (2,'b.com',3),
 (3,'mca',4);
 
 commit;
 
 insert into courses
 (course_id,course_name,course_duration) 
 value
 (4,'bca',1),
 (5,'b.tech',2),
 (6,'m.tech',4);
 
 delete from courses where course_id = 4;
 
 delete from courses where course_id = 5;
 
 delete from courses where course_id = 6;
 
 rollback;
 
 select * from courses;
 
 savepoint s1;
 insert into courses value (105,'Cyber SEcurity',6);
 
 savepoint s2;
 insert into courses value (106,'Designing',7);
 
 savepoint s3;
 insert into courses value (107,'ardware & Cloud',4);
 
 rollback to s2;
 
 savepoint s4;
 
 update courses set course_name = 'mca' where course_id = 4;
 
 rollback;