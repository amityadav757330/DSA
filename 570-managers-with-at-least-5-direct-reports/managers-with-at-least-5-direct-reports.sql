select e.name from Employee e join Employee b  
on e.id=b.managerId 
group by e.id having count(e.id)>=5 