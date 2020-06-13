select nroa,andar from ambultorio where capacidade>any(select capacidade from ambulatorio);
select nome,idade from medico where codm=any(select c.codm from consulta c join paciente p on c.codp=p.codp where p.nome='Ana');
select nome, idade from medico where idade<=all(select idade from medico);
select p.nome, p.CPF from paciente p join consulta c on p.codp=c.codp where c.hora<all(select hora from consulta where datac='2013-11-12');
select nome,CPF from medico where nro<>all(select nroa from ambulatorio where capacidade>all(select capacidade from ambulatorio where andar=2));