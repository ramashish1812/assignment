/*Lab 1: Create two new users user1 and user2 and grant user1 permission to SELECTfrom the courses table. 
Lab 2: Revoke the INSERT permission from user1 and give it to user2.*/

create role user1;

create user user1 identified by 'use1@123' default role user1;

create user user2 identified by 'use2@123' default role user1;

grant select on courses to user1;

revoke select on courses from user1;

grant insert on courses to user2;