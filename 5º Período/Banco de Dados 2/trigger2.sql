alter table copia add column disponivel char(3) default "sim";

#TRIGGER 1
DELIMITER $$
CREATE TRIGGER alteraDisponivel before delete  
ON filme
FOR EACH ROW
BEGIN
        update copia set disponivel = "nao"
		where codFilme = old.codFilme;
END$$
$$

#TRIGGER 2
DELIMITER $$
CREATE TRIGGER removerPontos before delete  
ON cliente
FOR EACH ROW
BEGIN
        delete from pontos
		where codCliente = old.codCliente;
END$$
$$