<?php
class Cliente {
	private $tabela = 'cliente';
	private $conexao;
	
	private $idCliente;
	private $nomeCliente;
	private $emailCliente;
	private $cpfCliente;
	private $telefoneCliente;
	private $senhaCliente;
	
	public function __construct($bd){
		$this->conexao = $bd;
	}
	
	function getAll(){
		$consulta = 'select * from ' . $this->tabela;
		$stmt = $this->conexao->query($consulta);
		return $stmt;
	}

	function getById($id){
		$consulta = "select * from cliente where idCliente = " . $id; 
		$stmt = $this->conexao->query($consulta);
		return $stmt;
	}
	function busca($keywords){
		//$consulta = "select * from cliente where nomeCliente = '" . $keywords . "'"; 
		$consulta = "select * from cliente where nomeCliente like '%" . $keywords . "%' or idCliente = '" . $keywords . "' or telefoneCliente like '%" . $keywords . "%'";
		$stmt = $this->conexao->query($consulta);
		return $stmt;
	}
}