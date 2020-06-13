DELIMITER $$
create procedure inserirFuncionario(in idFunc int, in nomeFunc varchar(45),in cargoFunc varchar(45))
begin
	insert into funcionarios (NumFunc, nome, cargo) values (idFunc, nomeFunc, cargoFunc);
end $$
$$
call inserirFuncionario(13,'Carlos','Trainee');

DELIMITER $$
create procedure deletarFuncionario(in idFunc int)
begin
	delete from funcionarios where NumFunc=idFunc;
end $$
$$
call deletarFuncionario(13);

DELIMITER $$
create procedure alterarFuncionario(in idFunc int, in cargoFunc varchar(45))
begin
	update funcionarios set cargo=cargoFunc where NumFunc=idFunc;
end $$
$$
call alterarFuncionario(718, "Trainee");

DELIMITER $$
create procedure contaAparelhos(in tipoAparelho varchar(45))
begin
	select count(*) from aparelho where tipo=tipoAparelho;
end $$
$$
call contaAparelhos(‘Torradeira’);