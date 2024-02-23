Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("Telemetry.Request", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\x89\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"19045\"/>\n      <arg nm=\"vercsdbld\" val=\"3324\"/>\n      <arg nm=\"verqfe\" val=\"3324\"/>\n      <arg nm=\"csdbld\" val=\"3324\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"113\"/>\n      <arg nm=\"sku\" val=\"48\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"12286\"/>\n      <arg nm=\"svolsz\" val=\"149\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"191206\"/>\n      <arg nm=\"bldtm\" val=\"1406\"/>\n      <arg nm=\"bldbrch\" val=\"vb_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.19041.3324.amd64fre.vb_release.191206-1406\"/"
		">\n      <arg nm=\"buildflightid\" val=\"\"/>\n      <arg nm=\"expid\" val=\"\"/>\n      <arg nm=\"edition\" val=\"Professional\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"1\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"VMware, Inc.\"/>\n      <arg nm=\"syspro\" val=\"VMware7,1\"/>\n      <arg nm=\"bv\" val=\"VMW71.00V.16707776.B64.2008070230\"/>\n      <arg nm=\"ram\" val=\"12288\"/>\n      <arg nm=\""
		"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2095\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"Intel(R) Xeon(R) Gold 6230 CPU @ 2.10GHz\"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"\"/>\n      <arg nm=\"chid\" val=\"{e66fedaa-d317-5223-84c7-2eb45f71c90f}\"/>\n      <arg nm=\"sdksz\" val=\"350\"/>\n     </hw>\n     <ctrl>\n      <arg nm=\"tm\" val=\""
		"133530593558889300\"/>\n      <arg nm=\"mid\" val=\"C2D308F8-25AB-49B9-9B4A-F8F443F15738\"/>\n      <arg nm=\"sample\" val=\"42234205\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Optional\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app=\"msedge.exe\">\n    "
		" <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"121.0.2277.128\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"121.0.2277.128\"/>\n     <arg nm=\"p5\" val=\"3081623\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"25a448b2-5bc1-47f4-8009-370265fd9f01\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     <arg nm=\""
		"procmeta.MetricsClientId\" val=\"ef638bb3-0e27-43db-b180-ab00c9ce58ac\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"-6926658363340494177\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"22\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;o+KrfxQXr9A14OgD0MkuJKKm+kWkVXSy3eC35+FjjT0=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"sG05GPIn+F6Af/h6Y7/0EUqa9Ydx+Fo/u+cCQRDTQUU=\"/>\n     <arg nm=\""
		"procmeta.VariationsSeedETag\" val=\"&quot;HGv7ESVUbyzNEb5+O3LlQiT6sPcLLn0Fjz+GXBO4Cdg=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"121.0.2277.128\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"121.0.2277.128\"/>\n     <arg nm=\"p5\" val=\"3081623\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7"
		"\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"000000ec-0002-0020-aace-700a5e65da01\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	
	web_set_sockets_option("TLS_SNI", "1");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=121.0.2277.128&lang=en-US&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&osver=10.0.19045&devicefamily=desktop&installdate=1666087002&clientversion=121.0.2277.128&experimentationmode=2&scpguard=1&scpfull=0&scpver=15", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/autofillservice/v1/pages/ChVDaHJvbWUvMTIxLjAuMjI3Ny4xMjgSIAmd3CIW3paY3xIFDXhvEhkSBQ3OQUx6KUHXDn_3wAwC?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	/* Login */

	lr_think_time(21);

	web_url("config.json", 
		"URL=https://edge-consumer-static.azureedge.net/mouse-gesture/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param_ex(
		"ParamName=tokenParam",
		"LB=\"token\":\"",
		"RB=\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(10);
	
	

	web_custom_request("login", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"{Email}\",\"password\":\"{Password}\"}", 
		LAST);

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEBqh/kx3WDkRomX945em5ffgAKJEr1nu6tx8yRX9dqvFr957MinuKj6W8Oy79hRxS9E5fq6SO+rFEUtVaK8mHu0/1vvz9t1hgz0g/TWQ5qIL8GBhgu+BTumJC5bpTHL86pWgOnAGWLvyRROaxib5pEvzyVgpT1jZI3xlJE47hUi4iyjRZQGBpgq05+"
		"aOIHGnJX3PMZ2YXQvkuxa0N0ERdX5z3uyqf5YuS1SbOseFVvLch5Bq4KpLbBSD/pEw54H+6sIgAXlct+x6aXjuo49PbaN2wBv3ZSSYC5i3Div05TaMgK/MdTrWZ0v7O6L9cBmYwe3+HQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\""
		"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"https://thinking-tester-contact-list.herokuapp.com/contactList\",\"ip\":\"54.146.248.82\"},\"referrer\":{\"uri\":\"https://thinking-tester-contact-list.herokuapp.com/\",\"ip\":\"54.146.248.82\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"537b1f9c-fc1d-43f3-8672-f903c1edd4b2\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");
	
	web_add_header("Authorization", "Bearer {tokenParam}");

	web_custom_request("contacts", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	/* addanewcontact */

	lr_think_time(21);

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEBqh/kx3WDkRomX945em5ffgAKJEr1nu6tx8yRX9dqvFr957MinuKj6W8Oy79hRxS9E5fq6SO+rFEUtVaK8mHu0/1vvz9t1hgz0g/TWQ5qIL8GBhgu+BTumJC5bpTHL86pWgOnAGWLvyRROaxib5pEvzyVgpT1jZI3xlJE47hUi4iyjRZQGBpgq05+"
		"aOIHGnJX3PMZ2YXQvkuxa0N0ERdX5z3uyqf5YuS1SbOseFVvLch5Bq4KpLbBSD/pEw54H+6sIgAXlct+x6aXjuo49PbaN2wBv3ZSSYC5i3Div05TaMgK/MdTrWZ0v7O6L9cBmYwe3+HQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\""
		"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"https://thinking-tester-contact-list.herokuapp.com/addContact\",\"ip\":\"54.83.6.65\"},\"referrer\":{\"uri\":\"https://thinking-tester-contact-list.herokuapp.com/contactList\",\"ip\":\"3.229.186.102\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"a71479a3-4034-4919-a127-ea9dc43de0b6\",\"synchronous\":false}", 
		LAST);

	web_url("addContact", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);
	
	web_add_header("Authorization","Bearer {tokenParam}");
	web_custom_request("contacts_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"firstName\":\"uuu\",\"lastName\":\"vvv\"}", 
		LAST);

	web_url("contactList_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/contactList.js", ENDITEM, 
		LAST);
	web_add_header("Authorization","Bearer {tokenParam}");
	web_custom_request("contacts_3", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	/* logout */

	lr_think_time(15);

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEBqh/kx3WDkRomX945em5ffgAKJEr1nu6tx8yRX9dqvFr957MinuKj6W8Oy79hRxS9E5fq6SO+rFEUtVaK8mHu0/1vvz9t1hgz0g/TWQ5qIL8GBhgu+BTumJC5bpTHL86pWgOnAGWLvyRROaxib5pEvzyVgpT1jZI3xlJE47hUi4iyjRZQGBpgq05+"
		"aOIHGnJX3PMZ2YXQvkuxa0N0ERdX5z3uyqf5YuS1SbOseFVvLch5Bq4KpLbBSD/pEw54H+6sIgAXlct+x6aXjuo49PbaN2wBv3ZSSYC5i3Div05TaMgK/MdTrWZ0v7O6L9cBmYwe3+HQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\""
		"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"https://thinking-tester-contact-list.herokuapp.com/logout\",\"ip\":\"54.146.248.82\"},\"referrer\":{\"uri\":\"https://thinking-tester-contact-list.herokuapp.com/contactList\",\"ip\":\"54.146.248.82\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"e0e3d0de-74b3-45d3-a3fd-b57bed4a957e\",\"synchronous\":false}", 
		LAST);

	web_url("logout", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Authorization","Bearer {tokenParam}");
	web_custom_request("logout_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/logout", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("thinking-tester-contact-list.herokuapp.com_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/login.js", ENDITEM, 
		"Url=/img/thinkingTesterLogo.png", ENDITEM, 
		LAST);

	return 0;
}