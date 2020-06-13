create view departamentos_empresa as select d.Dnome,f.Pnome,f.salario from funcionario f join departamento d on f.cpf=d.cpf_gerente;

select max(salario),Pnome from departamentos_empresa;

create view funcionarios_empresa as select f.Pnome, f.Salario from funcionario f join trabalha_em t on f.cpf=t.Fcpf join projeto p on t.Pnr=p.Projnumero join
departamento d on p.Dnum=d.Dnumero where d.Dnome="Pesquisa";

select min(salario), Pnome from funcionarios_empresa;

create view projetos_empresa as select p.Projnome, d.Dnome, count(distinct t.Fcpf) as n_funcionarios, sum(t.Horas) as total_horas from projeto p 
join departamento d on d.Dnumero=p.Dnum join trabalha_em t on p.Projnumero=t.Pnr;

select Projnome,  n_funcionarios from projetos_empresa group by n_funcionarios desc;

create view funcionarios_projetos as select f.Pnome, p.ProjNome from funcionario f join trabalha_em t on f.Cpf=t.Fcpf join projeto p on t.Pnr=p.projnumero;

select ProjNome from funcionarios_projetos where Pnome="Alice";