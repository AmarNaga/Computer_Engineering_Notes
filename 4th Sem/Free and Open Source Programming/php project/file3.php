<html> 
<body>
<?php
$fileName = "khwopa.txt"; 
echo "<h3>Method 1: fgets()</h3>"; 
$file = fopen($fileName, 'r'); 
// open file to read 
while (!feof($file)) { 
// read file contents one line at a time 
	echo fgets($file,1024); 
} 
fclose($file);
?>

</body> 
</html> 