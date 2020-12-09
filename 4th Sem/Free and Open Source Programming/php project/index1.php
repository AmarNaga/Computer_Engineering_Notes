<html> 
<body>
<?php 
$a = 5; 
$b = 10; 
function myTest(){ 
global $a, $b; 
$c = 6;
$b = $a + $b + $c; 
} 
myTest(); 
echo $b; 
?> 

</body> 
</html> 
