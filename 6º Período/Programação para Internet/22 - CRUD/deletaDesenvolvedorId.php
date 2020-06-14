<?php 
	include_once 'conexao.php';
	include_once 'desenvolvedor.php';

	$conexao = new Conexao();
	$con = $conexao->getConexao();

	$desenvolvedor = new Desenvolvedor($con);

	$id = $_GET['id'];

	if($desenvolvedor->deletarDesenvolvedor($id))
	{
		echo "Desenvolvedor deletado";
	} 
	else 
	{
		echo "Erro - Tente novamente";
	}
	
 ?>