/*Lab 1: Create a table courses with columns: course_id, course_name, and course_credits. Set the course_id as the primary key. 
Lab 2: Use the CREATE command to create a database university_db*/

create table courses(
course_id int unique not null,
course_name varchar(25) not null,
course_credits int not null
);

alter table courses modify course_id int primary key;

create database university_db;