<!DOCTYPE html>
<html>
<head>
	<title>Revisao</title>
	<style type="text/css">
		div{
			margin-bottom: 10px;
		}
	</style>
</head>
<body>
	<form action="database.php" method="post" enctype="multipart/form-data" name="aluno" > 
		<div> <label>Nome Aluno:</label> <input type="text" name="nome" /> </div> 
		<div> <label>Email:</label> <input type="text" name="email"/> </div> 
		<div> <input type="submit" name="listaTurmas" value="Mostrar Turmas"></div>
 		<div> <label>Id turma:</label> <input type="text" name="turma"/> </div>
		<div> <input type="submit" name="cadastrar" value="Cadastrar" /> </div> 
	</form>

</body>
</html>