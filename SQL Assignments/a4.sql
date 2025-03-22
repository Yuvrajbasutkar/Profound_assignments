select distinct department,sum(salary) from employee group by department;
select distinct department,sum(salary) from employee group by department order by sum(salary) desc;
select distinct department,count(eid),sum(salary) from employee group by department order by sum(salary) desc;
select distinct department,avg(salary) from employee group by department order by avg(salary);
select distinct department,max(salary) from employee group by department order by max(salary);
select distinct joining,count(eid) from employee group by joining;
select distinct department,sum(salary) from employee where salary>800000 group by department order by sum(salary) desc;




