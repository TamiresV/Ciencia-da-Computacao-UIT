<?php 
	include_once 'conexao.php';
	include_once 'projeto.php';

	$conexao = new Conexao();
	$con = $conexao->getConexao();

	$projeto = new Projeto($con);

	if($sql = $projeto->getAll())
	{
		while($dados = $sql->fetch_array())
		{
			echo "Id: " . $dados["idProjeto"] . "</br>";
			echo "Nome: " . $dados["nomeProjeto"] . "</br>";
		}
	}
 ?>