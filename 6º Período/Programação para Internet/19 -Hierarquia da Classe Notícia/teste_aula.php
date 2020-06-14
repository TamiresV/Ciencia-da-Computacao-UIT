<?php 
	include_once 'construtor_noticias.php';
	$not = new Noticia("Treinamento em PHP com POO", "Fácil e dinâmico!"); 
	$not->exibeNoticia();
	$not->exibeNoticias("parametro1", "parametro2");
	echo $not;
	$not->titulo = "GET E SET";
	echo $not->titulo;
?>