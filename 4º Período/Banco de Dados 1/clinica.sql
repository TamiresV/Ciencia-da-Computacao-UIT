create database Clinica;

create table Ambulatorio(
nroa int,
andar numeric(3) not null,
capacidade smallint,
primary key(nroa)
);

create table Medico(
codm int,
nome varchar(40) not null,
idade smallint not null,
especialidade char(20),
CPF numeric (11) unique,
cidade varchar(30),
nroa int,
primary key(codm),
foreign key(nroa) references ambulatorio(nroa)
);

create table Paciente(
codp int,
nome varchar(40) not null,
idade smallint not null,
cidade char(30),
CPF numeric(11) unique,
doenca  varchar(40) not null,
primary key(codp)
);

create table Funcionario(
codf int,
nome varchar(40) not null,checkidade smallint,
CPF numeric(11) unique,
cidade varchar(30),
salario numeric(10),
cargo varchar(20),
primary key(codf)
);

create table Consulta(
codm int,
codp int,
data date,
hora time,
primary key(codm,data,hora),
foreign key(codm) references medico(codm),
foreign key(codp) references paciente(codp)
);