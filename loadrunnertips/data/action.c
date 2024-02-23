Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("loadrunnertips.com", 
		"URL=http://loadrunnertips.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(12);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=MnAOFDBFR25Voa33oElWlw%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01@\\x00H\\x07:%z00000157-2da7-5740-0000-000057da890cR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.185 (057a8ae7deb3374d0f1b04b36304d236f0136188-refs/branch-heads/6167@{#1818}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	/* Correlation Challenge */

	web_add_cookie("_ga=GA1.2.2057608046.1708671680; DOMAIN=loadrunnertips.com");

	web_add_cookie("_gid=GA1.2.1681622830.1708671680; DOMAIN=loadrunnertips.com");

	web_add_cookie("_gat=1; DOMAIN=loadrunnertips.com");

	web_add_cookie("__gads=ID=1f91a00d69221b56:T=1708672053:RT=1708672053:S=ALNI_MaUPRV_91Q7Bw4on61n93cFgHc12A; DOMAIN=loadrunnertips.com");

	web_add_cookie("__gpi=UID=00000d1069f73586:T=1708672053:RT=1708672053:S=ALNI_MaqXJEPHI09ngB1-f7UTiGOeOpa7g; DOMAIN=loadrunnertips.com");

	web_add_cookie("__eoi=ID=bd824408031e5177:T=1708672053:RT=1708672053:S=AA-AfjYQArsTq1u7yXPU1ukQXW_G; DOMAIN=loadrunnertips.com");

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708671682.1.0.1708671682.0.0.0; DOMAIN=loadrunnertips.com");

	lr_think_time(14);

	web_url("LoadRunner_Correlation_Challenge_Mod.aspx", 
		"URL=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708671682.1.1.1708671711.0.0.0; DOMAIN=loadrunnertips.com");

	/* start */

	lr_think_time(15);

	web_submit_form("LoadRunner_Correlation_Challenge_Mod.aspx_2", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=ctl00$head$btnStart", "Value=Start", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(5);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:NraiKTNVT3IdCeh7BopNm8GLhvwGzXKZ1G4-IZQ3-vk&cup2hreq=cb188ec8a03348362bb1909779f121e9a43c7ad356c0c256aa9124499d98fdc7", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{4310ca7c-762d-408e-9fcb-1e295211ffaf}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{9b94a95c-6982-463b-8e84-4d74c0b4c84d}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{1aa668b8-c129-4973-a450-efd18840bcc5}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{5c26ce30-351e-406a-acb4-03ae1dafa350}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{b2c781fc-2cd0-480f-bf81-568d4b426433}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.04dfbee1ec2fd167512805dedf3fa2a823dc28fe9fa2c97a74e664b38486110f\"}]},\"ping\""
		":{\"ping_freshness\":\"{4655af9f-a3bc-4ab1-ad92-6876a974a312}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"434\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{a2436747-d181-4c98-b79f-53c5db7be1d4}\",\"rd\":6261},\"updatecheck\":{},\""
		"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.630414f6b053d4455bba45e07513742a8bfc72e591f3a010f0e636a83df4eed7\"}]},\"ping\":{\"ping_freshness\":\"{683d1c32-e731-47f0-8f04-add172cb7383}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.21.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{c6f6a1d0-390d-4bd4-87b0-b7d562f579c4}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887"
		",\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{c12c0e01-3db9-4f07-a83b-dea6eab07255}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.93bad6a3d7ac28485190495b33735420f459ac0a31f8a958f46f52cdfe1dbd7a\"}]},\"ping\":{\"ping_freshness\":\"{e7c2afa4-eb6a-4385-b65f-a546a21805c9}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"8562\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{55e91268-b343-4788-9f06-dd3942cf7d79}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{f9a65ac2-8625-4ef2-b40d-d58602cb5214}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{f0d7b16e-4f67-464e-8a7f-4e6c9279ac02}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\","
		"\"packages\":{\"package\":[{\"fp\":\"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{cbbd64c1-9870-4767-a4ec-7420de53d7df}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\"ping_freshness\":\"{ad3320ca-d87d-48a8-94f8-f217ae3911f7}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\""
		"ping\":{\"ping_freshness\":\"{40aa3ef5-96d6-48d2-8af6-619e7365c86b}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{09068c93-ecb9-4bb6-97a8-be1ccb87e5a8}\",\"rd\":6261},\""
		"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{285164e3-2f90-4d22-a2ad-67b5ea7ae3cd}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\","
		"\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.94b8a51eb078298283bcc90c1930d2207f263431522df89385d05d4271dc11fa\"}]},\"ping\":{\"ping_freshness\":\"{9b8b0c40-a182-4767-8969-0454ece0a9d3}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.20.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{ea67dbef-94a2-4174-8540-af49a0e570b5}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:28tx@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\"}]},\"ping\":{\"ping_freshness\":\"{a1ad987e-ce46-4b97-88fa-0fbfc5c15058}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.14.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\"requestid\":\"{7689cabe-cd20-4993-a4d8-399393a32d34}\",\"sessionid\":\"{8ffeaa0d-172b-45d3-ab46-5dbf36ddeeeb}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708671682.1.1.1708671726.0.0.0; DOMAIN=loadrunnertips.com");

	lr_think_time(4);

	web_submit_data("LoadRunner_Correlation_Challenge_Mod.aspx_3", 
		"Action=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__VIEWSTATE", "Value=/wEPDwUJOTg3MDg5NjY4ZGRiv4ekRUExp/yb5gZfyzrPzbVSKLS8M+JrS7AgCbBXdw==", ENDITEM, 
		"Name=__VIEWSTATEGENERATOR", "Value=3074961D", ENDITEM, 
		"Name=__EVENTVALIDATION", "Value=/wEdAANFqbTKPRp7FZpa9+upkbw7EZwAPPXs+fTr6SGYYqMh2jrXPBqUZcs4yqSWpp6/FIQLF+u5Xssb3eMMOFed0hG21a04gTRJHz9+BN6e3vGVSQ==", ENDITEM, 
		"Name=ctl00$head$txtMacigNo", "Value=5624", ENDITEM, 
		"Name=ctl00$head$btnNext", "Value=Next", ENDITEM, 
		LAST);

	/* step2 */

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708671682.1.1.1708671739.0.0.0; DOMAIN=loadrunnertips.com");

	lr_think_time(10);

	web_url("LoadRunner_Correlation_Challenge_Mod.aspx_4", 
		"URL=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx?dd=1&game=Ice%20Hockey", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_7JE8RPG7Y7=GS1.2.1708671682.1.1.1708671750.0.0.0; DOMAIN=loadrunnertips.com");

	/* check3 */

	lr_think_time(33);

	web_submit_form("LoadRunner_Correlation_Challenge_Mod.aspx_5", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		"Name=ctl00$head$chk1", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk2", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk3", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk4", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk5", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk6", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk7", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk8", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk9", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk10", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk11", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk12", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk13", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk14", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk15", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk16", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk17", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk18", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk19", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$chk20", "Value=<OFF>", ENDITEM, 
		"Name=ctl00$head$btnNext3", "Value=Next", ENDITEM, 
		LAST);

	/* done */

	return 0;
}