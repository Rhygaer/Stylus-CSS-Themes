:root{
	--grey900: #454547;
	--grey800: #626266;
	--grey700: #78787d;
	--grey600: #919199;
	--grey500: #aaaab5;
	--grey400: #bebec8;
	--grey300: #d4d4e1;
	--grey200: #e8e8f0;
	--grey100: #f3f3f9;
	--grey000: #fff;
	--primary900: #355952;
	--primary700: #2c8066;
	--primary500: #30996f;
	--primary300: #318261;
	--primary100: #e5fdf3;
	--grad1: #4aeaa1;
	--grad2: #1b6fd5;
	
}

/* *, *::before, *::after {
	margin: 0;
	padding: 0;
	box-sizing:border-box;

} */
body {
	position: relative;
	width: 100%;
	display: flex;
  	justify-content: center;
	flex-direction:column;
	
	background-image: url("https://www.toptal.com/designers/subtlepatterns/patterns/dot-grid.png");
  	background-repeat: repeat;
/* 	background: blue; */
}

#maincontent{
/* 	width:70%; */
	padding:36px;
	margin-left:0 !important;
/* 	margin:calc(100%-730px) !important;
 */
	align-self: center;
	box-shadow: 0 0px 40px #5d658233
}


/* TOPBAR, SIDEBAR: hide */
#shst, #inotherlangs, #langbar{
	display: none;
	visibility: hidden;
}



/********* Form ***********/
.notranslate{
	font-size: 18px;
	color: var(--grey500) !important;
}
.mainheadline{
	display:none;
}
#entertexthere{
	display:none;
/* 	visibility:hidden; */
}
.noli666{
	display:flex;
	flex-direction: row;
	flex-wrap: wrap;
	justify-content: flex-start;
	position:relative;
	
	
}
/* input text */
.noli666 input:nth-child(1) {
	
/* 	background-color: #08e9ea;
background-image: linear-gradient(45deg, #08e9ea 0%, #2AF598 100%);
 */
	width:500px !important;
	height: 24px;
	font-size: 24px;
/* 	font-weight:700; */
/* 	color: var(--grey000); */
	color: var(--primary500);
	border: 0 solid #eee;
	border-radius: 2px;
	padding: 12px !important;
/*   background: -webkit-linear-gradient(var(--grad1),var(--grad2) );
  -webkit-background-clip: text;
  -webkit-text-fill-color: transparent; */
	background-color: var(--grey100);
}

.noli666 input:nth-child(1):focus {
  outline: 1px solid var(--primary500) !important;
}
/* Search button */
.noli666 input:nth-child(2) {
	background: var(--grey200);
	border: 0 solid #eee;
	color : var(--grey700);
	font-weight:bold;
	font-family: arial,helvetica,sans-serif;
	transition: background .3s;
}
.noli666 input:nth-child(2):hover {
	background: var(--grey400);
	
}
/* cancel button */
.noli666 input:nth-child(3) {
	background:var(--grey500);
	border: 0 solid #eee;
	color : var(--grey200);
	
}
.noli666 > div{
	background:var(--grey000);
	display:flex;
	justify-content: flex-start;
	align-self: flex-start;
	color : var(--grey100);
	margin-top: 5px;
}
/* Language selector*/
#lpddbsf{
	background: var(--grey000);
	border:1px solid var(--grey200);
	color: var(--grey700) !important;
	height: 20px;
	width: 120px;
	text-align:center;
	padding : 20px ;
	border-radius:2px;
		
}

#autosuglayer div{
	background:var(--grey100) !important;
	border: 0px solid red;
	color: var(--grey800) !important;
}
#autosuglayer div:hover{
	background:aqua !important;
}


/********* MAIN *************/


.orangebar{
	background: var(--grey000);
	border-bottom: 1px solid var(--grey300);
}
.orangebar a{
	color: var(--grey400);
	margin-right: 12px;
	font-size: 12px;
}
.orangebar img{
	display: none;
}
.subnav{
	background: var(--grey000);
	border-bottom: 1px solid var(--grey300);
	color: var(--grey400);
}
.subnav a{
	color: var(--grey300);
}
.bluebar{
	background: var(--grey000);
/* 	border-bottom: 1px solid var(--grey300); */

}
.bluebar h1, .bluebar a{
	color: var(--grey400);
}




/* Start Of  Entries Table*/
.td2{
	background: var(--grey200);
	color: var(--grey800);
	height: 20px;
}
.td2 a{
	
	color: var(--grey800)!important;
}
.noline{
	background: var(--grey200)!important;
	color: var(--grey800);
	border-bottom: 0 !important;
}





/**************** ENTRIES */

.td7cml{
	background: var(--grey000);
	
}

.td7cml + img{
	border: 3px solid #bf2b2b;
}
.td7nl{
	background: var(--grey100);
/* 	background: red; */
	border-bottom:1px solid var(--grey000);
	border: 0 solid red

}
.td7cmr{
/* 	content:"🔊" */
	background: var(--grey000);

}
.td7cmr {
	
	
}


a kbd{
	font-family: arial,helvetica,sans-serif;;
	font-size:12px;
	color: var(--primary300);
}



/* Titles*/
.td6{
	border: 0;
	padding-top: 24px !important;
	padding-bottom: 8px;
	font-size: 16px;
}
.td6 b {
	color:  var(--primary500) !important;

}

/****** Pagination **********/
.td1nl{
	
	background-color: #08e9ea;
	background-image: linear-gradient(90deg, var(--grad1) 0%, var(--grad2) 100%);
	height: 30px;
	font-size:16px;
	
}
.td1nl b span{
	color:white !important;
	
}
.td1nl a{
	
	
}
