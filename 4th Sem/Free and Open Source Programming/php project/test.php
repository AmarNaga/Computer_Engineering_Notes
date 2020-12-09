<html>
<body>
<?php 
$a = 5; 
$b = 10; 
function myTest(){ 
$GLOBALS['b'] = $GLOBALS['a'] + $GLOBALS['b']; 
} 
myTest(); 
echo $b; 
?>
</body>
</html>