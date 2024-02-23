Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("tastynibbles.in", 
		"URL=https://tastynibbles.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	
	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("produce_batch", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661460475},\"events\":[{\"schema_id\":\"web_pixels_manager_load/2.0\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"status\":\"failed\",\"error_msg\":\"https://www.tastynibbles.in/cdn/wpm/b3698dd31wbfa453bap448c3218md5149de6m.js has failed to load\"},\"metadata\":{\"event_created_at_ms\":1708661460475}}]}", 
		LAST);

	web_custom_request("produce_batch_2", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661461001},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661461001}}]}", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A11%3A01.050Z; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_shopify_sa_p=; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_3", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661461060},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661461002}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id"
		"\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d428e74c-CCF3-4E8F-34E4-56D1EF0415F0\"},\"metadata\":{\"event_created_at_ms\":1708661461050}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661461050}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/\\\",\\\""
		"page_title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661461058}}]}", 
		LAST);

	web_custom_request("produce_batch_4", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661461046},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"\",\"path\":\"/\",\"search\":\"\",\"title\":\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\",\"url\":\"https://www.tastynibbles.in/\",\"properties\":{},\"eventId\":\"sh-d428e74c-CCF3-4E8F-34E4-56D1EF0415F0\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\""
		":\"home\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d428e6f3-D15C-4D14-FEFB-B015FF6A9BBF\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661461046}"
		"}]}", 
		LAST);

	web_custom_request("produce_batch_5", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661461059},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d428e74c-CCF3-4E8F-34E4-56D1EF0415F0\",\"referrer\":\"\",\"canonical_url\":\"https://www.tastynibbles.in/\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661461058,\"event_source_url\":\"https://www.tastynibbles.in/\",\"unique_token\":\""
		"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d428e6f3-D15C-4D14-FEFB-B015FF6A9BBF\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\""
		"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d428e767-70BC-4A03-E7D8-E5E5D37CAE23\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661461059}}]}", 
		LAST);

	web_custom_request("track", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJVUjVQVVhXUVB5ayIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiJhYmZlZjNkMi01ZjYyLTQ2YzAtYmYzMS1jNjQ2MGZhND"
		"VkNjAifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjYxNDYyNTE3LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("track_2", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJVUjVQVVhXUVB5ayIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiJhYmZlZjNkMi01ZjYyLTQ2YzAtYmYzMS1jNjQ2MGZhND"
		"VkNjAifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjYxNDYxMzk1LCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVj"
		"dENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("collect", 
		"URL=https://stats.g.doubleclick.net/g/collect?v=2&tid=G-WCN3C8KG6R&cid=1031507396.1708661463&gtm=45je42l0v887559890za200&aip=1&dma=0&gcd=13l3l3l3l1&npa=0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("rul", 
		"URL=https://td.doubleclick.net/td/ga/rul?tid=G-WCN3C8KG6R&gacid=1031507396.1708661463&gtm=45je42l0v887559890za200&dma=0&gcd=13l3l3l3l1&npa=0&pscdl=noapi&aip=1&fledge=1&z=1607608457", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("378882101", 
		"URL=https://td.doubleclick.net/td/rul/378882101?random=1708661464318&cv=11&fst=1708661464318&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45be42l0za200&gcd=13l3l3l3l1&dma=0&u_w=1280&u_h=720&url=https%3A%2F%2Fwww.tastynibbles.in%2F&label=y2AaCM-DyPoCELWQ1bQB&tiba=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&hn=www.googleadservices.com&frm=0&gtm_ee=1&npa=0&pscdl=noapi&auid=1447326640.1708661465&uaa=x86&uab=64&uafvl=Not%2520A"
		"(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uap=Windows&uapv=10.0.0&uaw=0&ec_mode=a&fledge=1&capi=1&data=event%3Dpage_view%3Bpage_path%3D%2F&em=tv.1&ct_cookie_present=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	
	web_add_cookie("_clck=14owjl3%7C2%7Cfji%7C0%7C1514; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.0.1708661463.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga=GA1.1.1031507396.1708661463; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_fbp=fb.1.1708661463355.2036099585; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_gcl_au=1.1.1447326640.1708661465; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.0.1708661464.0.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_clsk=g67g3k%7C1708661464858%7C1%7C1%7Cu.clarity.ms%2Fcollect; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"effective_type\":\"4g\",\"boomerang_init\":1708661459917,\"server_timing\":\"{\\\"processing\\\":[14,\\\"\\\"],\\\"db\\\":[7,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"index\\\"],\\\"servedBy\\\":[0,\\\"rdht\\\"],\\\"requestID\\\":[0,\\\"f7df0a13-ec05-4938-b6ba-6b2547078c8b\\\"],\\\""
		"cfRequestDuration\\\":[95.999956,\\\"\\\"]}\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-asia-southeast1\",\"largest_contentful_paint\":4903,\"cumulative_layout_shift_score\":0.022245541013020956,\"total_duration_long_tasks\":2766,\"number_long_tasks\":10,\"visually_ready\":6263,\"first_paint\":4613,\"first_contentful_paint\":4903,\"navigation_start\":1708661455134,"
		"\"fetch_start\":1708661457546,\"domain_lookup_start\":1708661457549,\"domain_lookup_end\":1708661457549,\"connect_start\":1708661457549,\"connect_end\":1708661457700,\"request_start\":1708661457700,\"response_start\":1708661458747,\"response_end\":1708661458922,\"dom_loading\":1708661458784,\"dom_interactive\":1708661461271,\"dom_content_loaded_event_start\":1708661461396,\"dom_content_loaded_event_end\":1708661461396,\"dom_complete\":1708661467176,\"load_event_start\":1708661467176,\""
		"load_event_end\":1708661467873,\"secure_connection_start\":1708661457589,\"encoded_body_size\":101395,\"decoded_body_size\":531984,\"transfer_size\":101695,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.\\\":{\\\"js\\\":\\\"32w3,135,xd,sf,se,i0,ga,ga,ga*118cm,8c,3kah*22\\\",\\\"css\\\":\\\"22zk,v1,td,oy,"
		"ox,cs,aw,aw,aw*15gb,8c,nbb*44\\\"},\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3339,vy,ve,qe,o9,cu,au,au,au*13ya,8c,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"34j2,av,8p,6m,6m,1,1,1,1*19rw,8c,iej*23\\\"}},\\\"onnect.facebook.net/\\\":{\\\"en_US/fbevents.js\\\":\\\"34jb,13x,12e,tl,ti,67,5q,5q,5q*1186h,8c,3h76*21\\\",\\\"signals/config/511162776752735?...\\\":\\\"35rw,i8,i5,8y,8y,8m,8i,8i,8i*18hq,8c,x5v*21\\\"},\\\"heckout.razorpay.com/v1/"
		"magic-checkout.js\\\":\\\"35p4,1ar*25\\\"},\\\"a\\\":{\\\"maicdn.com/discountmanager/common.\\\":{\\\"js\\\":\\\"32zk,138*24\\\",\\\"css\\\":\\\"22zk,15s*44\\\"},\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"33fp,p0*21\\\",\\\"3.\\\":{\\\"3.1/jquery.min.js\\\":\\\"34hk,85*21\\\",\\\"5.1/jquery.min.js\\\":\\\"34j6,6j*24\\\"}}},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"s\\\":{\\\"ca_affiliate.js"
		"?v=2076242293115890491652863580\\\":\\\"32w2,73,6l,3h,3d,5,5,5,5*1,8c*20\\\",\\\"wirl.svg\\\":\\\"4390,vd,oj,li*1fd,8c\\\"},\\\"theme.\\\":{\\\"css?v=88179064826295383661708612564\\\":\\\"22tg,8q,7z,5z*1ozf,8c,2y02*44\\\",\\\"min.js?v=142180294906365401511651758011\\\":\\\"22th,9h,7h,62,5y,18,18,18,18*1p0z,8c,22j3*22*42\\\"},\\\"vendor-scripts-v1.js\\\":\\\"32th,ul,qn,ov*1woh,8c,1vil*22\\\"},\\\"files/\\\":{\\\"F\\\":{\\\"ishBhurji200g_400x.jpg?v=1702114223\\\":\\\"12w4,pu,ck,92*1fd,8c\\\",\\\""
		"rontSide_Cinnamon_400x.jpg?v=1700203722\\\":\\\"12w5,qd,ow,mc*1eru,8c\\\"},\\\"Tasty_Nibbles_Logo_\\\":{\\\"100x.png?v=1652340733\\\":\\\"*028,2s,1c,2i|12w3,8t,8s,66*13z2,8c\\\",\\\"90x.png?v=1652340733\\\":\\\"12w3,cp,9l,6n,6h,20,20,20,20*13mm,8c\\\"},\\\"Roastedcoconutpaste_400x.jpg?v=1693655397\\\":\\\"12w4,pn,ck,94*1fd,8c\\\",\\\"Datespickle400g_400x.jpg?v=1693468132\\\":\\\"12w5,oo,no,ma*1bi0,8c\\\",\\\"Samudrasadhyaspecial_400x.jpg?v=1702120774\\\":\\\"12w5,sj,pj,nv*1fd,8c\\\"},\\\"products/"
		"\\\":{\\\"8907093060763_01Frontside_400x.jpg?v=1663566067\\\":\\\"12w5,pd,od,ma*1ec2,8c\\\",\\\"tunaintomato2_400x.jpg?v=1644221401\\\":\\\"12w4,m1,cl,8z*1dgs,8c\\\",\\\"Pack6_1_354e94cd-f9ee-4051-911c-c8f8998f0f9a_400x.jpg?v=1671703708\\\":\\\"12w5,si,p1,np*1fd,8c\\\"}},\\\"ifycloud/shopify/assets/s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"32th,uz,q6,op*1,8c*22\\\",\\\""
		"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"32th,v1,qa,op*1,8c*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"334y,u7,sz,pb*1294,8c,456*21\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"334y,u7,qj,p4*1k49,8c,1w1n*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"334x,ww,p1,n3*1,8c*21\\\",\\\"fonts/\\\":{\\\"harmonia_sans/harmoniasans_\\\":{\\\""
		"n\\\":{\\\"4.73cf0589f7839ec88463a09f5335a2885467ed0c.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=3534ec91f641c08cf2dc49948f0afce133989e28b219b46f7676e032bbf054fc\\\":\\\"435w,mu,jy,i0*1gr8,8c\\\",\\\"6.dd3d6084d29e4754e80fe6aa1c0e37f511474ffa.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a7a0d8b76b98542c3b5fdeaf5288e7f5da97e48d170f6ec0206b03811a5740e9\\\":\\\"435x,o6,lc,i6*1hi8,8c\\\"},\\\"i6.\\\":{\\\""
		"5ea0fa072a0601a91bbd7e0301549f9159a09ada.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=03968155dbfe4004e296c411180f2ad5916bd754dae40190824eadab15b5d220\\\":\\\"43po,9j,92,53*1i3c,8c\\\",\\\"d520474355816f56169b3a79baa14d2c479da2ba.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a1748412abf67becfadddbf5f0bd2cb6df5e1fdd42927a51c439aec4d87f59eb\\\":\\\"435x,gz,jk,i0*1,8c\\\"}},\\\"itc_stepp/itcstepp_n7.c\\\":{\\\""
		"8023ed34da33638b911832310ffb6d4da1e405f.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=89b6b3def73e0926121f910cd8617bfe5d772ffbe43cf352f2e8b9388f684f43\\\":\\\"43rc,c0,bq,9c*1drs,8c\\\",\\\"ef5242f78dd0b48264b9f0d29ee3573eb745142.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=0f3b4f4c02bf57220f14f5252b063e6db04449dde6617def7fba1b37662e1bc1\\\":\\\"435x,h0,jt,i6*1,8c\\\"}}},\\\"heckouts/internal/preloads.js?permanent-domain="
		"tastynibbles.myshopify.com&locale=en-IN\\\":\\\"32th,ov,ot,gz,f8,bo,bo,bo,bo*1su,8c,1yt*21\\\"},\\\"clarity.ms/\\\":{\\\"tag/997scejv0n\\\":\\\"333a,16m*21\\\",\\\"s/0.7.20/clarity.js\\\":\\\"34km,4z*21\\\"},\\\"google\\\":{\\\"-analytics.com/analytics.js\\\":\\\"34jb,15u*21\\\",\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":{\\\"|\\\":\\\"34jc,13w*25\\\",\\\"&l=dataLayer&cx=c\\\":\\\"35s1,18v*21\\\"},\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"360w,"
		"zz*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"360x,zy*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"34k6,sp*21\\\"},\\\"adservices.com/pagead/conversion/378882101/?...\\\":\\\"37bx,60,5z,3s,3s,4,3,3,1*11f7,8c,yy*21\\\"},\\\"youtube.com/iframe_api\\\":\\\"34sp,wq*21\\\"},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"32th,1bu,1bu,19n,19j,on,o0,o0,o0*1,8c*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"32zk,"
		"uy*26\\\"}}\",\"url\":\"https://www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661459902,\"event_sent_at_ms\":1708661467915}}", 
		LAST);

	web_url("c1a778d0cb1e42f1", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);


	/* Account */

	lr_think_time(10);

	
	web_url("account", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	
	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661493.30.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661493.0.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A11%3A34.354Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_6", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661494426},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661494350}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4295fb8-519C-4E23-F892-7328BCA1686D\"},\"metadata\":{\"event_created_at_ms\":1708661494354}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account/login?return_url=%2Faccount\\\\\",\\\\\"title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\""
		"location\\\\\":\\\\\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661494354}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\""
		"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account/login\\\\\",\\\\\"page_title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661494418}}]}", 
		LAST);

	web_custom_request("produce_batch_7", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661494349},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661494349}}]}", 
		LAST);

	web_custom_request("produce_batch_8", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661494425},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4295fb8-519C-4E23-F892-7328BCA1686D\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account/login\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661494418,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account/login?return_url=%2Faccount\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d4295faf-FA1B-4373-74F5-8AF2B46FA036\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 "
		"Safari/537.36\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d429603f-394E-494B-F0A7-657B80E6773C\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661494425}}]}", 
		LAST);

	web_custom_request("produce_batch_9", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661494354},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account/login\",\"search\":\"?return_url=%2Faccount\",\"title\":\"Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"properties\":{},\"eventId\":\"sh-d4295fb8-519C-4E23-F892-7328BCA1686D\",\"s2sMetadata\":{\"navigationApi\""
		":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d4295faf-FA1B-4373-74F5-8AF2B46FA036\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\""
		"page\"},\"metadata\":{\"event_created_at_ms\":1708661494354}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661494.29.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_10", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661494698},\"events\":[{\"schema_id\":\"web_pixels_manager_load/2.0\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"status\":\"failed\",\"error_msg\":\"https://www.tastynibbles.in/cdn/wpm/b3698dd31wbfa453bap448c3218md5149de6m.js has failed to load\"},\"metadata\":{\"event_created_at_ms\":1708661494698}}]}", 
		LAST);

	web_custom_request("track_3", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9sb2dpbj9yZXR1cm5fdXJsPSUyRmFjY291bnQiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lQlYxWm5ONWFFbUxZIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZWNhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbi"
		"I6ImFiZmVmM2QyLTVmNjItNDZjMC1iZjMxLWM2NDYwZmE0NWQ2MCJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTpjb25maWciLCJ0aW1lc3RhbXAiOjE3MDg2NjE0OTQ4MDEsInByb3BlcnRpZXMiOnsiZGF0YSI6eyJtZXJjaGFudF9rZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsInNob3VsZFVzZVNob3BJZCI6ZmFsc2UsImdUYWdJZCI6IiIsImd0YWdMYWJlbCI6IiIsInJhem9ycGF5TWFnaWNCdG5Db25maWciOnt9LCJjaGVja291dE9wdGlvbnMiOnsibmFtZSI6IiJ9LCJjYXJ0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1hZ2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNo"
		"ZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJwcm9kdWN0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1hZ2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNoZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJjdXN0b21Dc3MiOiIifX19XX0%3D\"}", 
		LAST);

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661494.0.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_clsk=g67g3k%7C1708661496290%7C2%7C1%7Cu.clarity.ms%2Fcollect; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_3", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"effective_type\":\"4g\",\"boomerang_init\":1708661494898,\"server_timing\":\"{\\\"processing\\\":[16,\\\"\\\"],\\\"db\\\":[7,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"customers/login\\\"],\\\"servedBy\\\":[0,\\\"cw97\\\"],\\\"requestID\\\":[0,\\\"10543ea1-a72c-4354-948e-1ebbf0370c05\\\"],\\\""
		"cfRequestDuration\\\":[286.999941,\\\"\\\"]}\",\"session_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":3963,\"total_duration_long_tasks\":173,\"number_long_tasks\":1,\"visually_ready\":3964,\"first_paint\":3795,\"first_contentful_paint\":3963,\"navigation_start\":1708661490922,"
		"\"redirect_start\":1708661490924,\"redirect_end\":1708661493319,\"fetch_start\":1708661493319,\"domain_lookup_start\":1708661493319,\"domain_lookup_end\":1708661493319,\"connect_start\":1708661493319,\"connect_end\":1708661493319,\"request_start\":1708661493321,\"response_start\":1708661493655,\"response_end\":1708661494323,\"dom_loading\":1708661493785,\"dom_interactive\":1708661494760,\"dom_content_loaded_event_start\":1708661494802,\"dom_content_loaded_event_end\":1708661494802,\"dom_complete\""
		":1708661495239,\"load_event_start\":1708661495239,\"load_event_end\":1708661495269,\"secure_connection_start\":1708661493319,\"encoded_body_size\":90194,\"decoded_body_size\":377161,\"transfer_size\":90494,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":1,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"32a9,89,82,75*13ya,_,6le*21\\\",\\\""
		"loy_init.js?v=1647099145\\\":\\\"32mr,3,2,2*19rw,_,iej*23\\\"},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.\\\":{\\\"js\\\":\\\"32b3*118cm,_,3kah*22\\\",\\\"css\\\":\\\"22kf,2c,25,24*15gb,_,nbb*44\\\"}},\\\"onnect.facebook.net/\\\":{\\\"en_US/fbevents.js\\\":\\\"32n9,1g*1186h,_,3h76*21\\\",\\\"signals/config/511162776752735?...\\\":\\\"32py,2,1,1*18hq,_,x5v*21\\\"}},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/"
		"assets/\\\":{\\\"theme.\\\":{\\\"css?v=88179064826295383661708612564\\\":\\\"227l,1g,c,c*1ozf,_,2y02*44\\\",\\\"min.js?v=142180294906365401511651758011\\\":\\\"227l*1p0z,_,22j3*22*42\\\"},\\\"vendor-scripts-v1.js\\\":\\\"327m*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"32a9,6p,6o,4m,4m,1,1,1,1*17mf,8c,m90*20\\\"},\\\"files/\\\":{\\\"F\\\":{\\\"ishBhurji200g_400x.jpg?v=1702114223\\\":\\\"12cs,9s,5u,47*1jzm,8c\\\",\\\"rontSide_Cinnamon_400x.jpg?v=1700203722\\\":\\"
		"\"12ct*1eru,_\\\"},\\\"Tasty_Nibbles_Logo_\\\":{\\\"100x.png?v=1652340733\\\":\\\"*028,2s,1c,14|12cr*13z2,_\\\",\\\"90x.png?v=1652340733\\\":\\\"12cr*13mm,_\\\"},\\\"Roastedcoconutpaste_400x.jpg?v=1693655397\\\":\\\"12ct,9q,6o,4e,4e,z,z,z,z*1df8,8c\\\",\\\"Datespickle400g_400x.jpg?v=1693468132\\\":\\\"12ct*1bi0,_\\\",\\\"Samudrasadhyaspecial_400x.jpg?v=1702120774\\\":\\\"12cu,go,eh,cs*1q8k,8c\\\"},\\\"products/\\\":{\\\"8907093060763_01Frontside_400x.jpg?v=1663566067\\\":\\\"12ct*1ec2,_\\\",\\\""
		"tunaintomato2_400x.jpg?v=1644221401\\\":\\\"12cs*1dgs,_\\\",\\\"Pack6_1_354e94cd-f9ee-4051-911c-c8f8998f0f9a_400x.jpg?v=1671703708\\\":\\\"12ct,hx,ef,cs*1s16,8c\\\"}},\\\"ifycloud/shopify/assets/\\\":{\\\"s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"327m,hk,h8,f1*12sn,8c,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"327m,hr,hc,f3*1a2h,8c,j05*22\\\"},\\\""
		"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"32hb,1h,18,14*1294,_,456*21\\\"},\\\"themes_support/shopify_common-33bb9d312118840468a53f36b59c62c1e8f2b7d1a0a77250db9e300441827470.js\\\":\\\"327m,j9,j5,hv*1jj,8c,12f*22\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"32hb,1h,15,12*1k49,_,1w1n*21\\\"},\\\"fonts/\\\":{\\\"itc_stepp/itcstepp_n7.c\\\":{\\\"8023ed34da33638b911832310ffb6d4da1e405f.woff?h1="
		"dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=89b6b3def73e0926121f910cd8617bfe5d772ffbe43cf352f2e8b9388f684f43\\\":\\\"42h3*1drs,_\\\",\\\"ef5242f78dd0b48264b9f0d29ee3573eb745142.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=0f3b4f4c02bf57220f14f5252b063e6db04449dde6617def7fba1b37662e1bc1\\\":\\\"42hi,cn,a7,7y,7m,5d,5d,5d,5d*1duw,8c\\\"},\\\"harmonia_sans/harmoniasans_\\\":{\\\"n\\\":{\\\""
		"4.73cf0589f7839ec88463a09f5335a2885467ed0c.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=3534ec91f641c08cf2dc49948f0afce133989e28b219b46f7676e032bbf054fc\\\":\\\"42h3*1gr8,_\\\",\\\"6.dd3d6084d29e4754e80fe6aa1c0e37f511474ffa.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a7a0d8b76b98542c3b5fdeaf5288e7f5da97e48d170f6ec0206b03811a5740e9\\\":\\\"42h4*1hi8,_\\\"},\\\"i6.\\\":{\\\"5ea0fa072a0601a91bbd7e0301549f9159a09ada.woff?"
		"h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=03968155dbfe4004e296c411180f2ad5916bd754dae40190824eadab15b5d220\\\":\\\"42h4*1i3c,_\\\",\\\"d520474355816f56169b3a79baa14d2c479da2ba.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a1748412abf67becfadddbf5f0bd2cb6df5e1fdd42927a51c439aec4d87f59eb\\\":\\\"42hi,ci,bl,7o*1i2o,8c\\\"}}},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"32ha,ew,e0,cn,be,12,12,12,12*1,8c*21\\\"},\\"
		"\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"327m,hi,hd,ez,ex,3f,2o,2o,2o*1su,8c,1yt*21\\\"},\\\"clarity.ms/\\\":{\\\"tag/997scejv0n\\\":\\\"32a9,tq*21\\\",\\\"s/0.7.20/clarity.js\\\":\\\"3340,2*21\\\"},\\\"google\\\":{\\\"-analytics.com/analytics.js\\\":\\\"32n9,fv*21\\\",\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":{\\\"|\\\":\\\"32na,2e*25\\\",\\\"&l=dataLayer&cx=c\\\":\\\"32qj,3*21\\\"},\\\"destination?id=\\\":{\\\""
		"AW-378882101&l=dataLayer&cx=c\\\":\\\"32qs,9*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"32qt,9*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"32nb,2b*21\\\"},\\\"adservices.com/pagead/conversion/378882101/?...\\\":\\\"32xy,46,45,4,1q,2,1,1,1*11ek,8c,10t*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"327m,1h,1h,1h*21\\\",\\\"ajax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"32k8,i2*21\\\",\\\"3.5.1/"
		"jquery.min.js\\\":\\\"32k9,ea*24\\\"},\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"32k9*26\\\"}}\",\"url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"referrer\":\"https://www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661494455,\"event_sent_at_ms\":1708661496403}}", 
		LAST);


	web_url("register", 
		"URL=https://www.tastynibbles.in/account/register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	
	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661500.23.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661500.0.0.0; DOMAIN=www.tastynibbles.in");

	
	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A11%3A40.864Z; DOMAIN=www.tastynibbles.in");

	
	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661501.22.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661501.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart", 
		"URL=https://www.tastynibbles.in/cart?t=1708661501403&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=21424f10-0e27-493e-b64d-c00125727d4e; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_15", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661501482},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661500959}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661500962}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type"
		"\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4296e41-AE41-4B16-B773-561E6B2B2231\"},\"metadata\":{\"event_created_at_ms\":1708661500971}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\""
		"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":112,\"start_time\":751,\"session_id\":\"sh-d4296eaf-6C01-49A3-C4ED-D968469391D7\"},\"metadata\":{\"event_created_at_ms\":1708661501084}},{\"schema_id\":\""
		"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":123,\"start_time\":752,\"session_id\":\"sh-d4296eaf-6C01-49A3-C4ED-D968469391D7\"},\"metadata\":{\"event_created_at_ms\":1708661501095}}]}", 
		LAST);

	web_custom_request("track_6", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9yZWdpc3RlciIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCVjhuS25rY0x0OEwiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiYWJmZWYzZDItNWY2Mi00Nm"
		"MwLWJmMzEtYzY0NjBmYTQ1ZDYwIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY2MTUwMjQyMiwicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		LAST);

	web_url("c1a778d0cb1e42f1_3", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	
	
	web_add_cookie("_clsk=g67g3k%7C1708661501528%7C3%7C1%7Cu.clarity.ms%2Fcollect; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_4", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"effective_type\":\"4g\",\"boomerang_init\":1708661501377,\"server_timing\":\"{\\\"processing\\\":[18,\\\"\\\"],\\\"db\\\":[9,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"customers/register\\\"],\\\"servedBy\\\":[0,\\\"s8dz\\\"],\\\"requestID\\\":[0,\\\"71b798f1-5e75-4595-b6bf-54b2107ab6e6\\\"],\\\""
		"cfRequestDuration\\\":[283.99992,\\\"\\\"]}\",\"session_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":1256,\"visually_ready\":1256,\"first_paint\":1182,\"first_contentful_paint\":1256,\"navigation_start\":1708661500221,\"fetch_start\":1708661500222,\"domain_lookup_start\""
		":1708661500222,\"domain_lookup_end\":1708661500222,\"connect_start\":1708661500222,\"connect_end\":1708661500222,\"request_start\":1708661500224,\"response_start\":1708661500558,\"response_end\":1708661501183,\"dom_loading\":1708661500620,\"dom_interactive\":1708661501386,\"dom_content_loaded_event_start\":1708661501414,\"dom_content_loaded_event_end\":1708661501414,\"dom_complete\":1708661501561,\"load_event_start\":1708661501561,\"load_event_end\":1708661502380,\"secure_connection_start\""
		":1708661500222,\"encoded_body_size\":89627,\"decoded_body_size\":375012,\"transfer_size\":89927,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3g7,1,1,1*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3gk,1*19rw,_,iej*23\\\"},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/"
		"assets/wbogo.min.\\\":{\\\"js\\\":\\\"3gw*118cm,_,3kah*22\\\",\\\"css\\\":\\\"2rf,2d,2b,28*15gb,_,nbb*44\\\"}},\\\"onnect.facebook.net/\\\":{\\\"en_US/fbevents.js\\\":\\\"3hs,1k,1,1*1186h,_,3h76*21\\\",\\\"signals/config/511162776752735?...\\\":\\\"3kf,1,1*18hq,_,x5v*21\\\"}},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"theme.\\\":{\\\"css?v=88179064826295383661708612564\\\":\\\"2b8,c,7,7*1ozf,_,2y02*44\\\",\\\"min.js?v="
		"142180294906365401511651758011\\\":\\\"2b8*1p0z,_,22j3*22*42\\\"},\\\"vendor-scripts-v1.js\\\":\\\"3b9*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3g8*17mf,_,m90*20\\\"},\\\"files/\\\":{\\\"F\\\":{\\\"ishBhurji200g_400x.jpg?v=1702114223\\\":\\\"1jy*1jzm,_\\\",\\\"rontSide_Cinnamon_400x.jpg?v=1700203722\\\":\\\"1k7*1eru,_\\\"},\\\"Tasty_Nibbles_Logo_\\\":{\\\"100x.png?v=1652340733\\\":\\\"*028,2s,1c,14|1jt*13z2,_\\\",\\\"90x.png?v=1652340733\\\":\\\"1ju*13mm,_\\\""
		"},\\\"Roastedcoconutpaste_400x.jpg?v=1693655397\\\":\\\"1k7*1df8,_\\\",\\\"Datespickle400g_400x.jpg?v=1693468132\\\":\\\"1k7*1bi0,_\\\",\\\"Samudrasadhyaspecial_400x.jpg?v=1702120774\\\":\\\"1k8*1q8k,_\\\"},\\\"products/\\\":{\\\"8907093060763_01Frontside_400x.jpg?v=1663566067\\\":\\\"1k7*1ec2,_\\\",\\\"tunaintomato2_400x.jpg?v=1644221401\\\":\\\"1jy*1dgs,_\\\",\\\"Pack6_1_354e94cd-f9ee-4051-911c-c8f8998f0f9a_400x.jpg?v=1671703708\\\":\\\"1k8*1s16,_\\\"}},\\\"ifycloud/shopify/assets/\\\":{\\\"s\\"
		"\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3b9*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3b9*1a2h,_,j05*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3hd,4,4,4*1294,_,456*21\\\"},\\\"themes_support/shopify_common-33bb9d312118840468a53f36b59c62c1e8f2b7d1a0a77250db9e300441827470.js\\\":\\\"3ba*1jj,_,"
		"12f*22\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3hc,5,3,3*1k49,_,1w1n*21\\\"},\\\"fonts/\\\":{\\\"itc_stepp/itcstepp_n7.c\\\":{\\\"8023ed34da33638b911832310ffb6d4da1e405f.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=89b6b3def73e0926121f910cd8617bfe5d772ffbe43cf352f2e8b9388f684f43\\\":\\\"4ge*1drs,_\\\",\\\"ef5242f78dd0b48264b9f0d29ee3573eb745142.woff2?h1=dGFzdHluaWJibGVzLmlu&h2="
		"dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=0f3b4f4c02bf57220f14f5252b063e6db04449dde6617def7fba1b37662e1bc1\\\":\\\"4gd*1duw,_\\\"},\\\"harmonia_sans/harmoniasans_\\\":{\\\"n\\\":{\\\"4.73cf0589f7839ec88463a09f5335a2885467ed0c.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=3534ec91f641c08cf2dc49948f0afce133989e28b219b46f7676e032bbf054fc\\\":\\\"4ge*1gr8,_\\\",\\\"6.dd3d6084d29e4754e80fe6aa1c0e37f511474ffa.woff2?h1=dGFzdHluaWJibGVzLmlu&h2="
		"dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a7a0d8b76b98542c3b5fdeaf5288e7f5da97e48d170f6ec0206b03811a5740e9\\\":\\\"4ge*1hi8,_\\\"},\\\"i6.\\\":{\\\"5ea0fa072a0601a91bbd7e0301549f9159a09ada.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=03968155dbfe4004e296c411180f2ad5916bd754dae40190824eadab15b5d220\\\":\\\"4gf*1i3c,_\\\",\\\"d520474355816f56169b3a79baa14d2c479da2ba.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac="
		"a1748412abf67becfadddbf5f0bd2cb6df5e1fdd42927a51c439aec4d87f59eb\\\":\\\"4gf*1i2o,_\\\"}}},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3gy,2f,26,2*1kyi,8c,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3b9,1x,1t,9*1su,8c,1yt*21\\\"},\\\"clarity.ms/\\\":{\\\"tag/997scejv0n\\\":\\\"3g8,75*21\\\",\\\"s/0.7.20/clarity.js\\\":\\\"3po*21\\\"},\\\"google\\\":{\\\"-analytics.com/analytics.js\\\":\\\"3hs,64*21\\\",\\\""
		"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":{\\\"|\\\":\\\"3ht,1m*25\\\",\\\"&l=dataLayer&cx=c\\\":\\\"3ln,2*21\\\"},\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"3lx,2*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"3m0,2*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3hu,1k*21\\\"},\\\"adservices.com/pagead/conversion/378882101/?...\\\":\\\"3oz,1u,1t,2*11e4,8c,10x*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&"
		"locale=en-IN\\\":\\\"3b9,e,d,d*21\\\",\\\"ajax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3r9,9y*21\\\",\\\"3.5.1/jquery.min.js\\\":\\\"3rc,4t*24\\\"},\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3ra*26\\\"}}\",\"total_duration_long_tasks\":836,\"number_long_tasks\":1,\"url\":\"https://www.tastynibbles.in/account/register\",\"referrer\":\"https://www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\""
		":1708661500998,\"event_sent_at_ms\":1708661502916}}", 
		LAST);

	
	web_add_cookie("_gcl_au=1.1.1447326640.1708661465.349608742.1708661529.1708661528; DOMAIN=www.tastynibbles.in");

	web_submit_data("account_2", 
		"Action=https://www.tastynibbles.in/account", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=form_type", "Value=create_customer", ENDITEM, 
		"Name=utf8", "Value=âœ“", ENDITEM, 
		"Name=customer[first_name]", "Value=AAA", ENDITEM, 
		"Name=customer[last_name]", "Value=BBB", ENDITEM, 
		"Name=customer[email]", "Value=xyz@abc.com", ENDITEM, 
		"Name=customer[password]", "Value=XYZabc123", ENDITEM, 
		LAST);

	
	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661532.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661532.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("modern", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	
	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A12%3A12.687Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_17", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661532686},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/account/register\",\"path\":\"/\",\"search\":\"\",\"title\":\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\",\"url\":\"https://www.tastynibbles.in/\",\"properties\":{},\"eventId\":\"sh-d429f7cf-1C02-47ED-C5B1-F006ECB52085\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\","
		"\"navigationType\":\"navigate\"},\"pageType\":\"home\",\"customerId\":7180378964143,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d429f7f9-A987-446E-3959-A2066FCA2814\",\"microSessionCount\":1,\"isPersistentCookie\":true,\""
		"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661532686}}]}", 
		LAST);

	web_custom_request("produce_batch_18", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661532740},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661532673}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id"
		"\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d429f7cf-1C02-47ED-C5B1-F006ECB52085\"},\"metadata\":{\"event_created_at_ms\":1708661532687}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661532687}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/\\\",\\\""
		"page_title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661532693}}]}", 
		LAST);

	
	web_custom_request("produce_batch_19",
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661533337},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661532650}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661532651}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"event_id\":\"sh-d429f7cf-1C02-47ED-C5B1-F006ECB52085\"},\"metadata\":{\"event_created_at_ms\":1708661532655}}]}", 
		LAST);

	
	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661533.59.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661533.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_2", 
		"URL=https://www.tastynibbles.in/cart?t=1708661533827&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=e3979d73-5412-4f31-a528-0b2b725842db; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_20", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661533905},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\""
		"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d429f7cf-1C02-47ED-C5B1-F006ECB52085\"},\"metadata\":{\"event_created_at_ms\":1708661533362}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer"
		"\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d429f7cf-1C02-47ED-C5B1-F006ECB52085\"},\"metadata\":{\"event_created_at_ms\":1708661533363}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\""
		",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":707,\""
		"start_time\":4071,\"session_id\":\"32f99e20-c8a5-4dc7-a0ad-61961463c58b\"},\"metadata\":{\"event_created_at_ms\":1708661533363}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\""
		"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":708,\"start_time\":4071,\"session_id\":\"32f99e20-c8a5-4dc7-a0ad-61961463c58b\"},\"metadata\":{\"event_created_at_ms\":1708661533363}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\""
		"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d429f7cf-1C02-47ED-C5B1-F006ECB52085\"},\"metadata\":{\""
		"event_created_at_ms\":1708661533460}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true"
		"\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":805,\"start_time\":4072,\"session_id\":\"32f99e20-c8a5-4dc7-a0ad-61961463c58b\"},\"metadata\":{\"event_created_at_ms\":1708661533461}}]}", 
		LAST);

	web_custom_request("track_8", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJWaUNqZkNTTTd5TyIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiJhYmZlZjNkMi01ZjYyLTQ2YzAtYmYzMS1jNjQ2MGZhND"
		"VkNjAifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjYxNTM0ODc1LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		LAST);

	web_url("public_4", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wbanner", 
		"URL=https://www.tastynibbles.in/apps/discos/wbanner?shop=tastynibbles.myshopify.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	
	web_url("location_status", 
		"URL=https://www.tastynibbles.in/apps/discos/location_status?shop=tastynibbles.myshopify.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_clsk=g67g3k%7C1708661534026%7C4%7C1%7Cu.clarity.ms%2Fcollect; DOMAIN=www.tastynibbles.in");

	web_submit_data("configs_2", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=customer_info", "Value={\"id\":7180378964143,\"name\":\"AAA BBB\",\"email\":\"xyz@abc.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", ENDITEM, 
		"Name=customer_location", "Value=null", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	web_url("products.json", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json_2", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json_3", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	
	web_url("account_3", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	
	web_custom_request("produce_batch_21", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661540813},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"32f99e20-c8a5-4dc7-a0ad-61961463c58b\",\"run_time_duration\":925,\"start_time\":3951,\"page_duration\""
		":8275},\"metadata\":{\"event_created_at_ms\":1708661540812}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661540.52.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661540.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_22", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661541148},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661541148}}]}", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A12%3A21.160Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_23", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661541205},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661541148}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload"
		"\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d42a0d22-D50F-4F64-D242-17364365FC38\"},\"metadata\":{\"event_created_at_ms\":1708661541160}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\""
		":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account\\\\\",\\\\\"title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/account\\\\\"}\"},\"metadata\":{\""
		"event_created_at_ms\":1708661541160}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\""
		"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account\\\\\",\\\\\"page_title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661541201}}]}", 
		LAST);

	web_custom_request("produce_batch_24", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661541204},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42a0d22-D50F-4F64-D242-17364365FC38\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661541202,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d42a0d60-C4C2-42C5-6105-3EC94DF39809\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\""
		"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42a0dcf-B21B-465C-ACF9-62FD6A3BC9AA\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661541204}}]}", 
		LAST);

	web_custom_request("produce_batch_25", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661541159},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account\",\"search\":\"\",\"title\":\"Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account\",\"properties\":{},\"eventId\":\"sh-d42a0d22-D50F-4F64-D242-17364365FC38\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\""
		"navigate\"},\"customerId\":7180378964143,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d42a0d60-C4C2-42C5-6105-3EC94DF39809\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\""
		"event_created_at_ms\":1708661541159}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661541.51.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661541.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("account_4", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	
	web_custom_request("track_9", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudCIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCVnFmU1F0TVIwMDQiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiYWJmZWYzZDItNWY2Mi00NmMwLWJmMzEtYz"
		"Y0NjBmYTQ1ZDYwIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY2MTU0MTYwNiwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0s"
		"InByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		LAST);

	web_url("c1a778d0cb1e42f1_4", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart_3", 
		"URL=https://www.tastynibbles.in/cart?t=1708661541591&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("track_10", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudCIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCVnFmU1F0TVIwMDQiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiYWJmZWYzZDItNWY2Mi00NmMwLWJmMzEtYz"
		"Y0NjBmYTQ1ZDYwIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY2MTU0MjYwOSwicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		LAST);

	web_add_cookie("keep_alive=f82d5d95-92d8-4071-b9cb-802a178764be; DOMAIN=www.tastynibbles.in");

	web_submit_data("configs_3", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=customer_info", "Value={\"id\":7180378964143,\"name\":\"AAA BBB\",\"email\":\"xyz@abc.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", ENDITEM, 
		"Name=customer_location", "Value=null", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	

	web_url("public_5", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_clsk=g67g3k%7C1708661541707%7C5%7C1%7Cu.clarity.ms%2Fcollect; DOMAIN=www.tastynibbles.in");

	web_url("products.json_4", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json_5", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json_6", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("envelope_2", 
		"URL=https://o515678.ingest.sentry.io/api/6398391/envelope/?sentry_key=16be5f91f20c459cbfb51e421f4c9d2f&sentry_version=7&sentry_client=sentry.javascript.browser%2F7.64.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"sent_at\":\"2024-02-23T04:12:30.110Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"7.64.0\"}}\n{\"type\":\"session\"}\n{\"sid\":\"6641e6b89ef248c693106b140d246659\",\"init\":true,\"started\":\"2024-02-23T04:12:30.109Z\",\"timestamp\":\"2024-02-23T04:12:30.109Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"d43430ddaebbedea49f590c6812d6bc41f57f7bd\",\"environment\":\"__S_TRAFFIC_ENV__\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/"
		"537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\"}}", 
		LAST);

	web_custom_request("produce_5", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"effective_type\":\"4g\",\"boomerang_init\":1708661541776,\"server_timing\":\"{\\\"processing\\\":[433,\\\"gc:58\\\"],\\\"db\\\":[159,\\\"\\\"],\\\"render\\\":[154,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"customers/account\\\"],\\\"servedBy\\\":[0,\\\"nkn5\\\"],\\\""
		"requestID\\\":[0,\\\"155b6d94-4fe7-406b-9626-48c94328c2bf\\\"],\\\"cfRequestDuration\\\":[711.999893,\\\"\\\"]}\",\"session_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"visually_ready\":1636,\"first_paint\":1635,\"navigation_start\":1708661540054,\"fetch_start\":1708661540055,\"domain_lookup_start\""
		":1708661540055,\"domain_lookup_end\":1708661540055,\"connect_start\":1708661540055,\"connect_end\":1708661540055,\"request_start\":1708661540057,\"response_start\":1708661540802,\"response_end\":1708661541557,\"dom_loading\":1708661540828,\"dom_interactive\":1708661541572,\"dom_content_loaded_event_start\":1708661541606,\"dom_content_loaded_event_end\":1708661541611,\"dom_complete\":1708661541693,\"load_event_start\":1708661541694,\"load_event_end\":1708661541701,\"secure_connection_start\""
		":1708661540055,\"encoded_body_size\":90141,\"decoded_body_size\":375623,\"transfer_size\":90441,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn\\\":{\\\".\\\":{\\\"shopify.com/\\\":{\\\"s\\\":{\\\"/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3rh,2,1,1*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3rq,1*19rw,_,iej*23\\\"},\\\"hopifycloud/checkout-web/"
		"assets/\\\":{\\\"681.latest.en.76291e02a8e10078afd8.js\\\":\\\"21by,3,2,1*1exd,_,vfh*41\\\",\\\"807.latest.en.f5b76add4556abacb226.js\\\":\\\"21br,2,1,1*11jc2,_,3c76*41\\\",\\\"922.latest.en.0a02952f03be201cff6a.js\\\":\\\"21ax,3,1,1*11s8z,_,56oq*41\\\",\\\"runtime.latest.en.da42550059190bee04f4.js\\\":\\\"219o,q,3,1*12na,_,2kz*41\\\"}},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.\\\":{\\\"js\\\":\\\"3t8*118cm,_,3kah*22\\\",\\\"css\\\":\\\"215g,1*15gb,_,nbb*44\\\""
		"}},\\\"ordersify.com/sdk/v2/ordersify-shopify.min.\\\":{\\\"js?shop=tastynibbles.myshopify.com\\\":\\\"319m,4*21\\\",\\\"css\\\":\\\"21bc,1\\\"},\\\"nfcube.com/5a2dc01fdf22006c0f6dccb9a8c70490.js?shop=tastynibbles.myshopify.com\\\":\\\"319m,3*21\\\"},\\\"1.judge.me/assets/installed.js?shop=tastynibbles.myshopify.com\\\":\\\"319n,r*21\\\"},\\\"onnect.facebook.net/\\\":{\\\"en_US/fbevents.js\\\":\\\"3uf,1e,1,1*1186h,_,3h76*21\\\",\\\"signals/config/511162776752735?...\\\":\\\"3x1,1,1,1*18hq,_,"
		"x5v*21\\\"}},\\\"a\\\":{\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3156,2,1,1*1q9o,_,1cuu*21\\\",\\\"3.5.1/jquery.min.js\\\":\\\"315c*1nxp,_,193r*24\\\"},\\\"pp.engati.com/static/js/whatsapp_widget.js?config={%22wa_bot_identifier%22:%22c1a778d0cb1e42f1%22,%22server%22:%22https://app.engati.com%22,%22brand%22:%22Engati%22,%22e%22:%22p%22}\\\":\\\"31b7,2*23\\\"},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/"
		"assets/\\\":{\\\"theme.\\\":{\\\"css?v=88179064826295383661708612564\\\":\\\"2lk,b,8,8*1ozf,_,2y02*44\\\",\\\"min.js?v=142180294906365401511651758011\\\":\\\"2ll*1p0z,_,22j3*22*42\\\"},\\\"vendor-scripts-v1.js\\\":\\\"3ll*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3rj*17mf,_,m90*20\\\"},\\\"files/\\\":{\\\"F\\\":{\\\"ishBhurji200g_400x.jpg?v=1702114223\\\":\\\"1wg*1jzm,_\\\",\\\"rontSide_Cinnamon_400x.jpg?v=1700203722\\\":\\\"1wi*1eru,_\\\"},\\\""
		"Tasty_Nibbles_Logo_\\\":{\\\"100x.png?v=1652340733\\\":\\\"*028,2s,1c,14|1u7*13z2,_\\\",\\\"90x.png?v=1652340733\\\":\\\"1u8*13mm,_\\\"},\\\"Roastedcoconutpaste_400x.jpg?v=1693655397\\\":\\\"1wh*1df8,_\\\",\\\"Datespickle400g_400x.jpg?v=1693468132\\\":\\\"1wh*1bi0,_\\\",\\\"Samudrasadhyaspecial_400x.jpg?v=1702120774\\\":\\\"1wi*1q8k,_\\\"},\\\"products/\\\":{\\\"8907093060763_01Frontside_400x.jpg?v=1663566067\\\":\\\"1wi*1ec2,_\\\",\\\"tunaintomato2_400x.jpg?v=1644221401\\\":\\\"1wg*1dgs,_\\\",\\"
		"\"Pack6_1_354e94cd-f9ee-4051-911c-c8f8998f0f9a_400x.jpg?v=1671703708\\\":\\\"1wi*1s16,_\\\"}},\\\"ifycloud/shopify/assets/\\\":{\\\"s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3ll*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3ll*1a2h,_,j05*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3ts,7,6,6*1294,_"
		",456*21\\\"},\\\"themes_support/shopify_common-33bb9d312118840468a53f36b59c62c1e8f2b7d1a0a77250db9e300441827470.js\\\":\\\"3ll*1jj,_,12f*22\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3ts,6,4,4*1k49,_,1w1n*21\\\"},\\\"fonts/\\\":{\\\"itc_stepp/itcstepp_n7.c\\\":{\\\"8023ed34da33638b911832310ffb6d4da1e405f.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=89b6b3def73e0926121f910cd8617bfe5d772ffbe43cf352f2e8b9388f684f43\\\""
		":\\\"4rl*1drs,_\\\",\\\"ef5242f78dd0b48264b9f0d29ee3573eb745142.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=0f3b4f4c02bf57220f14f5252b063e6db04449dde6617def7fba1b37662e1bc1\\\":\\\"4rl*1duw,_\\\"},\\\"harmonia_sans/harmoniasans_\\\":{\\\"n\\\":{\\\"4.73cf0589f7839ec88463a09f5335a2885467ed0c.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=3534ec91f641c08cf2dc49948f0afce133989e28b219b46f7676e032bbf054fc\\\":\\\"4rl*1gr8,"
		"_\\\",\\\"6.dd3d6084d29e4754e80fe6aa1c0e37f511474ffa.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a7a0d8b76b98542c3b5fdeaf5288e7f5da97e48d170f6ec0206b03811a5740e9\\\":\\\"4rl*1hi8,_\\\"},\\\"i6.\\\":{\\\"5ea0fa072a0601a91bbd7e0301549f9159a09ada.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=03968155dbfe4004e296c411180f2ad5916bd754dae40190824eadab15b5d220\\\":\\\"4rm*1i3c,_\\\",\\\""
		"d520474355816f56169b3a79baa14d2c479da2ba.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a1748412abf67becfadddbf5f0bd2cb6df5e1fdd42927a51c439aec4d87f59eb\\\":\\\"4rm*1i2o,_\\\"}}},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3t9,2,1,1*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3ll,2c,26,a*1su,8c,1yt*21\\\"},\\\"clarity.ms/\\\":{\\\"tag/997scejv0n\\\":\\\"3ri,77*21\\\",\\\"s/"
		"0.7.20/clarity.js\\\":\\\"3zp,2*21\\\"},\\\"google\\\":{\\\"-analytics.com/analytics.js\\\":\\\"3ug,3h*21\\\",\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3ui,1g*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"3xd,4*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"3xe,4*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3uk,1d*21\\\"},\\\"adservices.com/pagead/conversion/378882101/?...\\\":\\\"3yw,21,1z,1*11h0,8c,116*21\\\"}},\\\"shop.app/checkouts/"
		"internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3ll,g,g,g*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3157*26\\\",\\\"tastynibbles.myshopify.com/apps/sa/verify_cart.js?shop=tastynibbles.myshopify.com\\\":\\\"319l,24*21\\\",\\\"branding-resources.s3.ap-south-1.amazonaws.com/default/bot/shopify/wabotscript-app.js?wa_bot_identifier=c1a778d0cb1e42f1&base_url=https://app.engati.com&brand_name=Engati&shop=tastynibbles.myshopify.com\\\":\\"
		"\"319n,5*21\\\",\\\"instafeed.nfcube.com/cdn/instafeed-6.6.0.css\\\":\\\"21b2,2*44\\\"}}\",\"total_duration_long_tasks\":0,\"number_long_tasks\":0,\"largest_contentful_paint\":2665,\"url\":\"https://www.tastynibbles.in/account\",\"referrer\":\"https://www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661541253,\"event_sent_at_ms\":1708661549554}}", 
		LAST);

	
	/* Search */

	lr_think_time(9);

	
	web_url("suggest.json", 
		"URL=https://www.tastynibbles.in/search/suggest.json?q=coconut&resources[type]=product%2Carticle&resources[limit]=4&resources[options][unavailable_products]=last&resources[options][fields]=title%2Cproduct_type%2Cvariants.title%2Cvendor", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	
	web_custom_request("produce_batch_26", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661573039},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"7fa958c3-3095-4a9b-bcbf-369ae5520ce8\",\"run_time_duration\":636,\"start_time\":1053,\""
		"page_duration\":31932},\"metadata\":{\"event_created_at_ms\":1708661573039}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661573.19.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661573.0.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("wpm-domain-test=1; DOMAIN=www.tastynibbles.in");

	web_url("search_2", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("track_11", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vc2VhcmNoP3R5cGU9cHJvZHVjdCUyQ2FydGljbGUmb3B0aW9uc1twcmVmaXhdPWxhc3QmcT1Db2NvbnV0KiIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCV1FlTnUwTzNPbjkiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOm"
		"ZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiYWJmZWYzZDItNWY2Mi00NmMwLWJmMzEtYzY0NjBmYTQ1ZDYwIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY2MTU3NDU4MiwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZh"
		"bHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sInByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		LAST);

	web_custom_request("produce_batch_27", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661574340},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661574340}}]}", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A12%3A54.373Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_28", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661574411},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42a93aa-87BF-424D-0F78-19F88A77D54C\",\"referrer\":\"https://www.tastynibbles.in/account\",\"canonical_url\":\"https://www.tastynibbles.in/search?q=coconut*&type=product%2carticle\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661574410,\""
		"event_source_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d42a93d0-D5CB-4A15-6CBE-C3CC81D9B94D\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) "
		"AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42a945e-5E0D-4EA4-2ED8-FA204B5B2309\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661574411}}]}", 
		LAST);

	web_custom_request("produce_batch_29", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661574430},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42a93ae-173A-4A9B-51E0-003785D371E1\",\"search_string\":\"Coconut*\",\"event_name\":\"search_submitted\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661574417,\"event_source_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\""
		"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d42a93d0-D5CB-4A15-6CBE-C3CC81D9B94D\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\""
		":7180378964143,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42a945e-5E0D-4EA4-2ED8-FA204B5B2309\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661574430}}]}", 
		LAST);

	web_custom_request("produce_batch_30", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661574372},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/account\",\"path\":\"/search\",\"search\":\"?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"title\":\"Search: 56 results found for \\\\\"Coconut*\\\\\" \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/search?q=coconut*&type=product%2carticle\",\"properties\":{},\"eventId\""
		":\"sh-d42a93aa-87BF-424D-0F78-19F88A77D54C\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\":\"searchresults\",\"customerId\":7180378964143,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\""
		"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d42a93d0-D5CB-4A15-6CBE-C3CC81D9B94D\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661574372}}]}", 
		LAST);

	web_custom_request("produce_batch_31", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661574430},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661574341}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d42a93aa-87BF-424D-0F78-19F88A77D54C\"},\"metadata\":{\"event_created_at_ms\":1708661574373}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\\\\\",\\\\\"title\\\\\":\\\\\"Search: 56 results found "
		"for \\\\\\\\\\\\\"Coconut*\\\\\\\\\\\\\" \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/search?q=coconut*&type=product%2carticle\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661574373}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\""
		"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/search\\\\\",\\\\\"page_title\\\\\":\\\\\"Search: 56 results found for \\\\\\\\\\\\\"Coconut*\\\\\\\\\\\\\" \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/search?q=coconut*&type="
		"product%2carticle\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661574410}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"performedSearch\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\\\"search_string\\\\\":\\\\\"Coconut*\\\\\""
		"}\",\"event_id\":\"sh-d42a93ae-173A-4A9B-51E0-003785D371E1\"},\"metadata\":{\"event_created_at_ms\":1708661574416}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"performedSearch\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\""
		"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/rKUtCN6DyPoCELWQ1bQB\\\\\"],\\\\\"search_term\\\\\":\\\\\"Coconut*\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661574416}}]}", 
		LAST);

	web_url("cart_4", 
		"URL=https://www.tastynibbles.in/cart?t=1708661574554&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=3966a83b-fe39-43d6-a557-1a947530eebc; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661574.18.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_32", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661574829},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661574318}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\""
		":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661574320}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options"
		"[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42a93aa-87BF-424D-0F78-19F88A77D54C\"},\"metadata\":{\"event_created_at_ms\":1708661574322}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type="
		"product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"search_submitted\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42a93ae-173A-4A9B-51E0-003785D371E1\"},\"metadata\":{\"event_created_at_ms\":1708661574324}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\""
		"sh-d42a93aa-87BF-424D-0F78-19F88A77D54C\"},\"metadata\":{\"event_created_at_ms\":1708661574507}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\""
		"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"search_submitted\",\"event_type\":\"standard\",\"event_id\":\"sh-d42a93ae-173A-4A9B-51E0-003785D371E1\"},\"metadata\":{\"event_created_at_ms\":1708661574510}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/search?type="
		"product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\""
		"modern\",\"error_msg\":\"N/A\",\"duration\":187,\"start_time\":2300,\"session_id\":\"078b0857-8ab3-4eb9-b8e3-232f091f6fe5\"},\"metadata\":{\"event_created_at_ms\":1708661574511}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\""
		"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42a93aa-87BF-424D-0F78-19F88A77D54C\"},\"metadata\":{\"event_created_at_ms\":1708661574512}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"search_submitted\",\"event_type\":\"standard\",\""
		"event_id\":\"sh-d42a93ae-173A-4A9B-51E0-003785D371E1\"},\"metadata\":{\"event_created_at_ms\":1708661574513}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\""
		",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":189,\"start_time\":2301,\"session_id\":\"078b0857-8ab3-4eb9-b8e3-232f091f6fe5\"},\"metadata\":{\"event_created_at_ms\":1708661574513}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\""
		"sh-d42a93aa-87BF-424D-0F78-19F88A77D54C\"},\"metadata\":{\"event_created_at_ms\":1708661574736}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\""
		"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"search_submitted\",\"event_type\":\"standard\",\"event_id\":\"sh-d42a93ae-173A-4A9B-51E0-003785D371E1\"},\"metadata\":{\"event_created_at_ms\":1708661574737}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\""
		":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":413,\"start_time\":2301,\"session_id\":\"078b0857-8ab3-4eb9-b8e3-232f091f6fe5\"},\"metadata\":{"
		"\"event_created_at_ms\":1708661574738}}]}", 
		LAST);

	web_custom_request("track_12", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vc2VhcmNoP3R5cGU9cHJvZHVjdCUyQ2FydGljbGUmb3B0aW9uc1twcmVmaXhdPWxhc3QmcT1Db2NvbnV0KiIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCV1FlTnUwTzNPbjkiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOm"
		"ZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiYWJmZWYzZDItNWY2Mi00NmMwLWJmMzEtYzY0NjBmYTQ1ZDYwIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY2MTU3NTU5NSwicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		LAST);

	web_submit_data("configs_4", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=customer_info", "Value={\"id\":7180378964143,\"name\":\"AAA BBB\",\"email\":\"xyz@abc.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", ENDITEM, 
		"Name=customer_location", "Value=null", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	web_url("public_6", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("envelope_3", 
		"URL=https://o515678.ingest.sentry.io/api/6398391/envelope/?sentry_key=16be5f91f20c459cbfb51e421f4c9d2f&sentry_version=7&sentry_client=sentry.javascript.browser%2F7.64.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"sent_at\":\"2024-02-23T04:12:56.901Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"7.64.0\"}}\n{\"type\":\"session\"}\n{\"sid\":\"e45679fc30bc4d0cb1a9c81d3a9113aa\",\"init\":true,\"started\":\"2024-02-23T04:12:56.900Z\",\"timestamp\":\"2024-02-23T04:12:56.900Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d\",\"environment\":\"__S_TRAFFIC_ENV__\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/"
		"537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\"}}", 
		LAST);

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661574.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("kerala-fish-curry-with-coconut-milk-200g-pouch", 
		"URL=https://www.tastynibbles.in/products/kerala-fish-curry-with-coconut-milk-200g-pouch?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_url("kerala-fish-curry-with-coconut-milk-185g", 
		"URL=https://www.tastynibbles.in/products/kerala-fish-curry-with-coconut-milk-185g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	

	

	
	web_url("c1a778d0cb1e42f1_5", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("produce_6", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708661574854,\"server_timing\":\"{\\\"processing\\\":[682,\\\"gc:54\\\"],\\\"db\\\":[347,\\\"\\\"],\\\"fetch\\\":[198,\\\"\\\"],\\\"render\\\":[197,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"search\\\"],\\\"servedBy\\\":[0,\\\"cw97\\\"],\\\"requestID\\\":[0"
		",\\\"a8542a16-f495-415d-ac11-08af11756ac7\\\"],\\\"cfRequestDuration\\\":[967.000008,\\\"\\\"]}\",\"session_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"total_duration_long_tasks\":198,\"number_long_tasks\":3,\"largest_contentful_paint\":4155,\"cumulative_layout_shift_score\":0.0019303894954256684,\""
		"effective_type\":\"4g\",\"visually_ready\":4156,\"first_paint\":2666,\"first_contentful_paint\":4155,\"navigation_start\":1708661572024,\"fetch_start\":1708661572026,\"domain_lookup_start\":1708661572026,\"domain_lookup_end\":1708661572026,\"connect_start\":1708661572026,\"connect_end\":1708661572026,\"request_start\":1708661572028,\"response_start\":1708661573025,\"response_end\":1708661574121,\"dom_loading\":1708661573103,\"dom_interactive\":1708661574525,\"dom_content_loaded_event_start\""
		":1708661574583,\"dom_content_loaded_event_end\":1708661574588,\"dom_complete\":1708661579861,\"load_event_start\":1708661579861,\"load_event_end\":1708661579900,\"secure_connection_start\":1708661572026,\"encoded_body_size\":136517,\"decoded_body_size\":887068,\"transfer_size\":136817,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":"
		"{\\\"tracking.js?v=1637601969\\\":\\\"316m,9,9,9*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3172,fd,f9,f9*19rw,_,iej*23\\\"},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.\\\":{\\\"js\\\":\\\"316w*118cm,_,3kah*22\\\",\\\"css\\\":\\\"21sn,1*15gb,_,nbb*44\\\"}},\\\"onnect.facebook.net/\\\":{\\\"en_US/fbevents.js\\\":\\\"31sv,17,1,1*1186h,_,3h76*21\\\",\\\"signals/config/511162776752735?...\\\":\\\"31zu,c,b,b*18hq,_,x5v*21\\\"},\\\"heckout.razorpay.com/v1/"
		"magic-checkout.js\\\":\\\"32r8,8a*25\\\"},\\\"a\\\":{\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"31pj,1,1*1q9o,_,1cuu*21\\\",\\\"3.\\\":{\\\"3.1/jquery.min.js\\\":\\\"31re,2,1,1*1ngf,_,17m8*21\\\",\\\"5.1/jquery.min.js\\\":\\\"31vo*1nxp,_,193r*24\\\"}},\\\"maicdn.com/discountmanager/\\\":{\\\"common.\\\":{\\\"js\\\":\\\"31pj*24\\\",\\\"css\\\":\\\"21sf,1*44\\\"},\\\"store/5aa2650a51d24b0ad2f4635c32a13771.js?1708661574305\\\":\\\"31w6,45j*21\\\"}},\\\"www.\\\":"
		"{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"theme.\\\":{\\\"css?v=88179064826295383661708612564\\\":\\\"2160,3,2,2*1ozf,_,2y02*44\\\",\\\"min.js?v=142180294906365401511651758011\\\":\\\"2165*1p0z,_,22j3*22*42\\\"},\\\"vendor-scripts-v1.js\\\":\\\"316g*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"316h*17mf,_,m90*20\\\"},\\\"files/\\\":{\\\"F\\\":{\\\"ishBhurji200g_400x.jpg?v=1702114223\\\":\\\"11mt*1jzm,_\\"
		"\",\\\"rontSide_Cinnamon_400x.jpg?v=1700203722\\\":\\\"11mu*1eru,_\\\"},\\\"Tasty_Nibbles_Logo_\\\":{\\\"100x.png?v=1652340733\\\":\\\"*028,2s,bj,2i|11mb*13z2,_\\\",\\\"90x.png?v=1652340733\\\":\\\"11md*13mm,_\\\"},\\\"Roastedcoconutpaste_400x.jpg?v=1693655397\\\":\\\"11mt*1df8,_\\\",\\\"Datespickle400g_400x.jpg?v=1693468132\\\":\\\"11mt*1bi0,_\\\",\\\"Samudrasadhyaspecial_400x.jpg?v=1702120774\\\":\\\"11mu*1q8k,_\\\"},\\\"products/\\\":{\\\"8907093060763_01Frontside_400x.jpg?v=1663566067\\\":\\\""
		"11mu*1ec2,_\\\",\\\"tunaintomato2_400x.jpg?v=1644221401\\\":\\\"11mt*1dgs,_\\\",\\\"Pack6_1_354e94cd-f9ee-4051-911c-c8f8998f0f9a_400x.jpg?v=1671703708\\\":\\\"11mu*1s16,_\\\"}},\\\"ifycloud/shopify/assets/s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"316f*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"316g*1a2h,_,j05*22\\\"},\\\""
		"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"317c,f4,f2,f0*1294,_,456*21\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"317b,f5,f1,f0*1k49,_,1w1n*21\\\"},\\\"fonts/\\\":{\\\"itc_stepp/itcstepp_n7.c\\\":{\\\"8023ed34da33638b911832310ffb6d4da1e405f.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=89b6b3def73e0926121f910cd8617bfe5d772ffbe43cf352f2e8b9388f684f43\\\":\\\""
		"416p*1drs,_\\\",\\\"ef5242f78dd0b48264b9f0d29ee3573eb745142.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=0f3b4f4c02bf57220f14f5252b063e6db04449dde6617def7fba1b37662e1bc1\\\":\\\"416p*1duw,_\\\"},\\\"harmonia_sans/harmoniasans_\\\":{\\\"n\\\":{\\\"4.73cf0589f7839ec88463a09f5335a2885467ed0c.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=3534ec91f641c08cf2dc49948f0afce133989e28b219b46f7676e032bbf054fc\\\":\\\"416p*1gr8,_\\"
		"\",\\\"6.dd3d6084d29e4754e80fe6aa1c0e37f511474ffa.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a7a0d8b76b98542c3b5fdeaf5288e7f5da97e48d170f6ec0206b03811a5740e9\\\":\\\"416p*1hi8,_\\\"},\\\"i6.\\\":{\\\"5ea0fa072a0601a91bbd7e0301549f9159a09ada.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=03968155dbfe4004e296c411180f2ad5916bd754dae40190824eadab15b5d220\\\":\\\"416q*1i3c,_\\\",\\\""
		"d520474355816f56169b3a79baa14d2c479da2ba.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a1748412abf67becfadddbf5f0bd2cb6df5e1fdd42927a51c439aec4d87f59eb\\\":\\\"416q*1i2o,_\\\"}}},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"317a,f6,f1,f1*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3169,fz,fx,5*1su,8c,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"316n,m8*21\\\",\\\""
		"google\\\":{\\\"-analytics.com/analytics.js\\\":\\\"31sw,6z*21\\\",\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"31sx,1c*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"320x,4*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"320z,3*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"31t8,11*21\\\"},\\\"adservices.com/pagead/conversion/378882101/?...\\\":\\\"324o,37,36,7,1q,6,3,3,3*11jn,8c,14s*21|3257,3o,3n,6*11ix,8c,12v*21\\\"}},\\\"shop.app/checkouts/"
		"internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"316a,7,6,4*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"31sn*26\\\"}}\",\"url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"referrer\":\"https://www.tastynibbles.in/account\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661574365,\"event_sent_at_ms\":1708661579934}}", 
		LAST);

	web_url("ready-to-eat-soya-coconut-fry-200g", 
		"URL=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tasty-nibbles-tender-coconut-water-200ml-pack-of-6", 
		"URL=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);

	/* Soya Coconut Fry */

	lr_think_time(13);

	web_url("tasty-nibbles-pulpy-tender-coconut-water-200ml-pack-of-6", 
		"URL=https://www.tastynibbles.in/products/tasty-nibbles-pulpy-tender-coconut-water-200ml-pack-of-6?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ready-to-eat-soya-coconut-fry-200g_2", 
		"URL=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		LAST);

	
	web_custom_request("produce_batch_33", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661612820},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"078b0857-8ab3-4eb9-b8e3-232f091f6fe5\",\""
		"run_time_duration\":1156,\"start_time\":1558,\"page_duration\":39239},\"metadata\":{\"event_created_at_ms\":1708661612820}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661612.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661612.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_34", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661613086},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661613086}}]}", 
		LAST);

	web_custom_request("produce_batch_35", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661613139},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"path\":\"/products/ready-to-eat-soya-coconut-fry-200g\",\"search\":\"?_pos=1&_sid=19c5d7ae0&_ss=r\",\"title\":\"Soya Coconut Fry 200g \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/products/"
		"ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"properties\":{},\"eventId\":\"sh-d42b25a4-6F89-451B-D5EB-5A053E8E8911\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\":\"product\",\"customerId\":7180378964143,\"resourceType\":\"product\",\"resourceId\":7465768911023,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\""
		"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d42b2599-4B02-40DD-EED6-755641006312\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661613139}}]}", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A13%3A33.139Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_36", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661613174},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42b25a6-F003-4AFD-E90C-2728576C1203\",\"products\":[\"{\\\"variant_id\\\":42333547233455,\\\"product_id\\\":7465768911023,\\\"product_gid\\\":\\\"gid://shopify/Product/7465768911023\\\",\\\"name\\\":\\\"Soya Coconut Fry 200g - Pack 6\\\",\\\"price\\\":873,\\\"sku\\\":\\\"CPDFG31705\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":\\\"Pack "
		"6\\\",\\\"category\\\":\\\"Ready to Eat Veg\\\",\\\"quantity\\\":1}\"],\"total_value\":873,\"currency\":\"INR\",\"event_name\":\"product_page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661613173,\"event_source_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\""
		"d42b2599-4B02-40DD-EED6-755641006312\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\""
		"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42b259f-815F-4528-D26B-E726DE8FE876\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661613174}}]}", 
		LAST);

	web_custom_request("produce_batch_37", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661613170},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42b25a4-6F89-451B-D5EB-5A053E8E8911\",\"referrer\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"canonical_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\""
		"facebook_capi_enabled\":true,\"event_time\":1708661613168,\"event_source_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d42b2599-4B02-40DD-EED6-755641006312\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\""
		"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42b259f-815F-4528-D26B-E726DE8FE876\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661613170}}]}", 
		LAST);

	web_url("ready-to-eat-soya-coconut-fry-200g_3", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("track_13", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vcHJvZHVjdHMvcmVhZHktdG8tZWF0LXNveWEtY29jb251dC1mcnktMjAwZz9fcG9zPTEmX3NpZD0xOWM1ZDdhZTAmX3NzPXIiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lQlg3SFp2UXMzanhpIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZW"
		"NhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbiI6ImFiZmVmM2QyLTVmNjItNDZjMC1iZjMxLWM2NDYwZmE0NWQ2MCJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTpjb25maWciLCJ0aW1lc3RhbXAiOjE3MDg2NjE2MTM2MjksInByb3BlcnRpZXMiOnsiZGF0YSI6eyJtZXJjaGFudF9rZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsInNob3VsZFVzZVNob3BJZCI6ZmFsc2UsImdUYWdJZCI6IiIsImd0YWdMYWJlbCI6IiIsInJhem9ycGF5TWFnaWNCdG5Db25maWciOnt9LCJjaGVja291dE9wdGlvbnMiOnsibmFtZSI6IiJ9LCJjYXJ0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1h"
		"Z2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNoZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJwcm9kdWN0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1hZ2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNoZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJjdXN0b21Dc3MiOiIifX19XX0%3D\"}", 
		LAST);

	web_custom_request("produce_batch_38", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661613175},\"events\":[{\"schema_id\":\"trekkie_storefront_viewed_product/1.1\",\"payload\":{\"event\":\"monorail://trekkie_storefront_viewed_product/1.1\",\"properties\":{},\"eventId\":\"d42b264b-BCA5-4B2C-873B-97EABA2A6E2D\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"currency\":\"INR\",\"variantId\":42333547233455,\"productId\":7465768911023,\"productGid\":\"gid://shopify/Product/"
		"7465768911023\",\"name\":\"Soya Coconut Fry 200g - Pack 6\",\"price\":\"873.00\",\"sku\":\"CPDFG31705\",\"brand\":\"Tasty Nibbles\",\"variant\":\"Pack 6\",\"category\":\"Ready to Eat Veg\",\"nonInteraction\":true,\"referer\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"appName\":\"storefront\","
		"\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d42b2599-4B02-40DD-EED6-755641006312\",\"microSessionCount\":3,\"isPersistentCookie\":true,\"eventType\":\"track\"},\"metadata\":{\"event_created_at_ms\":1708661613175}}]}", 
		LAST);

	web_custom_request("produce_batch_39", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661613178},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661613087}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d42b25a4-6F89-451B-D5EB-5A053E8E8911\"},\"metadata\":{\"event_created_at_ms\":1708661613139}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\\\\\",\\\\\"title\\\\\":\\\\\"Soya Coconut Fry "
		"200g \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661613139}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\""
		"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/products/ready-to-eat-soya-coconut-fry-200g\\\\\",\\\\\"page_title\\\\\":\\\\\"Soya Coconut Fry 200g \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/products/"
		"ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661613168}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"viewedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\""
		"{\\\\\"content_ids\\\\\":[7465768911023],\\\\\"content_type\\\\\":\\\\\"product_group\\\\\",\\\\\"content_name\\\\\":\\\\\"Soya Coconut Fry 200g - Pack 6\\\\\",\\\\\"content_category\\\\\":\\\\\"Ready to Eat Veg\\\\\",\\\\\"currency\\\\\":\\\\\"INR\\\\\",\\\\\"value\\\\\":\\\\\"873.00\\\\\"}\",\"event_id\":\"sh-d42b25a6-F003-4AFD-E90C-2728576C1203\"},\"metadata\":{\"event_created_at_ms\":1708661613173}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\""
		":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"viewedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"item\\\\\":{\\\\\"id\\\\\":\\\\\"CPDFG31705\\\\\",\\\\\"name\\\\\":\\\\\"Soya Coconut Fry 200g - Pack 6\\\\\",\\\\\"category\\\\\":\\\\\"Ready to Eat Veg\\\\\",\\\\\"quantity\\\\\":1,\\\\\"price\\\\\""
		":\\\\\"873.00\\\\\",\\\\\"brand\\\\\":\\\\\"Tasty Nibbles\\\\\",\\\\\"variant\\\\\":\\\\\"Pack 6\\\\\",\\\\\"currency\\\\\":\\\\\"INR\\\\\"},\\\\\"event\\\\\":{\\\\\"eventCategory\\\\\":\\\\\"Ready to Eat Veg\\\\\",\\\\\"eventAction\\\\\":\\\\\"Viewed Product\\\\\",\\\\\"nonInteraction\\\\\":true}}\"},\"metadata\":{\"event_created_at_ms\":1708661613173}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\""
		"event_name\":\"viewedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/hk9rCNWDyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"ecomm_prodid\\\\\":[\\\\\"shopify_IN_7465768911023_42333547233455\\\\\"],\\\\\"ecomm_totalvalue\\\\\":null,\\\\\"ecomm_pagetype\\\\\":\\\\\""
		"product\\\\\",\\\\\"items\\\\\":[{\\\\\"id\\\\\":\\\\\"shopify_IN_7465768911023_42333547233455\\\\\",\\\\\"name\\\\\":\\\\\"Soya Coconut Fry 200g - Pack 6\\\\\",\\\\\"brand\\\\\":\\\\\"Tasty Nibbles\\\\\",\\\\\"category\\\\\":\\\\\"Ready to Eat Veg\\\\\",\\\\\"price\\\\\":\\\\\"873.00\\\\\",\\\\\"variant\\\\\":\\\\\"Pack 6\\\\\"}]}\"},\"metadata\":{\"event_created_at_ms\":1708661613173}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661613.59.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661613.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_5", 
		"URL=https://www.tastynibbles.in/cart?t=1708661613602&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=d9cae7a0-6329-4a87-ab8f-4dddf3acb842; DOMAIN=www.tastynibbles.in");

	web_url("42333547233455", 
		"URL=https://www.tastynibbles.in//variants/42333547233455/?section_id=store-availability", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("track_14", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vcHJvZHVjdHMvcmVhZHktdG8tZWF0LXNveWEtY29jb251dC1mcnktMjAwZz9fcG9zPTEmX3NpZD0xOWM1ZDdhZTAmX3NzPXIiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lQlg3SFp2UXMzanhpIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZW"
		"NhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbiI6ImFiZmVmM2QyLTVmNjItNDZjMC1iZjMxLWM2NDYwZmE0NWQ2MCJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTptYWdpY19zZGtfaW5qZWN0ZWQiLCJ0aW1lc3RhbXAiOjE3MDg2NjE2MTQ2MzAsInByb3BlcnRpZXMiOnsicmVhc29uIjoiZG9tIn19XX0%3D\"}", 
		LAST);

	web_url("public_7", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("configs_5", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=customer_info", "Value={\"id\":7180378964143,\"name\":\"AAA BBB\",\"email\":\"xyz@abc.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", ENDITEM, 
		"Name=customer_location", "Value=null", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	web_custom_request("produce_batch_40", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661613684},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661613089}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661613091}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/"
		"ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42b25a4-6F89-451B-D5EB-5A053E8E8911\"},\"metadata\":{\"event_created_at_ms\":1708661613092}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42b25a6-F003-4AFD-E90C-2728576C1203\"},\"metadata\":{\"event_created_at_ms\":1708661613093}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\""
		"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42b25a4-6F89-451B-D5EB-5A053E8E8911\"},\"metadata\":{\"event_created_at_ms\":1708661613288}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id"
		"\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42b25a6-F003-4AFD-E90C-2728576C1203\"},\"metadata\":{\"event_created_at_ms\":1708661613288}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\""
		"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\""
		"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":195,\"start_time\":899,\"session_id\":\"sh-d42b259f-815F-4528-D26B-E726DE8FE876\"},\"metadata\":{\"event_created_at_ms\":1708661613288}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss="
		"r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42b25a4-6F89-451B-D5EB-5A053E8E8911\"},\"metadata\":{\"event_created_at_ms\":1708661613291}},{\"schema_id\":\""
		"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\""
		"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42b25a6-F003-4AFD-E90C-2728576C1203\"},\"metadata\":{\"event_created_at_ms\":1708661613292}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\""
		"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":196,\"start_time\":902,\"session_id\":\"sh-d42b259f-815F-4528-D26B-E726DE8FE876\"},\"metadata\":{\"event_created_at_ms\""
		":1708661613292}}]}", 
		LAST);

	web_custom_request("produce_batch_41", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661614223},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\""
		":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42b25a4-6F89-451B-D5EB-5A053E8E8911\"},\"metadata\":{\"event_created_at_ms\":1708661613723}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42b25a6-F003-4AFD-E90C-2728576C1203\"},\"metadata\":{\"event_created_at_ms\":1708661613724}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\""
		"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\""
		"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":626,\"start_time\":904,\"session_id\":\"sh-d42b259f-815F-4528-D26B-E726DE8FE876\"},\"metadata\":{\"event_created_at_ms\":1708661613724}}]}", 
		LAST);

	web_custom_request("envelope_4", 
		"URL=https://o515678.ingest.sentry.io/api/6398391/envelope/?sentry_key=16be5f91f20c459cbfb51e421f4c9d2f&sentry_version=7&sentry_client=sentry.javascript.browser%2F7.64.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"sent_at\":\"2024-02-23T04:13:35.155Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"7.64.0\"}}\n{\"type\":\"session\"}\n{\"sid\":\"73d9afa1935c4d4fa51a90fc61d28f13\",\"init\":true,\"started\":\"2024-02-23T04:13:35.154Z\",\"timestamp\":\"2024-02-23T04:13:35.154Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"d43430ddaebbedea49f590c6812d6bc41f57f7bd\",\"environment\":\"__S_TRAFFIC_ENV__\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/"
		"537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\"}}", 
		LAST);

	
	web_custom_request("produce_7", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"effective_type\":\"4g\",\"boomerang_init\":1708661613725,\"server_timing\":\"{\\\"processing\\\":[301,\\\"gc:65\\\"],\\\"db\\\":[82,\\\"\\\"],\\\"render\\\":[89,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"product\\\"],\\\"servedBy\\\":[0,\\\"xjpk\\\"],\\\"requestID\\\":[0,\\"
		"\"5c6c6a1a-b229-4d65-bbc5-0dc87d75e076\\\"],\\\"cfRequestDuration\\\":[565.999746,\\\"\\\"]}\",\"session_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"total_duration_long_tasks\":123,\"number_long_tasks\":2,\"cumulative_layout_shift_score\":0.003069256647757306,\"visually_ready\":4052,\"first_paint\":1527"
		",\"first_contentful_paint\":4051,\"navigation_start\":1708661612194,\"fetch_start\":1708661612195,\"domain_lookup_start\":1708661612195,\"domain_lookup_end\":1708661612195,\"connect_start\":1708661612195,\"connect_end\":1708661612195,\"request_start\":1708661612198,\"response_start\":1708661612809,\"response_end\":1708661613386,\"dom_loading\":1708661612896,\"dom_interactive\":1708661613573,\"dom_content_loaded_event_start\":1708661613629,\"dom_content_loaded_event_end\":1708661613635,\""
		"dom_complete\":1708661622781,\"load_event_start\":1708661622781,\"load_event_end\":1708661622830,\"secure_connection_start\":1708661612195,\"encoded_body_size\":100277,\"decoded_body_size\":475444,\"transfer_size\":100577,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.\\\":{\\\"shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3kh,1g,1g,1g*13ya,"
		"_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3m0,2e,2c,2c*19rw,_,iej*23\\\"},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.\\\":{\\\"js\\\":\\\"3nx*118cm,_,3kah*22\\\",\\\"css\\\":\\\"2109,h,9,3*15gb,_,nbb*44\\\"}},\\\"judge.me/widget_v3/base.css\\\":\\\"213w,4vu*44\\\"},\\\"onnect.facebook.net/\\\":{\\\"en_US/fbevents.js\\\":\\\"3ps,4,1,1*1186h,_,3h76*21\\\",\\\"signals/config/511162776752735?...\\\":\\\"3tx,3,3,3*18hq,_,x5v*21\\\"},\\\"heckout.razorpay.com/v1"
		"/magic-checkout.js\\\":\\\"31vp,1j*25\\\"},\\\"a\\\":{\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3wu,2,2,2*1q9o,_,1cuu*21\\\",\\\"3.\\\":{\\\"3.1/jquery.min.js\\\":\\\"3ye,1,1,1*1ngf,_,17m8*21\\\",\\\"5.1/jquery.min.js\\\":\\\"311k*1nxp,_,193r*24\\\"}},\\\"maicdn.com/discountmanager/\\\":{\\\"common.\\\":{\\\"js\\\":\\\"3ww*24\\\",\\\"css\\\":\\\"2105,1*44\\\"},\\\"store/5aa2650a51d24b0ad2f4635c32a13771.js?1708661613431\\\":\\\"312b,wh*21\\\"}},\\\"www.\\\":{\\"
		"\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"theme.\\\":{\\\"css?v=88179064826295383661708612564\\\":\\\"2jl,c,9,9*1ozf,_,2y02*44\\\",\\\"min.js?v=142180294906365401511651758011\\\":\\\"2jm*1p0z,_,22j3*22*42\\\"},\\\"vendor-scripts-v1.js\\\":\\\"3jn*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3jn*17mf,_,m90*20\\\"},\\\"files/\\\":{\\\"F\\\":{\\\"ishBhurji200g_400x.jpg?v=1702114223\\\":\\\"1rp*1jzm,_\\\",\\\""
		"rontSide_Cinnamon_400x.jpg?v=1700203722\\\":\\\"1s8*1eru,_\\\"},\\\"Tasty_Nibbles_Logo_\\\":{\\\"100x.png?v=1652340733\\\":\\\"*028,2s,1c,14|1rg*13z2,_\\\",\\\"90x.png?v=1652340733\\\":\\\"1rg*13mm,_\\\"},\\\"Roastedcoconutpaste_400x.jpg?v=1693655397\\\":\\\"1rp*1df8,_\\\",\\\"Datespickle400g_400x.jpg?v=1693468132\\\":\\\"1s7*1bi0,_\\\",\\\"Samudrasadhyaspecial_400x.jpg?v=1702120774\\\":\\\"1s9*1q8k,_\\\"},\\\"products/\\\":{\\\"8907093060763_01Frontside_400x.jpg?v=1663566067\\\":\\\"1s8*1ec2,_\\"
		"\",\\\"tunaintomato2_400x.jpg?v=1644221401\\\":\\\"1ro*1dgs,_\\\",\\\"Pack6_1_354e94cd-f9ee-4051-911c-c8f8998f0f9a_400x.jpg?v=1671703708\\\":\\\"1s8*1s16,_\\\"}},\\\"ifycloud/shopify/assets/s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3jn*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3jn*1a2h,_,j05*22\\\"},\\\""
		"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3o9,7,5,4*1294,_,456*21\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3o9,7,5,4*1k49,_,1w1n*21\\\"},\\\"fonts/\\\":{\\\"itc_stepp/itcstepp_n7.c\\\":{\\\"8023ed34da33638b911832310ffb6d4da1e405f.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=89b6b3def73e0926121f910cd8617bfe5d772ffbe43cf352f2e8b9388f684f43\\\":\\\"4kj*1drs,_\\\","
		"\\\"ef5242f78dd0b48264b9f0d29ee3573eb745142.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=0f3b4f4c02bf57220f14f5252b063e6db04449dde6617def7fba1b37662e1bc1\\\":\\\"4kj*1duw,_\\\"},\\\"harmonia_sans/harmoniasans_\\\":{\\\"n\\\":{\\\"4.73cf0589f7839ec88463a09f5335a2885467ed0c.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=3534ec91f641c08cf2dc49948f0afce133989e28b219b46f7676e032bbf054fc\\\":\\\"4kk*1gr8,_\\\",\\\""
		"6.dd3d6084d29e4754e80fe6aa1c0e37f511474ffa.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a7a0d8b76b98542c3b5fdeaf5288e7f5da97e48d170f6ec0206b03811a5740e9\\\":\\\"4kk*1hi8,_\\\"},\\\"i6.\\\":{\\\"5ea0fa072a0601a91bbd7e0301549f9159a09ada.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=03968155dbfe4004e296c411180f2ad5916bd754dae40190824eadab15b5d220\\\":\\\"4kk*1i3c,_\\\",\\\"d520474355816f56169b3a79baa14d2c479da2ba.woff2?h1="
		"dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a1748412abf67becfadddbf5f0bd2cb6df5e1fdd42927a51c439aec4d87f59eb\\\":\\\"4kk*1i2o,_\\\"}}},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3nz,g,d,d*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3jm,29,27,b*1su,8c,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3kh,7ll*21\\\",\\\"google\\\":{\\\"-analytics.com/analytics.js\\\":\\\"3pt,"
		"45*21\\\",\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3pu,18*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"3v0,4*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"3v1,5*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3q7,w*21\\\"},\\\"adservices.com/pagead/conversion/378882101/?...\\\":\\\"310e,4zo,4zn,4vy*11nj,8c,171*21|310n,4zg,4ze,4vp*11ov,8c,16y*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&"
		"locale=en-IN\\\":\\\"3jn,6fv,6fv,6dz,6el,6dy,6dy,6dy,l*1,8c*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3109,j*26\\\"}}\",\"url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"referrer\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut*\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661613266,\"event_sent_at_ms\":1708661622898}}", 
		LAST);

	/* Add To Cart */

	lr_think_time(14);

