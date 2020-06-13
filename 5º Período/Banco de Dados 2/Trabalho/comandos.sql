create view telefone_fornecedor as select f.nome, t.numero from fornecedor f join telefone t on f.codigo=t.FORNECEDOR_codigo;
select * from telefone_fornecedor;

create view compras_cliente as select cl.nome, c.data, c.hora, p.descrição from cliente cl join compra c on cl.codigo=c.CLIENTE_codigo join produto p on c.`PRODUTO_codigo de barras`=p.`codigo de barras`;
select * from compras_cliente;

delimiter $$
create trigger deleta_telefone_cliente After delete
on cliente
for each row
begin
	delete from telefone where CLIENTE_codigo=old.codigo;
end$$
$$
delete from cliente where codigo=1;

delimiter $$
create trigger diminui_estoque After insert
on compra
for each row
begin
	update produto set `quantidade estoque`=`quantidade estoque`-1 where `codigo de barras`=new.`PRODUTO_codigo de barras`;
end$$
$$
insert into compra values (1,6,'2018-11-13','13:30:00');

delimiter $$
create trigger muda_n_fornecedor After update
on fornecedor
for each row
begin
	update telefone set FORNECEDOR_codigo=new.codigo where FORNECEDOR_codigo=old.codigo;
	update produto set FORNECEDOR_codigo=new.codigo where FORNECEDOR_codigo=old.codigo;
end$$
$$
update fornecedor set codigo=1 where codigo=15;

delimiter $$
create procedure seleciona_produtos(IN preco int)
begin
	select * from produto where `preço venda`<=preco;
end $$
$$
call seleciona_produtos(8)

delimiter $$
create procedure seleciona_produtos(IN preco int)
begin
	select * from produto where `preço venda`<=preco;
end $$
$$
call seleciona_produtos(8)

delimiter $$
create function media_preco_produtos()
returns float
begin
	declare media_preco float;
		select avg(`preço venda`) into media_preco from produto;
	return media_preco;
end$$
$$
select media_preco_produtos();

delimiter $$
create function produtos_supermercado(codigo int)
returns int
begin
	declare quant_produtos int;
		select count(distinct `PRODUTO_codigo de barras`) into quant_produtos from `supermercardo/produto` where SUPERMERCADO_codigo=codigo;
	return quant_produtos;
end$$
$$
select produtos_supermercado(3);

