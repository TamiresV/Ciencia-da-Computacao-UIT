<?php 
	include_once 'conexao.php';
	include_once 'desenvolvedor.php';

	$conexao = new Conexao();
	$con = $conexao->getConexao();

	$desenvolvedor = new Desenvolvedor($con);

	$nome = $_GET['nome'];
	$email = $_GET['email'];
	$idProjeto = $_GET['projeto'];

	if($desenvolvedor->inserirDesenvolvedor($nome, $email, $idProjeto))
	{
		echo "Desenvolvedor cadastrado com sucesso!";
	} 
	else 
	{
		echo "Erro - Tente novamente";
	}
	
 ?>