///*Correlation comment - Do not change!  Original value='Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMzJEUktOTktYV0RDMzkwUzYxOEo4' Name ='CorrelationParameter' Type ='RecordReplay'*/
//	web_reg_save_param_regexp(
//		"ParamName=CorrelationParameter",
//		"RegExp=cart=(\\w+);",
//		SEARCH_FILTERS,
//		"Scope=Cookies",
//		LAST);

	web_custom_request("add.js", 
		"URL=https://www.tastynibbles.in/cart/add.js", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"Body=Size=Pack%206&form_type=product&utf8=%E2%9C%93&id=42333547233455&product-id=7465768911023&section-id=template--15564373229743__main", 
		LAST);

	
	web_add_cookie("_gcl_au=1.1.1447326640.1708661465.349608742.1708661529.1708661638; DOMAIN=www.tastynibbles.in");

	web_add_cookie("cart_currency=INR; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661639.33.0.0; DOMAIN=www.tastynibbles.in");
//
//	web_custom_request("produce_batch_42",
//		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch",
//		"Method=POST",
//		"Resource=0",
//		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r",
//		"Snapshot=t174.inf",
//		"Mode=HTML",
//		"EncType=text/plain;charset=UTF-8",
//		"Body={\"metadata\":{\"event_sent_at_ms\":1708661639185},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42bf14a-F08F-4FDB-B053-256ECFAED65A\",\"products\":[\"{\\\"variant_id\\\":42333547233455,\\\"product_id\\\":7465768911023,\\\"name\\\":\\\"Soya Coconut Fry 200g - Pack 6\\\",\\\"price\\\":873,\\\"sku\\\":\\\"CPDFG31705\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":\\\"Pack 6\\\",\\\"category\\\":\\\"Ready to Eat Veg\\\",\\\"quantity\\\":1}\"],\"total_value\":873,\"currency\":\"INR\",\"cart_token\":\"{CorrelationParameter}\",\"event_name\":\"product_added_to_cart\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661639184,\"event_source_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d42b2599-4B02-40DD-EED6-755641006312\",\"source\":\"trekkie-storefro"
//		"nt-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42b259f-815F-4528-D26B-E726DE8FE876\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661639185}}]}",
//		LAST);

	web_custom_request("produce_batch_43", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661639187},\"events\":[{\"schema_id\":\"trekkie_storefront_track_added_product/1.1\",\"payload\":{\"event\":\"monorail://trekkie_storefront_track_added_product/1.1\",\"properties\":{},\"eventId\":\"d42bf183-CA73-45BD-B3BD-9B65C97674DC\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"referer\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\""
		"variantId\":\"42333547233455\",\"productId\":7465768911023,\"currency\":\"INR\",\"quantity\":\"1\",\"price\":873,\"name\":\"Soya Coconut Fry 200g - Pack 6\",\"sku\":\"CPDFG31705\",\"brand\":\"Tasty Nibbles\",\"variant\":\"Pack 6\",\"category\":\"Ready to Eat Veg\",\"pageType\":\"product\",\"resourceType\":\"product\",\"resourceId\":7465768911023,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\""
		"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d42b2599-4B02-40DD-EED6-755641006312\",\"microSessionCount\":6,\"isPersistentCookie\":true,\"eventType\":\"track\"},\"metadata\":{\"event_created_at_ms\":1708661639187}}]}", 
		LAST);

	web_custom_request("produce_batch_44", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661639185},\"events\":[{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"addedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\"content_ids\\\":[7465768911023],\\\"content_type\\\":\\\""
		"product_group\\\",\\\"content_name\\\":\\\"Soya Coconut Fry 200g - Pack 6\\\",\\\"content_category\\\":\\\"Ready to Eat Veg\\\",\\\"currency\\\":\\\"INR\\\",\\\"value\\\":\\\"873.00\\\",\\\"num_items\\\":\\\"1\\\"}\",\"event_id\":\"sh-d42bf14a-F08F-4FDB-B053-256ECFAED65A\"},\"metadata\":{\"event_created_at_ms\":1708661639165}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"addedProduct\",\""
		"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"item\\\":{\\\"id\\\":\\\"CPDFG31705\\\",\\\"name\\\":\\\"Soya Coconut Fry 200g - Pack 6\\\",\\\"category\\\":\\\"Ready to Eat Veg\\\",\\\"quantity\\\":\\\"1\\\",\\\"price\\\":873,\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":\\\"Pack 6\\\",\\\"currency\\\":\\\"INR\\\"},\\\"event\\\":"
		"{\\\"eventCategory\\\":\\\"Ready to Eat Veg\\\",\\\"eventAction\\\":\\\"Added Product\\\",\\\"nonInteraction\\\":true}}\"},\"metadata\":{\"event_created_at_ms\":1708661639165}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"addedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id"
		"\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/nYbCCNiDyPoCELWQ1bQB\\\"],\\\"ecomm_prodid\\\":[\\\"shopify_IN_7465768911023_42333547233455\\\"],\\\"ecomm_totalvalue\\\":873,\\\"ecomm_pagetype\\\":\\\"cart\\\",\\\"value\\\":873,\\\"currency\\\":\\\"INR\\\",\\\"items\\\":[{\\\"id\\\":\\\"shopify_IN_7465768911023_42333547233455\\\",\\\"name\\\":\\\"Soya Coconut Fry 200g - Pack 6\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"category\\\":\\\"Ready to "
		"Eat Veg\\\",\\\"price\\\":\\\"873\\\",\\\"quantity\\\":\\\"1\\\",\\\"variant\\\":\\\"Pack 6\\\"}]}\"},\"metadata\":{\"event_created_at_ms\":1708661639184}}]}", 
		LAST);

	web_url("cart_6", 
		"URL=https://www.tastynibbles.in/cart?t=1708661639136&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=95539d3e-4b11-488e-8fb3-21d4028b084a; DOMAIN=www.tastynibbles.in");

	web_url("cart_7", 
		"URL=https://www.tastynibbles.in/cart?view=appikon.json&_=1708661613541", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=1f332ec8-01ef-4491-8054-aa4760ef1f1c; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_45", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661639666},\"events\":[{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\""
		"event_id\":\"sh-d42bf14a-F08F-4FDB-B053-256ECFAED65A\"},\"metadata\":{\"event_created_at_ms\":1708661639161}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\""
		"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d42bf14a-F08F-4FDB-B053-256ECFAED65A\"},\"metadata\":{\"event_created_at_ms\":1708661639162}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\""
		"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\""
		":\"sh-d42bf14a-F08F-4FDB-B053-256ECFAED65A\"},\"metadata\":{\"event_created_at_ms\":1708661639162}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\""
		"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d42bf14a-F08F-4FDB-B053-256ECFAED65A\"},\"metadata\":{\"event_created_at_ms\":1708661639162}}]}", 
		LAST);

	web_custom_request("campaigns", 
		"URL=https://www.tastynibbles.in/apps/discos/campaigns?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=feks_settings=%7B%22shop_slug%22%3A%22tastynibbles%22%2C%22shop_id%22%3A%2255925866671%22%2C%22money_format%22%3A%22%E2%82%B9+%7B%7Bamount%7D%7D%22%2C%22shop_cart_subtotal_text%22%3A%22Saved+amount%3A+%22%2C%22customer%22%3A%7B%22id%22%3A7180378964143%2C%22name%22%3A%22AAA+"
		"BBB%22%2C%22email%22%3A%22xyz%40abc.com%22%2C%22tags%22%3A%5B%5D%2C%22isB2B%22%3Afalse%2C%22metafields%22%3A%7B%22companyId%22%3A%22%22%2C%22companyLocationId%22%3A%22%22%2C%22companyContactId%22%3A%22%22%7D%7D%2C%22cart%22%3A%7B%22note%22%3Anull%2C%22attributes%22%3A%7B%7D%2C%22original_total_price%22%3A0%2C%22total_price%22%3A0%2C%22total_discount%22%3A0%2C%22total_weight%22%3A0%2C%22item_count%22%3A0%2C%22items%22%3A%5B%5D%2C%22requires_shipping%22%3Afalse%2C%22currency%22%3A%22INR%22%2C%22item"
		"s_subtotal_price%22%3A0%2C%22cart_level_discount_applications%22%3A%5B%5D%2C%22checkout_charge_amount%22%3A0%7D%2C%22shop_locale%22%3A%22en%22%2C%22product%22%3A%7B%22id%22%3A7465768911023%2C%22title%22%3A%22Soya+Coconut+Fry+200g%22%2C%22handle%22%3A%22ready-to-eat-soya-coconut-fry-200g%22%2C%22description%22%3A%22%3Cp%3E%3Cstrong%3ESoya+Coconut+Fry+%3A%3C%2Fstrong%3E+Soy+is+a+nutrient-dense+source+of+protein+that+can+safely+be+consumed+several+times+a+week%2C+and+probably+more+often%2C+and+is+"
		"likely+to+provide+health+benefits%E2%80%94especially+when+eaten+as+an+alternative+to+red+and+processed+meat.%3C%2Fp%3E%5Cn%3Cp%3ETasty+Nibbles+Soya+Coconut+Fry+is+a+yummy+and+wholesome+dish+where+soya+chunks+are+cooked+in+delectable+mix+of+masalas.+This+is+Ready+to+eat+product+and+perfect+side+dish+to+go+with+rice%C2%A0or%C2%A0chapatti.%3C%2Fp%3E%5Cn%3Cp%3EOpen+Heat+%26amp%3B+Eat%3C%2Fp%3E%5Cn%3Cp%3E%3Cspan%3ENo+added+preservatives+or+additives.%3C%2Fspan%3E%3C%2Fp%3E%5Cn%3Cp%3EJapanese+Retort+"
		"Technology%3C%2Fp%3E%5Cn%3Cp%3EOnce+opened%2C+consume+immediately%3C%2Fp%3E%5Cn%3Cp%3E18+months+shelf+life+at+room+temperature%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3EINGREDIENTS%3A%3C%2Fstrong%3E%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3ESoya+chunks%2C%3C%2Fstrong%3E+Spices+%26amp%3B+Condiments+(Big+onion%2C+Ginger%2C+Garlic%2C+Green+chilli%2C+Small+Onion%2C+Kashmiri+chilli+powder%2C+Red+chilli+powder%2C+Coriander+powder%2C+%3Cstrong%3EMustard+seeds%2C%3C%2Fstrong%3E+Red+chilli%2C+Turmeric+powder%2C+Fennel%2C+"
		"Cardamom%2C+Cinnamon%2C+Cumin%2C+Black+pepper%2C+Curry+leaves)%2C+Salt%2C+Water%2C+Grated+coconut%2C+Coconut+oil%2C+Coconut+flakes.%3C%2Fp%3E%5Cn%3Cp%3EAvailable+quantity+%3A+200g%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3EHOW+TO+USE%3A%3C%2Fstrong%3E%3C%2Fp%3E%5Cn%3Cp%3EThis+product+is+ready-to-eat+form+can+be+consumed+straight+out+of+the+pack+or+warmed+up+as+below%3C%2Fp%3E%5Cn%3Cp%3ECut+pouch%2C+empty+contents+into+a+frying+pan+and+heat+for+3+to+5+minutes+while+stirring.+Serve+hot.+(OR)"
		"%3C%2Fp%3E%5Cn%3Cp%3EEmpty+the+contents+of+the+pouch+into+a+microwave+bowl.+Microwave+for+1+to+2+minutes.+Serve+hot.%C2%A0(OR)%C2%A0%3C%2Fp%3E%5Cn%3Cp%3EImmerse+the+unopened+pouch+in+boiling+water+for+3+to+5+minutes.+Remove%2C+cut%2C+open+and+serve.%3C%2Fp%3E%22%2C%22published_at%22%3A%222023-02-24T16%3A50%3A51%2B05%3A30%22%2C%22created_at%22%3A%222023-02-23T16%3A33%3A34%2B05%3A30%22%2C%22vendor%22%3A%22Tasty+Nibbles%22%2C%22type%22%3A%22Ready+to+Eat+"
		"Veg%22%2C%22tags%22%3A%5B%22all%22%2C%22engrea162%22%5D%2C%22price%22%3A15000%2C%22price_min%22%3A15000%2C%22price_max%22%3A87300%2C%22available%22%3Atrue%2C%22price_varies%22%3Atrue%2C%22compare_at_price%22%3A15000%2C%22compare_at_price_min%22%3A15000%2C%22compare_at_price_max%22%3A90000%2C%22compare_at_price_varies%22%3Atrue%2C%22variants%22%3A%5B%7B%22id%22%3A42333547233455%2C%22title%22%3A%22Pack+6%22%2C%22option1%22%3A%22Pack+"
		"6%22%2C%22option2%22%3Anull%2C%22option3%22%3Anull%2C%22sku%22%3A%22CPDFG31705%22%2C%22requires_shipping%22%3Atrue%2C%22taxable%22%3Afalse%2C%22featured_image%22%3A%7B%22id%22%3A35973956305071%2C%22product_id%22%3A7465768911023%2C%22position%22%3A6%2C%22created_at%22%3A%222023-02-23T16%3A53%3A38%2B05%3A30%22%2C%22updated_at%22%3A%222023-04-29T10%3A09%3A13%2B05%3A30%22%2C%22alt%22%3Anull%2C%22width%22%3A1500%2C%22height%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2F"
		"Pack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%2C%22variant_ids%22%3A%5B42333547233455%5D%7D%2C%22available%22%3Atrue%2C%22name%22%3A%22Soya+Coconut+Fry+200g+-+Pack+6%22%2C%22public_title%22%3A%22Pack+6%22%2C%22options%22%3A%5B%22Pack+"
		"6%22%5D%2C%22price%22%3A87300%2C%22weight%22%3A1800%2C%22compare_at_price%22%3A90000%2C%22inventory_management%22%3A%22shopify%22%2C%22barcode%22%3A%228907093007065%22%2C%22featured_media%22%3A%7B%22alt%22%3Anull%2C%22id%22%3A28389635817647%2C%22position%22%3A6%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%7D%7D%2C"
		"%22requires_selling_plan%22%3Afalse%2C%22selling_plan_allocations%22%3A%5B%5D%7D%2C%7B%22id%22%3A42571467587759%2C%22title%22%3A%22Pack+1%22%2C%22option1%22%3A%22Pack+"
		"1%22%2C%22option2%22%3Anull%2C%22option3%22%3Anull%2C%22sku%22%3A%22CPDFG31703%22%2C%22requires_shipping%22%3Atrue%2C%22taxable%22%3Afalse%2C%22featured_image%22%3A%7B%22id%22%3A35973954470063%2C%22product_id%22%3A7465768911023%2C%22position%22%3A1%2C%22created_at%22%3A%222023-02-23T16%3A53%3A14%2B05%3A30%22%2C%22updated_at%22%3A%222023-04-29T10%3A09%3A13%2B05%3A30%22%2C%22alt%22%3Anull%2C%22width%22%3A1500%2C%22height%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2F"
		"Frontside_2.jpg%3Fv%3D1682743153%22%2C%22variant_ids%22%3A%5B42571467587759%5D%7D%2C%22available%22%3Atrue%2C%22name%22%3A%22Soya+Coconut+Fry+200g+-+Pack+1%22%2C%22public_title%22%3A%22Pack+1%22%2C%22options%22%3A%5B%22Pack+"
		"1%22%5D%2C%22price%22%3A15000%2C%22weight%22%3A250%2C%22compare_at_price%22%3A15000%2C%22inventory_management%22%3A%22shopify%22%2C%22barcode%22%3A%228907093006969%22%2C%22featured_media%22%3A%7B%22alt%22%3Anull%2C%22id%22%3A28389634080943%2C%22position%22%3A1%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%7D%7D%2C%22requires_selling_plan%22%3Afalse"
		"%2C%22selling_plan_allocations%22%3A%5B%5D%7D%5D%2C%22images%22%3A%5B%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBackside_e55d304c-aae5-4b10-84f2-16c8cd00ff0c.jpg%3Fv%3D1682743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_1_dbd4c3d2-a6cf-4ace-ae45-6e13a34cf8ab.jpg%3Fv%3D1682743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritionfact.jpg%3Fv%3D16"
		"82743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FAddressside_1.jpg%3Fv%3D1682743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%5D%2C%22featured_image%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%2C%22options%22%3A%5B%22Size%22%5D%2C%22media%22%3A%5B%7B%22alt%22%3Anull%2C%22id%22%3A28389634080943%2C%22position%22%3A1%2C%22preview_image%22%3A%7"
		"B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28389634048175%2C%22position%22%3A2%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3"
		"A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBackside_e55d304c-aae5-4b10-84f2-16c8cd00ff0c.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBackside_e55d304c-aae5-4b10-84f2-16c8cd00ff0c.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28389634113711%2C%22position%22%3A3%"
		"2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_1_dbd4c3d2-a6cf-4ace-ae45-6e13a34cf8ab.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_1_dbd4c3d2-a6cf-4ace-ae45-6e13a34cf8ab.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22"
		"%3Anull%2C%22id%22%3A28389634146479%2C%22position%22%3A4%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritionfact.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritionfact.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%2"
		"2%3A28389634015407%2C%22position%22%3A5%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FAddressside_1.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FAddressside_1.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A2838963581764"
		"7%2C%22position%22%3A6%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%5"
		"D%2C%22requires_selling_plan%22%3Afalse%2C%22selling_plan_groups%22%3A%5B%5D%2C%22content%22%3A%22%3Cp%3E%3Cstrong%3ESoya+Coconut+Fry+%3A%3C%2Fstrong%3E+Soy+is+a+nutrient-dense+source+of+protein+that+can+safely+be+consumed+several+times+a+week%2C+and+probably+more+often%2C+and+is+likely+to+provide+health+benefits%E2%80%94especially+when+eaten+as+an+alternative+to+red+and+processed+meat.%3C%2Fp%3E%5Cn%3Cp%3ETasty+Nibbles+Soya+Coconut+Fry+is+a+yummy+and+wholesome+dish+where+soya+chunks+are+cooked+in"
		"+delectable+mix+of+masalas.+This+is+Ready+to+eat+product+and+perfect+side+dish+to+go+with+rice%C2%A0or%C2%A0chapatti.%3C%2Fp%3E%5Cn%3Cp%3EOpen+Heat+%26amp%3B+Eat%3C%2Fp%3E%5Cn%3Cp%3E%3Cspan%3ENo+added+preservatives+or+additives.%3C%2Fspan%3E%3C%2Fp%3E%5Cn%3Cp%3EJapanese+Retort+Technology%3C%2Fp%3E%5Cn%3Cp%3EOnce+opened%2C+consume+immediately%3C%2Fp%3E%5Cn%3Cp%3E18+months+shelf+life+at+room+"
		"temperature%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3EINGREDIENTS%3A%3C%2Fstrong%3E%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3ESoya+chunks%2C%3C%2Fstrong%3E+Spices+%26amp%3B+Condiments+(Big+onion%2C+Ginger%2C+Garlic%2C+Green+chilli%2C+Small+Onion%2C+Kashmiri+chilli+powder%2C+Red+chilli+powder%2C+Coriander+powder%2C+%3Cstrong%3EMustard+seeds%2C%3C%2Fstrong%3E+Red+chilli%2C+Turmeric+powder%2C+Fennel%2C+Cardamom%2C+Cinnamon%2C+Cumin%2C+Black+pepper%2C+Curry+leaves)%2C+Salt%2C+Water%2C+Grated+coconut%2C+Coconut+oil%2C+"
		"Coconut+flakes.%3C%2Fp%3E%5Cn%3Cp%3EAvailable+quantity+%3A+200g%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3EHOW+TO+USE%3A%3C%2Fstrong%3E%3C%2Fp%3E%5Cn%3Cp%3EThis+product+is+ready-to-eat+form+can+be+consumed+straight+out+of+the+pack+or+warmed+up+as+below%3C%2Fp%3E%5Cn%3Cp%3ECut+pouch%2C+empty+contents+into+a+frying+pan+and+heat+for+3+to+5+minutes+while+stirring.+Serve+hot.+(OR)%3C%2Fp%3E%5Cn%3Cp%3EEmpty+the+contents+of+the+pouch+into+a+microwave+bowl.+Microwave+for+1+to+2+minutes.+Serve+hot.%C2%A0(OR)"
		"%C2%A0%3C%2Fp%3E%5Cn%3Cp%3EImmerse+the+unopened+pouch+in+boiling+water+for+3+to+5+minutes.+Remove%2C+cut%2C+open+and+serve.%3C%2Fp%3E%22%7D%2C%22product_collections%22%3A%7B%227465768911023%22%3A%5B310480994479%2C288549011631%2C309449097391%2C263548338351%2C264901460143%2C267152097455%2C264901525679%5D%7D%2C%22first_variant%22%3A%7B%22id%22%3A42333547233455%2C%22title%22%3A%22Pack+6%22%2C%22option1%22%3A%22Pack+"
		"6%22%2C%22option2%22%3Anull%2C%22option3%22%3Anull%2C%22sku%22%3A%22CPDFG31705%22%2C%22requires_shipping%22%3Atrue%2C%22taxable%22%3Afalse%2C%22featured_image%22%3A%7B%22id%22%3A35973956305071%2C%22product_id%22%3A7465768911023%2C%22position%22%3A6%2C%22created_at%22%3A%222023-02-23T16%3A53%3A38%2B05%3A30%22%2C%22updated_at%22%3A%222023-04-29T10%3A09%3A13%2B05%3A30%22%2C%22alt%22%3Anull%2C%22width%22%3A1500%2C%22height%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2F"
		"Pack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%2C%22variant_ids%22%3A%5B42333547233455%5D%7D%2C%22available%22%3Atrue%2C%22name%22%3A%22Soya+Coconut+Fry+200g+-+Pack+6%22%2C%22public_title%22%3A%22Pack+6%22%2C%22options%22%3A%5B%22Pack+"
		"6%22%5D%2C%22price%22%3A87300%2C%22weight%22%3A1800%2C%22compare_at_price%22%3A90000%2C%22inventory_management%22%3A%22shopify%22%2C%22barcode%22%3A%228907093007065%22%2C%22featured_media%22%3A%7B%22alt%22%3Anull%2C%22id%22%3A28389635817647%2C%22position%22%3A6%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%7D%7D%2C"
		"%22requires_selling_plan%22%3Afalse%2C%22selling_plan_allocations%22%3A%5B%5D%7D%2C%22cart_collections%22%3A%7B%7D%2C%22page_template%22%3A%22product%22%7D&feks_products=%5B%7B%22product_id%22%3A7465768911023%2C%22quantity%22%3A1%2C%22title%22%3A%22Soya+Coconut+Fry+200g+-+Pack+"
		"6%22%2C%22handle%22%3A%22ready-to-eat-soya-coconut-fry-200g%22%2C%22line_price%22%3A87300%2C%22price%22%3A87300%2C%22variant_id%22%3A42333547233455%2C%22product_has_only_default_variant%22%3Afalse%2C%22collection_ids%22%3A%5B310480994479%2C288549011631%2C309449097391%2C263548338351%2C264901460143%2C267152097455%2C264901525679%5D%7D%5D&feks_page_template=product&feks_cart_total=87300&wizz_custom_cart_items="
		"%5B%7B%22id%22%3A42333547233455%2C%22quantity%22%3A1%2C%22variant_id%22%3A42333547233455%2C%22product_id%22%3A7465768911023%2C%22discounted_price%22%3A87300%2C%22wizz_offer_data%22%3A%22null%22%2C%22belong_to_collections%22%3A%5B310480994479%2C288549011631%2C309449097391%2C263548338351%2C264901460143%2C267152097455%2C264901525679%5D%7D%5D&currency_rate=1.0&browser_info=%7B%7D&promotion_url=", 
		LAST);

	web_add_cookie("processing_auto_add=true; DOMAIN=www.tastynibbles.in");

	web_submit_data("add.js_2", 
		"Action=https://www.tastynibbles.in/cart/add.js?discos=true", 
		"Method=POST", 
		"RecContentType=text/javascript", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=42727349354671", ENDITEM, 
		"Name=quantity", "Value=1", ENDITEM, 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661641.31.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_46",
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch",
		"Method=POST",
		"Resource=0",
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r",
		"Snapshot=t182.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661641605},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42c0439-0E79-4247-A2EC-82F99AAF91F8\",\"products\":[\"{\\\"variant_id\\\":42727349354671,\\\"product_id\\\":7601499078831,\\\"name\\\":\\\"Vegetable Fish Curry 200g\\\",\\\"price\\\":150,\\\"sku\\\":\\\"CPDFG31859\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":null,\\\"category\\\":\\\"\\\",\\\"quantity\\\":1}\"],\"total_value\":150,\"currency\":\"INR\",\"cart_token\":\"{CorrelationParameter}\",\"event_name\":\"product_added_to_cart\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661641604,\"event_source_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d42b2599-4B02-40DD-EED6-755641006312\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\""
		":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42b259f-815F-4528-D26B-E726DE8FE876\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661641605}}]}",
		LAST);

	web_custom_request("produce_batch_47", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661641605},\"events\":[{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"addedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\"content_ids\\\":[7601499078831],\\\"content_type\\\":\\\""
		"product_group\\\",\\\"content_name\\\":\\\"Vegetable Fish Curry 200g\\\",\\\"content_category\\\":\\\"\\\",\\\"currency\\\":\\\"INR\\\",\\\"value\\\":\\\"150.00\\\",\\\"num_items\\\":\\\"1\\\"}\",\"event_id\":\"sh-d42c0439-0E79-4247-A2EC-82F99AAF91F8\"},\"metadata\":{\"event_created_at_ms\":1708661641587}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"addedProduct\",\"unique_token\":\""
		"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"item\\\":{\\\"id\\\":\\\"CPDFG31859\\\",\\\"name\\\":\\\"Vegetable Fish Curry 200g\\\",\\\"category\\\":\\\"\\\",\\\"quantity\\\":\\\"1\\\",\\\"price\\\":150,\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":null,\\\"currency\\\":\\\"INR\\\"},\\\"event\\\":{\\\"eventCategory\\\":\\\"EnhancedEcommerce\\\""
		",\\\"eventAction\\\":\\\"Added Product\\\",\\\"nonInteraction\\\":true}}\"},\"metadata\":{\"event_created_at_ms\":1708661641587}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"addedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\""
		"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/nYbCCNiDyPoCELWQ1bQB\\\"],\\\"ecomm_prodid\\\":[\\\"shopify_IN_7601499078831_42727349354671\\\"],\\\"ecomm_totalvalue\\\":150,\\\"ecomm_pagetype\\\":\\\"cart\\\",\\\"value\\\":150,\\\"currency\\\":\\\"INR\\\",\\\"items\\\":[{\\\"id\\\":\\\"shopify_IN_7601499078831_42727349354671\\\",\\\"name\\\":\\\"Vegetable Fish Curry 200g\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"category\\\":\\\"\\\",\\\"price\\\":\\\"150\\\",\\\"quantity\\\":\\\"1\\\",\\\""
		"variant\\\":null}]}\"},\"metadata\":{\"event_created_at_ms\":1708661641604}}]}", 
		LAST);

	web_custom_request("produce_batch_48", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661641606},\"events\":[{\"schema_id\":\"trekkie_storefront_track_added_product/1.1\",\"payload\":{\"event\":\"monorail://trekkie_storefront_track_added_product/1.1\",\"properties\":{},\"eventId\":\"d42c0469-E054-493F-7BFA-E8DCD3F08666\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"referer\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\""
		"variantId\":\"42727349354671\",\"productId\":7601499078831,\"currency\":\"INR\",\"quantity\":\"1\",\"price\":150,\"name\":\"Vegetable Fish Curry 200g\",\"sku\":\"CPDFG31859\",\"brand\":\"Tasty Nibbles\",\"variant\":null,\"category\":\"\",\"pageType\":\"product\",\"resourceType\":\"product\",\"resourceId\":7465768911023,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"appName\":\"storefront\",\""
		"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d42b2599-4B02-40DD-EED6-755641006312\",\"microSessionCount\":8,\"isPersistentCookie\":true,\"eventType\":\"track\"},\"metadata\":{\"event_created_at_ms\":1708661641606}}]}", 
		LAST);

	web_url("cart_8", 
		"URL=https://www.tastynibbles.in/cart?view=appikon.json&_=1708661613544", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=a50b8ab8-99b9-4115-af7b-04e152d03c64; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_49", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661642083},\"events\":[{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\""
		"event_id\":\"sh-d42c0439-0E79-4247-A2EC-82F99AAF91F8\"},\"metadata\":{\"event_created_at_ms\":1708661641583}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\""
		"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d42c0439-0E79-4247-A2EC-82F99AAF91F8\"},\"metadata\":{\"event_created_at_ms\":1708661641584}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\""
		"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\""
		":\"sh-d42c0439-0E79-4247-A2EC-82F99AAF91F8\"},\"metadata\":{\"event_created_at_ms\":1708661641584}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\""
		"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d42c0439-0E79-4247-A2EC-82F99AAF91F8\"},\"metadata\":{\"event_created_at_ms\":1708661641584}}]}", 
		LAST);

	web_url("kerala-fish-curry-shappile-curry-185g", 
		"URL=https://www.tastynibbles.in/products/kerala-fish-curry-shappile-curry-185g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ready-to-eat-soya-coconut-fry-200g_4", 
		"URL=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		LAST);

	
	web_custom_request("produce_batch_50", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661644766},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\""
		"sh-d42b259f-815F-4528-D26B-E726DE8FE876\",\"run_time_duration\":667,\"start_time\":863,\"page_duration\":31709},\"metadata\":{\"event_created_at_ms\":1708661644766}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661644.28.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661644.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_51", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661645118},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-reload\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661645118}}]}", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A14%3A05.174Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_52", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661645210},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42ba2fd-B671-44CD-AC60-621D24029932\",\"products\":[\"{\\\"variant_id\\\":42333547233455,\\\"product_id\\\":7465768911023,\\\"product_gid\\\":\\\"gid://shopify/Product/7465768911023\\\",\\\"name\\\":\\\"Soya Coconut Fry 200g - Pack 6\\\",\\\"price\\\":873,\\\"sku\\\":\\\"CPDFG31705\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":\\\"Pack "
		"6\\\",\\\"category\\\":\\\"Ready to Eat Veg\\\",\\\"quantity\\\":1}\"],\"total_value\":873,\"currency\":\"INR\",\"event_name\":\"product_page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661645205,\"event_source_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\""
		"d42ba2ef-DDD5-42C7-D68F-BEDD419133AC\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"reload\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\""
		"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42ba2f5-7730-4CB8-2BDE-0D1792395AFC\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661645210}}]}", 
		LAST);

	web_custom_request("produce_batch_53", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661645173},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"path\":\"/products/ready-to-eat-soya-coconut-fry-200g\",\"search\":\"?_pos=1&_sid=19c5d7ae0&_ss=r\",\"title\":\"Soya Coconut Fry 200g \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/products/"
		"ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"properties\":{},\"eventId\":\"sh-d42ba2fb-510D-40F1-8AAE-27817A9BF7DA\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"reload\"},\"pageType\":\"product\",\"customerId\":7180378964143,\"resourceType\":\"product\",\"resourceId\":7465768911023,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\""
		"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d42ba2ef-DDD5-42C7-D68F-BEDD419133AC\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661645173}}]}", 
		LAST);

	web_custom_request("produce_batch_54", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661645203},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42ba2fb-510D-40F1-8AAE-27817A9BF7DA\",\"referrer\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"canonical_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\","
		"\"facebook_capi_enabled\":true,\"event_time\":1708661645201,\"event_source_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d42ba2ef-DDD5-42C7-D68F-BEDD419133AC\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"reload\",\"navigation_api\":\""
		"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42ba2f5-7730-4CB8-2BDE-0D1792395AFC\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661645203}}]}", 
		LAST);

	web_url("ready-to-eat-soya-coconut-fry-200g_5", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("produce_batch_55", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661645211},\"events\":[{\"schema_id\":\"trekkie_storefront_viewed_product/1.1\",\"payload\":{\"event\":\"monorail://trekkie_storefront_viewed_product/1.1\",\"properties\":{},\"eventId\":\"d42ba3ab-8FE2-4627-0B67-E7FEFA678EC2\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"reload\"},\"currency\":\"INR\",\"variantId\":42333547233455,\"productId\":7465768911023,\"productGid\":\"gid://shopify/Product/7465768911023\""
		",\"name\":\"Soya Coconut Fry 200g - Pack 6\",\"price\":\"873.00\",\"sku\":\"CPDFG31705\",\"brand\":\"Tasty Nibbles\",\"variant\":\"Pack 6\",\"category\":\"Ready to Eat Veg\",\"nonInteraction\":true,\"referer\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"appName\":\"storefront\",\"uniqToken\":\""
		"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d42ba2ef-DDD5-42C7-D68F-BEDD419133AC\",\"microSessionCount\":3,\"isPersistentCookie\":true,\"eventType\":\"track\"},\"metadata\":{\"event_created_at_ms\":1708661645211}}]}", 
		LAST);

	web_custom_request("produce_batch_56", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661645211},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661645118}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d42ba2fb-510D-40F1-8AAE-27817A9BF7DA\"},\"metadata\":{\"event_created_at_ms\":1708661645174}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\\\\\",\\\\\"title\\\\\":\\\\\"Soya Coconut Fry "
		"200g \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661645174}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\""
		"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/products/ready-to-eat-soya-coconut-fry-200g\\\\\",\\\\\"page_title\\\\\":\\\\\"Soya Coconut Fry 200g \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/products/"
		"ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661645201}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"viewedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\""
		"{\\\\\"content_ids\\\\\":[7465768911023],\\\\\"content_type\\\\\":\\\\\"product_group\\\\\",\\\\\"content_name\\\\\":\\\\\"Soya Coconut Fry 200g - Pack 6\\\\\",\\\\\"content_category\\\\\":\\\\\"Ready to Eat Veg\\\\\",\\\\\"currency\\\\\":\\\\\"INR\\\\\",\\\\\"value\\\\\":\\\\\"873.00\\\\\"}\",\"event_id\":\"sh-d42ba2fd-B671-44CD-AC60-621D24029932\"},\"metadata\":{\"event_created_at_ms\":1708661645205}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\""
		":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"viewedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"item\\\\\":{\\\\\"id\\\\\":\\\\\"CPDFG31705\\\\\",\\\\\"name\\\\\":\\\\\"Soya Coconut Fry 200g - Pack 6\\\\\",\\\\\"category\\\\\":\\\\\"Ready to Eat Veg\\\\\",\\\\\"quantity\\\\\":1,\\\\\"price\\\\\""
		":\\\\\"873.00\\\\\",\\\\\"brand\\\\\":\\\\\"Tasty Nibbles\\\\\",\\\\\"variant\\\\\":\\\\\"Pack 6\\\\\",\\\\\"currency\\\\\":\\\\\"INR\\\\\"},\\\\\"event\\\\\":{\\\\\"eventCategory\\\\\":\\\\\"Ready to Eat Veg\\\\\",\\\\\"eventAction\\\\\":\\\\\"Viewed Product\\\\\",\\\\\"nonInteraction\\\\\":true}}\"},\"metadata\":{\"event_created_at_ms\":1708661645205}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\""
		"event_name\":\"viewedProduct\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/hk9rCNWDyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"ecomm_prodid\\\\\":[\\\\\"shopify_IN_7465768911023_42333547233455\\\\\"],\\\\\"ecomm_totalvalue\\\\\":null,\\\\\"ecomm_pagetype\\\\\":\\\\\""
		"product\\\\\",\\\\\"items\\\\\":[{\\\\\"id\\\\\":\\\\\"shopify_IN_7465768911023_42333547233455\\\\\",\\\\\"name\\\\\":\\\\\"Soya Coconut Fry 200g - Pack 6\\\\\",\\\\\"brand\\\\\":\\\\\"Tasty Nibbles\\\\\",\\\\\"category\\\\\":\\\\\"Ready to Eat Veg\\\\\",\\\\\"price\\\\\":\\\\\"873.00\\\\\",\\\\\"variant\\\\\":\\\\\"Pack 6\\\\\"}]}\"},\"metadata\":{\"event_created_at_ms\":1708661645205}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661645.27.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661645.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_57", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661645649},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661645120}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661645123}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/"
		"ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42ba2fb-510D-40F1-8AAE-27817A9BF7DA\"},\"metadata\":{\"event_created_at_ms\":1708661645124}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42ba2fd-B671-44CD-AC60-621D24029932\"},\"metadata\":{\"event_created_at_ms\":1708661645125}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\""
		"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42ba2fb-510D-40F1-8AAE-27817A9BF7DA\"},\"metadata\":{\"event_created_at_ms\":1708661645360}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id"
		"\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42ba2fd-B671-44CD-AC60-621D24029932\"},\"metadata\":{\"event_created_at_ms\":1708661645360}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\""
		"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\""
		"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":235,\"start_time\":955,\"session_id\":\"sh-d42ba2f5-7730-4CB8-2BDE-0D1792395AFC\"},\"metadata\":{\"event_created_at_ms\":1708661645360}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss="
		"r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42ba2fb-510D-40F1-8AAE-27817A9BF7DA\"},\"metadata\":{\"event_created_at_ms\":1708661645361}},{\"schema_id\":\""
		"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\""
		"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42ba2fd-B671-44CD-AC60-621D24029932\"},\"metadata\":{\"event_created_at_ms\":1708661645361}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\""
		"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":235,\"start_time\":956,\"session_id\":\"sh-d42ba2f5-7730-4CB8-2BDE-0D1792395AFC\"},\"metadata\":{\"event_created_at_ms\""
		":1708661645362}}]}", 
		LAST);

	web_custom_request("track_15", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vcHJvZHVjdHMvcmVhZHktdG8tZWF0LXNveWEtY29jb251dC1mcnktMjAwZz9fcG9zPTEmX3NpZD0xOWM1ZDdhZTAmX3NzPXIiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lQlhnTXNsV0tGbmRaIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZW"
		"NhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbiI6ImFiZmVmM2QyLTVmNjItNDZjMC1iZjMxLWM2NDYwZmE0NWQ2MCJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTpjb25maWciLCJ0aW1lc3RhbXAiOjE3MDg2NjE2NDYxOTIsInByb3BlcnRpZXMiOnsiZGF0YSI6eyJtZXJjaGFudF9rZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsInNob3VsZFVzZVNob3BJZCI6ZmFsc2UsImdUYWdJZCI6IiIsImd0YWdMYWJlbCI6IiIsInJhem9ycGF5TWFnaWNCdG5Db25maWciOnt9LCJjaGVja291dE9wdGlvbnMiOnsibmFtZSI6IiJ9LCJjYXJ0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1h"
		"Z2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNoZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJwcm9kdWN0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1hZ2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNoZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJjdXN0b21Dc3MiOiIifX19XX0%3D\"}", 
		LAST);

	web_url("42333547233455_2", 
		"URL=https://www.tastynibbles.in//variants/42333547233455/?section_id=store-availability", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=21f50eda-e05a-46e8-ab8b-a7e19b7e0d92; DOMAIN=www.tastynibbles.in");

	web_url("cart_9", 
		"URL=https://www.tastynibbles.in/cart?t=1708661645743&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart_10", 
		"URL=https://www.tastynibbles.in/cart?view=appikon.json&_=1708661645666", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=36ef7dda-364f-433d-ae7b-4c31b0613c19; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_58", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661646842},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\""
		":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42ba2fb-510D-40F1-8AAE-27817A9BF7DA\"},\"metadata\":{\"event_created_at_ms\":1708661646332}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42ba2fd-B671-44CD-AC60-621D24029932\"},\"metadata\":{\"event_created_at_ms\":1708661646333}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\""
		"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\""
		"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":1206,\"start_time\":957,\"session_id\":\"sh-d42ba2f5-7730-4CB8-2BDE-0D1792395AFC\"},\"metadata\":{\"event_created_at_ms\":1708661646333}}]}", 
		LAST);

	web_custom_request("track_16", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vcHJvZHVjdHMvcmVhZHktdG8tZWF0LXNveWEtY29jb251dC1mcnktMjAwZz9fcG9zPTEmX3NpZD0xOWM1ZDdhZTAmX3NzPXIiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lQlhnTXNsV0tGbmRaIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZW"
		"NhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbiI6ImFiZmVmM2QyLTVmNjItNDZjMC1iZjMxLWM2NDYwZmE0NWQ2MCJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTptYWdpY19zZGtfaW5qZWN0ZWQiLCJ0aW1lc3RhbXAiOjE3MDg2NjE2NDcxOTQsInByb3BlcnRpZXMiOnsicmVhc29uIjoiZG9tIn19XX0%3D\"}", 
		LAST);

	web_url("public_8", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("configs_6", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=customer_info", "Value={\"id\":7180378964143,\"name\":\"AAA BBB\",\"email\":\"xyz@abc.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", ENDITEM, 
		"Name=customer_location", "Value=null", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	web_custom_request("envelope_5", 
		"URL=https://o515678.ingest.sentry.io/api/6398391/envelope/?sentry_key=16be5f91f20c459cbfb51e421f4c9d2f&sentry_version=7&sentry_client=sentry.javascript.browser%2F7.64.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"sent_at\":\"2024-02-23T04:14:07.544Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"7.64.0\"}}\n{\"type\":\"session\"}\n{\"sid\":\"5260a0ed9b0f44d18b5f7165c0656771\",\"init\":true,\"started\":\"2024-02-23T04:14:07.543Z\",\"timestamp\":\"2024-02-23T04:14:07.544Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"d43430ddaebbedea49f590c6812d6bc41f57f7bd\",\"environment\":\"__S_TRAFFIC_ENV__\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/"
		"537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\"}}", 
		LAST);

	web_url("c1a778d0cb1e42f1_7", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("active_camp", 
		"URL=https://www.tastynibbles.in/apps/discos/active_camp?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("products.json_7", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t210.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json_8", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json_9", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("produce_8", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"effective_type\":\"4g\",\"boomerang_init\":1708661646308,\"server_timing\":\"{\\\"processing\\\":[249,\\\"gc:53\\\"],\\\"db\\\":[60,\\\"\\\"],\\\"edge_cart\\\":[1.22,\\\"count=1\\\"],\\\"render\\\":[61,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"product\\\"],\\\"servedBy\\\":"
		"[0,\\\"9wbf\\\"],\\\"requestID\\\":[0,\\\"b39bb72c-6d3f-44c8-8099-8c602bbf86a2\\\"],\\\"cfRequestDuration\\\":[526.99995,\\\"\\\"]}\",\"session_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":2494,\"cumulative_layout_shift_score\":0.0006357456374308982,\"total_duration_long_tasks"
		"\":678,\"number_long_tasks\":3,\"visually_ready\":2495,\"first_paint\":1491,\"first_contentful_paint\":2094,\"navigation_start\":1708661644171,\"fetch_start\":1708661644172,\"domain_lookup_start\":1708661644172,\"domain_lookup_end\":1708661644172,\"connect_start\":1708661644172,\"connect_end\":1708661644172,\"request_start\":1708661644174,\"response_start\":1708661644756,\"response_end\":1708661645489,\"dom_loading\":1708661644839,\"dom_interactive\":1708661645691,\"dom_content_loaded_event_start"
		"\":1708661646192,\"dom_content_loaded_event_end\":1708661646203,\"dom_complete\":1708661647579,\"load_event_start\":1708661647579,\"load_event_end\":1708661647615,\"unload_event_start\":1708661644830,\"unload_event_end\":1708661644830,\"secure_connection_start\":1708661644172,\"encoded_body_size\":101621,\"decoded_body_size\":497135,\"transfer_size\":101921,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"reload\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\"
		"\"dn.\\\":{\\\"shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3nb,2,2,2*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3ov,f,f,e*19rw,_,iej*23\\\"},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.\\\":{\\\"js\\\":\\\"3on*118cm,_,3kah*22\\\",\\\"css\\\":\\\"214z,2,1,1*15gb,_,nbb*44\\\"}},\\\"judge.me/widget_v3/base.css\\\":\\\"21k7,39*44\\\"},\\\"onnect.facebook.net/\\\":{\\\"en_US/fbevents.js\\\":\\\"3rc"
		",3,1,1*1186h,_,3h76*21\\\",\\\"signals/config/511162776752735?...\\\":\\\"3tu,1,1,1*18hq,_,x5v*21\\\"},\\\"heckout.razorpay.com/v1/magic-checkout.js\\\":\\\"32c0,z*25\\\"},\\\"a\\\":{\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"310w,2,1,1*1q9o,_,1cuu*21\\\",\\\"3.\\\":{\\\"3.1/jquery.min.js\\\":\\\"313t,1,1*1ngf,_,17m8*21\\\",\\\"5.1/jquery.min.js\\\":\\\"315w*1nxp,_,193r*24\\\"}},\\\"maicdn.com/discountmanager/\\\":{\\\"common.\\\":{\\\"js\\\":\\\"3111*24\\\",\\"
		"\"css\\\":\\\"214s,1*44\\\"},\\\"store/5aa2650a51d24b0ad2f4635c32a13771.js?1708661645603\\\":\\\"3168,1ag*21\\\"}},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"theme.\\\":{\\\"css?v=88179064826295383661708612564\\\":\\\"2in,f,e,d*1ozf,_,2y02*44\\\",\\\"min.js?v=142180294906365401511651758011\\\":\\\"2in*1p0z,_,22j3*22*42\\\"},\\\"vendor-scripts-v1.js\\\":\\\"3ip*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v="
		"2076242293115890491652863580\\\":\\\"3ne*17mf,_,m90*20\\\"},\\\"files/\\\":{\\\"F\\\":{\\\"ishBhurji200g_400x.jpg?v=1702114223\\\":\\\"1pr*1jzm,_\\\",\\\"rontSide_Cinnamon_400x.jpg?v=1700203722\\\":\\\"1pt*1eru,_\\\"},\\\"Tasty_Nibbles_Logo_\\\":{\\\"100x.png?v=1652340733\\\":\\\"*028,2s,h3,2i|1pd*13z2,_\\\",\\\"90x.png?v=1652340733\\\":\\\"1pd*13mm,_\\\"},\\\"Roastedcoconutpaste_400x.jpg?v=1693655397\\\":\\\"1ps*1df8,_\\\",\\\"Datespickle400g_400x.jpg?v=1693468132\\\":\\\"1ps*1bi0,_\\\",\\\""
		"Samudrasadhyaspecial_400x.jpg?v=1702120774\\\":\\\"1pu*1q8k,_\\\"},\\\"products/\\\":{\\\"8907093060763_01Frontside_400x.jpg?v=1663566067\\\":\\\"1ps*1ec2,_\\\",\\\"tunaintomato2_400x.jpg?v=1644221401\\\":\\\"1pr*1dgs,_\\\",\\\"Pack6_1_354e94cd-f9ee-4051-911c-c8f8998f0f9a_400x.jpg?v=1671703708\\\":\\\"1pt*1s16,_\\\"}},\\\"ifycloud/shopify/assets/s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3io*12sn,_,6ke*22\\\",\\\""
		"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3io*1a2h,_,j05*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3oq,k,i,i*1294,_,456*21\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3oq,k,i,i*1k49,_,1w1n*21\\\"},\\\"fonts/\\\":{\\\"itc_stepp/itcstepp_n7.c\\\":{\\\"8023ed34da33638b911832310ffb6d4da1e405f.woff?h1=dGFzdHluaWJibGVzLmlu&h2="
		"dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=89b6b3def73e0926121f910cd8617bfe5d772ffbe43cf352f2e8b9388f684f43\\\":\\\"4ng*1drs,_\\\",\\\"ef5242f78dd0b48264b9f0d29ee3573eb745142.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=0f3b4f4c02bf57220f14f5252b063e6db04449dde6617def7fba1b37662e1bc1\\\":\\\"4ng*1duw,_\\\"},\\\"harmonia_sans/harmoniasans_\\\":{\\\"n\\\":{\\\"4.73cf0589f7839ec88463a09f5335a2885467ed0c.woff2?h1=dGFzdHluaWJibGVzLmlu&h2="
		"dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=3534ec91f641c08cf2dc49948f0afce133989e28b219b46f7676e032bbf054fc\\\":\\\"4nh*1gr8,_\\\",\\\"6.dd3d6084d29e4754e80fe6aa1c0e37f511474ffa.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a7a0d8b76b98542c3b5fdeaf5288e7f5da97e48d170f6ec0206b03811a5740e9\\\":\\\"4nh*1hi8,_\\\"},\\\"i6.\\\":{\\\"5ea0fa072a0601a91bbd7e0301549f9159a09ada.woff?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac"
		"=03968155dbfe4004e296c411180f2ad5916bd754dae40190824eadab15b5d220\\\":\\\"4ni*1i3c,_\\\",\\\"d520474355816f56169b3a79baa14d2c479da2ba.woff2?h1=dGFzdHluaWJibGVzLmlu&h2=dGFzdHluaWJibGVzLmFjY291bnQubXlzaG9waWZ5LmNvbQ&hmac=a1748412abf67becfadddbf5f0bd2cb6df5e1fdd42927a51c439aec4d87f59eb\\\":\\\"4nh*1i2o,_\\\"}}},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3op,j,i,i*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3in,37,"
		"36,e*1su,8c,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3nd,6a*21\\\",\\\"google\\\":{\\\"-analytics.com/analytics.js\\\":\\\"3rf,7m*21\\\",\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3rg,1d*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"3w3,4*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"3w4,5*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3ru,x*21\\\"},\\\"adservices.com/pagead/conversion/378882101/?...\\\":\\\"3z3,27,26,1*11mg,8c,184*21|"
		"3zk,27,25,1*11na,8c,17v*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3io*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"314z*26\\\"}}\",\"url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"referrer\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"boomerang_version\":\"2.3.2\"},\""
		"metadata\":{\"event_created_at_ms\":1708661645248,\"event_sent_at_ms\":1708661647814}}", 
		LAST);

	web_custom_request("collect_49", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661645159&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&dt=Soya%20Coconut%20Fry%20200g%20%E2%80%93%20Tasty%20Nibbles&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2Fproducts%2Fready-to-eat-soya-coconut-fry-200g%3F_pos%3D1%26_sid%3D19c5d7ae0%26_ss%3Dr&sid=1708661464&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2Fproducts%2Fready-to-eat-soya-coconut-fry-200g%3F_pos%3D1%26_sid%3D19c5d7ae0%26_ss%3Dr&_s=1&tfd=6325", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=page_view&_ee=1&dp=%2Fproducts%2Fready-to-eat-soya-coconut-fry-200g\r\nen=view_item&_ee=1&pr1=idshopify_IN_7465768911023_42333547233455~nmSoya%20Coconut%20Fry%20200g%20-%20Pack%206~brTasty%20Nibbles~caReady%20to%20Eat%20Veg~pr873.00~vaPack%206&ep.ecomm_prodid=shopify_IN_7465768911023_42333547233455&ep.ecomm_totalvalue=NaN&ep.ecomm_pagetype=product", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	/* Checkout */

	web_submit_data("tr", 
		"Action=https://www.facebook.com/tr/", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=511162776752735", ENDITEM, 
		"Name=ev", "Value=SubscribedButtonClick", ENDITEM, 
		"Name=dl", "Value=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", ENDITEM, 
		"Name=rl", "Value=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", ENDITEM, 
		"Name=if", "Value=false", ENDITEM, 
		"Name=ts", "Value=1708661667514", ENDITEM, 
		"Name=cd[buttonFeatures]", "Value={\"classList\":\"btn cart__checkout\",\"destination\":\"https://www.tastynibbles.in/cart\",\"id\":\"\",\"imageUrl\":\"\",\"innerText\":\"Check out\",\"numChildButtons\":0,\"tag\":\"button\",\"type\":\"submit\",\"name\":\"checkout\",\"value\":\"\"}", ENDITEM, 
		"Name=cd[buttonText]", "Value=Check out", ENDITEM, 
		"Name=cd[formFeatures]", "Value=[{\"id\":\"cart_updates_42727349354671:6745ffb8-1a74-4cbe-ae8f-b2bb9e9aec7d\",\"name\":\"updates[]\",\"tag\":\"input\",\"inputType\":\"text\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"cart_updates_42333547233455:5773c24b-3418-4761-b308-eca4b1e5da3e\",\"name\":\"updates[]\",\"tag\":\"input\",\"inputType\":\"text\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\""
		"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\""
		"tag\":\"button\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"},{\"id\":\"CartHeaderNote\",\"name\":\"note\",\"tag\":\"textarea\",\"valueMeaning\":\"empty\"},{\"id\":\"\",\"name\":\"checkout_discount\",\"tag\":\"input\",\"placeholder\":\"Discount code\",\"inputType\":\"text\",\"valueMeaning\":\"empty\"},{\"id\":\"\",\"name\":\"\",\"tag\":\"button\"}]", ENDITEM, 
		"Name=cd[pageFeatures]", "Value={\"title\":\"Soya Coconut Fry 200g\\nâ\x80“ Tasty Nibbles\\n\"}", ENDITEM, 
		"Name=sw", "Value=1280", ENDITEM, 
		"Name=sh", "Value=720", ENDITEM, 
		"Name=ud[external_id]", "Value=1705008b7a38db63b4dbd95d1ecdcba4b5fd9fb4f6cde502706a43472abb77c3", ENDITEM, 
		"Name=v", "Value=2.9.147", ENDITEM, 
		"Name=r", "Value=stable", ENDITEM, 
		"Name=a", "Value=shopify", ENDITEM, 
		"Name=ec", "Value=2", ENDITEM, 
		"Name=o", "Value=4126", ENDITEM, 
		"Name=fbp", "Value=fb.1.1708661463355.2036099585", ENDITEM, 
		"Name=ler", "Value=empty", ENDITEM, 
		"Name=cdl", "Value=API_unavailable", ENDITEM, 
		"Name=it", "Value=1708661645243", ENDITEM, 
		"Name=coo", "Value=false", ENDITEM, 
		"Name=es", "Value=automatic", ENDITEM, 
		"Name=tm", "Value=3", ENDITEM, 
		"Name=exp", "Value=e1", ENDITEM, 
		"Name=rqm", "Value=formPOST", ENDITEM, 
		LAST);

	web_custom_request("order_checkout", 
		"URL=https://www.tastynibbles.in/apps/discos/order_checkout?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=feks_settings=%7B%22shop_slug%22%3A%22tastynibbles%22%2C%22shop_id%22%3A%2255925866671%22%2C%22money_format%22%3A%22%E2%82%B9+%7B%7Bamount%7D%7D%22%2C%22shop_cart_subtotal_text%22%3A%22Saved+amount%3A+%22%2C%22customer%22%3A%7B%22id%22%3A7180378964143%2C%22name%22%3A%22AAA+"
		"BBB%22%2C%22email%22%3A%22xyz%40abc.com%22%2C%22tags%22%3A%5B%5D%2C%22isB2B%22%3Afalse%2C%22metafields%22%3A%7B%22companyId%22%3A%22%22%2C%22companyLocationId%22%3A%22%22%2C%22companyContactId%22%3A%22%22%7D%7D%2C%22cart%22%3A%7B%22note%22%3A%22%22%2C%22attributes%22%3A%7B%7D%2C%22original_total_price%22%3A102300%2C%22total_price%22%3A102300%2C%22total_discount%22%3A0%2C%22total_weight%22%3A2050%2C%22item_count%22%3A2%2C%22items%22%3A%5B%7B%22id%22%3A42727349354671%2C%22properties%22%3A%7B%7D%2C%2"
		"2quantity%22%3A1%2C%22variant_id%22%3A42727349354671%2C%22key%22%3A%2242727349354671%3A6745ffb8-1a74-4cbe-ae8f-b2bb9e9aec7d%22%2C%22title%22%3A%22Vegetable+Fish+Curry+"
		"200g%22%2C%22price%22%3A15000%2C%22original_price%22%3A15000%2C%22discounted_price%22%3A15000%2C%22line_price%22%3A15000%2C%22original_line_price%22%3A15000%2C%22total_discount%22%3A0%2C%22discounts%22%3A%5B%5D%2C%22taxable%22%3Afalse%2C%22product_id%22%3A7601499078831%2C%22product_has_only_default_variant%22%3Atrue%2C%22gift_card%22%3Afalse%2C%22final_price%22%3A15000%2C%22final_line_price%22%3A15000%2C%22featured_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22alt%22%3A%22Vegetable+Fish+Curry+"
		"200g%22%2C%22height%22%3A1500%2C%22url%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Ffiles%2FFrontside_19.jpg%3Fv%3D1693980269%22%2C%22width%22%3A1500%7D%2C%22product_title%22%3A%22Vegetable+Fish+Curry+200g%22%2C%22variant_title%22%3Anull%2C%22variant_options%22%3A%5B%22Default+Title%22%5D%2C%22options_with_values%22%3A%5B%7B%22name%22%3A%22Title%22%2C%22value%22%3A%22Default+"
		"Title%22%7D%5D%2C%22line_level_discount_allocations%22%3A%5B%5D%2C%22line_level_total_discount%22%3A0%7D%2C%7B%22id%22%3A42333547233455%2C%22properties%22%3A%7B%7D%2C%22quantity%22%3A1%2C%22variant_id%22%3A42333547233455%2C%22key%22%3A%2242333547233455%3A5773c24b-3418-4761-b308-eca4b1e5da3e%22%2C%22title%22%3A%22Soya+Coconut+Fry+200g+-+Pack+"
		"6%22%2C%22price%22%3A87300%2C%22original_price%22%3A87300%2C%22discounted_price%22%3A87300%2C%22line_price%22%3A87300%2C%22original_line_price%22%3A87300%2C%22total_discount%22%3A0%2C%22discounts%22%3A%5B%5D%2C%22taxable%22%3Afalse%2C%22product_id%22%3A7465768911023%2C%22product_has_only_default_variant%22%3Afalse%2C%22gift_card%22%3Afalse%2C%22final_price%22%3A87300%2C%22final_line_price%22%3A87300%2C%22featured_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22alt%22%3A%22Soya+Coconut+Fry+"
		"200g%22%2C%22height%22%3A1500%2C%22url%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%22product_title%22%3A%22Soya+Coconut+Fry+200g%22%2C%22variant_title%22%3A%22Pack+6%22%2C%22variant_options%22%3A%5B%22Pack+6%22%5D%2C%22options_with_values%22%3A%5B%7B%22name%22%3A%22Size%22%2C%22value%22%3A%22Pack+"
		"6%22%7D%5D%2C%22line_level_discount_allocations%22%3A%5B%5D%2C%22line_level_total_discount%22%3A0%7D%5D%2C%22requires_shipping%22%3Atrue%2C%22currency%22%3A%22INR%22%2C%22items_subtotal_price%22%3A102300%2C%22cart_level_discount_applications%22%3A%5B%5D%2C%22checkout_charge_amount%22%3A102300%7D%2C%22shop_locale%22%3A%22en%22%2C%22product%22%3A%7B%22id%22%3A7465768911023%2C%22title%22%3A%22Soya+Coconut+Fry+"
		"200g%22%2C%22handle%22%3A%22ready-to-eat-soya-coconut-fry-200g%22%2C%22description%22%3A%22%3Cp%3E%3Cstrong%3ESoya+Coconut+Fry+%3A%3C%2Fstrong%3E+Soy+is+a+nutrient-dense+source+of+protein+that+can+safely+be+consumed+several+times+a+week%2C+and+probably+more+often%2C+and+is+likely+to+provide+health+benefits%E2%80%94especially+when+eaten+as+an+alternative+to+red+and+processed+meat.%3C%2Fp%3E%5Cn%3Cp%3ETasty+Nibbles+Soya+Coconut+Fry+is+a+yummy+and+wholesome+dish+where+soya+chunks+are+cooked+in+"
		"delectable+mix+of+masalas.+This+is+Ready+to+eat+product+and+perfect+side+dish+to+go+with+rice%C2%A0or%C2%A0chapatti.%3C%2Fp%3E%5Cn%3Cp%3EOpen+Heat+%26amp%3B+Eat%3C%2Fp%3E%5Cn%3Cp%3E%3Cspan%3ENo+added+preservatives+or+additives.%3C%2Fspan%3E%3C%2Fp%3E%5Cn%3Cp%3EJapanese+Retort+Technology%3C%2Fp%3E%5Cn%3Cp%3EOnce+opened%2C+consume+immediately%3C%2Fp%3E%5Cn%3Cp%3E18+months+shelf+life+at+room+temperature%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3EINGREDIENTS%3A%3C%2Fstrong%3E%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3ESoya"
		"+chunks%2C%3C%2Fstrong%3E+Spices+%26amp%3B+Condiments+(Big+onion%2C+Ginger%2C+Garlic%2C+Green+chilli%2C+Small+Onion%2C+Kashmiri+chilli+powder%2C+Red+chilli+powder%2C+Coriander+powder%2C+%3Cstrong%3EMustard+seeds%2C%3C%2Fstrong%3E+Red+chilli%2C+Turmeric+powder%2C+Fennel%2C+Cardamom%2C+Cinnamon%2C+Cumin%2C+Black+pepper%2C+Curry+leaves)%2C+Salt%2C+Water%2C+Grated+coconut%2C+Coconut+oil%2C+Coconut+flakes.%3C%2Fp%3E%5Cn%3Cp%3EAvailable+quantity+%3A+200g%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3EHOW+TO+"
		"USE%3A%3C%2Fstrong%3E%3C%2Fp%3E%5Cn%3Cp%3EThis+product+is+ready-to-eat+form+can+be+consumed+straight+out+of+the+pack+or+warmed+up+as+below%3C%2Fp%3E%5Cn%3Cp%3ECut+pouch%2C+empty+contents+into+a+frying+pan+and+heat+for+3+to+5+minutes+while+stirring.+Serve+hot.+(OR)%3C%2Fp%3E%5Cn%3Cp%3EEmpty+the+contents+of+the+pouch+into+a+microwave+bowl.+Microwave+for+1+to+2+minutes.+Serve+hot.%C2%A0(OR)%C2%A0%3C%2Fp%3E%5Cn%3Cp%3EImmerse+the+unopened+pouch+in+boiling+water+for+3+to+5+minutes.+Remove%2C+cut%2C+open"
		"+and+serve.%3C%2Fp%3E%22%2C%22published_at%22%3A%222023-02-24T16%3A50%3A51%2B05%3A30%22%2C%22created_at%22%3A%222023-02-23T16%3A33%3A34%2B05%3A30%22%2C%22vendor%22%3A%22Tasty+Nibbles%22%2C%22type%22%3A%22Ready+to+Eat+"
		"Veg%22%2C%22tags%22%3A%5B%22all%22%2C%22engrea162%22%5D%2C%22price%22%3A15000%2C%22price_min%22%3A15000%2C%22price_max%22%3A87300%2C%22available%22%3Atrue%2C%22price_varies%22%3Atrue%2C%22compare_at_price%22%3A15000%2C%22compare_at_price_min%22%3A15000%2C%22compare_at_price_max%22%3A90000%2C%22compare_at_price_varies%22%3Atrue%2C%22variants%22%3A%5B%7B%22id%22%3A42333547233455%2C%22title%22%3A%22Pack+6%22%2C%22option1%22%3A%22Pack+"
		"6%22%2C%22option2%22%3Anull%2C%22option3%22%3Anull%2C%22sku%22%3A%22CPDFG31705%22%2C%22requires_shipping%22%3Atrue%2C%22taxable%22%3Afalse%2C%22featured_image%22%3A%7B%22id%22%3A35973956305071%2C%22product_id%22%3A7465768911023%2C%22position%22%3A6%2C%22created_at%22%3A%222023-02-23T16%3A53%3A38%2B05%3A30%22%2C%22updated_at%22%3A%222023-04-29T10%3A09%3A13%2B05%3A30%22%2C%22alt%22%3Anull%2C%22width%22%3A1500%2C%22height%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2F"
		"Pack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%2C%22variant_ids%22%3A%5B42333547233455%5D%7D%2C%22available%22%3Atrue%2C%22name%22%3A%22Soya+Coconut+Fry+200g+-+Pack+6%22%2C%22public_title%22%3A%22Pack+6%22%2C%22options%22%3A%5B%22Pack+"
		"6%22%5D%2C%22price%22%3A87300%2C%22weight%22%3A1800%2C%22compare_at_price%22%3A90000%2C%22inventory_management%22%3A%22shopify%22%2C%22barcode%22%3A%228907093007065%22%2C%22featured_media%22%3A%7B%22alt%22%3Anull%2C%22id%22%3A28389635817647%2C%22position%22%3A6%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%7D%7D%2C"
		"%22requires_selling_plan%22%3Afalse%2C%22selling_plan_allocations%22%3A%5B%5D%7D%2C%7B%22id%22%3A42571467587759%2C%22title%22%3A%22Pack+1%22%2C%22option1%22%3A%22Pack+"
		"1%22%2C%22option2%22%3Anull%2C%22option3%22%3Anull%2C%22sku%22%3A%22CPDFG31703%22%2C%22requires_shipping%22%3Atrue%2C%22taxable%22%3Afalse%2C%22featured_image%22%3A%7B%22id%22%3A35973954470063%2C%22product_id%22%3A7465768911023%2C%22position%22%3A1%2C%22created_at%22%3A%222023-02-23T16%3A53%3A14%2B05%3A30%22%2C%22updated_at%22%3A%222023-04-29T10%3A09%3A13%2B05%3A30%22%2C%22alt%22%3Anull%2C%22width%22%3A1500%2C%22height%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2F"
		"Frontside_2.jpg%3Fv%3D1682743153%22%2C%22variant_ids%22%3A%5B42571467587759%5D%7D%2C%22available%22%3Atrue%2C%22name%22%3A%22Soya+Coconut+Fry+200g+-+Pack+1%22%2C%22public_title%22%3A%22Pack+1%22%2C%22options%22%3A%5B%22Pack+"
		"1%22%5D%2C%22price%22%3A15000%2C%22weight%22%3A250%2C%22compare_at_price%22%3A15000%2C%22inventory_management%22%3A%22shopify%22%2C%22barcode%22%3A%228907093006969%22%2C%22featured_media%22%3A%7B%22alt%22%3Anull%2C%22id%22%3A28389634080943%2C%22position%22%3A1%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%7D%7D%2C%22requires_selling_plan%22%3Afalse"
		"%2C%22selling_plan_allocations%22%3A%5B%5D%7D%5D%2C%22images%22%3A%5B%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBackside_e55d304c-aae5-4b10-84f2-16c8cd00ff0c.jpg%3Fv%3D1682743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_1_dbd4c3d2-a6cf-4ace-ae45-6e13a34cf8ab.jpg%3Fv%3D1682743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritionfact.jpg%3Fv%3D16"
		"82743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FAddressside_1.jpg%3Fv%3D1682743153%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%5D%2C%22featured_image%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%2C%22options%22%3A%5B%22Size%22%5D%2C%22media%22%3A%5B%7B%22alt%22%3Anull%2C%22id%22%3A28389634080943%2C%22position%22%3A1%2C%22preview_image%22%3A%7"
		"B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_2.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28389634048175%2C%22position%22%3A2%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3"
		"A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBackside_e55d304c-aae5-4b10-84f2-16c8cd00ff0c.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBackside_e55d304c-aae5-4b10-84f2-16c8cd00ff0c.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28389634113711%2C%22position%22%3A3%"
		"2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_1_dbd4c3d2-a6cf-4ace-ae45-6e13a34cf8ab.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_1_dbd4c3d2-a6cf-4ace-ae45-6e13a34cf8ab.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22"
		"%3Anull%2C%22id%22%3A28389634146479%2C%22position%22%3A4%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritionfact.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritionfact.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%2"
		"2%3A28389634015407%2C%22position%22%3A5%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FAddressside_1.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FAddressside_1.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A2838963581764"
		"7%2C%22position%22%3A6%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%2C%22width%22%3A1500%7D%5"
		"D%2C%22requires_selling_plan%22%3Afalse%2C%22selling_plan_groups%22%3A%5B%5D%2C%22content%22%3A%22%3Cp%3E%3Cstrong%3ESoya+Coconut+Fry+%3A%3C%2Fstrong%3E+Soy+is+a+nutrient-dense+source+of+protein+that+can+safely+be+consumed+several+times+a+week%2C+and+probably+more+often%2C+and+is+likely+to+provide+health+benefits%E2%80%94especially+when+eaten+as+an+alternative+to+red+and+processed+meat.%3C%2Fp%3E%5Cn%3Cp%3ETasty+Nibbles+Soya+Coconut+Fry+is+a+yummy+and+wholesome+dish+where+soya+chunks+are+cooked+in"
		"+delectable+mix+of+masalas.+This+is+Ready+to+eat+product+and+perfect+side+dish+to+go+with+rice%C2%A0or%C2%A0chapatti.%3C%2Fp%3E%5Cn%3Cp%3EOpen+Heat+%26amp%3B+Eat%3C%2Fp%3E%5Cn%3Cp%3E%3Cspan%3ENo+added+preservatives+or+additives.%3C%2Fspan%3E%3C%2Fp%3E%5Cn%3Cp%3EJapanese+Retort+Technology%3C%2Fp%3E%5Cn%3Cp%3EOnce+opened%2C+consume+immediately%3C%2Fp%3E%5Cn%3Cp%3E18+months+shelf+life+at+room+"
		"temperature%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3EINGREDIENTS%3A%3C%2Fstrong%3E%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3ESoya+chunks%2C%3C%2Fstrong%3E+Spices+%26amp%3B+Condiments+(Big+onion%2C+Ginger%2C+Garlic%2C+Green+chilli%2C+Small+Onion%2C+Kashmiri+chilli+powder%2C+Red+chilli+powder%2C+Coriander+powder%2C+%3Cstrong%3EMustard+seeds%2C%3C%2Fstrong%3E+Red+chilli%2C+Turmeric+powder%2C+Fennel%2C+Cardamom%2C+Cinnamon%2C+Cumin%2C+Black+pepper%2C+Curry+leaves)%2C+Salt%2C+Water%2C+Grated+coconut%2C+Coconut+oil%2C+"
		"Coconut+flakes.%3C%2Fp%3E%5Cn%3Cp%3EAvailable+quantity+%3A+200g%3C%2Fp%3E%5Cn%3Cp%3E%3Cstrong%3EHOW+TO+USE%3A%3C%2Fstrong%3E%3C%2Fp%3E%5Cn%3Cp%3EThis+product+is+ready-to-eat+form+can+be+consumed+straight+out+of+the+pack+or+warmed+up+as+below%3C%2Fp%3E%5Cn%3Cp%3ECut+pouch%2C+empty+contents+into+a+frying+pan+and+heat+for+3+to+5+minutes+while+stirring.+Serve+hot.+(OR)%3C%2Fp%3E%5Cn%3Cp%3EEmpty+the+contents+of+the+pouch+into+a+microwave+bowl.+Microwave+for+1+to+2+minutes.+Serve+hot.%C2%A0(OR)"
		"%C2%A0%3C%2Fp%3E%5Cn%3Cp%3EImmerse+the+unopened+pouch+in+boiling+water+for+3+to+5+minutes.+Remove%2C+cut%2C+open+and+serve.%3C%2Fp%3E%22%7D%2C%22product_collections%22%3A%7B%227465768911023%22%3A%5B310480994479%2C288549011631%2C309449097391%2C263548338351%2C264901460143%2C267152097455%2C264901525679%5D%7D%2C%22first_variant%22%3A%7B%22id%22%3A42333547233455%2C%22title%22%3A%22Pack+6%22%2C%22option1%22%3A%22Pack+"
		"6%22%2C%22option2%22%3Anull%2C%22option3%22%3Anull%2C%22sku%22%3A%22CPDFG31705%22%2C%22requires_shipping%22%3Atrue%2C%22taxable%22%3Afalse%2C%22featured_image%22%3A%7B%22id%22%3A35973956305071%2C%22product_id%22%3A7465768911023%2C%22position%22%3A6%2C%22created_at%22%3A%222023-02-23T16%3A53%3A38%2B05%3A30%22%2C%22updated_at%22%3A%222023-04-29T10%3A09%3A13%2B05%3A30%22%2C%22alt%22%3Anull%2C%22width%22%3A1500%2C%22height%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2F"
		"Pack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%2C%22variant_ids%22%3A%5B42333547233455%5D%7D%2C%22available%22%3Atrue%2C%22name%22%3A%22Soya+Coconut+Fry+200g+-+Pack+6%22%2C%22public_title%22%3A%22Pack+6%22%2C%22options%22%3A%5B%22Pack+"
		"6%22%5D%2C%22price%22%3A87300%2C%22weight%22%3A1800%2C%22compare_at_price%22%3A90000%2C%22inventory_management%22%3A%22shopify%22%2C%22barcode%22%3A%228907093007065%22%2C%22featured_media%22%3A%7B%22alt%22%3Anull%2C%22id%22%3A28389635817647%2C%22position%22%3A6%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_10_10066d29-058b-4066-9be8-74724bc07f41.jpg%3Fv%3D1682743153%22%7D%7D%2C"
		"%22requires_selling_plan%22%3Afalse%2C%22selling_plan_allocations%22%3A%5B%5D%7D%2C%22cart_collections%22%3A%7B%227601499078831%22%3A%5B319869157551%2C310480994479%2C288549011631%2C309449097391%2C319801557167%2C270179795119%2C285126492335%2C264901460143%2C267152097455%5D%2C%227465768911023%22%3A%5B310480994479%2C288549011631%2C309449097391%2C263548338351%2C264901460143%2C267152097455%2C264901525679%5D%7D%2C%22page_template%22%3A%22product%22%7D&checkoutcart="
		"%5B%7B%22product_id%22%3A7601499078831%2C%22quantity%22%3A1%2C%22feksofferdetailssaved%22%3A%22%7B%5C%22offerdetails%5C%22%3A%5B%7B%5C%22feks_grab_offer_behavior%5C%22%3A%5C%22auto%5C%22%2C%5C%22feks_tierindex%5C%22%3A0%2C%5C%22feks_pid%5C%22%3A%5C%227601499078831%5C%22%2C%5C%22feks_variant_id%5C%22%3A%5C%2242727349354671%5C%22%2C%5C%22feks_target_quantity%5C%22%3Anull%2C%5C%22feks_upsell_quantity%5C%22%3A%5C%221%5C%22%2C%5C%22feks_target_product%5C%22%3A%5C%227465768911023%5C%22%2C%5C%22feks_targ"
		"et_variant%5C%22%3A%5C%2242333547233455%5C%22%2C%5C%22feks_offertype%5C%22%3A%5C%22discount_percentage%5C%22%2C%5C%22feks_offervalue%5C%22%3A%5C%22100%5C%22%2C%5C%22feks_campaigntype%5C%22%3A%5C%22GWP%5C%22%2C%5C%22feks_offergoal%5C%22%3A%5C%22500.00%5C%22%2C%5C%22feks_id_campaign%5C%22%3A13798%2C%5C%22feks_campaign_logic%5C%22%3A%5C%22OR%5C%22%2C%5C%22mm_var_ids_of_prd%5C%22%3A%5B%5D%2C%5C%22mm_var_ids_of_col%5C%22%3A%5B%5D%2C%5C%22upsell_offer_products%5C%22%3A%5B%7B%5C%22id%5C%22%3A%5C%22760149"
		"9078831%5C%22%2C%5C%22handle%5C%22%3A%5C%22vegetable-fish-curry-200gm-pouch%5C%22%2C%5C%22variants%5C%22%3A%5B%5C%2242727349354671%5C%22%5D%7D%5D%2C%5C%22gwp_incl_type%5C%22%3A%5C%22all%5C%22%2C%5C%22gwp_incl_data%5C%22%3A%5B%5D%2C%5C%22gwp_excl_type%5C%22%3A%5C%22unset%5C%22%2C%5C%22gwp_excl_data%5C%22%3A%5B%5D%2C%5C%22feks_multiply_gift%5C%22%3Afalse%2C%5C%22feks_offer%5C%22%3Anull%2C%5C%22feks_same_product%5C%22%3Anull%7D%5D%7D%22%2C%22title%22%3A%22Vegetable+Fish+Curry+"
		"200g%22%2C%22line_price%22%3A15000%2C%22price%22%3A15000%2C%22variant_id%22%3A42727349354671%2C%22properties%22%3A%7B%7D%7D%2C%7B%22product_id%22%3A7465768911023%2C%22quantity%22%3A1%2C%22feksofferdetailssaved%22%3A%22%5C%22null%5C%22%22%2C%22title%22%3A%22Soya+Coconut+Fry+200g+-+Pack+6%22%2C%22line_price%22%3A87300%2C%22price%22%3A87300%2C%22variant_id%22%3A42333547233455%2C%22properties%22%3A%7B%7D%7D%5D", 
		LAST);

	
	web_custom_request("produce_batch_59", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661671091},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\""
		"sh-d42ba2f5-7730-4CB8-2BDE-0D1792395AFC\",\"run_time_duration\":1274,\"start_time\":889,\"page_duration\":26032},\"metadata\":{\"event_created_at_ms\":1708661671091}}]}", 
		LAST);

	web_url("d2a070367ead2364645f67c3ae5d205c", 
		"URL=https://tastynibbles.myshopify.com/55925866671/checkouts/d2a070367ead2364645f67c3ae5d205c", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t219.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("queue_token=At2var3xwla0NEz4UzhLUqzz4Zx0vU-7D-hTpikg0QMve3rIgz10W1EWTlv6V773uccAhtOHwCFymEG7UVDAokUhGVQB8cCVczDQG7aWkS4wID5yYNMK0x5sXFQjPq7kyMQQ80VtmxgqwopdyspBuycv3iUMkroiL5LP0KV0WbIKidmYc3uvsG0dshyTJOLY_mPa; DOMAIN=tastynibbles.myshopify.com");

	web_custom_request("graphql", 
		"URL=https://tastynibbles.myshopify.com/checkouts/unstable/graphql", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://tastynibbles.myshopify.com/", 
		"Snapshot=t220.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"query BillingCountries{shop{id billingCountries{value:code label:name __typename}__typename}}\",\"variables\":{},\"operationName\":\"BillingCountries\"}", 
		LAST);

	web_add_cookie("skip_shop_pay=false; DOMAIN=tastynibbles.myshopify.com");

	web_custom_request("set_tracking_consent.json", 
		"URL=https://tastynibbles.myshopify.com/set_tracking_consent.json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://tastynibbles.myshopify.com/", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"sync_consent\":{\"email\":\"xyz@abc.com\"}}", 
		LAST);

	web_custom_request("produce_batch_60", 
		"URL=https://tastynibbles.myshopify.com/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://tastynibbles.myshopify.com/", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661689514},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://tastynibbles.myshopify.com/checkouts/co/d2a070367ead2364645f67c3ae5d205c\",\"app_name\":\"checkout\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-checkout-one\"},\"metadata\":{\"event_created_at_ms\":1708661689485}}]}", 
		LAST);

	return 0;
}