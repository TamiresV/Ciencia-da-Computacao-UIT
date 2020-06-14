<?php

class Desenvolvedor
{
	private $tabela = "desenvolvedor";
	private $conexao;

	private $nome;
	private $email;
	private $projeto;

	public function __construct($conexao)
	{
		$this->conexao = $conexao;
    }

	public function getByID($id)
	{
		$query = "SELECT * FROM " . $this->tabela . " WHERE idDesenvolvedor = " . $id;
		$stmt = $this->conexao->query($query);
		return $stmt;
	}

	public function getAll()
	{
		$query = "SELECT * FROM " . $this->tabela;
		$stmt = $this->conexao->query($query);
		return $stmt;
	}

	public function inserirDesenvolvedor($nome, $email, $projeto)
	{
		$query = "INSERT INTO " . $this->tabela . "(nomeDesenvolvedor, emailDesenvolvedor, Projeto_idProjeto) values ('" . $nome ."','" . $email . "'," . $projeto . ")";
		$stmt = $this->conexao->prepare($query);
		if($stmt->execute()){
			return true;
		}
		return false;
	}

	public function editarDesenvolvedor($id, $nome, $email, $projeto)
	{
		$query = "UPDATE " . $this->tabela . "SET nomeDesenvolvedor='" . $nome . "', emailDesenvolvedor='" . $email . "', Projeto_idProjeto=" . $projeto . " WHERE idDesenvolvedor = " . $id;
		$stmt = $this->conexao->query($query);
	}

	public function deletarDesenvolvedor($id)
	{
		$query = "DELETE FROM " . $this->tabela . "WHERE idDesenvolvedor = " . $id;
		$stmt = $this->conexao->query($query);
	}
}

?>