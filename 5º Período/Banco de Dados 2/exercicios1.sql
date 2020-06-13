create view filmes_locadora as select f.titulo,fc.nomeCategoria from filmecategoria fc join filme f on fc.codCategoria=f.codCategoria;

select * from filmes_locadora;

select count(nomeCategoria) from filmes_locadora where nomeCategoria="comedia";

create view cliente_filme as select f.titulo, c.nome from filme f join copia cp on f.codFilme=cp.codFilme join aluguel a on cp.codCopia=a.codCopia
 join cliente c on a.codCliente=c.codCliente;
select * from cliente_filme;

select titulo from cliente_filme where nome="Fernando";

select nome from cliente_filme where titulo="Matrix";

create view area_view from tamanho_area_cidades_uf_view;

select * from areas_view;
select * from tamanho_area_cidades_uf_view;

drop view tamanho_area_cidades_uf_view;

create view artista_evento as select a.nome, e.descricao from artista a join atuacao at on a.id=at.idArtista join evento e on at.idEvento=e.id;
select * from artista_evento;

create view datas_Ivete as select e.dataEvento from artista a join atuacao at on a.id=at.idArtista join evento e on at.idEvento=e.id where a.nome="Ivete Sangalo";
select * from datas_Ivete;