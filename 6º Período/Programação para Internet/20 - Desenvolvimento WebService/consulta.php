<?php
	include_once 'conexao.php';
	include_once 'cliente.php';

	$bancoDeDados = new Conexao();
	$bd = $bancoDeDados->getConnection();
	
	$cliente = new Cliente($bd);
	
	$stmt = $cliente->busca('Tamires');

	$nlinhas = $stmt->num_rows;

	if($nlinhas > 0)
	{
		while($linha = mysqli_fetch_array($stmt)){
			extract($linha);
			$cliEncontrado = array(
					"id" => $idCliente,
					"nome" => $nomeCliente,
					"email" => $emailCliente,
					"telefone" => $telefoneCliente,
					"senha" => $senhaCliente
			);
		}
		echo json_encode($cliEncontrado);
	}
	 else {
		echo json_encode(
				array("mensagem" => "Nenhum Cliente Encontrado!")
			);
	}
	
 ?>