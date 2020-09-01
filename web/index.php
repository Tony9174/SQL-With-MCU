<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css">
<link rel = "icon" href = "logo.png" type = "image/x-icon">

<style>
			body
		{
			margin: 0;
			padding: 0;
			display: flex;
			justify-content: center;
			align-items: center;
			min-height: 100vh;
			background-image: url(21.jpg);
			background-repeat: no-repeat;
			background-size: cover;
		}
</style>
</head>
<body>
	
	
	<form action="" method="POST">
	<div class="container-fluid container-md justify-content-center p-5 m-5 ">
			<label>
					<button class="btn btn-outline-success mr-5 ml-5 pt-3 pb-3  pl-5 pr-5 " type="submit" name = "ON" > HIGH 
					</button>
			</label>
			<label>
					<button class="btn btn-outline-danger mr-5 ml-5 pt-3 pb-3  pl-5 pr-5 " type="submit" name = "OFF" >  LOW </button>
			</label>

					</div>
		</form>
	</div>
		
</body>
</html>

<?php
$server 	= "localhost";	
$username 	= "root";		
$password 	= "";
$DB 		= "tony";	
$update = new mysqli($server, $username, $password, $DB);
			if ($update->connect_error) {
				die("Connection failed: " . $update->connect_error);
			} 
	if(isset($_POST['ON']))		
{	
			$sql = "UPDATE status SET status = '1'";
			if ($update->query($sql) === TRUE) {} 
}
	if(isset($_POST['OFF']))		
		{
			$sql = "UPDATE status SET status = '0'";	
			if ($update->query($sql) === TRUE) {} 
		}			
?>
