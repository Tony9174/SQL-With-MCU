<?php
$server 	= "localhost";	
$username 	= "root";		
$password 	= "";
$DB 		= "tony";
$conn = new mysqli($server, $username, $password,$DB);		
	if ($conn->connect_error) 
	{
		die("Connection failed: " . $conn->connect_error);
	} 
	$query ="SELECT * from status";					
	$result = $conn->query($query);
	
		while($row = $result->fetch_assoc()) 
		{
			echo $row["status"];					
		}

?>
