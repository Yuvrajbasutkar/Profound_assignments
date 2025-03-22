create database assign;
use assign;
create table employee (
eid int,
fname varchar(20),
lname varchar(20),
salary int,
joining datetime,
department varchar(20));
desc employee;
insert into employee(eid,fname,lname,salary,joining,department) 
values(1,'John','Abraham',1000000,STR_TO_DATE('01-JAN-13 12.00.00 AM', '%d-%b-%y %h.%i.%s %p'),'Banking'),
(2,'Michael','Clarke',800000,STR_TO_DATE('01-JAN-13 12.00.00 AM', '%d-%b-%y %h.%i.%s %p'),'Insurance'),
(3,'Roy','Thomas',700000,STR_TO_DATE('01-FEB-13 12.00.00 AM', '%d-%b-%y %h.%i.%s %p'),'Banking'),
(4,'Tom','Jose',600000,STR_TO_DATE('01-FEB-13 12.00.00 AM', '%d-%b-%y %h.%i.%s %p'),'Insurance'),
(5,'Jerry','Pinto',650000,STR_TO_DATE('01-FEB-13 12.00.00 AM', '%d-%b-%y %h.%i.%s %p'),'Insurance'),
(6,'Philip','Mathew',750000,STR_TO_DATE('01-JAN-13 12.00.00 AM', '%d-%b-%y %h.%i.%s %p'),'Services'),
(7,'TestName1','123',650000,STR_TO_DATE('01-JAN-13 12.00.00 AM', '%d-%b-%y %h.%i.%s %p'),'Services'),
(8,'TestName2','Lname%',600000,STR_TO_DATE('01-FEB-13 12.00.00 AM', '%d-%b-%y %h.%i.%s %p'),'Insurance');
use assign;
select * from employee;
create table incentives(
rid int,
idate date,
iamount int);
alter table incentives add constraint fk_rid foreign key (rid) references employee(eid);
insert into incentives(rid,idate,iamount) 
values(1,str_to_date('01-FEB-13', '%d-%b-%y'),5000),
(2,STR_TO_DATE('01-FEB-13', '%d-%b-%y'),3000),
(3,STR_TO_DATE('01-FEB-13', '%d-%b-%y'),4000),
(4,STR_TO_DATE('01-JAN-13', '%d-%b-%y'),4500),
(5,STR_TO_DATE('01-JAN-13', '%d-%b-%y'),3500);
select * from incentives;
alter table employee add primary key(eid);
alter table incentives add primary key(rid);
alter table employee add rid int;
alter table employee drop column rid;
alter table incentives add foreign key(rid) references employee(eid);
desc incentives;
alter table incentives drop foreign key rid;





