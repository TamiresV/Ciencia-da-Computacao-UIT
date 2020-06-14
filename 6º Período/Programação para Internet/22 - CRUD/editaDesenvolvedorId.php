<?php 
	include_once 'conexao.php';
	include_once 'desenvolvedor.php';

	$conexao = new Conexao();
	$con = $conexao->getConexao();

	$desenvolvedor = new Desenvolvedor($con);

	$id = $_GET['id'];
	$nome = $_GET['nome'];
	$email = $_GET['email'];
	$idProjeto = $_GET['projeto'];

	if($desenvolvedor->editarDesenvolvedor($id, $nome, $email, $idProjeto))
	{
		echo "Desenvolvedor editado com sucesso!";
	} 
	else 
	{
		echo "Erro - Tente novamente";
	}
	
 ?>