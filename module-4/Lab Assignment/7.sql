/*Lab 1: Insert three records into the courses table using the INSERT command. 
Lab 2: Update the course duration of a specific course using the UPDATE command. 
Lab 3: Delete a course with a specific course_id from the courses table using the DELETEcommand.*/

insert into courses
(course_id,course_name,course_duration)
value
(101,'IT engineering',3),
(102,'chemical engineering',2),
(103,'machine engineering',2);

update courses set course_duration = 3 where course_id = 103;

delete from courses where course_id = 102;