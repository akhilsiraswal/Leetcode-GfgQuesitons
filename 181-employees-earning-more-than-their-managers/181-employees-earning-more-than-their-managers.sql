select E.name as Employee from Employee E where E.salary >  (select salary from Employee where id = E.managerId )