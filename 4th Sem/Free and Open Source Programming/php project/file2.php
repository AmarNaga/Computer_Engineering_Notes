<html> 
<body>
<?php
// Write to a file 
$file = fopen('khwopa.txt', 'w'); 
// open file to write
$text = ">>>>>>This is a test from Khwopa Engineering College"; fwrite($file, $text); 
// write to the file 
echo "File created successfully."; 
fclose($file); 
// close file
?>

</body> 
</html> 