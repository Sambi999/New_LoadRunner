vuser_end()
{

	lr_think_time(9);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"event\":[{\"download_time_ms\":24339,\"downloaded\":2290,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"8562\",\"previousversion\":\"8558\",\"total\":2290,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"hfnkpimlhhgieaddgfemjhofmfblmnib/1.93bad6a3d7ac28485190495b33735420f459ac0a31f8a958f46f52cdfe1dbd7a/1.43242be9456dcad18ec3f6597c842a521246ccc3cc377919779b356dfb5b5e20/f6a4c7e574b8643e927023b4ea3c3ab34576e2b6134476280b1617bc480ec18d.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.93bad6a3d7ac28485190495b33735420f459ac0a31f8a958f46f52cdfe1dbd7a\",\"nextversion\":\"8562\",\"previousfp\":\"1.43242be9456dcad18ec3f6597c842a521246ccc3cc377919779b356dfb5b5e20\",\""
		"previousversion\":\"8558\"}],\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.93bad6a3d7ac28485190495b33735420f459ac0a31f8a958f46f52cdfe1dbd7a\"}]},\"version\":\"8562\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\"requestid\":\"{c139c94e-f7ec-4bbe-b39d-be4978a86292}\",\"sessionid\":\"{4f83bdf2-3fae-4e74-9958-0cafaa92b566}\",\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	/* LogOut */

	lr_think_time(94);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}