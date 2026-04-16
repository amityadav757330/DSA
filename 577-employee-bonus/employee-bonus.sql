select e.name, b.bonus from Employee e left join Bonus b on e.Empid=b.Empid
where bonus<1000 or bonus is null