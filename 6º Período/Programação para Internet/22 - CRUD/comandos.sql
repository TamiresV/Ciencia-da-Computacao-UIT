create database prova;

create table desenvolvedor(
idDesenvolvedor int(11) NOT NULL AUTO_INCREMENT,
nomeDesenvolvedor varchar(45) DEFAULT NULL,
emailDesenvolvedor varchar(45) DEFAULT NULL,
Projeto_idProjeto int(11) NOT NULL,
primary key(idDesenvolvedor, Projeto_idProjeto)
);

create table projeto(
idProjeto int(11) NOT NULL AUTO_INCREMENT,
nomeProjeto varchar(45) DEFAULT NULL,
primary key(idProjeto)
)
