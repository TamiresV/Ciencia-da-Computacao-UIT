/*Insert*/
insert into cidade values(1,"Itaúna");
insert into cidade values(2,"Divinópolis");

insert into filial values(1,"Jove Soares, 35",1);
insert into filial values(2,"Afonso Pena, 5",1);
insert into filial values(3,"Rio de Janeiro 95",2);

insert into fornecedor values(1,"Joao");
insert into fornecedor values(2,"Marcos");
insert into fornecedor values(3,"Pedro");
insert into fornecedor values(4,"Ana");
insert into fornecedor values(5,"Lucas");

insert into produto values (1,"Detergente",1.0,1.9,100,1);
insert into produto values (2,"Agua",0.7,1.5,200,4);
insert into produto values (3,"Refrigerante",6.4,8.9,300,5);
insert into produto values (4,"Sabonete",0.6,1.5,150,2);
insert into produto values (5,"Boalcha",2.1,3.2,200,3);
insert into produto values (6,"Suco",2.3,3.8,160,1);
insert into produto values (7,"Leite",1.5,2.99,120,4);
insert into produto values (8,"Escova de dente",1.7,2.2,180,3);
insert into produto values (9,"Ração",10,15,80,5);
insert into produto values (10,"Arroz",3.95,5.3,100,2);

insert into cliente values(1,"Mateus","Joaquina", "15895265650",11);
insert into cliente values(2,"Guilherme","Rio de Janeiro","154547870",20);
insert into cliente values(3,"Gilmar","Mozart Machado","1328745960",21);
insert into cliente values(4,"Victor","XV de Novembro","3977415826",20);
insert into cliente values(5,"Vicente", "Nova Serrana","1579584262",17);

insert into `filial/produto` values (1,1);
insert into `filial/produto` values (2,1);
insert into `filial/produto` values (3,1);
insert into `filial/produto` values (1,2);
insert into `filial/produto` values (2,2);
insert into `filial/produto` values (3,2);
insert into `filial/produto` values (1,3);
insert into `filial/produto` values (2,3);
insert into `filial/produto` values (3,3);
insert into `filial/produto` values (1,4);
insert into `filial/produto` values (2,4);
insert into `filial/produto` values (3,4);
insert into `filial/produto` values (1,5);
insert into `filial/produto` values (2,5);
insert into `filial/produto` values (3,5);
insert into `filial/produto` values (1,6);
insert into `filial/produto` values (2,6);
insert into `filial/produto` values (3,6);
insert into `filial/produto` values (1,7);
insert into `filial/produto` values (2,7);
insert into `filial/produto` values (3,7);
insert into `filial/produto` values (1,8);
insert into `filial/produto` values (2,8);
insert into `filial/produto` values (3,8);
insert into `filial/produto` values (1,9);
insert into `filial/produto` values (2,9);
insert into `filial/produto` values (3,9);
insert into `filial/produto` values (1,10);
insert into `filial/produto` values (2,10);
insert into `filial/produto` values (3,10);

insert into compra values(1,3,"2017-11-06","13:30:00");
insert into compra values(1,7,"2017-11-07","16:00:00");
insert into compra values(2,4,"2017-11-06","14:15:00");
insert into compra values(2,8,"2017-11-07","12:00:00");
insert into compra values(3,5,"2017-11-06","11:30:00");
insert into compra values(3,9,"2017-11-07","11:00:00");
insert into compra values(4,6,"2017-11-07","13:00:00");
insert into compra values(4,7,"2017-11-06","16:00:00");
insert into compra values(5,1,"2017-11-06","12:00:00");
insert into compra values(5,8,"2017-11-06","17:55:00");

insert into telefone values(1,12345678,1,null);
insert into telefone values(2,12345628,2,null);
insert into telefone values(3,12345637,3,null);
insert into telefone values(4,12345646,4,null);
insert into telefone values(5,12345655,5,null);
insert into telefone values(6,12345664,null,1);
insert into telefone values(7,12345673,null,2);
insert into telefone values(8,12345682,null,3);
insert into telefone values(9,12345691,null,4);
insert into telefone values(10,12345600,null,5);

/*SELECT*/
select * from cidade;
select * from filial;
select * from fornecedor;
select * from produto;
select * from cliente;
select * from `filial/produto`;
select * from compra;
select * from telefone;

select avg(preco_venda) from produto where preco_compra>3;
select max(quantidade_estoque) from produto;
select p.descricao from produto p join fornecedor f on p.FORNECEDOR_codigo=f.codigo where f.nome="Ana";
select f.nome, t.numero from fornecedor f join telefone t on f.codigo = t.FORNECEDOR_codigo;

select cl.nome, c.data, c.hora, p.descricao from cliente cl join 
compra c on c.CLIENTE_codigo=cl.codigo join 
produto p on c.PRODUTO_codigo_barras=p.codigo_barras;
select descricao, preco_venda from produto order by preco_venda;

/*UPDATE*/
update telefone set numero="99999990" where FORNECEDOR_codigo=3;
