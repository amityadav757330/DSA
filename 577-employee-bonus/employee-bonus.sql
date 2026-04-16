select e.name, b.bonus from Employee e left join Bonus b on e.Empid=b.Empid
where b.bonus<1000 or b.bonus is null