<?php 
	include_once 'conexao.php';
	include_once 'projeto.php';

	$conexao = new Conexao();
	$con = $conexao->getConexao();

	$projeto = new Projeto($con);

	$id = $_GET['id'];

	if($projeto->deletarProjeto($id))
	{
		echo "Projeto deletado";
	} 
	else 
	{
		echo "Erro - Tente novamente";
	}
	
 ?>