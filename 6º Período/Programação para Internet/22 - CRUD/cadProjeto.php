<?php 
	include_once 'conexao.php';
	include_once 'projeto.php';

	$conexao = new Conexao();
	$con = $conexao->getConexao();

	$projeto = new Projeto($con);

	$nome = $_GET['nome'];

	if(($projeto->inserirProjeto($nome)))
	{
		echo "Projeto cadastrado com sucesso!";
	} 
	else 
	{
		echo "Erro - Tente novamente";
	}
	
 ?>
