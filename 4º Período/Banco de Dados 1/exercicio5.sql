select nome,CPF from medico where CPF in (select CPF from paciente);
select codp,nome from paciente where codp in (select codp from consultas where hora>'14:00:00');
select nome, idade from medico where codm in (select codm from consulta where codp in (select codp from paciente where nome='Ana'));
select nroa, andar from ambulatorio where nroa not in(select nroa from medico);
select nome,CPF,idade from paciente where codp not in(select codp from consulta where day(datac)>=16);
