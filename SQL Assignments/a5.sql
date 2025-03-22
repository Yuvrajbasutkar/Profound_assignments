select * from employee where fname='John';
select * from employee where fname='John' or fname='Roy';
select * from employee where fname !='John' and fname !='Roy';

select * from employee;
select * from employee where fname like 'J%';
select * from employee where fname like '%o%';
select * from employee where fname like '%n';

select* from employee where fname like '___n';
select * from employee where fname like 'J___';
select * from employee where salary >600000;
select * from employee where salary <800000; 
select * from employee where salary between 500000 and 800000;
select * from employee where fname='John' or fname= 'Michael';

select * from employee;
select * from incentives;
select fname,iamount from employee inner join incentives on employee.eid=incentives.rid ; 
select fname, iamount from employee inner join incentives on employee.eid=incentives.rid where iamount>3000;
select fname,iamount from employee left join incentives on employee.eid=incentives.rid ;

select *from employee where extract(year from joining)=2013;
select * from employee where extract(month from joining)=1;
select * from employee where month(joining)=1;
select * from employee where joining >'2013-01-31';
select curdate();
select eid from employee left join incentives on employee.eid=incentives.rid where iamount is null;
delete employee from employee join incentives on employee.eid=incentives.rid where iamount is not null;

update employee inner join incentives on employee.eid=incentives.rid set incentives.iamount=80000 where employee.fname='John';

select fname from employee union select lname from employee;

create or replace view emp_view as select eid,concat(fname,' ',lname) as Emp_name,salary  from employee;
select * from emp_view; 
drop view emp_view;

create index emp_index on employee(eid,fname,lname,salary,department);






