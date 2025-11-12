<?



// Function to display footer navigation

function navFooter() { ?>

	     <div id="footer">
     
	  <div class="footerRHS">
        Website by <a href="http://www.joshcarr.com">Josh Carr</a><p>
		  copyright © <? echo date("Y") ?> by Richard Kostelanetz
      </div> 
	  
	<div>Richard Kostelanetz</div>
	<div>Earl of Wordship</div>
		<div>1600 Norman Street</div>
		<div>Ridgewood, NY 11385-5751 USA</div>
 		<div><a href="mailto:RichKostelanetz@aol.com">RichKostelanetz@aol.com</a></div>  	  
	   	<!-- END Footer -->   
    </div>
  </body>
</html>

<?

} 



// Function for opening HTML documents

function openDoc($id,$page) { 

// setting page title and header graphic information
if ($id == "histories") { $hdrImage = "http://www.richardkostelanetz.com/images/hdr/hdr_histories.jpg"; $section = "Histories"; $menu = '<li><a href="http://www.richardkostelanetz.com/index.html">Home</a></li>
      <li class="active"><a href="http://www.richardkostelanetz.com/histories/index.php">Histories</a></li>
      <li><a href="http://www.richardkostelanetz.com/invent/index.php">Inventories</a></li>
      <li><a href="http://www.richardkostelanetz.com/prop/index.php">Proposals</a></li>
      <li><a href="http://www.richardkostelanetz.com/examples/index.php">Examples</a></li>
      <li><a href="http://www.richardkostelanetz.com/links/index.php">Links</a></li>';}

else if ($id == "inventories") { $hdrImage = "http://www.richardkostelanetz.com/images/hdr/hdr_inventories.jpg"; $section = "Inventories";  $menu = '<li><a href="http://www.richardkostelanetz.com/index.html">Home</a></li>
      <li><a href="http://www.richardkostelanetz.com/histories/index.php">Histories</a></li>
      <li class="active"><a href="http://www.richardkostelanetz.com/invent/index.php">Inventories</a></li>
      <li><a href="http://www.richardkostelanetz.com/prop/index.php">Proposals</a></li>
      <li><a href="http://www.richardkostelanetz.com/examples/index.php">Examples</a></li>
      <li><a href="http://www.richardkostelanetz.com/links/index.php">Links</a></li>';}

else if ($id == "proposals") { $hdrImage = "http://www.richardkostelanetz.com/images/hdr/hdr_proposals.jpg"; $section = "Proposals";  $menu = '<li><a href="http://www.richardkostelanetz.com/index.html">Home</a></li>
      <li><a href="http://www.richardkostelanetz.com/histories/index.php">Histories</a></li>
      <li><a href="http://www.richardkostelanetz.com/invent/index.php">Inventories</a></li>
      <li class="active"><a href="http://www.richardkostelanetz.com/prop/index.php">Proposals</a></li>
      <li><a href="http://www.richardkostelanetz.com/examples/index.php">Examples</a></li>
      <li><a href="http://www.richardkostelanetz.com/links/index.php">Links</a></li>';}

else if ($id == "examples") { $hdrImage = "http://www.richardkostelanetz.com/images/hdr/hdr_links.jpg"; $section = "Examples";  $menu = '<li><a href="http://www.richardkostelanetz.com/index.html">Home</a></li>
      <li><a href="http://www.richardkostelanetz.com/histories/index.php">Histories</a></li>
      <li><a href="http://www.richardkostelanetz.com/invent/index.php">Inventories</a></li>
      <li><a href="http://www.richardkostelanetz.com/prop/index.php">Proposals</a></li>
      <li class="active"><a href="http://www.richardkostelanetz.com/examples/index.php">Examples</a></li>
      <li><a href="http://www.richardkostelanetz.com/links/index.php">Links</a></li>';}

else if ($id == "links") { $hdrImage = "http://www.richardkostelanetz.com/images/hdr/hdr_examples.jpg"; $section = "Links";  $menu = '<li><a href="http://www.richardkostelanetz.com/index.html">Home</a></li>
      <li><a href="http://www.richardkostelanetz.com/histories/index.php">Histories</a></li>
      <li><a href="http://www.richardkostelanetz.com/invent/index.php">Inventories</a></li>
      <li><a href="http://www.richardkostelanetz.com/prop/index.php">Proposals</a></li>
      <li><a href="http://www.richardkostelanetz.com/examples/index.php">Examples</a></li>
      <li class="active"><a href="http://www.richardkostelanetz.com/links/index.php">Links</a></li>';}
	  


?>




<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
  <head>
    <meta http-equiv="content-type" content="application/xhtml+xml; charset=utf-8" />
    <meta name="author" content="Josh Carr" />
    <meta name="generator" content="Windows Notepad" />
    <style type="text/css" media="screen">@import "http://www.richardkostelanetz.com/kosti.css";</style>
	<link rel="stylesheet" type="text/css" media="print" href="http://www.richardkostelanetz.com/kostiPrint.css" />

    <title><? if ($page) print "Richard Kostelanetz | "; else print "RichardKostelanetz.com | "; print $section; if ($page) print " | ".$page; ?></title>
  <style type=text/css>
  <!--
	#header  {
	background-image : url(<? print $hdrImage; ?>);
    background-repeat : repeat-x;
	background-color : #fff;
	}
-->
  </style>
  </head>

  <body>
    <div id="content">
	
	<div id="top"></div>
  
    <!-- ###### Header ###### -->

    <div id="header">
	  <h1>Richard Kostelanetz</h1>
	  <div id="titleSpace">
	  <span class="title">RichardKostelanetz.com</span>
	  </div>
	 </div>
      
  <div id="menuBar"> 
    <ul id="menuList"> <? print $menu; ?> 
	</ul>
  </div>



<?

}
    
      
?>