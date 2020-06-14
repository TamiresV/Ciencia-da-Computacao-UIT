<?php

class Projeto
{
	private $tabela = "projeto";
	private $conexao;

	private $nome;

	public function __construct($conexao)
	{
		$this->conexao = $conexao;
    }

	public function getByID($id)
	{
		$query = "SELECT * FROM " . $this->tabela . " WHERE idProjeto = " . $id;
		$stmt = $this->conexao->query($query);
		return $stmt;
	}

	public function getAll()
	{
		$query = "SELECT * FROM " . $this->tabela;
		$stmt = $this->conexao->query($query);
		return $stmt;
	}

	public function inserirProjeto($nome)
	{
		$query = "INSERT INTO " . $this->tabela . "(nomeProjeto) values ('" . $nome . "')";
		$stmt = $this->conexao->prepare($query);
		if($stmt->execute()){
			return true;
		}
		return false;
	}
	

	public function editarProjeto($id, $nome)
	{
		$query = "UPDATE " . $this->tabela . "SET nomeProjeto='" . $nome . "' WHERE idProjeto = " . $id;
		$stmt = $this->conexao->query($query);
	}

	public function deletarProjeto($id)
	{
		$query = "DELETE FROM " . $this->tabela . "WHERE idProjeto = " . $id;
		$stmt = $this->conexao->query($query);
	}
}

?>