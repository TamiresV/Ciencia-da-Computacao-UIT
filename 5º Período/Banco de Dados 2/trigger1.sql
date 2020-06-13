TRIGGER 1
DELIMITER $$
CREATE TRIGGER removeReserva AFTER INSERT  
ON aluguel
FOR EACH ROW
BEGIN
        delete from reserva
		WHERE codCopia = new.codCopia;
END$$
$$

TRIGGER 2
DELIMITER $$
CREATE TRIGGER mudaAtributo AFTER INSERT  
ON aluguel
FOR EACH ROW
BEGIN
        UPDATE copia SET estaAlugada = "sim"
        WHERE codCopia = NEW.codCopia;  
END$$
$$  

TRIGGER 3
DELIMITER $$
CREATE TRIGGER adicionaLinha AFTER INSERT  
ON cliente
FOR EACH ROW
BEGIN
        insert pontos set codCliente = new.codCliente ;
END$$
$$