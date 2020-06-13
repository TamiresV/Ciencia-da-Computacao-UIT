alter table funcionario add column nroa int;

create unique index indmed_CPF on medico(CPF);
create index indpac_doenca on paciente(doenca);

drop index indpac_doenca on paciente;

alter table funcionario drop column nroa, drop column cargo;

insert into ambulatorio(nroa,andar,capacidade)values(1,1,30);
insert into ambulatorio(nroa,andar,capacidade)values(2,1,50);
insert into ambulatorio(nroa,andar,capacidade)values(3,2,40);
insert into ambulatorio(nroa,andar,capacidade)values(4,2,25);
insert into ambulatorio(nroa,andar,capacidade)values(5,2,55);

insert into medico(codm,nome,idade,especialidade,CPF,cidade,nroa) values(1,"João",40,"Ortopedia",10000100000,"Florianopolis",1);
insert into medico(codm,nome,idade,especialidade,CPF,cidade,nroa) values(2,"Maria",42,"Traumatologia",10000110000,"Blumenau",2);
insert into medico(codm,nome,idade,especialidade,CPF,cidade,nroa) values(3,"Pedro",51,"Pediatria",11000100000,"São José",2);
insert into medico(codm,nome,idade,especialidade,CPF,cidade,nroa) values(4,"Carlos",28,"Ortopedia",11000110000,"Joinville",null);
insert into medico(codm,nome,idade,especialidade,CPF,cidade,nroa) values(5,"Marcia",33,"Neurologia",11000111000,"Biguacu",3);

insert into paciente(codp,nome,idade,cidade,CPF,doenca) values(1,"Ana",20,"Florianopolis",20000200000,"Gripe");
insert into paciente(codp,nome,idade,cidade,CPF,doenca) values(2,"Paulo",24,"Palhoça",20000220000,"Fratura");
insert into paciente(codp,nome,idade,cidade,CPF,doenca) values(3,"Lucia",30,"Biguacu",22000200000,"Tendinite");
insert into paciente(codp,nome,idade,cidade,CPF,doenca) values(4,"Carlos",28,"Joinville",11000110000,"Sarampo");

insert into consulta(codm,codp,data,hora)values(1,1,"2013/06/12","14:00");
insert into consulta(codm,codp,data,hora)values(1,4,"2013/06/13","10:00");
insert into consulta(codm,codp,data,hora)values(2,1,"2013/06/13","9:00");
insert into consulta(codm,codp,data,hora)values(2,2,"2013/06/13","11:00");
insert into consulta(codm,codp,data,hora)values(2,3,"2013/06/14","14:00");
insert into consulta(codm,codp,data,hora)values(2,4,"2013/06/14","17:00");
insert into consulta(codm,codp,data,hora)values(3,1,"2013/06/19","18:00");
insert into consulta(codm,codp,data,hora)values(3,3,"2013/06/12","10:00");
insert into consulta(codm,codp,data,hora)values(3,4,"2013/06/19","13:00");
insert into consulta(codm,codp,data,hora)values(4,4,"2013/06/20","13:00");
insert into consulta(codm,codp,data,hora)values(4,4,"2013/06/22","19:30");

insert into funcionario(codf,nome,checkidade,cidade,salario,CPF) values(1,"Rita",32,"São José",1200,20000100000);
insert into funcionario(codf,nome,checkidade,cidade,salario,CPF) values(2,"Maria",55,"Palhoça",1220,30000110000);
insert into funcionario(codf,nome,checkidade,cidade,salario,CPF) values(3,"Caio",45,"Florianopolis",1100,41000100000);
insert into funcionario(codf,nome,checkidade,cidade,salario,CPF) values(4,"Carlos",44,"Florianopolis",1200,51000110000);
insert into funcionario(codf,nome,checkidade,cidade,salario,CPF) values(5,"Paula",33,"Florianopolis",2500,61000111000);