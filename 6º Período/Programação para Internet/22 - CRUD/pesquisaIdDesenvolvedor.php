<?php 
	include_once 'conexao.php';
	include_once 'desenvolvedor.php';

	$conexao = new Conexao();
	$con = $conexao->getConexao();

	$desenvolvedor = new Desenvolvedor($con);

	$id = $_GET['id'];

	if($sql = $desenvolvedor->getById($id))
	{
		while($dados = $sql->fetch_array())
		{
			echo "Id: " . $dados["idDesenvolvedor"] . "</br>";
			echo "Nome: " . $dados["nomeDesenvolvedor"] . "</br>";
			echo "Email: " . $dados["emailDesenvolvedor"] . "</br>";
			echo "Projeto: " . $dados["Projeto_idProjeto"] . "</br>";
		}		
	} 
	else 
	{
		echo "Erro - Tente novamente";
	}
	
 ?>