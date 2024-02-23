Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("practice-test-login", 
		"URL=https://practicetestautomation.com/practice-test-login/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("style.min.css", 
		"URL=https://practicetestautomation.com/wp-includes/css/dist/block-library/style.min.css?ver=6.4.3", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("mediaelementplayer-legacy.min.css", 
		"URL=https://practicetestautomation.com/wp-includes/js/mediaelement/mediaelementplayer-legacy.min.css?ver=4.2.17", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("utilities.css", 
		"URL=https://practicetestautomation.com/wp-content/plugins/bluehost-wordpress-plugin/vendor/newfold-labs/wp-module-patterns/assets/build/utilities.css?ver=0.1.13", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("wp-mediaelement.min.css", 
		"URL=https://practicetestautomation.com/wp-includes/js/mediaelement/wp-mediaelement.min.css?ver=6.4.3", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("all.min.css", 
		"URL=https://practicetestautomation.com/wp-content/themes/modern-store-modified/assets/font-awesome/css/all.min.css?ver=6.4.3", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("jetpack.css", 
		"URL=https://practicetestautomation.com/wp-content/plugins/jetpack/css/jetpack.css?ver=13.1.3", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("jquery.min.js", 
		"URL=https://practicetestautomation.com/wp-includes/js/jquery/jquery.min.js?ver=3.7.1", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("utilities.js", 
		"URL=https://practicetestautomation.com/wp-content/plugins/bluehost-wordpress-plugin/vendor/newfold-labs/wp-module-patterns/assets/build/utilities.js?ver=0.1.13", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("jquery-migrate.min.js", 
		"URL=https://practicetestautomation.com/wp-includes/js/jquery/jquery-migrate.min.js?ver=3.4.1", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("style.css", 
		"URL=https://practicetestautomation.com/wp-content/themes/modern-store-modified/style.css?ver=6.4.3", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("css", 
		"URL=https://fonts.googleapis.com/css?family=Lato%3A400%2C400i%2C900&ver=6.4.3", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://practicetestautomation.com/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("S6uyw4BMUTPHjx4wXg.woff2", 
		"URL=https://fonts.gstatic.com/s/lato/v24/S6uyw4BMUTPHjx4wXg.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("S6u9w4BMUTPHh50XSwiPGQ.woff2", 
		"URL=https://fonts.gstatic.com/s/lato/v24/S6u9w4BMUTPHh50XSwiPGQ.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("wp-emoji-release.min.js", 
		"URL=https://practicetestautomation.com/wp-includes/js/wp-emoji-release.min.js?ver=6.4.3", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("g.gif", 
		"URL=https://pixel.wp.com/g.gif?v=ext&blog=167878209&post=251&tz=-5&srv=practicetestautomation.com&j=1%3A13.1.3&host=practicetestautomation.com&ref=&fcp=6299&rand=0.8709880023727852", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://practicetestautomation.com/", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("cropped-5.png", 
		"URL=https://i0.wp.com/practicetestautomation.com/wp-content/uploads/2019/10/cropped-5.png?fit=32%2C32&ssl=1", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://practicetestautomation.com/", 
		"Snapshot=t68.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	/* login */

	lr_think_time(59);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:3NdWJWpi9vBipOQub_8ugJIwcolcETmhTx9w17u2pNo&cup2hreq=288b26989214dbf38f78e733b68788e6267b529692a083e2ada4033af54d3f66", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{8e5b567c-b40f-4d29-97fc-3c4930956161}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{fcd89f67-7d3d-4840-8aab-6c2299518fd2}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{d726608c-1f29-4bd1-b75b-01a917743c2f}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{c8c8cef5-d76d-45a6-970f-cfa714d0a73c}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\""
		"{51623e78-04f3-4f4c-8ba6-f59bbb6ca50f}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl/28qr/28qx:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.04dfbee1ec2fd167512805dedf3fa2a823dc28fe9fa2c97a74e664b38486110f\"}]},\"ping\":{\"ping_freshness\":\"{708156c9-2e1f-4933-bfe9-e1533e8aa7b9}\",\"rd\":6261},\""
		"updatecheck\":{},\"version\":\"434\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{0725fb9b-ecf9-498a-b836-b0410ba23615}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.630414f6b053d4455bba45e07513742a8bfc72e591f3a010f0e636a83df4eed7\"}]},\"ping\":{\"ping_freshness\":\"{16bd7d75-ea2a-4ba1-b68d-56b279d460c2}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.21.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{95279088-3c3a-451a-8eee-f65362562c6b}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{12b7e987-dc22-4758-9c54-88fde1346e0d}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{aa41358c-ac41-44b6-86ec-a641bffa0a89}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{25a85236-fc89-4020-b2af-3b143b93c3c5}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{4b0472d9-e7d2-4947-b965-4092f8b74c96}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\","
		"\"packages\":{\"package\":[{\"fp\":\"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{ac9129b4-ed6f-43e5-9ab7-7bcc49d2f17f}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{9424d490-623f-421f-89e9-62926b50c78b}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\""
		"ping_freshness\":\"{ff1c3a7f-b3b1-4530-9422-953c605e1574}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{8f447f78-4ca9-4a28-a38b-ec8305187abb}\",\"rd\":6261},\"updatecheck\":{},\""
		"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{2b489d15-e854-40d5-8252-43105567a45b}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\","
		"\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.94b8a51eb078298283bcc90c1930d2207f263431522df89385d05d4271dc11fa\"}]},\"ping\":{\"ping_freshness\":\"{a03237de-c300-4dbd-86dc-e53d4b3c26ca}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.20.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\""
		"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{19652c88-b89b-4a13-84f1-e0b86eb74529}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.93bad6a3d7ac28485190495b33735420f459ac0a31f8a958f46f52cdfe1dbd7a\"}]},\"ping\":{\"ping_freshness\":\"{e835304c-9026-4f85-9d35-6c262c1e3baf}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"8562\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:28tx@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\"}]},\"ping\":{\""
		"ping_freshness\":\"{1806555e-f014-4a12-826b-1ca0c45d79ea}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.14.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\""
		"requestid\":\"{403f6f68-45ee-4525-9a49-9cc41169687e}\",\"sessionid\":\"{a59e71e5-f75d-484f-b686-d04113ee39bc}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	web_url("logged-in-successfully", 
		"URL=https://practicetestautomation.com/logged-in-successfully", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://practicetestautomation.com/practice-test-login/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Logo-1.png", 
		"URL=https://i0.wp.com/practicetestautomation.com/wp-content/uploads/2019/10/Logo-1.png?w=305&ssl=1", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://practicetestautomation.com/", 
		"Snapshot=t71.inf", 
		LAST);

	/* logout
	*/

	lr_think_time(17);

	web_url("practice-test-login_2", 
		"URL=https://practicetestautomation.com/practice-test-login/", 
		"Resource=0", 
		"Referer=https://practicetestautomation.com/logged-in-successfully/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xODUSIAna4ms2kUmHHhIFDeeNQA4SBQ3OQUx6If65cGe-1Ni9", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xODUSIAna4ms2kUmHHhIFDeeNQA4SBQ3OQUx6If65cGe-1Ni9?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t73.inf", 
		LAST);

	return 0;
}