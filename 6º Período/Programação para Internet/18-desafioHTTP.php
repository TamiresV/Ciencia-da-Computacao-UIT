<?php 

	$ip=$_SERVER["REMOTE_ADDR"];

	echo "Ip-> " . $ip . "<br />";

	$url = "http://www.useragentstring.com/?uas=%s&getJSON=all";
	$url = sprintf($url, urlencode($_SERVER["HTTP_USER_AGENT"]));

	$ch = curl_init();
	curl_setopt($ch, CURLOPT_URL, $url);
	curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

	$output = curl_exec($ch);

	curl_close($ch);

	$data = json_decode($output);

	echo "Sistema operacional-> ", $data->os_type . "<br />";

	$navegador = $_SERVER['HTTP_USER_AGENT'];
	
	 if (preg_match('|MSIE ([0-9].[0-9]{1,2})|',$navegador,$matched)) {
	    $browser_version=$matched[1];
	    $browser = 'IE';
	  } elseif (preg_match( '|Opera/([0-9].[0-9]{1,2})|',$navegador,$matched)) {
	    $browser_version=$matched[1];
	    $browser = 'Opera';
	  } elseif(preg_match('|Firefox/([0-9\.]+)|',$navegador,$matched)) {
	    $browser_version=$matched[1];
	    $browser = 'Firefox';
	  } elseif(preg_match('|Chrome/([0-9\.]+)|',$navegador,$matched)) {
	    $browser_version=$matched[1];
	    $browser = 'Chrome';
	  } elseif(preg_match('|Safari/([0-9\.]+)|',$navegador,$matched)) {
	    $browser_version=$matched[1];
	    $browser = 'Safari';
	  } else {
	   
	    $browser_version = 0;
	    $browser= 'other';
	  }

 	print "Browser-> $browser $browser_version" . "<br />";

 	if($browser=='Chrome')
 	{
 		echo "<img src=imagens/chrome.png height='100' weigth='100'>";
 	}
 	else if($browser=='Explorer')
 	{
 		echo "<img src=imagens/explorer.png height='100' weigth='100'>";
 	}
 	else if($browser=='Firefox')
 	{
 		echo "<img src=imagens/firefox.png height='100' weigth='100'>";	
 	}
 	else if($browser=='Safari')
 	{
 		echo "<img src=imagens/safari.png height='100' weigth='100'>";
 	}

 	
?>