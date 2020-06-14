<?php 
	include_once 'conexao.php';
	include_once 'projeto.php';

	$conexao = new Conexao();
	$con = $conexao->getConexao();

	$projeto = new Projeto($con);

	$id = $_GET['id'];
	$nome = $_GET['nome'];

	if($projeto->editarProjeto($id, $nome))
	{
		echo "Projeto editado com sucesso!";
	} 
	else 
	{
		echo "Erro - Tente novamente";
	}
	
 ?>