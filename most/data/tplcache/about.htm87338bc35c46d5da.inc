<?php
$z[0]=Array("field","",315,334);
$z[0][4]['name']="title";
$z[1]=Array("global","",335,361);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",402,431);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",471,529);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",802,830);
$z[4][4]['name']="cfg_mobileurl";
$z[5]=Array("field","",844,860);
$z[5][4]['name']="id";
$z[6]=Array("global","",1329,1357);
$z[6][4]['name']="cfg_mobileurl";
$z[7]=Array("field","",1371,1387);
$z[7][4]['name']="id";
$z[8]=Array("include","",1880,1915);
$z[8][4]['filename']="head.htm";
$z[9]=Array("include","",2258,2295);
$z[9][4]['filename']="weizhi.htm";
$z[10]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",2374,2758);
$z[10][4]['name']="typeid";
$z[10][4]['runphp']="yes";
$z[11]=Array("channelartlist","\r\n        <li>\r\n          <h2><a href=\"{dede:field name='typeurl'/}\" {dede:field name='currentstyle'/}>{dede:field name='typename'/}</a></h2>\r\n        </li>\r\n       ",2833,3076);
$z[11][4]['type']="son";
$z[11][4]['noself']="yes";
$z[11][4]['typeid']="1";
$z[12]=Array("field","",3133,3154);
$z[12][4]['name']="content";
$z[13]=Array("include","",3234,3269);
$z[13][4]['filename']="foot.htm";

?>