<html> 
<body>
<?php
if(file_exists('phpfile')) {       
	$mydir   =  'phpfile/';       
	$d   = dir($mydir);       
	while($entry   = $d->read()){ 
		if($entry !="." && $entry!="..") {   
			echo $entry."<br>";   
			unlink($mydir.$entry);   
			echo "=>Deleted<br>"; 
		}      
	}      
	$d->close();      
	rmdir($mydir); 
} 
?>
</body> 
</html> 