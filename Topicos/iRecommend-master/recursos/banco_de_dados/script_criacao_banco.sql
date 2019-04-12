CREATE TABLE `Cliente` (
                  `idCliente` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
                  `nome` TEXT NOT NULL,
                  `sobrenome` TEXT NOT NULL,
                  `email` TEXT NOT NULL,
                  `senha` TEXT NOT NULL)

CREATE TABLE `AcaoHistorico` (
                  `idAcaoHistorico` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
                  `descricao` TEXT NULL)

CREATE TABLE `Evento` (
                  `idEvento` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
                  `nome` TEXT NOT NULL,
                  `data` DATETIME NOT NULL,
                  `preco` DECIMAL(10,2) NULL,
                  `likes` INTEGER NULL,
                  `deslike` INTEGER NULL,
                  `endereco` TEXT NULL,
                  `numero` INTEGER NULL,
                  `bairro` TEXT NULL,
                  `cidade` TEXT NULL,
                  `estado` TEXT NULL,
                  `cep` TEXT NULL,
                  `pais` TEXT NULL,
                  `latitude` TEXT NULL,
                  `longitude` TEXT NULL)

CREATE TABLE `Historico` (
                  `idHistorico` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
                  `idCliente` INTEGER NOT NULL,
                  `idEvento` INTEGER NOT NULL,
                  `idAcaoHistorico` INTEGER NOT NULL,
                    FOREIGN KEY (`idCliente`)
                    REFERENCES `Cliente` (`idCliente`)
                    ON DELETE CASCADE
                    ON UPDATE CASCADE,
                    FOREIGN KEY (`idEvento`)
                    REFERENCES `Evento` (`idEvento`)
                    ON DELETE CASCADE
                    ON UPDATE CASCADE,
                    FOREIGN KEY (`IdAcaoHistorico`)
                    REFERENCES `AcaoHistorico` (`idAcaoHistorico`)
                    ON DELETE CASCADE
                    ON UPDATE CASCADE)

CREATE TABLE `Imagem` (
                  `idImagem` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
                  `nome` TEXT NULL,
                  `caminho` TEXT NULL,
                  `idEvento` INTEGER NOT NULL,
                    FOREIGN KEY (`idEvento`)
                    REFERENCES `Evento` (`idEvento`)
                    ON DELETE CASCADE
                    ON UPDATE CASCADE)
