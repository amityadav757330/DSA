select d.name as Department , e.name as Employee ,e.salary
from(select *,dense_rank() over(partition by departmentId order by salary desc) 
as rnk from Employee ) e 
join Department d on e.DepartmentId=d.id 
where e.rnk=1;