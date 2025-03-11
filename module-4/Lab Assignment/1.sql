/*Lab 1: Create a new database named school_db and a table called students with thefollowing 
columns: student_id, student_name, age, class, and address. 
Lab 2: Insert five records into the students table and retrieve all records using the SELECTstatement.*/

create database school_db;

create table student(
student_id int primary key,
student_name varchar(25) not null,
age int not null,
class varchar(1) not null,
address varchar(50) not null 
);

describe student;

insert into student
(student_id,student_name,age,class,address)
value 
(101,'ram',19,'A','cg-road,ahemdabad'),
(102,'divyesh',21,'A','cg-road,ahemdabad'),
(103,'vijay',18,'B','aji-dem,rajkot'),
(104,'dev',34,'C','gota,ahemdabad'),
(105, 'ashish', 19, 'B', 'talala,ghunshiya');

select * from student;









