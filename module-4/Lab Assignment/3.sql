/*Lab 1: Create a table teachers with the following columns: teacher_id (Primary Key), teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE). 
Lab 2: Implement a FOREIGN KEY constraint to relate the teacher_id fromthe teachers table with the students table.*/

create table teacher(
teacher_id int primary key,
teacher_name varchar(25) not null,
subject varchar(25) not null,
email varchar(25) unique
);

alter table student add teacher_id int;

alter table students add foreign key (teacher_id) references teachers(teacher_id);

SELECT * FROM students;



