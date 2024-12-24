select * from account;
select * from customer;
select * from loan_application;
select * from branch;

-- account table : 

-- | acc_no | cno  | bid  | acc_type | acc_balance |
-- +--------+------+------+----------+-------------+
-- |  24933 |  100 |    1 | SAVING   |   700000.00 |
-- |  34523 |  101 |    2 | CURRENT  |   200000.00 |
-- |  45232 |  103 |    3 | SAVING   |   250000.00 |
-- |  80801 |  102 |    2 | SAVING   |   500000.00 |
-- +--------+------+------+----------+-------------+

-- customer table : 

--  cno | bid  | cname   | caddr        | city       |
-- +-----+------+---------+--------------+------------+
-- | 100 |    1 | RAJESH  | BHENDA       | Ahemdnagar |
-- | 101 |    2 | SUJIT   | BEKARAINAGAR | PUNE       |
-- | 102 |    2 | Shreyas | Koregaon     | Satara     |
-- | 103 |    3 | Shubham | Shirur       | Beed       |
-- +-----+------+---------+--------------+------------+

create view view1 as  select c.cno,c.cname,c.caddr,c.city,a.acc_no,a.acc_type,a.acc_balance,b.brname,b.brcity  from customer c, account a, branch b  where c.bid = a.bid and a.bid = b.bid and c.bid = b.bid;