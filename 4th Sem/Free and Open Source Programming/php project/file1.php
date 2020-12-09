<html> 
<body>
<?php
// open and close file to read 
if(!file_exists("test.txt")) {
  die("File not found");
} else {
  	$toread = fopen('test.txt','r'); 
	fclose($toread); 
	// open and close file to write 
	$towrite = fopen('test.txt','w'); 
	fclose($towrite);
}

?>

</body> 
</html> 