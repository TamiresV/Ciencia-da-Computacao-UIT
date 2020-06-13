Delimiter $$
create function contagem_conta(codCliente char(4))
returns int
begin
	declare n_conta int;
		select count(*) into n_conta from conta where conta.codCliente=codCliente;
	return n_conta;
end $$
$$
select nomeCliente, cidadeCliente, estadoCliente,contagem_conta(codCliente) from cliente;

Delimiter $$
create function total_contas(codAgencia char(5))
returns int
begin
	declare total_contas int;
		select count(*) into total_contas from conta where conta.codAgencia=codAgencia;
	return total_contas;
end $$
$$
select nomeAgencia, cidadeAgencia from agencia where total_contas(codAgencia)>=2;

Delimiter $$
create function saldo_total_cliente(codCliente char(4))
returns double
begin
	declare total_saldo double(10,2);
		select sum(saldo) into total_saldo from conta where conta.codCliente=codCliente;
	return total_saldo;
end $$
$$
select nomeCliente, cidadeCliente, estadoCliente, saldo_total_cliente(codCliente) from cliente;
select nomeCliente, cidadeCliente, estadoCliente, saldo_total_cliente('0111') from cliente where codCliente='0111';
select nomeCliente, cidadeCliente, estadoCliente, saldo_total_cliente(codCliente) as total from cliente where saldo_total_cliente(codCliente) >100000.00;

Delimiter $$
create function maximo_saldo(codAgencia char(5))
returns double
begin
	declare saldo_maximo double(10,2);
		select max(saldo) into saldo_maximo from conta where conta.codAgencia=codAgencia;
	return saldo_maximo;
end $$
$$
select  a.nomeAgencia,a.cidadeAgencia,cl.nomeCliente,maximo_saldo(a.codAgencia)  from cliente cl join conta c on c.codCliente=cl.codCliente join agencia a on c.codAgencia=a.codAgencia
group by a.nomeAgencia order by maximo_saldo(a.codAgencia) desc;

Delimiter $$
create function minimo_saldo(codAgencia char(5))
returns double
begin
	declare saldo_minimo double(10,2);
		select min(saldo) into saldo_minimo from conta where conta.codAgencia=codAgencia;
	return saldo_minimo;
end $$
$$
select  a.nomeAgencia,a.cidadeAgencia,cl.nomeCliente,minimo_saldo(a.codAgencia)  
from cliente cl join conta c on c.codCliente=cl.codCliente join agencia a on c.codAgencia=a.codAgencia;
group by a.nomeAgencia order by minimo_saldo(a.codAgencia);