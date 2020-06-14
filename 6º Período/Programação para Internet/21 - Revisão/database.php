<?php 
	include_once "conexao.php";

	if (isset($_POST['cadastrarTurma'])) 
	{
		$nome = $_POST['nome'];
		
		$sql = "INSERT INTO TURMA(nomeTurma) VALUES ('" . $nome . "')";
		$consulta = $conector->query($sql);
		if (!mysqli_connect_errno())
		{
			echo "Turma Cadastrada";
		}
	}

	else if (isset($_POST['listaTurmas'])) 
	{ 

		$sql="select * from turma";
		$consulta=$conector->query($sql);
		while($dados = $consulta->fetch_array())
		{
			echo "Id: " . $dados["idTurma"] . "</br>";
			echo "Turma: " . $dados["nomeTurma"] . "</br>";
		}
	}
	else if(isset($_POST['cadastrar']))
	{
		$nome = $_POST['nome'];
		$email = $_POST['email'];
		$turma = $_POST['turma'];

		$sql = "INSERT INTO ALUNOS (nomeAluno, emailAluno, Turma_idTurma) VALUES ('" . $nome . "', '" . $email . "', " . $turma . ")";
		$consulta = $conector->query($sql);
		if (!mysqli_connect_errno())
		{
			echo "Aluno Cadastrado";
		}
	}
 ?>