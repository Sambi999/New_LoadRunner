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

	web_custom_request("v3", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=fmjwt8PSUqqSYHn2yFKiqXvCkalV7wMGGs%2F1wdoc6gi9XedBYJy5rFxpm2v1F0xVmuWc8VW%2FNh9z24MEN8GuBHE5OUsnEcyBv%2Ft8SqbGjkGJmL8xGesQNgI6dMwUowJldHictic%3D", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v3_2", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=fmjwt8PSUqqSYHn2yFKiqXvCkalV7wMGGs%2F1wdoc6gi9XedBYJy5rFxpm2v1F0xVmuWc8VW%2FNh9z24MEN8GuBHE5OUsnEcyBv%2Ft8SqbGjkGJmL8xGesQNgI6dMwUowJldHictic%3D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":12,\"body\":{\"elapsed_time\":232,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.tastynibbles.in/\",\"sampling_fraction\":1.0,\"server_ip\":\"23.227.38.74\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.tastynibbles.in/cdn/shop/t/12/assets/sca_affiliate.js?v=2076242293115890491652863580\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) "
		"Chrome/121.0.0.0 Safari/537.36\"}]", 
		LAST);

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

	web_custom_request("collect_2", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xADR\\xC1N\\xDC0\\x10\\xFD\\x15kN =\\xB2\\x1E\\xDBq\\x128\\xB5\\xAB\\x96V\\x14\\x0Ee%\\x0EQTe\\x89\\x01CHVI\\x96-\\xA0\\xF6\\xDB\\xAB\\xC9\\x82\\xD4\\xDE\\xAB\\\\\\xDE\\xBC\\x8C=\\xCFo\\xDE+\\x05:.I'Yb4\\x81\\xA1\\xC1\\\\\\x18PQd\\xE3u\\xB8\\x7F\\xD2\\x1D\\x81\\xD8\\xF5\\xBB\\xFB\\xD6\\x12\\xE8\\xD6g\\xB7\\xF6a\\xDF\\xA8+PM\\xC7e\\xC9Z\\xE7\\xC8\\xC1\\xC6"
		"[\\x14\\xDA\\x17\\x15J\\xD6\\x8E\\xC1\\xBC\\xE7R\\xC7\\xEF\\x94\\xC9AOq\\x8C\\xEB6\\xD0\\xCC\\xE59,\\x83.\\xAF\\x87\\xB8\\x99T\\x18\\x86~HH.G\\xB7m[\\xD0\\xDC\\xC5\\x05\\xC3:\\xD0\\xF2\\xC7\\xD7KBI\\x9A\\xAAwZ\\x84\\x94t\\xDE\\xBF\\xC4\\xB6\\xAD\\x17i\\xA2\\xD5\\xC1U\\xEC\\x9A~7\\xAA\\x8B\\x95b\\x9D\\xE8\\x13u\\x15;\\xEFN\\xD4O\\xEF\\x0E\\xD5\\x87\\xCD\\xA6\rWa}\\x16\\xA7Ej\\xB3\\xC4zup\\xF6eu\\xFE\r\\xAA\\x8D\\x0FA\\x9D\\x86\\xEB\\x87\\xFEP-\\xEF\\x86\\xFE1,\\xD8p\\xA2\\xE5S\\x97\\xF5M="
		"\\xC4\\xB7#T\\x81Q\\xD2\\xDD4m\\xC6\\xE3\\xC5b\\xB7\\xDB%S=N\\xCF]\\\\\\xAF\\xDB0&\\xB1[P\\x05\\x8B\\x92VB\\xAB\\x8B=\\xAF\\x8E\\xD4\\xF7P7\\xCFj\\xEA\\xD5\\xA7z\\x82Z\\xD6]\\x17\\x1A\\xB5\\xDAv5\\xD4\\xE78\\xDE\\xA9\\xE5v\\x18b\\x18U\\xDD5\\xEA\\xB1\\x1F\\xC4\\xA4\\x02%\\x85\\xEE\\xE8\\xF4\\xA3LMQRn_\\xD84R\\xF9\\xF9\\x97\\xA0\\x0C%\\xB5\\xD3 P\\xFAwa=\\xC6IN\\x1B\\xFD\\x7FT\\x18\\x83\\x92\\xDE\\x9C\\x95R\\x1E\\xC7\\xB35R9\\x94\\xB4\\xED\\x9Ap\\x13\\xBB\\xD0\\xFC.\n\\xC2_%\\x1B\\x96\\x1E\\x11;"
		"\\x03\\xD1\\xEAn\\x05\\xE5\\xFB]\\xC2\\x14\\xFF.U\\xD6\\xCF\\x99\\xCE\\xBDg\\xE7\\xD9Y7\\xAF\\xD9\\xC2j8\\xB0v)R\\x18x\\xB0\\xD6\\x1E\\x19\\x0C\\xD8\\x81M\\xAE\\xC5\\x9F\\xCCh1\\xC68\\x98\\x14^\\xC6j\\x19\\xA9%f\\x0Ck\\x04Y8\\xC9S\\x0E\\x9BJ\\x8A\\xDF\\x02\\xE6\\xE1\\xE7D\\xA6r/\\xF6B\\xAA\\xAA\\xFA\\xF5\\x07\\xE7\\xF9\\xF5o$\\x03\\x00\\x00", 
		LAST);

	web_url("public", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("collect_3", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=", 
		body_variable_1, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("collect_4", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661461014&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=1&dp=%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2F&sid=1708661464&sct=1&seg=0&en=page_view&_fv=1&_ss=1&_ee=1&tfd=9587", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_5", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xEDY\\x0Bo\\xDB8\\x12\\xFE+:\\x01\\x16v\\x17\\x94\\xCD\\x87\\x9E6t\\xDD<\\xDAn\\xB1m\\xB7\\xDB\\xCD^\\xB1\\x08\\x0C\\x83\\x12)\\x99\\x89L\n\\x12e\\xC7)\\xFA\\xDF\\x0F\\x94\\x1C9Ns\\xDD$\\x8B[\\xE0\\xAE\\xADQD\\x1A\\x8A\\x1Fg\\xBE\\x99\\xE1c\\xF8\\xD1\\xE6\\xF6\\xF4\\xDC\\x86\\xE3p\\x8C\\xA1\r\\x08\\xC0$\\x80\\x00c\\x1C\\x03;\\x8E\\xC3&\\xE3\\x17k"
		"(m`#Om.Jb\\x03\\xBB\\x08\\xC2\\x82\\\\\\xDA\\x00\\x01\\x08\\xE0\\x1C\\xD8\\xD4\\x9E\\x9E\\x9F\\xC7a\\x0C\\x10\\x06\\x08\\xE2\\x00\\x04\\x11\\x01!\\x99\\x83s\\x04C|K\\x8A@\\x88;i\\x84\\xF6\\xD20\\x00!2R/\\x0E\\xF7R\\xDF\\x07\\xA1g\\xA4\\xBEw\\xEB[\\xDF\\x03\\xA1o\\xA4\\xD1\\xED\\xD1\\x8C44\\xD2\\xD8\\x0F\\x0E\\xA5\\xF1\\x1C\\x9Cw\\xF6x\\xC0\\xA0\\x04\\x04\\xC40\\x88\\xFB'\\x03\\x0Cw?\\x14\\x05\\xC1\\x1C\\x9C{~\\x14\\x03\\x080\\x08B\\x88|@\\x00\"\\xA6g\\x0C|\\x80 \\xC0"
		">@\\xF1\\xCDW$\\x00\\x018\\xC7a\\x04A\\x84\\x00Aq\\x0Cb\\x0F\\x10\\x12`\\x00\\x01\t\\xBD\\x18\\x10\\x0Fx^\\x88\\x00\\x9C\\xCF\\xE7\\xC0\\xAE\\x0CG\\xDD\\xE7\\x01@\\x1E!\\x00\\xC10\\x06\\xF6\\xAB7/m`g%m\\x9A\\xA4\\xA4\\xD7[\\xDAj\\xD5\\x88k\\xDEX\\xE6\\xADT\\x94qf\\x03\\xBB\\xA9\\xB3\\xC4\\x066\\xA3\\x9A\\xBA\\xB4\\xA9x\\xA6k\\xAA\\x85J\\xD0\\x18\\xDE\\x887\\x82\\xE9e\\x93\\x9C\\x87\\x18\\x02+\\x86\\x10X\\x08Fp~\\xD3\\xDC\\x81&\\x06~"
		"\\x90\\xD4Y\\xC3u2\\x99l6\\x9B\\xB1\\xA6\\x8D\\xDEJ\\x91\\xA6%o\\xC6BN2&'\\xCDRU\\x93\\\\\\x94\\xBC\\x99\\x9CR\\xCD\\x9BJd\\x97%\\xF7 ,\\x16!\\x86W\\xE3\\x8B\\xAAx\\xB6NP\\x10\\x13/\\x88\\x10\\xC1V\\x88\\xE1\\x06XO\\x02\\x8C\\xE1}\\x801|2\\xA01\\xFE\\x1ED#\\xDE\\x18B;:P\\x84\\xAA\\xAB\\x9E\\xDE\\xAF\\x95\n\\x93 \\x91\\x8FA\\x00|\\x14c\\xE0\\x03\\x1FE\\x11\\xB0O_\\xFDk\\x88\\xCB\\x9A^\\xAB\\xBA\\xA2[7SRS!ym"
		"(\\xD3\\xDB\\x92'\\xD7\\xAE\\x90\\x8C_M-\\x8C\\xBC\\xD0\\x8BH\\xE0\\x853\\xABR\\x8D\\xD0B\\xC9\\xA9\\x95\\x8B+\\xCEf\\x96V\\xD5\\xD4\\x82\\xD5\\xD5\\xCCb\\xA2\\xA9J\\xBA\\x9DZRI>\\xB3J\\x9E\\xEB]\\xCB\\x92\\x8Bb\\xA9\\xA7\\x16\\x82p4\\xB3\\xBA`\\xBEyIiv\\x99\\xD3\\x8C\\xBBk\\xD1\\x88T\\x94Bo\\xA7\\xD6R0\\xC6\\xE5\\xCCRk^\\xE7\\xA5\\xDA\\xB8\\xDB\\xA9\\xD5\\xB5\\x97|f\\x1B[Ho\\x90\\xFD\\xDB\\xD9\\x1F\\xAF\\x9F\\xDB\\xC0\\xFE\\xF1\\x92o\\xF3\\x9A\\xAExc\\xD5\\xD7\\x95[+"
		"\\xFDQ\\xAB\\x8F\\xBA\\xA6\\xB2\\xC9U\\xBD\\x9AZ\\xB5\\xD2T\\xF3\\xEFH\\x00\\x19/\\xBE\\x9F}\\xFA\\xF4\\xA3\\xBB\\xE1\\xE9\\xA5\\xD0\\xEE\\xBD=o\\x1A\\xBF\\x84`\\x8D?\\xE7\\xCE\\xFA\\xA7%:4\\xEB\\xE3JH\\xF7\\xB6\\xDD\\xFF\\x10\\xABJ\\xD5\\x9AJ=\\xFB\\xD4\\xD9\\xE0\\xED\\x9Cb\\xAC9\\xF7\\xE7\\x9F9\\xC40\\xC3jU\r\\xFE\\xB8\\x8B8\\xB3:\\xF5v\\xEE\\xA0ei\\xC11i,N\\x1B\\xEE\\xAAV"
		"[\\xB0\\xF9\\xA2\\xBBn\\xF9\\xE7\\xC0#\\x07Ct\\x9A\\xFA\\x83\\xA6\\x1E\\xB0_\\xBDx\\x7F\\xF4\\xE6\\xF9\\xA0\\x94\\xAAh\\xD6\\xF9\\x0C\\xDDu\\xF3~\\xE8\\x9A\\x97T\\x8B5\\xEF\\xBD]\\xD4\\xAA\\x95\\xEC&J\\x86\\xA0IK\\x95]\\xCE\\xACT\\xD5\\x8C\\xD7S\\x0Bv\\xED\\xBD\\x85\\x15\\xAD\\xB9\\xD43kE\\xEBB\\xC8\\x9D\\xCE\\x15eL\\xC8b\\xF7\\xB6\\x8F\\xD5\\x99\rlZ\\x96j\\xB3\\xEF\\x9Am\\x13]\\xB7\\xDC\\x06v\\xE7\\x9B~"
		"\\x88\\xC4L\\xAE\\x9D\\xE1\\x89\\xD1\\xD7\\x06v\\xAF\\xFE\\xCD\\x9B\\x99\\x95\\x97ZW\\xCDt2\\xA1\\x95\\x18\\x9C=\\xCE\\xD4j\\xB2F\\x93l\\xC9\\xB3K\\xD5\\xEAI\\xD5\\xA6\\xA5\\xC8\\x9E\\xE9\\x9A\\xE6\\xB9\\xC8\\x16\\\\\\xAE\\x93\\x8CJZo\\x9D\\xB4\\x15%K\\x98G<\\x02\\x19\\xA3<M9\\xE3\\xD4\\x8Bs?\\x86Y\\x10!\\xCC\\x824\\xF3P\\xEE\\x87y\\x982g\\xA5\\x18\\xAFe\\x82\\x9CV\\x8A\\\\p\\xB6(\\x85\\xE6\trV\\xB4\\x10\\xD9\\xA2\\xC9jQi\\xF3\\xCA\\xEBlI\\xA5^"
		"\\\\\\xF2mR_W\\x8BR\\xAC\\xF9\\xE2wq\\xF6\\xFB\\xC9\\xD1\\x89<+\\x9B\\x0Bv|\\xD3g\\xA9*\\x91o\\xBF\\xFC\\xA5b<1\r\\xF7L\t;\\x13\\xDD\\x8E\\xB6\\x1B^\\x13\\xA5+7\\xAB9\\xE3R\\x0BZ66\\xB0\\x7F\\xF8eG\\xB0\\x8F\\xE2`\\x17'\\xBF\\xBD;z;D\\x89\\xE6W\\xDAe<S\\xDD\\xCA&o\\x9C\\x7F;\\x1C\\xEA\"\\xFD\\x0E#\\x0FXAd\\xFE\\x7F\\xBF\\x0F\\x05T]Y\\x8C6K\\xCE\\xAC\\xCDRh~\\xCB\\xF7\\xC4\\xF8~\\x08A\\xB8\\xCB\\x88\\x83\\x84\\xF5\\xFC._\\x0Fre\\xD7\\xE3V\\xBE\\x08\\xD9\\xA5K\\xAE\\xA4vs\\xBA\\x12\\xE5vj\\x95T+"
		"`\\xB5i+u\\x0B\\xAC%/\\xD7\\\\\\x8B\\x8C\\x02\\xAB\\xA1\\xB2q\\x1B^\\x8B|fe\\xAAT\\xF5tPl\\x88y\\x9A6\\xAAl\\x8Dl\\x97\\\\\\x18v\\x81\\xDA1AKQ\\xC8\\xA9\\x95q\\xA9y=\\xB3\\xEA>m\\\\\\xBF\\xFF\\xC2dh\\xF7\\xD8\\xF1\\x19\\xF6\\xA4\\xDA?\\x9C\\xD9\\xC0>\\xE3\\x8D\\xB6\\xDE(\\xD6S\\x1D\\xF5\\xC9i\\xF7S\\xCE\\xF4\\xA7\\xB37\\xAF;y\\xDC7\\xDA?=?:5\\xDE9Nh\\xAAZ=\\x9DL\\xD2\\x92\\xCAK\\x1B\\xF8\\x18\\xC2\\x01 \\x06\\xF6\\xF1/\\xA7\\x7F\\xF4\\x8BE\\x80\\xFA-\\x0C4"
		"[\\x98\\xF0\\x7F`\\x0BS\\xD5\\x8A\\xB5\\x99n&\\xEFj\\xBA\\x91\\xFD\\xC2\\xD8\\x88r\\xCD\\xEBJ\\xB5\\xD9\\x12\\x7F\\xB6\\x8AG\\x18y0\n\\xE1\\xC3V\\xF1\\x87\\xC0\\x1F\\xAC\\xE9\\x03\\xFC\\x83\\xD6\\xF4\\x87\\xC0\\x1F\\xAE\\xF0\\x03\\xFE_\\xD9\\xEC|\\xED\\xA4!\\x8F\\xC4\\x00\\xC1\\x88\\x80s\\x0F\\xF8 \\x00!\\x88@<\\x7FT\\xE0e\\xAA,yf\\x92\\xBD\\x99lx\\xDA\\x08\\xCD]\\x14A\\xE8^\\xF5\\x7F\\xD0!\\x83>&$@0~\\x18\\x83\\x7F\\x0E~\\xC0\\xDF\\x00\\xFE \\xFE\\xFE\\x1C\\xFC\\x90\\xBD\\x01}"
		"\\xC7\\xDE9B\\xF3\\x87F\\xDA\\xD7\\xCB\\x12\\xF2H\\x00\\xBA\\xC3\\xF0\\xD3c\\xAC\\xDF\\xF2\\xBF\\xA8\\x95\\xD4\\x8D`|\\xC1\\xC3\\x1C\\xF9\\xB9\\x97\\xB9<\\xC6\\x81\\xEB\\x05\\x04\\xB9\\x14\\xA5\\xB1\\x9B\\xB20\\x84\\x01\\xF1y\\xCE\\xE3\\x03BC\\x88C\\x1C\\xC5q\\xF8\\x983\\xCB#\\xC7\\xBB\\xCD\\xF1~\\xBCG\\x1Ci\\x1E9\\xDE\\x01\\xED\\xFB\\x01\\x9F\\x10\\x9C\\xDF\\xE8}4\\xBD\\xC8\\xC3\\xA1\\xD9\\x1A\\xF8\\x7F=\\xAAE\\xB3<^\\xB6\\xF5\\x85\\xF8l\\xB9\t!F\\xC8\\xC3\\x98<\\x8A\\xD6C\\xBC;"
		"\\xB4\\xED\\xF0\\x1EC\\xDB!\\xDE]Zv\\x80O\\x8F\\xBA\\xFF'\\xF3\\x91\\x87=\\x13\\x15\\x7Fe=\\x1DV\\xF5n+\\xBD\\xE2T\\xEBV\\xD2\\xBC\\xA4\\x97\\xBC9\\\\$<\\x0F\\xE38\\xF2\\xD0#7#\\xF7\\xE1\\x1E\\xAC\\x0F\\x03\\xEE\\xE3v!\\xF7\\xE1\\x1E.\r\\x03\\xF0\\x13\\xA2\\xE5\\xEB\\xA1e\\x0E\\xCE\t\\x86\\xB1)Va\\x88\\x86b\\xD5Po\\xE8\\x0F\\x9F\\x17JH\\x972W\\x98\\xA3\\x13o\\xB4k\\xCE\\x8F\\xD5\\xCD\\x99A\\xD3\\xA2\\x10\\xB2p\\x05K\\x8E>\\xB8$\\x8C\\xA2\\x08#\\x88&[|"
		"DO\\xDE\\xB8\\xA7\\xDBw\\xEA\\xE4\\xF9\\xEB\\x0F\\xBF\\xA2\\xF4\\xD7\\xE3\\x9B>\\xE6\\x10\\xE3j\\xB1\\xE2&\\xB0\\xA3 @^\\xE0\\x05$\\xD8\\x17\\x04\\xF6\\x85\\x028\\x1Ch\\xEF\\xD4\\xBA\\xEE)^\\xDD)!h6f\\xAAMK\\x9E\\x95\"\\xBB\\x1CK\\xAE'\\x9AM\\xEA\\xB6\\x9C\\x0CZ>\\xAB\\xA9djuK\r\\x82\"'['\\x089y\\xA3\\xEF\\xC8\\xF3\\x95N\\x88\\x93\\x16I\\xDE\\xFDs\\x8AV\\xB0\\xE4\\x97\\xB7\\x0Em\\xB62K\\x90S\\xE8U\\xE2\\xF9)\\xF7p\t\\xAF)\\x86\\xD0)2\\x96 R\\xF6?\\xE4\\xB0\\x15M\\xA0\\xD3.6\t\\xC2\\x91yX&!\\x86N"
		"[\\x97\\xBD\\xD2#r4\\xC2/F\\xF8\\xC5=\\xFE\\x1E\\xE1\\x17NIS^&\\xF71\\xEBh\\x91\\xD2\\xE4\\xCCt\\x19a\\xF8\\xB6\\xEF5\\xC2\\xD0\\x1Da\\xF8\\x9ESf\\xA4Z\\x8D0|N\\xF5\\x08\\x9F\\x8C0<\\xA1Rr6\\xC2\\xF0\\xAC\\x95\\xB4\\x17\\x99\t\\xC8\\xB4\\xB4u-\\xBA\\xDET\\x9A\\x0FV\\xAA\\xE6\\xCER&F\\xA9B\\xA9\\xA2\\xE4\\x945\\xBC^\\x8B\\x8C7\\xA64\\xE3\\xE4\\xF5*\\x81\\xC6\\xFA\\x057\\xC5\\x13Y\\x19+\\xAB&ce\"\\x15\\xAD\\x84C\rQ\\xC8\\xF3B\\x82\\x83\\xC0\\x83\\xE3\\x81V\\xDFi)"
		"M\\xAE\\xA2\\xC0ii\\x9A\\x04\\x9E\\xD3\\xD2|]&o\\x95\\x1Ea\\x1F\\xC3\\xA3\\xEF\\x8E\\x8D\\x83F\\xE48\\x8E\\xC7\\xD0\\xFCF\\xE1\\xC9\\xCBN\\x85\\xAE\\xFDdY\\xAB\\x15\\x1F\\x91c\\x84\\xD1\\x18\\x8E\\x03\\x14\\x84c\\x14\\xF9\\xA3\\xF0\\xA4k\\x11\\xED\\xEA\\xB36\\xA7\\xA5\\xAB\\xD48\\x81V\\xC9\\x07!\\x99\\xDA4\\xE6y\\x9D\\xA0\\x0E\\xDFi\\xE9&\\x81\\x0E\\xCF\\x16]\\x91\\x86:y\\xC9Ya\\xAC\\xCAh%\\x12\\xE4\\x98\\xF8M\\xF8\\x9AK=\""
		"\\xA7\\x15-\\xF8b-\\xF8fD\\x8E\\xBB\\xE7\\x8A\\xEA\\xE5\\x88\\x9C\\x1A_\\xF1U\\xA2\\xD7c\\xE4dz\\x91)u)\\xF8\\xA2\\xAAy\\xC3e\\x1F\\xDC\\xFB\\xF2\r\\x86\\xB8\\xCF\\xBE;5\\x05\\x0CI\\xDF\\xF8\\xC5\\x9A\\x827\\x00\\x90}M\\x81\\xE0\\x98t\\x05\\xE8(27-\\xC4\\x7FzJ\\xBFt?\\x9C\\xBC%'\\xD1\\xCF/\\x83\\xF7_\\xC8^\\x82c\\xF4\\xB7doAM\\x02?\\xD3wTs\n\\x9A\\x99\\x10\\x83\\x04\\xF90$q\\xB0\\x0F1\\xB2K\\xCB\\x8B.-\\xD7Q\\x14\\xFA~\\x1C\\xC5\\xBB\\x04\\xED3\\xF2N\\x9A\\xDE\\x13\\xC0\\xA2J\\xD0"
		">\\x16\\xAE\\x13\\x14\\xC00\\x80\\x91\\xE7\\x87\\x1D\\xE1\\xE6\\x9A\\xEA\\xDB$\\xFAm\\x12\\xFD6\\x89\\xFE}\\x93\\xA8\\xC9;s/l\\x8E\\xFC\\xC4\\x07!4\\x97\\xCA\\xC4\\x03\\xF6\\xEBWC\\xFD\\xB4+!H\\xBA^,\\xCC\\xCE\\xC8\\xDA\\xBF\\xF2\\xAB\\x8AJ\\xC6\\x99{ w\\xDD%m\\\\s\\x03\\xC4\\xD4FZ\\xA2qs\\x95\\xB5MWo\\xA5\\xB5\\xA0\\xA6\\xB9RU[\\xF5\\x93w\\xA7AD\\xFE{\\x1A\\xFC\\xC7a\\xBB\\x8B\\xF0\\x00\\x900\\x02\\xC4\\\\\\xAC\\x9B\\xBA\\xF1\\xED+\\xC6\\x0En\\xC9)\\xE3\\xF5b\\xC1K\\xBE\\xE2R[\\xF7\t]"
		"\\xB7iSc\\xE8\\xBEV/d1LK\\xDB\\x8A'\\x92\\xAEm@\"\\xB8\\x1B)\\x06\\xE7>\\x08\\xE6\\xB7\\xBFh8\\xAD\\xB3\\xA5\r\\xB0\\x17\\x01s\\x11\\x81\\xBD\\xB0\\xBF^\\x13,\\xF9\\xA9\\x1B\\xEFCM\\xAB\\xAA\\xBB\\xE7\\xEC\\xF5\\xEB\\xB5p7\\xBD\\xD8:|u]!\\x85\\xFEL\\x98\\xA9\\x95q\\xBE\\xF1\\xC6|\\xFE\\xE9\\xDF\\xCF\\xA7\\x08\\x13g!\\x00\\x00", 
		LAST);

	web_url("configs", 
		"URL=https://api.razorpay.com/v1/magic/analytics/configs?key_id=rzp_live_UiTUCACnTlsjdB", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live&session_token="
		"24EFEDD3486B8595B70D12E85CBC9950B4F89462B88710E639464B5293DBC92DFAAB64F3EE0B05A9B777F74F4D01B06FED2D8CAFFF5162F227915631320BD73A9986DA9D0A2837BBE33AE2E5F4DAC90BAB7CC7BDD56FAED40DC8CFC44AD3CB0D0481042B53D0314419664585524FEE5968D6BA827D7C759BA97A7419A503662BB07764C36A44DDD5E43967ACE87F83A0065D48", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("preferences", 
		"URL=https://api.razorpay.com/v1/standard_checkout/preferences?session_token=24EFEDD3486B8595B70D12E85CBC9950B4F89462B88710E639464B5293DBC92DFAAB64F3EE0B05A9B777F74F4D01B06FED2D8CAFFF5162F227915631320BD73A9986DA9D0A2837BBE33AE2E5F4DAC90BAB7CC7BDD56FAED40DC8CFC44AD3CB0D0481042B53D0314419664585524FEE5968D6BA827D7C759BA97A7419A503662BB07764C36A44DDD5E43967ACE87F83A0065D48&currency%5B0%5D=INR&_%5Bpreference_source%5D=checkout_frame_standard_lite&_%5Bbuild%5D=8007107094&_%5Blibrary%5D=checkoutjs&"
		"_%5Bplatform%5D=browser&qr_required=true&key_id=rzp_live_UiTUCACnTlsjdB", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live&session_token="
		"24EFEDD3486B8595B70D12E85CBC9950B4F89462B88710E639464B5293DBC92DFAAB64F3EE0B05A9B777F74F4D01B06FED2D8CAFFF5162F227915631320BD73A9986DA9D0A2837BBE33AE2E5F4DAC90BAB7CC7BDD56FAED40DC8CFC44AD3CB0D0481042B53D0314419664585524FEE5968D6BA827D7C759BA97A7419A503662BB07764C36A44DDD5E43967ACE87F83A0065D48", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("envelope", 
		"URL=https://o515678.ingest.sentry.io/api/6398391/envelope/?sentry_key=16be5f91f20c459cbfb51e421f4c9d2f&sentry_version=7&sentry_client=sentry.javascript.browser%2F7.64.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"sent_at\":\"2024-02-23T04:11:07.061Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"7.64.0\"}}\n{\"type\":\"session\"}\n{\"sid\":\"330e120dcca74a0b883d085d1a0803cc\",\"init\":true,\"started\":\"2024-02-23T04:11:07.059Z\",\"timestamp\":\"2024-02-23T04:11:07.059Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"d43430ddaebbedea49f590c6812d6bc41f57f7bd\",\"environment\":\"__S_TRAFFIC_ENV__\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/"
		"537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\"}}", 
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

	web_custom_request("collect_6", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xED\\xBD\\xD9\\x8E\\x1CI\\x96\\x18\\xFA+VAt\\x8Df\\xE0\\xE1\\xB4}!\\x91\\xE8\\x9BL\\xAEU\\xDC\\xAA\\xB8\\x14\\xAB\\xB2\\x89\\x84\\x85\\x87E\\x843#\\xDC\\xA3\\xDC=r\\xA1\\xEE\\x00\\x17\\x82^.\\xEE\\x1D\\x0C\\x06\\x02\\x06\\xF7AR\\x01\\xD2\\x00\\x92FO\\xD2\\x93\\xF4\\xA0\\x9F\\xE9\\x1FP}\\xC2\\xC51s\\xF7\\xF0X\\x98\\x95\\x99\\xE4L5\\xBB\\x82\\xDDE\\x86\\x1D3;\\xB6\\x9C\\xCD\\xCE1s\\xB3\\x7F\\xD9s\\xBD[\\x87=\\x1C\\xAB\\x98\\xE2^"
		"\\xC4#.\\xB4\\x89\\x18a<\\xEA\\x19\\xA3\\xCA\\xC4\\xBD;\\xC1Y/\\xEA\\x11\\x9E\\x9F\\xBE\\x9B\\xB2^\\xD4\\x1BK5f\\xC7\\xBD\\x88D8\\xC2o\\xA3\\x9E\\xED\\xDD:<d\\x8A\\xA8\\x88\\xD0\\x88`*#\\xC9eD0~\\x1B\\x1D2E\\xB1\\x073E\"adD\\x94\\xF1`\\xE1K3\\x81e$8\\x8F(\\xA7\\x1ElX\\x00K\\x15\tB#\\x1AJk&=\\x12\\xA3h\\xC4\\x15\\x85\\xEEy\\xB0\\xE0K\\xB0\\xA4\\x11\\xA3\\xBEI\\xAD\\xCD\\x12\\xCC\\x01\\xAC\\x01l\\xA8Z\\x82\\x19\\x8D\\x18\\xF3\\xA5\\x8D\\xE8\\x82q\\x0B\\xD6\\x1D\\xDCTD\\x8C\\x91\\xB7\\xD1"
		"!\\xC7Dw\\xC0\\xBC\\x01sn\"\"\"f8\\xF3`\\x1E\\xC0\\xC2\\xE8\\x15\\xB0\\xA8KK\\x98\\x9E\\x88F\\xB8\\x9E%.)o \\xD4C$\\x97&\\xA2&\\xA2\\x9C0\\xF8KF\\x14\\xE6\\xC4\\xFF\\xC5$a\\x11S\\xDAD\\x920\\xE8<\\xE6\\xAC\\xFD[1\\xE3\\xD1\\x12iD\\xD4\\xCB\\xECI:\\xB6\\x95\\xEBE\\xBDIU\\xCDo\\x92\\x98\\xF4 \\x93\\x19\\x01\\x9D1\\x9AC[J\\xA9\\x08\\x86%Yd\\xB0\\x11o\\xA3C\\x85\\x19i@\\x84i-\\xDFF\\x87B0\\xE2G#\\xA4\\xF4\\xA3\\x91~4B\\x8AU\\xB0\\xF2`\\x89\\xA5\\xD9\\x02\\x16B\\xD2f\\xA4\\xCC\\x8FTH\\xD1\\x8E\\x9D7cg"
		"\rDx\\x88\\xC2\\x82\\xB7=TR{\\x10L\\xA2\\x88\\x98\\x0E\\xE8\\x8DG\\xAF\\xB0\\x11](\\xC1\r\\xB8mC\\x06\\x8Cd9\\xE3*\\xD0\\x00\\xF8\\x9EG\\xA4\\x99\\x07\\xE8>\\xFC\\x12\\xDC\\xF3y\\x04\\xDDT&\\xE2\\\\y\\x8C\\x8A\\xB2\\x88D<:\\xEC\\x9D\\x9E\\x9E\\xC6\\x95-\\xAB\\xF3,\\x1D\\x0C\\xA6\\xAE\\x8CS\\x10\\x97r\\x92\\xCFc;\\x9F\\xF7\\xA2^2\\xCCbH\\xA6\\xA3\\xF38\\xC9g\\xBD\\xA8gg6\\x05hH\\xCD\\xEC8M\\xFA\\xF3\\xE9b\\x9Cfe\\\\\\xD8\\xF7y1\\xB7MQ\\xC0\\x9ELm\\x91V\\xE7\\xF1\\xAC\\x84\\xBA\\xEF\\xECY"
		"<\\xCE\\xF3\\xF1\\xD4\\xD9yZ\\xD6\\xC5\\x92<\\xCB\\\\R\\xC5#\\x9B\\xB8A\\x9E\\x1F\\xC7\\x99\\xAB\\xEA\\xDA\\xA1l\\xDFfvz^\\xA5I\\xD9A\\x1C\\xB2*;\\x9E\\xD9\\xCC\\x8E]\\xD1\\xC9:\\xCF\\x17\\xD5b\\xE0j\\xC8t1\\x1B\\xB8\\xE2\\x9DM\\x8E\\xD7\\xFB\\x97L\\\\r\\x9C/\\xAAu\\xF8b\\xAD\\xD7m\\xEB\\xA1\\xCD\\xBATY\\xD9\\xAA\\x8C\\xC7\\xF10_\\x0C\\xA6.\\x99\\xA6I\\xD3\\xF3j\\xB8\\x05\\xB8\\xECs\\x9C\\xE4a\\x9E\\x01\\xD4\\x0E\\xBA\\x9E\\xDDy\\xBAm\\x16\\xEB9\\x1B\\x96\\xAE8I\\x13\\xD7\\x9D\\x87\\x99+"
		"\\x92\\x89\\xCD\\xAA~\\xE2\\xB2\\xCA\\x15\\xFD\\xD5\\xDE\\x82\\xCAk\\xEAn\\xEFk\\x97\\xFA\\xB3\\xF3UZ\\x03\\x9D\\xB3Q\\xB2\\x9C\\xCBd\\x98\\x91\\xF8\\xDDb8v\\xF1\\x0C\\x04sP\\xD8l\\x98f\\xE3~\\xE1\\xCA|Q@\\xCFJ\\x16\\xDBy\\xBF\\xCC\\x17\\xD5\\xA4Ob;\\xB3\\xEF\\xF3\\xCC\\x9E6=N\\xB3\\xB2\\xB2#\\xE7\\x86\\x1Bx\\xE3\\xBC\\x18\\xBA\\xA2\\xEC0\\xDA|\\x1E\\xBBll\\xAB\\xD4\\x03\\xDE6\\x9C\\x0B\\x8CO9\\x08Jd8\\x05\\xB6W,\\x12\\x11'\\x91\\x8A\\x88\\x89t\\xC4\r\\xE6\\x91\\x89"
		"(\\xE8\\x9DH\\xE2\\x88\\xEA\\x88R\\xAF\\x19}}&#\\x19\\x1DrE\t\\x08\\x81\\xA1^T9\\x93\\xF0\\x8F\\x02e\\x07&\\x00\\x10HH)\\x1CI\\xADH\\xC4U\\xA4\\xB0\\x04qR\\x14jb\\x1C)\\xC6M\\xA4u\\xA4@\\x7Fk\\x1E))y\\x84\\xDF\\xBE}\\x1B\\xF5\\xE6`V|\\x13\\x12\\xB4]\\xC4\\xA0\\xBBJE\\xBD\\xBB\\x8F^\\xC3p\\xA7\\xB6,\\xF7\\xCA\\xB4r\\xFD\\x89\\xB3CW\\x1C\\x1D\\xB9\\xA9\\x9B\\xB9\\xACB\\xDB\\x80\\xFD~\\xB9\\x18\\xF4\\xA2\\xDE\\xD0V\\xB6_\\x9D\\xCF\\xDD^fOzo\\xFD "
		"(\\xB4\\xA0q\\xDD\\x82\\xF9d-\\x94\\xCE\\x16\\xC9\\xC47bB#\\x1CL\\x9Db\\xB4i\"\\x1D\\xEE\\xEDgY\\xBE\\xC8\\x12\\x8F\\xE2\\xC54\\x1D\\xBA>V\\xD2\\xB8\\x84\\x0F\\xFB\\\\;\\xD2\\xE7B\\xCA\\xBEvV\\xF4\r\\x1Db7H8%\\xC9`\\xD9=\\xA8RN\\xF2\\xD3\\xA3#\\xFF\\x13\\xD9\\x0E\\xBE\\xBE\\x07\\x15\\xCB\\xACtf+\\xD7\\xCF\\x17U\\xD3\\xCF4\\x1B\\xBA\\xB3=\\xECE\\xF1|\\xEA\\xF6\\xE6y\\x99Vi\\x9E\\xDDBvP\\xE6\\xD3E\\xE5n\\xA3\\xA9\\x1BU\\xB7\\x10\\xFE\\xDDm`\\xA8\"\\xB5\\xFDI:\\x1C\\xBAl\\xAF*\\x16\\xAE\\x07c\\x12aL~"
		"t\\x87\\xFC\\xED\\x07\\x86EFl\\xC48\\x1F\\xF6\\xC5H\\x91>\\xB7C\\xDD7\\xDC\\x0C\\xFA\\x84\\x1AJ\\x0CN\\xB8L\\xE8\\xB5\\x86\\x95\\x96\\xFD\\xD2M]R\\xB9\\xE1\\xEA\\xB0H/:\\xD4\\xC0\\xF3\\x9E5\\x7F\\xED\\xE9\\xFFdS\\x0E\\x03\\x02\\xB1\\x92\\x91 `\\xC7\\x89\\xA1\\xF0\\x17\\x8Fz\\x8F\\xEE\\x7F\\xBB\\xFF\\xE4^\\x8B9\\x9F\\xDB$\\xAD\\xCEo!r\\x1BM\\\\:\\x9ET\\xB7\\x10\\xC1\\xF8w\\xB7\\xD1\\xB2\\xCD\\xC2Mm\\x95\\x9E\\xB8\\xDBh`\\x93\\xE3q\\x91/\\xB2\\xE1-\\x94\\xE5\\x99\\xBB\\x8D\\x86i9\\x9F\\xDA\\xF3"
		"[h0\\xCD\\x93\\xE3\\xDBh\\xE0\\xD5\\xCB-\\x84}>\\xAA\n\\x9B\\x95s[\\xB8\\xAC\\xBA\\x8Df\\xB6\\x18\\xA7\\xD9-\\x84\\xE7g\\xB7\\xD1\\xDC\\x0EA\\xA3\\xD5\\xA9\\xF7a\\xC8\\xB7\\x10\\xF5\\xC3\\x99N\\xF3\\xD3e\\xD5\\xE4\\xBC\\xE6\\xA3\\xDE\\xA8\\xB03\\x17\\x9A\\xF0\\xB3s\\x9A\\x0E\\xAB\\xC9\\x1E\\xF4\\x17V/\\xBE\\xFBM\\xAA,\\x92=X\\xCF\\x94\\xB7n\\xDE\\\\\\xD7\\xF67O\\xC8\\xCD\\xC6(\\xDD\\x9C/\\x06\\xD34\\xF9}U\\xD8\\xD1(M\\x8E\\\\v\\xB2\\x97\\xD8\\xCC\\x16\\xE7_\\x0E\\x16\\xE9t\\xB87\\xE4\\x8C3"
		"<\\x1CZ7\\x18\\xB8\\xA1\\xB3\\xDC\\x8C\\x84\\xC1\\x89\\xD4\\x84\\x0E\\xE5 \\xE1d$\\xD4H\r\\x86_\\xCE\\xF2\\xA1+\\xB2=\\xF2\\xE5\"KG\\xA9\\x1B\\x1EM\\xD3\\xCA\\xED\\x91/\\xBD\\xED>*\\x93\"\\x9DW\\x90\\xAC\r\\xC9\\xD1\\xB1;\\xDF+\\xDE\\xCF\\x8F\\xA6\\xE9\\x89;z\\x95\\xBE|u\\xB0\\x7F\\x90\\xBD\\x9C\\x96\\xEF\\x86w\\x9A:\\xC1J\\\\\\\\2\\x1F\\xBA=\\xC8h\\xF9\\xAD\\x19i\\xBF\\x19b\\xDFO[3\\xAF{y5\\xEF'\\x85\\x1B\\xBA\\xACJ\\xED\\xB4\\xACyE\\x01\\xAFP\\x0C\\xEA\\x9E`\\x12\\xF5\\x1E?z\\xFAu/"
		"\\xEA\\x15n\\xBA7\\xCC\\xCA\\xFE\\xBCp#W%\\x134/\\\\\\xBD\\x90\\x80)/\\xDCho\\x02-\\x17yY\\xE6E:N\\xB3\\xBD\\x1E\\xE0\\x91\\x11\\x0B\\xE8\\x0E\\xC5\\xDB\\x80\\xA5\\xC1\\x00d\\x84\\x7F\\xE7E\\x9A\\x83\\xF1\\xDF\\x9B\\xE6\\xA7\\xD0\\xB7r/LQ\\x8B\\xB6&\\xDE\\xDA\\xD2\\xE8f\\xFD;\\x99\\xE6\\x8BaK\\xC5\\xFE\\xA9\\x1B\\xDC\\xB4e\\xE9\\xAA\\xF2f\\xB1\\xC8\\xAAt\\xE6\\xE2\\xA9\\xAD\\\\Y\\xC5.\\x8B\\x87\\x96S!0\\x16\\x86\\x18"
		"<p\\x0E\\xF3\\x11\\x8F\\xDF\\x95\\x8D\\xE8K\\xF0\\x17d\\xC4\\xA5T\\x11g\\x12\\x1C\\x05)\\xA3\\xDE\\xA3'\\x0F\\xDA9\\x9D\\xDA\\xF7\\xE7\\xD3\\xDC\\xB6\\xCA\\xC33^\\xB9w\\xC8$\\x8E\\x90\\xE08B\\xE0\\xC4 \\x83q\\x84\\x08\\xD6\\xF07,\"\\x9B\\xE2\\xB6\\x9C\\xBB\\xA4*l\\x95\\xE6{$\\xC6\r\\xB8L\\xDF\\xBBr\\xCF.\\xAA\\xBC\\x85\\x14I\\xE9\\xAA\\xBD\\x9B7\\xB7\\xAC\\x18a&\\xFC\\xE8o\\x8E\\xD2\\xA9+o\\xDE]$\\xC7O\\xEC|n\\xCB#&\\xF1Y\\xFCn>\\xFE\\xFD\\xC9\\x1E\\x91\\xC6p.\\xA8\\x14\\x88I|"
		"\\x1A\\xA1\\xAB\\xE2\\x12|\\x1B.\\xC1\\xAF\\x83K\\xD1m\\xB8\\x14\\xBD\\x0E.\\x83\\xB7\\xE12\\xF8:\\xB8\\x80D[\\x90\\x01\\xF8:\\xD8\\xE4\\xD6\\xAE\\x01\\xF8\\xB4\\x17q\t.\\x01\\x03\\xDE\\x92JG\\x87\"\\x92\\x11\\xF8R\\xE6\\xED5h~\\xBF\\xC8\\xB3\\xAAL\\x87.\\x9D\\xD9\\xB1\\xDBBw\\xC9\\xCDU\\xE8\\xBE\\x86o\\x93\\xF6\\x80\\xEF\n\\xB4_\\xC3\\xB7I\\x7F\\xC0w\\x05\\xFA\\xAF\\xE1\\xDB\\xE4\\x01\\xC0w\\x05\\x1EX\\xC3\\xB7\\x85\\x0F\\x00\\xE1U\\xF8`\\x1D\\xE3&/x\\x8C\\x9E\\x17\\x82\\xAEa\\xBF\\xA0k\\x10"
		"(\\x1BP\n^=\\xA0F\\xF5\\xA4\\xD9x\\xA7}v\\xDA\\xE7\\x8A\\xDA\\xA7\\x17\\xA8L\\x89\\x98\\x9F\\x85U\\xD1\\x8E\\xC2\\x7F^\\x14\\xDE\\xD9\\x97\\x9D}ix\\xE1\\x90\\x90\\xB7W\\x13\\xF2\\x1D\\xC1?g\\x82\\xFB\\xC8|p\\xF3)V\\xC1\\xE5\\x92+\\xBE\\xDB?\\x9B\\xD7e(\\xEDx\\\\\\xD8bj\\x04\\x1Da6p\\x14\\x93d4\\x92\\xD6{\\\\\\xAB\\x9E\\xA2\\xEF\\xBF\\xC0~A\\xB4\\xA2\\xC56\\x9C\\xAF\\xCD\\xF5\\x90\\xFB\\x93r\\xC6vr\\xF49\\xCB\\xD1\\xC7,\\x93v\\x94\\xFF\\xAC)\\xBF\\xE6\\x89}\\xDC\\xF2i\\xB7d\\xFE,\\x96\\xCCW_&"
		"\\xED\\x08\\xFB9\\x106,'TXN\\x10\\x90j\\x0E\\xBF\\xF0\\x9F~,\\xF7\\x8EM\\x8EAc\\x1DY\\xCA\\xA8Tb\\xD8\\x1F\\xC9\\xA1\\xE9s\\xA6T\\xDFR\\x81\\xFB\\x82\\x08=\\xA0N\\x98\\x81\\xC1+,\\xA80\\x11\\x84a\\xA3\\xAF\\xC2\\x82Wk\\xAE\\xCB\\xA5\\xCB\\xE6\\xAE\\xC0\\xA5Wk\\xAE\\xCB\\xC8\\xCB\\xE6\\xAE\\xC0\\xC8Wk\\xAE\\xCB\\xEB\\xCB\\xE6\\xAE\\xC0\\xEBWknE\\x1C\\x96\\xED]E\\x1C\\xAE\\xD8\\xA0\\xDC:\\xC0\\xD6\\xFCi\\x06\\x82b\\xE0\\x17\\xFDH\\xF3\\xD7v\\x8C\\x1C%\\x83\\xE1\\x90\\x0F\\xE9\\xA8\\xCF\\x1C\\xC5}"
		"N\\xB5\\xEA\\x1B\\xC6I\\x9Fc.\\x9D\\xB2B\\x19\\xAE\\xB6\\xAD\\x95\\x04\\xBE\\x16\\x1F_\\xB2\\xC1-\\x8B)\\x81\\xAF\\xC5\\xC9\\x97lp\\xCBjK\\xE0k\\xF1\\xF2%\\x1B\\xDC\\xB2\\x1C\\x13\\xF8Z\\xDC|\\xC9\\x06\\xB7\\xAD\\xD7\\x04\\xBE\\x1E?_\\xB6\\xC9-\\x0B:h2p43\\x86FL\\xE2\\x8Fe\\xE6v\\x15yD\\xCC\\x1A\\xA72\\xA31\\x95\\xD7[\\xD5\\x03\\xB6U6l\\xB0]gM\\x0F\\xD8Vy\\xAC\\xC1v\\x9D\\x15=`[e\\xA0\\x06\\xDBu\\xD6\\xF3\\x80m\\x8D;\\x1At\\xD7Z\\xCD{|"
		"rk\\xF7\\x96\\xA4\\x17@z\\xF6\\xB1\\xA4O\\xCB\\xC9\\x9D\\xC9\\xA2x\\x97R\\x8C\\xC7k\\xE6\\x96\\x12\\xC2)eW\"\\xFE*\\xBEU{\\xDA\\xE0\\xBB\n\\xF9W\\xF1\\xAD\\x1A\\xCC\\x06\\xDFU\\x18`\\x15\\xDF\\xAAEl\\xF0]\\x85\\x05V\\xF1\\xAD\\x99\\xBC\\x06\\xE1\\x95\\x98`\r\\xA3\\xDC\\xDA\\xC5%\\x1Bh`\\x83\\xEB{s\\xF3\"\\x1F.\\x92\\xAA\\xBC\\xA9\rV\\xD80,\t\\xE6\\xEC\\x08\\x93Q\\xCB\\x8C+\\x1AA\\x19!\\x89\\x16\\x97\\\\\\x83]\\x02\\xFB\\x8A\\x86h\\xB1_\\x8AE.\\x81}Ec\\xB4\\xD8/"
		"\\xC50\\x97\\xC0\\xBE\\xA2AZ\\xEC\\x97b\\x9FK`_\\xD5(-\\xFA\\xCB1\\xD3e\\xF0\\xCB\\xAD\\xDDo\\x96K\\x18\\x13`-\\xF5\\x91\\x1A\\xE6\\xBB\\xB4\\x9A\\xC0\\xD1M;\\xB5\\xD3\\xF5\\xE5<\\x96\\x18\\x13u\\x15\\xFD\\xB2\\x82mm\\xB5^c\\xBB\\x82vY\\xC1\\xB6\\xB6\\x18\\xAF\\xB1]A\\xB7\\xAC`[[k\\xD7\\xD8\\xAE\\xA0YV\\xB0\\xAD/\\xA5ktW\\xD1+\\xAB\\xF8\\xE4\\xD6\\xEE\\xD5\\xA4\\xA7\\x98\\xF0\\x88\\xC0\\x91U\\x8A\t\\x0B\\xE7\\x9AV\\x1DJT&\\x137s}\\x1Fv\\xDAz\\x10\\xB2>\\xF8\\xE9\\xCE\\xAAE\\xE1\\xF6\\xE6v\\xEE\n"
		"h\\xEF\\xB2\\x9E\\xE8\\xDB^txEv\\xABn\\x12\\xDA\\x84\\xE8}{+\\xDC&\\x04UT`C\\x08\\xC1\\xDCPi\\xB8 R\\x10%4\\xC6\\x97\\xE4\\xC0\\xCD\\x06\\xBA\\x0Cxq\\x03\\x97b\\xCA\\xCD\\x06\\xBA<yq\\x03\\x97\\xE2\\xD3\\xCD\\x06\\xBAlzq\\x03\\x97b\\xDD\\xCD\\x06V8\\xF7\\xE2\\x16<7\\x87\\xC8\\x86\\x92a\\xA3G\\x87\\x8D\\x1E\\xD5n\\xF4\\xAC\\xEC\\xDCl;\\xFA\\xED\\xFB\\xD2f\\xF4e,"
		"c\\x1C'%\\xEC\\xC7\\xF8S\\xC8\\xC0\\x917C\\x1A6\\x8D\\xFC\\xD1\\xD0r\\xE2\\xFC\\xC9\\xF5\\x99\\x1B\\xA6\\x16v\\x89\\x9C\\xCB\\xA2y\\x91f\\x95?\\xE0\\x07\\xE7\\xB6M\\x13X\\x81\\xC3\\x96\\x1Fh\\xB9\\x1Ew:\\x1B\\xDF\\xF4\\xBB6E<NG\\x9B\\x07[\\xDB3\\xA6\\xF5!TB\\xE6g\\xB7\\xBD<\\xDC\"r~v;\\xCC\\x80\\xA6\\xBF\\x10\\xDB\\xF9<\\xCE\\xCE\\xEC\\xA2=\\xBBh\\xCF\\xAF\\x12\\xED\\xA9\\xB7\\xB9\\x08\\xE1W\\xDE\\xE6\\xDA\\xF1\\xEC\\x8Egw\\x11\\xCA]"
		"\\x84r\\x17\\xA1\\xFC\\xE8\\x08\\xE5\\xD5\\xB7\\x1Fwl\\xBBc\\xDB_\\x9Dmw\\x81\\xF5\\xDFl`\\xBD^7r\\x8C\\xAF\\x7F<jG\\xED\\xCF\\x85\\xDA\\xBBm\\x94\\xDD6\n,S(\\xBF\\xEAa\\xF2\\x1D\\xC1?g\\x82\\xEF\\xF6\\xCDv\\xFBf\\xFFD\\xFBf\\xCD\\xF9j\\xC3\\xAE\\xB0\\x80\\xD8q\\xD3\\x8E\\x9Bv\\xBB\\xB0\\xBB]\\xD8\\xEE.\\xEC!\\x93W\\\\\\x94\\xEC\\x88\\xFC\\xD9\\x11\\xF9\\xC3[\\xED+[\\xEC\\x17n\\xF6\\xED6\\xDFw\\x9B\\xEF\\x9Fh\\xF3}\\xB9m\\xA6\\xAF\\xB2|"
		"\\xD9Q\\xFF\\xCF\\x82\\xFAp\\xF0@\\x13\\xF8\\xC6v\\x19\\x17\\xF9\\xFC>O\\xDDy\\xE6\\x9F\\xB3g\\xFE1\\xF1\\xD7\\x1D\\xE5?c\\xCA{\\xE5\\xA3\\xE0zK\\x02\\x97\\xD9\\xC2\\x05\\xCA\\xAB7O\\xAE\\xDF-\\xB8\\x0E\\xE8\\xF7\\x07\\x89\\xB5B\\x9B\\xA4o\\x87\\xA3\\xA4\\xCF\\x136\\xEA[5t}\\xADLb\\xD5P\\x10:\\xA0\\x17_\\xFB\\x18\\x92\\xC3\\xBD\\xCB`\\xBA\\xC4\\x95\\x85}\\xF1\\xA1{\"\t\\x96\\xCA\\x8F\\xD1\\x0F\\xD6_\\x13y\\xE9a\\x8A\\x016\\x9C8\\xDA\\xB7\\x96\\xE8>\\xA7\\x84\\xF4\\xADTI?\\xE1\\xE0(&"
		"\\x06\\xB3\\x04_x\rd;\\xCC\\xCB`j\\xAF\\x8E3D\\x87Cy\\xCDY8A\t\\x0EG\\xE3\\x1ER\\x9F\"\\x01\\xD4\\xFB\\xAB\\x97\\xBD\\xA8w?\\x87+\\xF8\\xD0\\xA2Dy\\x86\\x1E\\xC1y\\xB9qag\\xBE\\x1C\\xF5\\xB5B\\xD9\\xFD\\xE6P\\xDF\r\\xD2\\xF7\\xA7\\xEA\\xFAp\\xAC\\xCE\\x17c\\xA1\\xEC\n\\x17,O\\xF6%yV\\xD94sEK\\x87p\\x86\\x8E\\x8A\\x18\\xFB?\\xBF\\xBB]_\\xBC\\xD8\\xAF\\xF2y\\x17\\xEC\\x91\\xF3\\xD0\\xC2!kg\\xFE]\\xD9\\x07\\x8B\\xD6\\x9Ei\\xED\"5\\xF8w\\xCDq="
		"\\x13Hz\\xB9s\\x80\\xF3\\xA9M\\xDC$\\x9F.\\x0F\\x036\\xF6\\xAC=\\xC4X\\xC2@\\\\V\\xC5\\xC90K\\x9Bi\nW7\\xDE\\xAC\\x04\\x89\\xA9a\\x02\\xF7\\x89\\xB8\t[\\x17\\x9A\\x19\\x89\\x8F\\x18gJhE\\x88\\xD1Zb&\\x8E\\x145XSL0\\xC6J)B\\xB8\\x11GY|\\xEA\\x06\\xF3\\xDF\\x97\\xD5|oXV\\xFDw\\xF3\\xF1\\x97GYr\\x94X\\xB87\\x92|\\x99$\\x83=\\xD2W\\x1EV\\xA6\\xC3=\\xA2\\x87Nq\\x9F\\xCC'\\xC9\\xDE\\xC1\\xD9\\x8B\\xC1y\\xFF\\x87\\x97\\x0F\\xDE\\xF1\\xFD7\\xFD\\x1F^="
		"xS\\x85\\xBCdo\\xFF\\x9B\\xE3'\\x8F\\xC8\\xAB\\xA2\\x94\\xF3\\x89\\x9E\\xEE\\x1F\\xBC\\xD3\\x07G\\x8B\\xD1\\x9D\\xAF\\xED\\xA3\\xB9bO\\xEE\\xBD\\x11/\\x9F\\xEE/\\xC4\\xC2\\xDE\\xF9\\xE6%}\\xF4 \\x7Fs\\xFF\\xD1\\x83\\xAF\\x9EL\\x1E={t\\xFF\\xBB\\x1F\\xDF<\\x1C\\xE5\\x0F\\xC8=\\x8FjR\\xED}p\\xEC_\\xBA\\xE1lo\\xFFin\\xBE\\x16\\xC9\\xBD\\xFD\\xFD\\xFD\\xFD/\\xF3\\xC9\\x1E\\xC6G\\xFB\\xA3;\\x83g\\xDF&\\xE2\\xD57\\xD5\\xD9\\xE8\\xDBoI\\xF5\\xF0\\xD9\\x93a\\xFF\\xD9\\xD1\\xEB\\xF2{7\\x7F\\xFE\\xD5\\xFB;"
		"d26\\xDF\\x99BXQ\\xD9\\xFD/s\\xB7'\\xC5\\xDD\\xBB\\xF7\\xEE\\xCA\\x03Ot\\xD1\\xB2\\x15\\x8F\\x0E\\x89\\x8E\\xE8\\xD2\\xDDZ2V~\\xE2\\x8A\\xA9=G\\xBE\\x86lX\\x95F\\x87\\x04\\xA44\\xF0*]\\xE7U\\x15\n\\x03Rb\"\\xB8y]P\\xA2C\\xCE!\\xDCY\\x0E7\\x07S\\xF9\\xF6\\xE3\\x18@\n\\xC3$\\x16G\\x8Aa&\\x94\\xD1B\\x12F5=\\xE2\n+\\x8C\\x15\\xE1J\\x0B\\xB8\\xF9\\x91\\x1Az!\\xFD\t\\xFE%\\xFAW\\xB3{\\xE9I\\xB6\\xF8fj\\xF5\\xFE\\x9B\\xA3w\\xAF$7\\x1FA\\xB4\\xBBo\\xCC\\x1D\\xD7/\\xE5"
		"{\\xF1M\\xB6X\\x98\\xFD\\xFB\\xE9C\\xA2\\xF4\\x8F\\xC7\\x84}U\\xBDy\\\\\\x8E\\xCE\\xAC{\\xF1tp\\xEF!{\\xFA\\xFDiC4\\xB9\\xCF\\x02\\xD1L;\\xBF\\xBA&Z\\xC4(\\xCC/\\xC5\rq\\xE4\nq\\xD8\\x1Aq(\t\\x85W\\x88Ci\\xC8\\xF9d\\xC4\\x91\\xC40\\xC6\\x199\\xA2J\\x11\\xC6\\xA5\\x11\\x18s\\xA3\\xC9\\x11\\xE1F\\x1A\\xA5\\xB1\\x84U\\xB7\\xC6X\\x12v\\xB1p\\xF2_\"\\xCE7\\xC7\\xFD\\x1C\\x9F\\xA4\\x07g_}\\xB3\\xFF\\xE6\\xE8\\xE4A\\xFE\\xE6\\xF4c\\x88s\\x87\\xBC\\x9A="
		"M\\x1F\\xCAb\\xFA4\\x17\\xDF\\xE4\\xCFG\\xDF\\x1D\\x1F\\xDC}\\xF5]Q\\xD9\\x97\\x035\\x1D};,~xx\\xF4\\xE3\\x9D\\xF7\\xD8\\xB4\\x12\\xC5\\x05\\xBF\\xEB\\xA7\\x96\\xB5\\xF3K\\xD7\\x88\\xC3k\\xE2\\xF8\\x89_\\x12\\x87\\xAF\\x13G\\x84\\xC2\\xAB\\xC4\\x91!\\xE7\\x93\\x11Gh\\xCC\\xB1$\\xFA\\x88\\x08\\xC5\\x89\\x86\\x9D\\x1F-\\x04\\x11G\\xCA\\x08\\x825\\xD7\\x14S\\xA6\\x8Dd\\xDC\\xF0\\x8F\\x94\\x9C\\x19\\xFDz\\x9Ee\\xFD;\\xCF\\xB3\\xE3\\xFD7\\xFD\\xF9\\xEB;\\x0F\\xEF\\x7F\\x0Cq\\x1E\\xE5w\\x1E"
		">\\xBC\\xFBU9\\xBC\\x9B\\xFE\\xF8\\xED\\x0F\\xFD\\xF7\\xE3t\\xC2~\\x1C\\x7F\\xB5\\xAF\\xD9\\xE2\\xF5\\xAB\\xEF\\x07\\xC9\\xC4<\\xA1\\xA3\\x07\\xAF\\x1F/N[\\xC91B\\xEE\\xFB\\xA9U\\xED\\xFC\\xCA5\\xE2\\xE8\\x868|\\x858b\\x9D8&\\x14^!\\x0E\\xC3!\\xE7\\xD3\\x11G\\x1Aj$\\xE1G\\x92Q\\xC3\\x98\\xE2\\x94`e\\xA48\"ZKPq\\x82H\\xA3\\xA9`\\x84\\x9B\\x8B%G\\xFF\\x12q\\xF8\\x8F\\xF7_?|\\xFE\\xF2=\\xFF\\x11$\\xE7\\x87\\x17\\xCF\\xBF}\\xF1\\x11\\xC4\\xD9Wo^"
		"\\x96z\\x94\\xBC\\x16\\xA3\\xF9\\xFBG\\xCF\\x8F\\x13\\xFEn\\xFF\\xC5\\xC3\\x07\\xECGV\\xEC\\xDF\\xFBq8\\xFAa<\\xBE\\xFFcq\\xCE\\x9F\\xFD\\xF0f\\\\\\x13\\xE7\\xE0\\xDE\\x9D\\xFB\\x1C\\xA6\\x96\\x91f~\\x19^%\\x0Ek\\x96G~\\xE2\\x97\\xC4\\x91k\\xC4a,\\x14^%\\x0E\\x0F9\\x9F\\x8C8\\\\Q\\xA1\\x04cGpxB`)\\x88\\x97\\x17l\\x8E\\xA8P\\x8AH0C\\x94sL\\xA4V\\x17\\x8B\\xCE/SgZ\\xBD|\\xE0\\xCC\\xF0\\xF1I\\xFAd\\xFF\\xCD\\xD1\\xE0\\xE4\\xABo\\x1E}\\x0Cu\\x8E\\x0B}\\xFE\\x1D}"
		"\\x9D\\x1D\\xE5XW\\xFA\\xE0\\x07\\xFA\\xE4u\\xFF\\xFC\\xC0\\xDA\\xA7\\xEA\\xC1\\xD9\\x8B\\xD1\\xF7\\xEC\\xFD\\xF7g\\xE4\\xBB\\xFB\\xCF^\\x8A\\xC7\\xAD\\xE8\\xDC\\xE7\\xC2\\xF8\\xB9\\x15\\xED\\x04\\xF35\\xEA4+\\x02\\xB6\\xBA\"P\\xEB\\xD4Q\\xA1\\xF0*ut\\xC8\\xF9t\\xD4\\x81\\x07f\\xB4\\xA2G\\x842B\\x85\\x81\\x13\\xC8\\x84b#\\x8E\\x14\\xC1L\\x18\\xC5\\x94d\\xC4`#%&\\x1F\\xA9\\xD8\\x1E\\xAA\\x17\\xA3|\\x94T\\xC7E\\xB9\\xFFF\\xBFY|\\xF7f\\xF01\\xD4\\x99b3\\xBC[>\\xFE\\xF1\\xD4\\xDC?"
		"y\\xFE\\x86\\xF0\\xAF_H>z\\x95}\\xF3\\xE2\\xF5`p\\xFAX\\xDD9\\xFB\\xE1\\xFD\\xA9\\xCE\\x7F\\xB8{p\\xB7\\xA1\\xCE\\x81$\\xF7\\xBD\\xA3\\xC1L;\\xC1kK\\x02\\xDE,\t\\xD8\\xEA\\x92@\\xAFQ\\x87\\x93Px\\x85:\\x9C\\x86\\x9COG\\x1Dl\\x0C\\x96\\x94\\x1CI\\x0Ck2\\x03\\x82#\\xB0\\x11\\xF4\\x88p\\x05#`\\xC6H\\xC5\\xB4\\x94Z\\xEA\\x8Be\\xE7\\x17\\xA9\\xF3\\xE3\\x1B\\xF6\\xF5\\x0F\\xEC;'\\xEE\\x97\\xFBo\\xCC\\x98=\\xB0\\xDF|\\x8C\\xD9\\xF9\\xA1<\\xE1\\xE9\\x83\\x97\\x8F\\xA7\\xEE\\x9B}w~\\xF7\\x91\\xB5\\xDF?|"
		"Z\\x95\\xE7\\xAF\\x1E\\x15\\xAEL\\x8F\\x9F\\x1F=zb\\x1F\\x9B\\xFE\\x99t\\xDF4\\xB2\\xA3\\xE8\\x1D\\xE6\\xE7\\x96\\xB5\\x13\\xBC\\xB6&\\xE0\\xCD\\x9A \\xCC\\xFC\\x96\\xB5\\xF7\\x14\\\\\\xACA~\\x16^#X\\xF7\\x08\\xB9\\x08H\\xBAu\\x9B\\x1A\\xFDt\\xE9b\\xF6\\x8A|\\xEA\\xF6\\x86\\xA9\\x9D\\xE6\\xED\\xFE\\xC8\\xD4\\x0E\\xDCt\\xEA\\x86\\x83\\xF35\\xB4!{\\x96\\x0F\\xED\\xB4\\xF6\\xCD\\x05\\xE52\\xB4\\xB6\\xBD\\x93\\xF3\\xBC\\xAC\\x1A/QP\\xAE\\xDA\\x9E\\xC9\\x95\nC\\x17\\xEE\\x1BL\\xF3\\xCC\\x97\\xD3M\\x91%"
		"[\\x1E\\xF9\\xE7R\\x06\\xC11\\xEF\\x93^x\\xC9\\x87x7\\x9B\\x9B\\x80\\xFC\\x03\\xEEoxn\\x03\\x10\\x0B\\xDC\\xF6\\x02\\\\\\xF1o=\\x8C40\\x81\\xBB\\xD1\\x05\\x98\\xA8\\x9A\\x1B|1\\xDA\\x16#\\xDDb~\\x84C\\xFFR\\x92\\xA0\\x82\\x85\\xDE\\xAFD\\x827\\x9C\\xE5\\x9D;\\xFC\\xD9\\xB9\\xC3\\x82\\x07\\x9E\\xE9\\x10>\\x99\\xE6\\xA5\\xEB\\x0F\\x16U\\x15\\x98V\\x88\\x86\\x13\\x05\\x8F\\x0E)<\\x93\\xD3\\xA8D\\xCF\\x85\\xE9poE\\x96j\\xF6)"
		"r\\x88\\xFF\\xF5\\xE7i\\x02\\x1B\\x90h\\x9DY6\\x88\\xFE\\xCB\\x9FS\\x8E\\xF3\\xA5\\x80\\xF7;Om\\xC4s\\xD8\\x02\\x15T\\xB4\"#D\\xD4{v\\xE7\\xAB{\\x07/\\xDB\\xFEdv\\xE6\\xFA\\xA5K\\x1AQ\\x14\\x9B\\x1C_.\\x06]\\x91\\xD2\\x8D\\x0C\tU\\x87\\xB3|8@\\x98\\x16\\xAE\\xBB\\xB5;Q)\\xDB\n\\xBC\\xC4A\\xC2z/\\x9E\\xEF?]\\x06\\x0B\\xEB\\x98\\x94\\x0F\\x10j\\xF8\\xDC\\x13\\x8A\\x92F\\x18%\\x88+\\xEC\\xBD\\xA2?\\xFE_\\xFF\\xC1\\xB7)i\\x9B\\x07=\\xF6\\x96\n\\x1E\\xE2\\x02\\x8A\\xF8\\xE8Y\\xC0[G\\xA7\\xA8h?&\\xF5?"
		"\\x9BGK\\xFC\\x9B%_\\xA4\\xB3y^T6\\xABno~\\x8D\\xDA}\\xF0\\xA4\\xFB\\x96\\xC9\\x8A\\x02\r\\x0C\\x82\\x1A\\x06\\xE9\\xA8\\xB1t\\xB8\\xC2<\\xFDE1\\xF5\\xBD\\xE7\\x818\\x87\\xF0NX=[\\xA3\\xC5t\\x9A\\x85g:V>\\xE7\\x85\\x80\\xF2\\xAA\\xC8w\\xC3\\xCB\\xA3<\\x1F\\x967\\xBD\\xC2,\\xC6\\xAE\\xDA;\\x1ALmv\\\\\\x7F\\xC6\\x9B\\xE5\\xF9\\xDCe\\x81xR\\x04\\xBA\\xAD\\xEB3x\\xF9i\\xEC_\\xA2\\xF1\\xA5d\\xC3\\x08Rt\\x8B\\xDA\\xA2\\xC8OK_B\\x05\\x8A\\x07z<p\\x15"
		":\\xCF\\x17\\x05\\x9A\\xD8l\\xE8c\\x9A\\xD5\\xC4\\x95\\x0E\\xBD\\x84.\\xA2\\xA7\\xA1\\x8F\\xE8`\\x92&\\xC7.C\\x07\\x8B\\xA28G\\x07\\xF9l\\x90\\x97\\xC8V\\xE8\\xDEY2]\\x94\\xE9\\x89C\\xCF\\x0Bxm\\x0B\\x95\\x95-\\xAA4\\x1B\\xA3Q\\x91\\xCF\\xD0\\xBBEY\\xA1?\\xFE\\xAB\\xFFI\r\\xFEC\\xF6\\x87\\xEC>\\xC0\\xAA\\x89CeR,f\\xC0P\\x8B%\\xEA\\xE7ir<u\\xA8\\xCA\\xD1\\xD7\\xAE\\xB0S\\xBB\\xDAf\\x84\\x0E\\xF2\\xFC\\xD8\r\\xD1\\x13[U\\x16}\\x9B&\\xF0\\x08\\xCF\\x10\\xCD\\xF2\\xC2\\xC5q\\x8C~"
		"\\xFE\\xE9\\xEF\\xFE\\xDF\\x9F\\x7F\\xFA\\xDB\\xFF\\x85^N\\\\\\x01\\x8F\\x05!\\x8B\\x86n\\x9A&\\xBE\\x8D\\x99\\xB3S\\x94@\\xAF\\xD1(/\\x90\\xCD\\xCE\\xD1\\xDC\\x15e\\x9E\\xA1\\xD3I\\x8E\\xA6\\xF9\\x89+\\xA1\\xE1\\x89=q\\xC8\"\\xA0c\\xA8r\n\\xC8N\\\\\\x01\\x9D>G\\xB6p\\x7F\\xFCw\\xFF\\xF0\\xBF\\xFF\\xC7\\xDF\\xFE\\xFC\\xD3\\xDF\\xFC7\\x18\\xCF3x\\xC5\\x06e\\xF9i\\x18\\xED\\x96\\x8D\\x83\\xD0\\x1CJ\\x16\\xD3\\x14\\xDE\\xA3\\xF1]\\x1AO\\xAA/\\xA0\\xF6\r?"
		"\\xC5\\xCD\\x0C\\xDF\\xF05\\x81\\x19\\xD0\\x8D\\xF3\\xC5lv\\x8En,\\xFB\\x7F#\\xA9\\xE7\\xA2\\xF9\\x91x:\\xDC\\x98\\xE437=G7\\x8E\\xC3\\x8C\\xD5\\xFFB\\xD7\\x01aa\\x87^\\x16\\xEC\\xB4\\xC6\\xEE\\xA9\\xAF\\xBB\\xD2\\xF8\\xC7\\xBF\\xFF\\xAF\\xE8i~\\xE2\\xE0\\xDD7\\x9Fk\\x82d\\x06\\xB6\\xFE\\x05.\\x9E\\xDF<x\\xFF\\xF8\\xFB\\xE1\\xB7t\\xF1\\xE04\\xBF\t\\xF1t\\x12i\\xBA\\x14\\x07\\x1F(\\x07\\xAC\n\\x07\\x89\\xE9\\xB0c#+h\\xA9b\\xE0X\\x07\\x9C\\x0E\\xE2\\xA0\t"
		"\\xE0\\x1DI\\xEAw\\x10\\xBCbP\\xB4am\\xD5*\\x0Bx\\xCB\\x0C:\\x1CF\\xF2:u\\xA7\\x1B\\x11y\\xC5C\\xEB\\xA1\\xC8\\x86\\xD4\\xF9\"\\xA2F\\xBA\\x1C\\xF1\\xC6\\xAAZ\\xC9\\xD0\\x85n\\x99\\xF5H\\xA9R\\x01YcL\\x04U:T\\xED@L\\xB3N\\xE4\\xDB\\xB5\\xEC\\xEA2q\\xBD\t\\x8D\\x03\\x8EN\\xD5k\\xAC\\x12\\xE9/\\xAE\\x125\t\\x8Dm\\xED\\xE2\\xEA\"Q\\xD3\\xA6_z\\xC5\\xEC\\xAC\\xAD\\x115\\xABK(\\x12)\\xFEvuq\\x08Y<\\xE0:\\xE4\\x91\\x80\\x89\\xD2\\xA2\\xC5\\xCD\\xFD\\x91\\x1DA\\xB5lA\\xA0\\xD7\"\\xE2gT\\xAB\\x16*="
		"4\\x94\\xD5\\xA1M?\\xF3\\xACc\\xDBw\\xE1\\xE9K\\x87\\xA7\\xB5\\xA9g\\x9FG\\xD4O\\xAA\\xC1-\\xA1L\\xCD\\xD3\\x11\\xE3\\x11\\x83\\xF3\\x14>\\x9F4\\xF9\\x06X\\x07G\\x9Cx\\xF0\\x928\\xDC\\xD3\\xD6\\xB0\\x86\\x9A\\x06\\x08n\"\\xE1\\xA5\\xD9\\xF0\\x16\\xCC<\\x1F\\x84\\xC2\"\\x10\\xF9\\x10V.\\xA1\\x1B\\xB2!\\xBB\\x11\\xBE\\xBA\\xF4\\x8C`T\\x0Bn\\x95\\x86\\xD1ug\\x81\\xEBh\\xA4X\\xA4x\\xA4\\x02^"
		"\\x13z\\xEC\\xB3L\\xA4qT\\xEB.\\xC10n\\xBA\\x16\\xC1\\x83\\xA8\\x82aR\\x0F\\x03\\xB2\\x0Eyd\\x88\\x87\\xD2\\xD0\\xE9\\xA0Z~\\xFE\\xE9\\xDF\\xFCG\\xF4\\xD0\\x9D#\\xAF\\xC0\\xC1\\xA0\\x14\\xE5\\x17\\xE8\\xE7\\x9F\\xFE\\xE6\\x7F\\xFD\\xEF\\xFF\\xF1\\xB7\\xA0\\xEC\\xBF\\xCA\\xD3\\x0C\\xF6\\x0Cm\\xE5\r`\\xD7\\xBA\\xA2\\x17\\x95\\x9DN!\\xE7\\xBB\\xBC\\x98\\x0E\\xD1}@\\xF1(\\x1B\\xA6\\x16\\xFD\\xF1\\xEF\\xFFk\\xFB\\x7F\\x94f\\xE8ya\\xE1\\x95G\\xF4\\xC4\\xA6C\\x9BE\\xE8\\xA9;"
		"Ew\\xDDt\\x92\\x06\\x03\\xE4\\x0B\\xFE\\xE3\\x1F\\xFF\\xFE\\x1F\\xC1\\x98-\\x13\\x8D\\x82\\x8F\\xA1#w\\xC1X\\xA7Y\\x95#\\x8BN}{\\xF9\\x08\\xCD\\xE0T\\xDF\\xA9\\xAD\\\\\\x01\\xA6\\xBB6R\\xA57\\xB0\\xC3\\xB4L`8\\x08\\xD6\\x08C\\xBF\\xF3j\\xA1\\xD3\\x85\\xCD\\xC6\\xCEc\\xFC\\xCE\\x81eD\\xD5\\xA4HA\\xC5@\\xDB\\x030\\xA3s[T\\x80\\xBC\\x9A\\xA4%\\x1A\\xC3\\xF3\\x97\\xC8\\x9D\\xC0\\xB3\\x8A\\xF0+\\xB1\\xD9_T\\xE8\\xD4\\xA6\\x15\\x94\\x87\\xC7:\\x1D,C<\\xC2\\xD7.[\\xB8[\\xE8!\\xCC\\xCAS?"
		"\\x90\\xE8\\xE2\\xA9\\xF9C\\xF6\\xE4\\xF9\\xBD\\xBB\\xFB\\xF5D>\\xCDoA.\\xFA?\\xD1\\x1D\\xD4\\xE4\\xDF\\xB5\\x95\\xBB\\xF5K\\xF3\\x03m\\xFF\\xFC\\xD3\\xDF\\xFCw\\xF4\\xD8U\\x7FQ6\\xAB\\x01o5\\x10<G\\x86\\xAA|\\xEC\\xAA\\x89+<e\\xFF\\xAD\\xB7\\xE1\\x01\\xC5\\xE5\\xFE\\xDF\\xA1\\xE5\\x9A\\xED\\xBF\\xDBX\\xFA\\xBB\\xCD\\xD4\\xDFx\\xE1\\xDC\\xF7\\xF9\\xC2\\xAFfz\\xC0n\\xAC\\xE5\\xF8`\\xB6\\x01\\xCB\\xB3\\xA4\\xCA\\x83\\xE1f\\x98\\x07"
		"!\\xB8\\xB4\\xE1\\xBE\\xF3\\xEA\\xC9\\x93\\xEFN\\x8AG\\xFD\\xD6pG\\x04\\x0B\\xCF\\xD9\"\\x08\\x08\\xA8Sl\"o\\x8F\\x19<\\xE0\\x0C\\x92\\x10D\\x8BaU\\x0B\\x06d40\\x1D\\xFA\\x01BIh\\x10\\x12\\x13\\xF0\\x05\\x90\\xC7Np]\\xA9cK\\xD7\\xE2!\\x8C\\x90\\xD0D\\xB7\\x0C[/C\\x03\\xB2\\xD6\\xBA2\\xD8\\x00\\x85\\xAA\\x1DH\\x13\\x97Qa4\\xBC~\\xB5r\\x03\\x97\\x08\\x85}\\x19x\\xCF\\xD8\\xBFw\\xBDf7W+\\x1D\\x12\\xE1\\xB5\\x05\\x91\\xA1>T\\x15^]\\xC0\\x96^\\x8D1\\x98$\\xE9\\xA7\\x026M=\\xC4\\x9B\\xC0\\x88\\xC80\\x1B"
		"&\\xD4\\xA8\r\\x1F\\xA3\\xB8\\xC5`\\x82\\xE1c\\xB0\\x0B\\x15@\\x14\\xB7\\x86\\x8FQ\\xDABIk\\xF8\\x18e\\xA1\\xA5Od\\xF8~\\x8B[\\x7F,<\\xE0mZ\\xC3\\xC7\\xA8h\\x08E\\xF9\\x16\\xC3\\xC7\\xA8l\\xF3\\xC5\\xD2\\xF01\\xBA$\\x0E\\x0F\\xB4\\xD5\r5\\xA9Z\\x1A>FM\\x0B\\xD6\\xAD\\xE1c\\xB0\\x19\\x05Dn\r\\x1Fc\\xA4!;\\xC3K\\xC3\\xC7\\x18m\\xC1\\xADtB\\x80\\xDFwv\\xC3\\xF01\\xD8G\\x81\\x1Eo1|\\xB07\\x10\\xBAV\\x1B>&\\x9Ba0\\xB14|L\\x85N\\x07M\\xF4(\\xAB\\xFC\\xA7 `7V\\\\\\xC6\\xBF@\\xDF:;"
		"<\\xEFWy\\xFF\\x9E\\xAD\\xD0\\xB3\\xCC\\xCE\\xD0\\x0B;\\x9C\\x9C[\\xF4\\xDC&\\xC7Q\\xED\\x9F\\x8D'\\xD5h1E\\x83\\xA9\\xCB\\xBC%\\xAA5\\x9B]T\\x13x\\xDC2i\\x9C\\xC1aZN\\\\\\x89\\x92\\xC2\\x8E\\xAA\\xDA\\xC6x[\\x05\\xC6\\xF4]~\\x0EU}\\x13U\\x1E\\xBC\\xD9a\\x9E\\x17e\\xE5\\xE6?\\xFF\\xF4\\x0F\\xFF\\xF0\\xF3O\\xFF\\xDF\\xFF\\x03\\xCA\\xFAQ6\\\\L\\xC7`\\xFD6\\x9D\\xC9\\x08\\x8D\\xA6\\xF6$/\\xA03/\\xECl`\\x8B\\x08\\xED\\x9F\\xA4'v\\x1A\\xA1gS\\xB0\\xB5_[\\xFFO\\xEBt\\xA2\\x17P~\\xCDt"
		">\\xB7\\xE7\\xB6\\xB4\\xB3`:\\xDF;\\x98\\x8F'6\\x1B\\xE7\\xB5w\\x1B\\xA1\\xD3\\xB4\\x9A\\xA0\\xA4H\\xCB\\xF99\\xBAc3\\x9By?w\\xEE\\xDD\\xCF$\\x9F\\xCD\\xA7\\xAEr~P#g\\xCB\\xEA\\x8F\\xFF\\xF6?C\\xC7\\x9F\\x17\\x0E\\x82\\x16\\xC3P\\x1BV\\x17\\x1E\\xFF\\xA8p.\\x18\\xFEy\\xE1\\xC0\\x84\\xFA\\x80G\\x19\\x05S\\x1D&,\\x1F\\x8D\\x1C8\\xBCh\\x91\\xCDma\\xA7S\\x07&\\xBA\\xF5G\\xDD\\xD9\\xDC\\x15\\xA9\\xCB\\x12\\x17\\xDF\\xCB`\\x1E\\xA1\\xE9$\\xCFN\\\\\\xE6\\xA10\\xAF6[\\xA1^"
		"\\xEB\\x13\\x9F\\xE7\\x0B0\\xFC\\xF5\\x98lV\\xD3\\xAE\\xBFf\\xF7P9q\\xD3\\x11\\x9A\\xA6#\\xF7\\x05Z\\xF5\\x9A-\\xAC\\x05\\x90kc\\x08~\\xAD\\xB1\\xC8\\x80\\xC0s\\x08'@\\xEB\\xDF\\x96\\xF1\\x8A\\xAD\\xBF\\xD9\\x07/o\\x8B\\xAB\\x1D{\\xE4\\x8Ff3W\\x94~-Q\\x94\\xD0n\\xEA\\x03\\x1Aa\\x04#W\\xC2\\x0C\\xA1r\\x9E\\x16i\\x05V\\xFC\\x1F\\xFF\\xF5\\xCF?\\xFD\\xC3\\x7F\\xF1\\x96\\xBC\\x8Bn\\x9B7\\x9EgvV\\x86)\\xF0\\xBF\\xD1\\x8D&\\xB5\\xE2u\\x87D\\xA8\\xD9:\\xF0!\\xE9}\\xCE\\xA6\\x84\\x8Fn\\xA1\\x1B~"
		"\\x987\\xECIj!\\xAC\\xC4`#\\xAD\\x96\\xEF\\xA5\\x99\\xFFj1=\\xF7\\x99&\\xC8\\xFBem\\xFCB\\xFE\\xF8\\xC3\\x9B\\xF2\\xE4\\xAB\\x03\\xBBa\\xE39\\x0E\\xBA`\\xC5\\xC6\\xC3\\xDE\\x06\\x08}\\xADE8mt\\x00o5\\x0B\\xEC\\x81@?:6\\x9E\\xF3\\x80\\xAFc\\xE3a\\xD7\\xC0WR$\"\\x8Cy\\x90\\x0C\\x18\\xBB&}\\xED\\xC8\\x04\\x83\\x80=\\xD4]\\x1Ap\\xD8[\\x80\\xAA\\x1DH\\xEDB\\xB7\\xE6\\xBA6\\xE9\\xEB\\xB8`\\xF3\\x80qs\\xB1I\\xE7[M:\\xC4A\\x99\\xC0\\x1D\\x93\\x0EQ\\xCA\\x80Q\\x90\\x8EI\\x87\r\\x04\\x0FY1\\xE9\\x10}"
		"\\x86\\x1A\\x8DI\\x87Ps\\x8D\\xA1\\xF6e\\x19\\x04uk\\xD0\\xD2\\x97e\\x10\\xB4\\xAB\\xA1K_\\x96\\x81\\xFE\\x87\\x96>\\x91I\\xFF-\\x1E\\x18a\\x10\\xDE\\xF6\\xB3\\xDF\\x98t\\x89[Bm\\xF3e\\x99$M\\xBE\\xEC\\xF8\\xB2\\xF0\\xC2LC\\x9C`\\xD2%k\\xA8);\\xBE,\\xDCk\\xD8\\x80\\x97\\xBE,\\x93\"\\x10yi\\xD2\\xA5l\\xC8.;\\xBE,\\xBC\\xA0\\xD5\\x80[a\\x94\\xBA\\xEE\\xEC\\xA6I\\x87\\x98\\x1D\\xF4x\\x8BI\\x87\\xC0[\\xE8Zm\\xD2!\\xAC\\x16\\x86\\xA1:\\xBE,D\\xD7\\x98l|"
		"\\xD9\\xBB9DC\\xED\\xF4\\x18\\x0C\\x9A\\x1D\\xE4\\x8B*x\\xB5\\xEE,I+\\xAFY\\x7F\\x8F\\x1A\\x93z\\x90\\xCF\\\\\\xF0\\xF6^X\\xD0\\x9B\\xF7\\xCE\\\\\\xB2\\xF0:\\xD6\\x1B\\x85\\x95\\x15A\\xB0\\x9D\\xEF\\xC0\\x11\\x06\\x03\\x05\\x81\\xBA\\xB4Z\\xD4\\x01\\xCAP\\xBDrv\\x06V\\xE1e\\x91\\x9E\\xD8lX,f\\xA0\\xD5\\xC1n\\x97Uq\\x8E\\x06\\xAE\\xACP\\xE1f\\x8B\\xCC\\xF9\\x8F+24\\xB7\\xC91|F\\xE6\\x9D\\xCB\\xB3\\xAAh\\xDC\\xB5\\xB9+\\x8EK\\x94f\\xC9t1t\\xC3`\\x1A~"
		"\\xFE\\xE9\\xEF\\xFE\\xEF\\xEF\\xF3\\x05\\x9AAP\\xDA\\xF79\\xCB\\xB3\\xFE\\x89\\x1B\\xBB\n\\x14C]\\xE2U\\x06\\xD6\\xA9\\xF1\\x1B\\x01\\xB2\\x8F\\x92\\xC2y\\xD3\\xDA\\x06\\x8D\\xBD\\xC1\\xAB\\xA6`\\xA2\\xBD\\xABy\\xEEl\\x01\\xB6viO#\\xE4\\x9Fm+\\xEC`z\\x0E6hT\\xE4\\xEF]\\x16&\\xB2\\x84\\xB1\\xD6\\xE6j\\xE4\\xAD\\x93\\x1D\\x80M\\xEF\\x04\\xCDJ4J\\xAB\\x08\\x8D]\\xE5\rX\\xBEH&\\xA1\\xD5E\tF\\xF4\\xDE\\xCC\\xA6S\\xF0g\\xC1\\xC0\\xFE\\x1F\\xAD\\xA9]\\x9A\\xDE\\xB8\\xFD\\xF5\\x87\\xACk\\x8CouM)\\xF4|"
		"-\\xBD\\xB4\\x84\\xC1d\\xBD\\xCB\\x07\\xE8\\xC6$\\xF5k\\x1BH\\x9C\\xD8\\xC4f\\xC9y\\xB0e\\xA9C7`{\\xA2\\xCAO\\xF3\\xE2\\x18\\xADXP\\x10;\\x08\\xD0\\xD6\\x9C]\\x87\\x9A\\x1BK\\xA6x`\\xF3K[\\xB2\\xEF\\xF3\\xC5`\\xF2\\xFC\\xFD\\xF8\\xC7\rK\\x06\\xF1[&\\xD7\\xBCU\\x08\\xD8\\xB26R\\xCC 6\\x1BX_\\xB5\\x02\\x05\\xD1Y\\xE8G\\xC7\\x92y\\xBB\\xA2V\\xBCU\\x08m\\xFAJ\\x8ADT*\\x0F\"\\x01c\\xD7\\x92\\xAD\\x9D/"
		"c\\x10\\x91\\x84\\xBAK\\xBB\\x05\\x11P\\xA8\\xDA\\x81\\xD4\\xCEik\\xA5jK\\xB6\\x81K\\x84\\xC2\\x17Z2\\xB1\\xD5\\x92A8\\x8D\\xE9\\xAEs\n\\x11\\xB2\\x1Ac\\xD79\\x85\\x80\\xA9\\x87\\xACX2\\x08\\x01B\\x8D\\xC6\\x92A\\x04\\xB0\\xC6\\xD08\\xA7\\x10\\xF4\\x0B \\xD3qN}\\xB0,@;\\xCE\\xA9a\\xA1\\xA5Oe\\xC9~\\x83\\xA7\\xEB\\x18DI\\xFD\\xEC7\\x96\\xCC\\x88\\x86Pf\\xABsjd\\x9B\\xDFuN\\xCD\\x928\\xC1\\x92A\\xAC4P\\xD3t\\x9DScZ\\xF0\\xD29\\xE5\\x10\"\\x05\"\\xB7\\x96\\x8C\\xFBP\\x10\\x90\\x9D\\xE3\\x8Es\\xCA"
		"!HZ\\x83\\x1Ba\\xE4\\x10\\xC9\\xF2\\x9D\\xDD\\xB0d\\x1C\\x82X\\xD0\\xE3MK\\xC6!(\\x15\\xBA\\x16,\\x19\\xF7\\x01)\\x18\\x06\\xC7K\\xE7\\x94\\xFB\\xB8\\x94i\\x9C\\xD3\\xEF\\xC1\\xCE<\\x0C{dO`y\\xFEEk\\xB8\\xEE6aM\\xBF\\x1D\\xE9\\x92\\xC2\\xF9@\\xE4\\x8A\\x97\\x14<\\xC2r\\x8B)C\\xAF\\xED0\\xAD\\xBDG0=\\x1B\\xEE\\xE4\\x17k\\xFE\\xA6]\\xF3\\x13\\xC3\\xEE\"\\xE0\\xF5\\xDE\\xEA\\xC8\\x9E\\xE4\\x8B\\x02\\xAC\\xEB(-'(\t;"
		"\\x9E\\xF6$M\\xCF\\xC1\\x01-k\\x87\\xD4\\xFB\\x9E\\xCEeh\\xEE\\\\a#\\xE4\\xB2\\x89\\xCD\\x127D\\x83\\xE0\\xB8\\x15i2\\xF1\\x85\\xB2EU\\x9D\\xA3q\\x9E\\x0F3Wz\\xC3\\xB4\\xEC\\x1Ax\\xC4\\xD0\\xBB\\xC70b\\x08\\xCD\\x9EN\\xF2\\xA9+\\xC1\\x90\\x8F\\x0B\\x0B\\xD6\\xC6\\x1E\\x07\\xFF\\xC9\\xDBR\\xD8\\x14\\x0F\\xFB\\xC2\\xB6\\xE3\"\\xBF\\xCB\\x17E\\xE6\\xCE#\\xE4\\xA6\\x0E\\xDC\\xCEl\\x0C\\xB1]0\\xD10\\x88*G\\x99;Ea\\xEB\\xBE\\x8C\\xFF\\x90\\xDDk\\xDDL\\xDF\\xCF\\x99\\x1D\\xA7\t"
		"\\xF4juR\\xA1\\xE7\\xA5w\\xAA\\xA1\\xD0\\xDC\\x15#\\x97T\\xCB\\xD0@\\xBB\\x9F\\xE9\\x0B\\xFA\\xBE\\xC5\\x1D\\x87\\xF2e>\\xB4\\xE7_\\x04\\x17\\xF3\\xC3\\xCE\\xDC\\x16_-\\x03ww\\\\\\x83J S\\xEA#\\xCC7BF\\xF3o] \\xA0\\xF1\\x89|\\xD4\\xEC\\xBB6\\xD6\\xB0\\xEB\\xFC\\xD5\\xDE\\xDE\\x0C&\\x1E\\xBC\\xBC\\x1E\\xB0\\xA7^J\\x087\\xCCs\\xAC\trriS\\xF8\\x15y\\xFD\\xFA\\xF5\\xF3\\xD7\\xFC|\\xDD\\x14r\\x08\\xADr\\xBC\\xEA\\xD4q\\x88\\xA5\\xF26H\\xCB\t"
		"\\xADe\\x072\\x1A\\x18\\x0B\\xFDX\\x9AB\\x0E\\x9F\\x11\\x01\\xBE\\xA5)\\xE4\\x10\\xD2\\xF4\\x95\\x14\\x89\\x98\t\\xB8e\\xC0\\xD85\\x85k\\xA7y9\\xC4(\\xA1nk\\xF88DB\\xA1j\\x07\\xD28uz\\xD5\\xA9[\\xC7\\x05\\xD1QN~\\xC1\\xA9\\x93\\xDBL!\\x87\\x00\\x1B\\xA7\\x1D\\xA7\\x8EC\\xCC,`\\xA4\\x1D\\xA7\\x8EC\\x08\\xD5C\\xBA\\xA6\\x90CP\\x10j\\xD4\\xA6\\x90CL\\xB0\\xC6P;u\\x1C\\xC2\\x805h\\xE9\\xD4q\\x08\\x9F\\xD5\\xD0\\xA5S\\xC7!\\x14\\x08-}\"S\\xF8\\x9B<\\xCB\\xCC"
		"!p\\xEA\\xA7\\xBF\\xB6\\x85\\x9C\\xE1\\x96R\\xDB\\xBC:\\xCEH\\x93\\xCF:^\\x1DgK\\xEAx[\\xC8\\x19k\\xC8\\xC9:^\\x1Dg\\xBC\\x05/\\xBD:\\xCED\\xA0\\xF2\\xD2\\x162\\xD9\\xD0\\x9Du\\xBC:\\xCET\\x0Bn\\xA5\\x91\\xE9\\xBA\\xB3\\x9B\\xB6\\x10\\x82=\\xD0\\xE3-\\xB6\\x10\\x827\\xA1k\\xB5-\\x84\\xC0M\\x18\\x06_zu\\x1C\\xE27\\x9C5^\\xDD\\x81\\xDFp\\x1B\\xBA\\x04\\xBE\\xBD\\x1C\\xB8\\xEA\\x14\\xEC\\x88\\xDFO\\xCB\\x0B\\xF4U>\\xF8\\xE2\\xF7\\xE8\\x0F\\xD9w\\x93s4\\xCC\\xA1 \\x04\\xF7\\xDE\\xD5{\\x96@Kg\\x87`<"
		"!VV\\xEF\\xF7\\x8D\\xC1)\\x02\\xDB6\\xC8\\xABI\\xD8\\xE7s\\xA5\\xAB\\x15\\xF0\\x01l\\xC4-J\\xF4\\xF3O\\xFF\\xE6\\xDF\\xAF\\xFB\\x18\\x9B>\\xC7\\xB3\\x02\\x9D\\x16\\xB5\\xE1\\x08\\x95\\xFE\\xD3\\xA5|\\x1B\\xF4)\\xDD\\x15\\x0E\\xB1\\xAD\\x9Ad\\xCB\\xD8\\xDB\\x13{\\xEE\\xF3x\\xA0\\xE0e\\xB5t\\xF9\\xF2\\xD5\\x8Bo\\xE8\\xA3o\\xAA\\xF9\\x86\\x96\\x86\\xE0\\x18g\\xAB\\x0E\\x0B\\x87\\xF0\\x18o\\xC3l\\x1C\"a\\x81\\xAA\\xBC\\xE5\\x15\\x88\\x85q\\xDEuX8\\xB0&\\xE0\\xEBhi\\x88R\\xF9J\\xFE\\x00\\x8D/"
		"%H\\xC0\\xD8\\xD5\\xD2k\\xA7\\xFA9\\x84\\x9D\\xA0\\xEER'Cp\\x0B\\xAAv \\xB5\\xC3\\xD2j\\xE0ZKo\\xE0\\x12\\xA1\\xF0\\x85ZZm\\xD5\\xD2\\x103\\xE1\\xA2\\xE3\\xB0p\\x08\\x83\\xD4\\x18;\\x0E\\x0B\\x07a\\xE3b\\xCDa\\xE1\\x10\\xE7\\xE1\\xA2uX8\\x84yj\\x0C\\xB5\\xC3\\xC2!\\xB2\\x13@r\\xE9\\xB0pI[\\xE8\\xD2a\\xE1\\x92\\x85\\x96>\\x95\\x96\\xFE-~\\xD3\\x007\\x00\\x85\\xE9o\\xB4\\xB4\\x14\r\\xA5\\xE46\\x8F\\x85K\\xD9\\xE6w<\\x16.\\x97\\xD4\tZ\\x1A\""
		"b\\x81\\x9C\\xB2\\xE3\\xB1piZp\\xC7c\\x81@\\x18Py\\xA9\\xA5\\x15i\\xE8\\xAE\\xBA\\x1E\\x0B\\x84\\xC2jp+\\x8D\\x10\\xC7\\xF0\\x9D\\xDD\\xD4\\xD2\\x10\\xC8\\x80\\x1Eo\\xD1\\xD2\\x10\\x98\\x08]\\xAB\\xB54\\x04%\\xC20T\\xC7cQ*t:h\\x9D\\xBFz\\x9C\\xCER\\xBF\\xFF\\xE1\\x8A\\x14ts6M3\\x07\\xFF\\x9C\\x87\\xAD\\x9C\\xBF\\x02\\x95\\xB7\\xE6\\x8B\\xA4\\xE5d\\x81\\x9E\\xF9\\x8D\\x9E\\xA0}\\xE1L\\xE7\\xD7\\x8BjRMl\\x91\\xA2\\x83I^,\\xA2\\xCE\\xA6\\x96\\xF7)"
		"\\xBE\\x86\\xC7x\\xD1\\xF3\\xC5\\xFB\\xC9\\xE2\\x18RCX\\xC8\\xD6\\x8E\\x87?C\\x97U\\xE8\\xB9\\x9D\\xDA\\xA1m6\\xB5\\x96\\xF0c;\\\\\\xCC\\xD0<\\x80\\xD1,=\\x8B\\xD0\\xC1\\xC4\\x1E\\x1F[\\xF4\\xDA\\x16\\xB6\\xAA\\xD2heo+B/\\xF2s\\xF8\\xBD\\xC8\\x8EK4\n-\\xBCK\\xD1|1M#tl\\xB3,E3\\x9B\\x8D-\\x9A\\x873\\xA0ph\\xB2\\xD5\\xF5+[?\\x8D\\xFB\\xF6\\x04|\\x14\\xEF\\xBD\\x94vxnQ\\xE9l\\x19\\x8E\\xAE\\x86 "
		"!8#\\xF5\\xE6\\x19j\\xF7\\x9B\\xBE\\xB8\\xD85\\x08\\x91\\xC3\\xD6T\\x9C\\xF8i\\xBD\\x01W\\xB9\\xA4p\\x82\\xB2\\xD9\\xEDi\\x86}\\x03\\xBA\\x9C\\xD7=\\xBE\\x91f\\xEFR\\x18\\xCF\\xFAY\\xCC\\xAE\\xD7Qo\\xF9L\\x03\\x89=9AB \\x12\\xC5\\xD5\\xDA\\x9E\\xCF\\xFE\\xBCH\\xA7>\\xD7\\x04\\xAE\\xBC\\xAC\\xE5)\\xF6O\\xBF\\x1E<y\\xFE\\xB5\\xBB\\xB7ay \\x98\\xC5\\xD5\\x9A\\x7F\\x00\\xE1,\\xDE\\x86\\xC5\\xB8\\xA6\r\\xA7\\xEA\\x96\\xFF!v\\xC5\\xD5\\x8A\\x7F\\x00\\xE7\\xBC\\xB8^\\xF1\\x0F \\xAA\\xC4\\xEB3~\\x92+"
		"\\x0F\\x92\\x01\\xA3\\xDF\\x07\n\\xD2\\x0FQ!(\\xBA4+\\x10{\\x82\\x92\\x1DH\\xED\\x0E\\xB4F\\xA464k\\xC729\\xC4\\xA3\\xB8\\xFE\\x05w@o54\\x10\\xD2\\xE0\\xA6\\xEB\\x0E\\xF8(\\x85\\xC7h\\xBA\\xEE\\x00\\x04\\xAD\\xB8Yw\\x07 \\x0C\\xC3\\xCD\\xD2\\x1D\\x80(L\\x8D\\xA1q\\x07 \\xF0R\\x83:\\xEE\\x80\\x0FX\\x04h\\xC7\\x1D\\x80\\xE0\\x0B\\xB4\\xF4\\xA9\\x0C\\xCDo\\xF1\\xF3,\\x0E\\xA1*?\\xFD\\xB5\\xA1\\x11\\x18\\xB7\\x94\\xDA\\xE6\\x0E\\x08L\\xEA|\\x81;\\xEE\\x80\\xC0K\\xEAxC#0\\xAB\\xC9\t"
		"Y\\xAD\\xA1\\x11\\x98\\xB7\\xE0\\xA5; \\xB0\\x08Tn\r\\x8D\\xF0\\xCE6\\xD0]\\xE0\\x8E; \\xB0j\\xC1\\x8D\\xF0\t\\x1F\\x1E0\\xDB\\xDC\\x01\\x01a\\x02\\xE8\\xF1\\xA6\\xA1\\x11\\xE0\\xF6\\x87\\xAE\\x05C#\\xC0\\xE5\\xF7\\xC3\\x10d\\xE9\\x0E\\x08\\xF0\\xFC\\x05\\xE6\\x9F\\xC6\\xD0|\\x81j\\xED\n\\xA6f\\xB5\\x14*O\\x9D\\x0B\\x87\\xFCJ\\x08\"\\x85c\\xF7\\xA7yQM6\\x94\\xBA\\xD7\\xF4\\xE1#\\x81\\xB5\\x9C\\x9B\\xFD\\x06{Z\\x1B\\x9Dy0F\\xF3\\xC6\\x18\\xA5\\xDB\\x8CQ\\xB0,^"
		"\\x11C\\x07\\xC2\\xD9\\x8BZG\\x03`\\x00\\xC1\\xBE\\xAA>\\x95_\\xC27\\x08\\x0B8_\\xDF\\x1E\\x0C\\xF0f\\xE4O\\xD3N\\x08\\x08\\xD34<\\xA4\\x15\\xF34\\xE5\\x81\\x93.o\\x1C\\x16l\\xF6\\xECY\\xF2j\\xB1n\\x1C\\x04\\x84w\\x04^uK\\x04\\x04xD\\x1B(\\x12\\x10\\xCB\t\\xDCEZ\\x9E\\x85h\\x8E ]\\xB7D\\xC0Y(A\\xBAn\\x89\\x808\\x8BhN\\xBF)"
		"\\x8F\\x9B\\x92\\x801l\\xAD\\xF8\\xE1@\\x9C\\x04\\x8A\\xB6\\xA6@@4\\x06J6\\x90\\xCE\\xB5\\xB1\\x94\\xBE\\xFD\\x9C\\xAEo\\xDB\\xDDa\\xFA\\xD9\\xDDaz\\xAD\\x1B\\xAFw\\xD4\\xFEL\\xA9\\xDD\\xB9:\\x9F\\x82Vd\\x02\\xFE\\x82[\\xDB\\x18\\xDCf\\xC6\\xF4\\xEE\\x1E\\xFD\\xDD\\xCD\\xE7\\x9F\\xE0\\xE6\\xF3C\\x82\\xC1r\\xEE.\\xD0\\xDF\\xB1\\xD1G\\xB0\\x11\\xDC\\xA8\\x00\\x17T\\xC9\\xF5\\x9B\\xB6Wn3\\xB8\\xC4U\\xDB\\xCB\\x8F\\x00?"
		"\\xF1M\\xDB\\x1F\\xB7h\\xDA\\xDD\\xBC\\xFCgq\\xF3\\xF2\\xEE\\xDE\\xED\\xDF4\\xF5\\xBB\\xEF\r\\xFE\\xB3yk\\x87\\x04\\xEF\\xDE4\\xFCM\\xBCr\\xB7{\\xD3\\xF0\\xB7D\\xED\\xCDW\\xA4\\xE1\\x9Ai\\x7F\\xCF\\xD9\\xF5$~\\xF7$\\xEF\\xEEI\\xDE_\\xFDI\\xDEv\\x81\\xC4\\xAF\\xAC\\xC3v\\xFC\\xBB\\xE3\\xDF_\\x9D\\x7F\\xB9T\\x04\\xB42\\x87_\\xF8SjeK\\x19\\x1C\\x91\\x19\\xF6Grh\\xFA\\x9C)\\xD5\\xB7T\\xE0\\xBE "
		"B\\x0F\\xA8\\x13f`\\xF0zlU\\x10\\x86\\xCD%\\x83\\x1F\\xD7in-\\xF8Z7w\\x1D\\x8E\\xBETsk\\xD1\\xD9\\xBA\\xB9\\xEB\\xF0\\xF3\\xA5\\x9A[\\x0B\\xDF\\xD6\\xCD]\\x87\\x9B/\\xD5\\xDCz|\\xB7n\\xEFZ\\xBC|\\xB9\\x06\\xE5\\xD6\\x01\\xB6\\x8F\\xE5\\x9A+\\xBEK\\xB7c\\xD5\\x1D\\xAB\\xFE\\x1A\\xAC\\xEA\\x83\\x7F\\x8A\\xC3u\\xAA\\x02\\xCE3G\\x82\\x98\\xF6=\\x91t\\xB8\\x97\\xC3\\x89\\xA72\\x1D\\x9D\\xF7GSw\\x96\\x0E\\xA6\\xAE\\x9F\\xE7p\\xC65\\xA2\\x11\\x8Fzw\\x9E\\xDD\\xFD\\xBE\r\\x11Vn6\\x9F\\xC2\\xBB1\\xFE"
		">.\\x14\\\\q\\x94\\x97\\xA3~\\xE5c\\x87\\xEEln\\xB3\\xD2\\xF5E\\x7Ff\\xCF\\xFB\\x14S\\xDA\\x06\\x07\\xE12E\\xFFAF\\xB9\\x124\\x0C\\x17%\\x1E\\x85\\xEB\\x1B\\xCB\\x1F\\x17\\xB6h\\xB3\\xDCp\\xEC\\xCA\\xBD\\x16\\xC1\\xF9\\xDC\\x1D\\x85\\xCB)\\x8F\\x12;O+;M\\xDF\\xBB\\xBD\\x91\\x9D\\x96\\xCB\\xDB4Om\\x95Ljd\\xFE\\x16\\xC7&g\\\\\\xA4\\xC3~\\x80\\xC3O8\\xBEP\\xF6\\xE1\\xDB\\x8D\\xF6\\xEA\\xC8~\\x1F\\x861\\x9A\\xE6\\xB6\\xEA\\x0F\\xAA\\xAC?\\x18\\xF7\\x93|\\x9A\\x17\\xB7\\xD0\\x8D;\\xFB\\x9Cs~"
		"\\x1B\\xAD\\x17i\\xF2G\\xFEO\\x9B\\x9FgU\\x7Fdg\\xE9\\xF4\\xFC\\x16J\\xB3\\x89+\\xD2j%\\x0F\\xD6p\\xB7\\x10i\\x11\\xA6\\xFE4\\xC5\\xC5\\x8Dv\\xCAlou\\x9E\\xCF\\x17\\xF3\\x8Bq,\\x8B\\\\\\x84\\x02\\xA6\\x18\\xAE\\xE6\\xBC\\x08\\x07Dz\\xDB\\x02\\xE1A\\x99\\xB5F<S\\xF5\\xE1\\x1B\\x9CEy\\x0B\\xF1\\xF9Y;\\x03\\xA9\\x9B\\x0E/\\xCA\\x0F\\xB3\\x1B\\xAE\\xCF\\x84'k\\x10\\x11\\xBF\\x83\\x03\rp\\x7F2\\xBC\\xBB\\xA3\\xA3\\xDE\\xE3GO\\xBF\\x0E\\xBC;H\\xCB~"
		"R\\x96\\xF5\\xFD\\x97\\x9E\\x90\\xE5\\xC49x\\xD3\\x08\\xF8e\\x0F:z3\\x14h\\xCF;\\xDC\\xBA\t\\xC2\\x16\\xB7l\\xEF\\x8F;\\x94\\xC3\\xE3\\x9B'\\xF4\\xE6R\\x16@\\x16!s\\x96fq@0s\\xC3\\xD4\\xEE\\xD9\\xE9\\xD4K\\x14\\xF3\\xE1t!\\xA8\\x8CX\\xE8]\\xD3-\\xE8\\x89\\xFF\\x9C\\xB7J&\\xBD\\xA8\\xE7\\xFF\\x9D\\x17i^\\xA4\\xD5\\xF9\\x9E\\xBF\\xE3\\xB0g!\\xD8\\x0E\\x1F\\xEF\\xAE_\\xFE\t\\x1DkZ\\xF6\\xDD\n\\xBF\\x93i\\xBE\\x18\\xDEL&.9\\xCE\\x17U\\xFF\\xD4\r\\x9AX\\x9B\\xC6*\\x06\\x81,"
		"\\xAB\\xD8e\\xF1H\\x0C\\x94\\xB4\\xC3!\\x17B\\xDA\\x81M\\x06\\x94\\xCA\\xF8\\x1Dt>)\\xF2\\xB2\\xCC\\x8Bt\\x9Cf{\\xA1\\xFFp\\xB6(\\xA2Z\\xE9\\x88b\\xAA\\xE0\\x97\\xDA|\\xE6\\x0E\\x04|=\\xD2F \\xD2F!\\xBE\\x06w\\xF9\\xA1\\xCD\\xC0\\xDB?\\xF1\\xCBvm\\x0C |Gw\\xBC(\\x16'\\xFE\\x9B)P\\x83\\x1D-\\xA8\\x98\\xA1\\x92\t\\xD0\\x82W\\x8F/l\\xE0\\xA6x\\x1Bnz\\x9DX\\xC8&n\\xBD\\x15\\xF7u\\xE2\"\\x1B\\xB8\\xD9\\xD69\\xB9V\\xB4j\\x03\\xF7\\xEA\\xA2\\xA1\\xC1}"
		"\\xAD\\xD8\\xD5\\x06\\xEE\\xD5\\x15B\\x83\\xFBZ\\x91\\xAC\r\\xDCf+-Mx\\x8AVk\\x02\\x12\\xA1\\xFDS\\xD3o/\\x8E2\\xC3\\xDD\\xDA\\xF0L\\xEC5\\x9F\\xA3n\\x8D\\xFC\\xA7\\xA7\\xDA\\x87Q\\x7F4\\xD1>\\x8C\\xFA\\xA3i\\xF6a\\xD40\\xD3\\xDBd\\x1B\\xD7D3\\xF0|\\x81\\xA0\\xF0K\\x7F\\xE4#\\xE1K\\xC6I\\x18\\xC1\\xC2\\x10\\xD2\\xA7B\\xD2>\\xE7\\x8A\\xF45\\xB5\\xA2?H\\xB0N\\x06#\\xCC\\xF1\\x10o*\\x1D\\x86)\\xBD\\x9E\\xD2\\xB9T{\\x1B\\x8A\\xC8\\xB7w-Et\\xB9\\xF6\\xD6\\x95Sh\\xEF:\\xCA\\xE9R\\xEDm\\xB0\\xBEo\\xEFZ\n"
		"\\xEBR\\xEDm\\xC8\\x83o\\xEFZJ\\xECR\\xEDm\\x08\\x89o\\xEFZ\\x8A\\xEDR\\xEDm(;\\xDF^\\xAD\\xEC\\x0C\\xC5\\x11\\xC5JE\\xD4\\xC0wZ\\x9FHn\\xAC\\x1C(k\\x86\\xBAO\\x85\\x16}n\\x08\\xEF\\x0F\\x88T\\xFD\\x81v\\x94\\x18\\xCC\\x86\\x02\\x93-r#\\xB0\\xBE\\x9E\\xDC\\\\\\xAA\\xBDM\\xB9\\x81\\xF6\\xAE%7\\x97koCn|{\\xD7\\x91\\x9BK\\xB5\\xB7)7\\xD0\\xDE\\xB5\\xE4\\xE6R\\xEDm\\xCA\r\\xB4w-\\xB9\\xB9T{\\x9Br\\x03\\xED]Kn.\\xD5\\xDE\\xA6\\xDC@{\\x8D\\xDCp\\x12Q\\x82)\\xFC\\xC2\\x1F)7\\xCF\\x0B"
		"{\\x9A\\x95En\\xCB\\xAAy\\x1F\\xB6\\xD3\\xB04\\x92\\x11\\xC2\\xAE\"\\x18\\xEB\\x08W9\\xBFAx\\x05\\xCE\\xDF@\\xA8\\xB7\"\\xBC<k\\xAF#d[\\x87|\\x05\\xDE]G\\xB8\\xCA\\x9C\r\\xC2+0\\xE7:\\xC2U\\xEEk\\x10^\\x81\\xFB\\xD6\\x11\\x9A\\xADDi\\xD8K\\xD2\\x88\\x12\\xF0\\xCA\\x0C|\\xC4\\xF8Q\\xEC\\xF5j:M_N\\x9C;\\xB7\\xD3\\xED\\xECE\\x15\\xB9\\xD2ze\\x1D\\xE1\\x06{y\\x84W`\\xAF\r\\x84\\xEB\\xEC\\x15\\x10^\\x9E\\xBD\\xD6\\x11n\\xB0\\x97Gx\\x05\\xF6ZG\\xB8\\xC1^\\x1E\\xE1\\x15\\xD8k\\x1D\\xE1\\x06"
		"{y\\x84W`\\xAFu\\x84\\x1B\\xEC\\xE5\\x11\\x9A&\\x1E\\x08\\xB7T]\\xEC\\xFD\\x7F\\xE0\\x00`\\x9Am\\x9C\\xEA\\xDB\\xC5\\x03v\\xF1\\x80?\\xDFx@\\xF3Y\\x07\\xB9\\xFAg\\x1D;\\xCE\\xDCq\\xE6.R\\xB5\\x8BTu#U\\x87\\x84\\\\w\\xDBx7\\xF5\\xBB \\xE1.H\\xB8\\x0B\\x12\\xFEs\\x07\t\\xAF\\xAE\\xB2v\\xC2\\xB1\\x13\\x8E\\xDF\\x88p\\xEC\"\\xE8\\xBB\\x08\\xFA.\\x82~"
		"\\xF5\\x08\\xFA\\xC7\\x18\\x95\\x9Dp\\xEC\\x84\\xE3\\xCFZ8v\\xDBK\\xBB\\xED\\xA5\\x7F\\xC2\\xED\\xA5\\xAB\\xEB\\xDE\\x1D\\x0F\\xEDxh\\xB7E\\xB9\\xDB\\xA2\\xFC\\xE7\\xDA\\xA2\\xBC\\x86\\x8A\\xDA\\xF1\\xD0\\x8E\\x876\\xB6\\xB9\\xE1\\x12v\\xB9\\x1E\\xF8\\xDD8\\xE4~\\x99\\xEB%\\xFEd6\\xB9w\\x11\\xB5]D\\xED\\xCF:\\xA2\\xF6I6\\xDCwR\\xB2\\x93\\x92?g)\\xF1\\xC6M\\xD2\\xF0\\x05\\x9A\n_\\xA0\\xC9_\\xE7\\x0B4\\xA9I\\xE7\\x0B4%\\xA9!\\x0ES\\xAB\\x1D\\xC1Xi;\\x1A\\xEA\\x0F|"
		"\\x81\\x06\\xB7\\xD8\\xCBuG\\xE2s4\\xCE\\xBB\\xA5\\xE7n\\xE9\\xB9\\xEA\\xBE|\\x84\r\\xDB1\\xD3\\x8E\\x99V\\x99i\\xB7\\xC5\\xB8\\xDBE\\xD9\\xED\\xA2\\xEC\\xB6\\x18w\\xC2\\xB1\\x13\\x8EO\\xB7\\xC5\\xB8;<\\xFC\\xF9\\x9D`\\xDD\\x1D\\x1E\\xFE\\x15\\x0F\\x0F\\xAF|*\\xF5\\xA9\\x16a\\xBB\\x0FCv\\x1F\\x86|\\xF2\\x0FC>f\\xE1\\xB3c\\xC8\\x1DC~\\xFA/\\x95v\\xE7\\x99vgQv\\xE7\\x99v<\\xF4'\\xCBC\\xB0\\x1F!\\xB8\\x0C\\xFB):\\xEC\\xA7\\xA8_g?\\xC5\\xCE\\xE7\\x9D\\xFD\\x14i41\\\\Y:RR$Cl\\xA4\\x1E|`?"
		"E\\xCA\\xFA\\x8EO\\x03w|\\xC2U\\x9F\\xBD\\x17\\xCF\\xF7\\x9F\\xC2\\xDD\\x89\\x0C\\x07\\xB8\\x7FW#\\x1D\\xEE\\x9DNlU\\xEE\\xCF\\xE7\\xDF\\xA5\\xC3\\xB1\\xAB^\\xCCm\\xE6K\\x91\\xBA6\\x94\\xEF\\xFD\\xD5\\xCB^\\xD4\\xFBC\\x86\\x90\\xCF\\xA2m\\x16\\x89z/^~\\xFF\\xF8^/\\xEA\\xDD\\xD8\\xC4\\x83\\xCA\\xB9\\xCD\"\\xA8\\x86\\xD0\\xB6\\xEC\\xF9\\x05y\\xF6\\x82\\xBCt6\\xBE wpA\\xDE0=\\xB9 \\xD7\\xBF\\xFD{A>\\\\ i\\x0BwQ\\xD7\\xE6\\x85\\xBB\\xA8k\\xFE&\\xCB\\x0B\n"
		"\\x94'\\x17\\x8Dln\\xAB\\xC9\\x05\\xD9IZ$S\\x87\\xFEe(\\xF1\\x87j\\xE2\\xD2\\xF1\\xA4\\xBA\\x85\\x16Y\\xE9\\xAA\\xDB\r\\xD4\\xBB\\xF5\\xEB\\xC0\\x99=\\xEB\\x7F0c;\\x9Epk\\xE7*\\x14\\xA1\\x99-\\xC6i\\xB6\\x0E\\x9D\\xDB!\\\\\\x16\\xB1\\x0E\\xAE/\r]\\x05\\x0Elr<\\xF6\\xD7\\xB5\\xF6\\xB7\\xE7\\xE7g\\xB0E\\xE7\\xD1\\xD57\\x87\\x0E\\xF2\\xB36{\\xE5\\xC2\\xD5\\xD2fe\\xBFtE:\\xAA\\xF3\\xFF\\xDA\\xF3/k\\xF9\\x97F\\x87\\x84\\x85\\x07\\x96\\x05\\xE3\\x81\\xD9\\x0F\t{\\x1B\\x98\\xBDfw\\xD1\\x08\r"
		"\\xE3\\xF5M\\xB9B0\\xD9\\x02E\\x17\\x87j\\xC12:dd\\x9B\\x84=J\\xF2\\xE5E\\xB3\\xF3<\\xDC\\x83{\\x0B\\x8D\\xD237\\xAC\\xBBY\\x93B\\xC9y3\\xB0\\x86\\x06\\x1D\\xD0 \\xAF\\xAA|\\x06W\\xA2\\xB6\\xA0\\xA9\\x1BU+\\x00\\x7F7\\xAB\\x9D\\xA6\\xE3\\xEC\\x16*\\x00C\rO\\x16E\tS;\\xCF\\xD3\\xACrE\r}\\x1Fn\\xF2\\xBD\\x05~\\xEEm?J\\xDD\\x0EGuGi\\xDAq\\xB73\\x15\\xFE@%\\x8E\\xDBI3\\xCB9\\xF0W\\xC1\\xDE\\xC9\\xCF\\xDA\\x91\\x0F\\xD3r>\\xB5\\xE7\\xB7P\\x96g\\xEEv\\xCD8\\xFDfPz~\\xE6{\\xC0I\\x83\\x8C\\xE3\\xB5\\xF6|6"
		"]\\xF6\\x8D\\xC2\\xC3\\xE1\\x82\\xB3\\x86\\x0C\\x9C6\\x1B\\xC8\\xDD\\xB7\\xB0\\x07\\x85\\xCD\\xFC\\x95\\xB6\\x85\\x837\\x86\\x13W\\xC6%\\x8B\\xED\\xBC_\\xC2c\\x8F}\\x12\\xDB\\x99}\\x9Fg\\xF6\\xB4\\xF4\\x1Az\\x90WG\\xC1\\x80\\xC0\\xB3k7=%\\xED|~\\x94&y\\x16\\xCF\\xFD\\xFD'@`\\xDB%\\xAD\\x10\\x9C\\xB7\\x9D`\\xDD\\xBE-\\xC7\\x11q\\xFF\\xC23\\x97\\xCD\\x84q\\xD1*d\\xAF\\xCC\\xEFTK&\\xA9\\xE7\\xA6\\xA6\\xAE\\xC6\\xF3%\\xBB\\x7F\\x98\\x98\\xB5\\xE4m\\xE5\\xAFF\\x92\\xC2\\\\S)"
		"\\xD60n\\xF0Q\\xF8\\xB3\\xC1\\x1F\\\\\\xB5\\xDD\\x97\\xDDQ\\xE9\\x16\\xAC:R`\\x9F\\xAF\\xF3@\\x17y\\x97\\xCB\\x89\\\\\\x1F\\xE3v\\xCD\\xD0\\xDCY\\xBCQ\\x12t\\xC4\\xC4\\x0E\\xF3\\xD3[\\x08\\xCF\\xCF\\xFC\\x7F\\x94\\xCF\\xCFP1\\x1E\\xD8\\x7F!y\\x84$\\x8B\\x90\\x94\\x11\\xC21\\xA1\\x7F\\xB9\\xA5\\xFE\\xCA\\x8D\\xC4z~\\xE6\\xFF\\xC3\\xE1\\xDF\\x8D\\xE2\\xADz#\\xB2i\\xA8iq\\xA3l\\xCB\\xF6p\\xBF\\xF6F.\\x00\\xFB\\xC3\\xB4pI Z\\x92O\\x17\\xB3l\\xA3\\x98\\x97\\xE8~"
		"Z\\xB9Yy\\x0B%n\\x83\\xEAhMO\\xA6YZ\\xA5v\\xBAQ\\xA6\\xAB\\x1E\\x80\\xE6\\x9B#\\xBB\\x80}P\\x87\\x85\\xCC:\\xAB\\xA0\\x0Fs\\x11Z\\xE7\\xA4\\xD5L\\xCFW\\xA6e \\xBD\\xA1e\\xA0\\x80X\\xF2\\xDC\\x9A\\x06\\xAA\\xF3I#\\\\\\x02G\\xBD\\xF2d|\\xAB<\\x01Y\\xF5\\x8AuO\\xC1E\\xE4\\x81\\xD7\\xF6\\x04\\xFC>I\\xDD\\xE9\\x9D\\xFCl\\x0F#\\x8C\\x18E\\x1E6J\\xA7\\xD3=\\xD0M\\xBD\\xA8w6\\x9Bfes_4,6OY\\x9C\\x17\\xE3\\x9B\\x14c|"
		"\\xD3c\\x16B\\xD0\\xB6I\\xD2\\x91\\x05\\xC1\\xDAQD\\x04\\xFBG\\xAE\\x05odD\\xB0m\\xE2\\xF1\\xD0\\xD5W+\t!D[\\x94\\xAF\\x0Cv\\xCB\\x90e[TD\\xBD\\xE7\\xBD5\\xA4w\\xF2\\xE1\\xF9\\x07\\xE5\\xAE6\\x9B\\xF5]\\xE4t\\x0B\\xC1\\x10\\xF2W\\x8E/\\x05tk\\x99F,9f#N\\xB7\\x14\\xA8\r\\x1BQfk\\xFD\\x06=\\xDF&e\\xCB\\xC5EG\\x16\\xD16E\\xF1K\\xAB\\x80\\xB5\\x89S\\xED\\xC4\\xC9\\x152\\xE9\\x16\\xAE\\xA2\\xDE~\\x98\\xD0\\xB2\\xB2E\\x15t\\xF3\\xEA\\x9B\\xE96\\x9E\\xB9\\x9B\\x86\\x18\\xD8\\x9B\\xC7\\x18\\x13\\xFD"
		"{\\x10\\xAE\\xBD\\x87)\\xDC>n\\x8B\\xB1\\xAB\\xF6\\x8E\\x06S\\x9B\\x1D_@\\x84K\\xCE\\x0E\\xDD>;[\\xD4#\\xE7\\x89\\x14|[\\xD9\r\\x05\\xF7\\xC1B\\xB5\\x81\\xFE\\x105Z\\x8B\\xCD. Y\\xB8\\xBB}\\x9B\"X\\xF2\\xCC\\x07T\\xF9\\xC5\\xE6-\\xFCi\\xF5/\\xA8\\xDF/\\xD2\\xD9</*\\x9Bmj\\xB3O\\xC5\\xE6\\x97\\xE5\\xAEU\\x05\\xFB\\x01=]\\x17\\x1A\\xBA$\\xF7G\\xD1\\xB2\\x0FN\\xB8/\\xE7\\x9FN\\x18\\xE5\\xC5\\xEC\\x16Z\\xCC\\xE7\\xAEHl\\xB9Y\\xD6\\xB3\\xB5i\\xD9wE\\xFBH\\xDC\\xC2\\xEB\\xE5\\x99\\x10\\x9240\\xD9]"
		"\\x9DH\\xDAj\\xB3\r-\\x1B\\x1A\\x91\\xACQ\\xB6\\x92\\x06=;\\x0E\\xAA\\xB3r\\xC5\\xDE\\xA2\\x98\\xFE\\x8B\\x1B\\xE17>\\x1A\\x1EiF\\xD8\\x11\\xA1L\\x90\\xBF\\xF4Uy[5\\xAC\\x91\\x88\\x0C}\\x11-\\x9C\\x07\\x94C7*}\r\\xD9\\xE6\\x88\\x95\\x11\\xA9V?\\xB6Ht\\xA3g\\xA5\\x8AzwZ\\x99[yr\\x01\\xDE\\x19\\xF8\\x00)}s\\xA6\\xC5\\xA1\\xBB\\xB8\\x15n\\xE1\\xC1\\x89\\x16B\\x91\\x06\\xA4p\\xB7g\\x8A\\xB6Ze\\xCB\\x04>(\\x9C\\xAB\\xD2l\\\\\\xA2Q^"
		"\\xA0j\\xE2\\xD0\\xD0\\x9E\\x7F\\x81\\xBEs\\xC8\\x16\\x0EM\\\\\\xE1P\\x95\\xA3\\x89\\x9B\\xCE\\xD1y\\xBE\\x88\\xD1A\\x9EU6\\xA9\\xD0\"T\\xB0\\xD9\\xF9:\\xC6r1\\x07\\xDE\\x8F7\\xAD\\x83b-#l\\xE9\\xC9\\x0B\\xD0j\\xE8`b\\xAB-5\\xF9\\x92-\\x9A\\x19\\x10\r\\x1F)\\xDE\\xAEZ\\xFD\\xC2:D\\x0F\\xB6L6\\xBE`\\xB2o\\xAF\\xDB\\x8D\\xB5E\\x12\\x1A\\xDB\\xF9-\\x04\\xE2\\xBA\\xA2Nx\\xED\"(\\xD9\\xF6f\\x85-\\x94jyk\\xCB\\x90\\xEB\\xC1\\xE9\\x86\\x89\\xE1\\xCAC`6Xz\\x81\\xC5\\xDF\\xA3\\xBC\\x17\\xF5\\xCE\\xC3?"
		"a\\xD9\\xE0\\x7F\\xD6\\xCB\\x06\\xFF\\xBB8\\xDB#\\xEDR\\xE1t\\x92V\\xCE\\xE34-\\xCE\\xC07\\x942\\xE8\\x8F\\xC6-\\xDC\\x84\\xB6\\xC0\\x9F\\x873\\xA6{O8\\xAC;\\x1E3\\x8A8\\xF6\\xD3W\\xE4\\xC7n\\x0F\\xA6\\xE3>\\xA7- x\\xE8{$\\x96K\\x10\\xA8\\xAB\\xC4\\xCE\\xDB\\xF7M:\\xE0wy\\x9A5p!4iZ\\xD7x\\xA5W\\xB4\\x85\\x93\\xE8\\x90rX\\x8D\\x0C\\xF7\\x9E0\n\\x1D\\xE2\\xD8w\\xE8\\x90r\\x16Q\\xCE#\\xCAED\\xB9\\xF4\\xF5X[\\x8FvyC\\xF3\\xA5|6M\\x88F\\xACu-\\xD1A)\\x04\\x8B\\xBAMAx\\x02`?"
		"\\xFF\\xE1UV8\\x94P\\xCF\\xBC\\xA2\\xAD\\x86y\\x95\\xA5U\\xB9\\xB7(]\\xF1bn\\x13\\xF7,{\\xE5_\\x7F\\xF1\\xDC\\xD4\\xF7\\xC6b\\x9EO\\xBDN\\xED\\x87\n\\xE5^\\xF9\\xED\\x83;~:d\\xDB'\\xB1\\xD2}\\xD5\\xCA\\xFB\\xDB\\xA8\\xF70\\x8D|a\\xDDH6\\x06f\\xAF\\xC9 \\x97\\xDC\\xE0\\x7Fw\\x17\\x91D\"\\x80\\x1D\\x12l\"\\x02\\x8F\\x99\t\\xA1M\\xA3;\\xF4\\x8A"
		":1-\\xE7v\\x91\\xE3%r\\xB3\\x8E\\x1B#BVq\\x1B\\xD2H\\xA5Y\\xF7\\x92\\xD7\\x18\\xDE\\xD0\\xB6$i\\xB4\\xBFa\\xED4l\\xAF\\x18j\\xF2\\x86\\x94\\x86\\xD5Tt\\xF7\\xA7y\\x0E\\\\7\\x82\\x7F\\xFB\\xF9\\xDC&\\x10\\x04\\xC5>JZ.\\xA6\\xD5\\xDE\\x9DvM\\xF2\\x08\\x1E\\x12\\xBF\\x9F\\x9EyT\\xA2E\\x15\\xB46#\\x9EQ\\x8Cl\\xE1\\xA2i\\xE2\\x00\\x88\\xF9\\xC4V\\x05T\\xED\\xA5\\xD9\\xDE\\x0B\\xEF\\xB5\\xEFO\\xE7\\x13\\xDB<\\xEC2k\\xB2O\\xECt\\xE1J?K\\xBF\\xF4?B\\x15\\xEAttb\\x8Ba\\x8DS\\x08\\xA3\\xDA~"
		"\\xC8\\x95\\xFE\\xE9\\x16\\xAE\\x9A\\xFE=\\x1B\\x8DJxbF\\x08c\\xDA\\\\\\xDD\\xA9%1n\\xE1\\xA6\\xA9\\xF5\\xC0.\\xCA2\\xB5\\xD9\\x9D\\xE9\\xA2\\xF0R;\\xBC\\xEBNR\\xCF\\xAA^\\xA5\\x08\\x89I]\\x0B\\xEAw\\xB1\\xD1\\x16N\\x96s4\\xF3\\x8E\\x9A\\xF33D\\xBB\\x83\\xE9\\xE5sW\\xD8*/\\xF6\\xF2E\\xE5\\xF1\\xB2\\xB6>]\\xC1\\xCB[88%\\xF0\\x1D\\x81\\x7F\\xD4l}Jcx\\xB9Y\\xA3N\\x9A+,L\\x17 \\xB4\\xA6\\xBCM\\x12\n\\xF3,$\\x16m\\x03|\\xA5a\\xD9\\xC2[\\xA2\\xDF\\x99"
		":\\xAF\\xCDf\\xF9\\xD0\\xEDey1\\xB3\\xD3zh\\xDB\\x18\\xAA\\xA1\\xA1\\x1B\\x8D\\\\R\\x91\\xA3a\\x91\\xCF_x\\xEF\\x7FE\\xA5\\x08\\x89U\\xDB\\x94\\\\\\xE9\\x82n\\xE1\\x10\\xAFP\"b\n4N\\xCBm\\x0F\n;\\x9F\\xA4I\\xDD\\x87_h\\xA7\\xE9N9\\xB1s\\xE7\\x9B5-\\xFA\\xAEA\\x90\\xA4\\xA3\\x0C\\xEA\\x9E\\x10R\\xAB\\x1B\\xC8\\\\jc\\x1A\\x13I\\xB5B<\\xC6\\x82\\x08q@c\\xA1\t\\xE1\\x88\\xC5J\\x18J\\x10\\x8B)!R \\x16k\"\\xA8F,\\x16ZQ\\xC4cB\\x05'\\x8FYL\\x84\\xE4\n"
		"\\xB1\\x98\\x1B\\xC3\\xA0\\xBA\\xC6FCq\\x8C\\x05\\xA2\\xB1a\\xCC\\x18Dc\\x0E\\xAF\\x85A)\\xAA\\x15\\xA4\teX\\x1F\\xB0\\xD8P&\\x0C\"\\xB1R\\x8Aq$bF\\x85T\\x88\\xC6\nK\\xAD\\xD6\\xD3\\x07<6J\\x18\\x86hL\\xB1\\x92\\x14\\x89\\x18s\\xC28\"\\xB1P\\\\k$b\\xC1\\xB1\\xC7G)W\\x072\\xC6\\xCCh\\x8Ep\\xAC\\x95\\xD0\\\\\"\\x19+\\xAA%\\x00\\x8C\\x91\\x9C\\x11\\xA4b\\xAC4\\xD3\\x88\\xC4\\xDCH\\xA1\\x1E\\x13\\x12+\\xC2\r\\xD21\\xE6\\x923H\\x13\\xCA\\x11a\\xB1R\\x82=\\x9611\\x94KDHl\\x94\\xD4\\x8FI\\xAC\r"
		"\\x81V\\x8D!\\xEC\\x80\\xC4\\x82i\\x02\\xA3\\xC0F*\\x85H,%\\xC6\\x12\\xF1\\x98cf$Z\\x9B\\xEA\\x1F\\x1A\\xF3~\\xE3\\xDE}#\\xB9\\x00z\\x12\\xDA\\x12\\x89\\xAC\\x10\\x8F\\xB5p\\xDA!\\x1E\\x89\\x89\\x01\"\\xA9X\\x1A\\xAE\\xCD\\xC1Z\\x1A\\xE1X\\x1A!\\xB0A26\\x12\\x1E@\\x8F9\\xC3\\x84#\\x19s\\xA18P\\x8BH\\xA6\r\\x12\\xB1\\x11\\x9C\\x00]\\xA4T>_je\\xF8z\\xFA\\xB1\\x881f\\x12\\x0E+\\xC5\\xD8\\x08q b\\xAC9\\xD1\\xC8\\xC4F\\x12\\x0Cx\\x88\\xA2\\xD4 \\x13k\\xAA9\\xA4\\xA9\\xC2\\x92\""
		"\\x13K\\xA3\\xA4zLcL\\x95b\\x88\\xC7F\\x1A\\xCC\\x0F\\xD6\\xD2@G\\xCA\\xB9F<\\xA6Lx2\\x0B-\\x81\\xB9\\x14\\xA3\\xBE\\xB81\\x94{\\x9E\\xF4l\\x04L'\\xA4D,6\\x92\n\\xB6\\x9E~,c\\xC1\\x85\\x06jr\\x825?\\x90\\xB1\\x14\\x86I\\xA4cF4\\xD5\\xC0\\x0EJxjS*(\\xCC\\x926\\x82@\\x9A0\\x8E\\xD5c\\x163a0\\x10\\xCE()\\x0EV\\x93\\x88\\xC6\\x1AV6\\xD0KN\\x150w\\xE0df\\xC4\\x01\\x8F\\x19e\n\\x06D\\x99\\xA4\\x1C\\xF1XS\\x98~#\\x8D1\\xAB\\xA9\\xC7:f\\x92\\xC1\\xB1\\xFE\\x98P)\\xD5\\x81\\x8E\\xB9aX\\x00or\\x85)"
		"\\xD2\\xB1\\xA4D\\x02\\x11\\x8C\\xD2X \\x1D+\\x81%\\xF4\\xDE`\\x81\\xF5c\\x11s\\x0E\\xA3\\xA01\\xD6\\x82\\xB2\\x83\\xB54L.\\xA7\\xC0\\xC41\\x13\\xC4\\x13E*a\\x8094\\xD7\\x94\\x89\\x03\\x19sl\\x14C8f\\x9C\\x1BM\\x003\\xA1\\xF0\\xAE\\x1FH\\x87b\\xEB\\xE9\\xC7\\x04\\xC7\\x1C+\\x85dL\\x94`\\x1C\\xD2\\x86y&\\x13\\x98\\xCB\\x03\\x1D+\\x06\\xD2\\xACc.\\xB1TH\\xC7\\x82*\\xE5\\xA5\\x86a\\xCF-J\\x83T\\x13\\x16\\x13&\\xD9\\x01p\\x13S\\x04\\xD2\\x02\\x834\\x03zN!M\\x05]K\\x1E\\xE8X\\x1B\\xCE\t"
		"`\\xC3\\xDC\\x00\\xAF1\\xD8\\x0E\\x80V\\x94\\xE0\n\\xE0\\xB0\\x0C\\x81\\xE9\\x93B\\x11\\xDF9\\xAC\\x99W`R\\x98\\x83\\xB54\\xA0\\x97Rh\\xA0\\xAA\\xC4\\\\\\xFB\\xFA\\x94\\x00y\\x15\\x8C\\xEE\\x80\\xD0\\x98A\\xEFA\\x87\tL\\x11\\xA1\\xB1\\xA4\\x18\\xC8\\xCD\\xC2\\xEE\\xFDj\\xFA1a1S\\x98\\x81V\\x10J\\xB1\\x03\\xC2@\\x88\\x04\\xC8\\x1C\\xC7\\xC2\\xEB\\x12\\xA3\\x99A*f\\x14S\\x86\\x08\\xA8\\x07\nLI\\x04e\\xE4\\x80\\x88X\\x80\\xEC\\x10\\x1C\\x0BL\\x14\\xE4k\\xA5\\xFDlq\n\\x8B?\\x1AKn\\x04\\xC0\\x8D\\xC0~"
		"<\\x94\\x80\\xB6\\x91\\xB1$\\x9Az&f0?\"6\\xA0\\xFC\\x040\\xB7\\xD4~v%\\xCC\\xC7\\xAA\\x8EXj\\xA1\\xFB\\xF7\\xEF\\x1E\\x88\\xBB^\\x0B\\xF1V\\xDB\\xB0\\x15-$Z8\\xEFh!\\x113f\\xA4\\x84\\x1EQ\\xA6\\xE9\\x01\\x8Ba\\x9DB\\x9A4\\xC8\\x84\\x845\\x11\\xA11gF-\\xD3\\x18\\xE4Q\\x1Ft\\xD2\\x9C0\\xC8\\x17\\x9A`\\xAFe(\\x01\\x8A\\xC4\\x8C\\x01\\xA5\\xEB\\xF4\\x01\\x89\\xB1\\xD6\\x86\\xB5\\xF9\\xA0\\xDE\t\\x03-^#\\xE8\\x02|\\x0BK\\x00\\x8B\\x19\\xF5\\xAAXJ\\xA35L\\x12\\xA1\\x1ATx=\\x84\\x90>\\x00\\x1A\\x08\\xC5"
		":\\xF9Js\\xE9\\x89e\\xA0k\\x9D\\xB4\\x94\\x1C\\x14a\\x9B\\xE6\\xC4Oz]\\xBF\\x9E\\x82\\xB5)ZN\\xBA\\xB8\\xBB\\x7F\\xF7\\xDE\\x81\\x9Ft\\xD9N\\xAEX\\x99t\\xD5\\xC2e\\xD7\\x8B\\x8A\t\\xE1J\\xF8\\x1Eb\\x03\\xAA_)0\\xBCu\\x1A\\xE6@\\x1BC=\\xFFP\\xDAI\\xD2XkA\\x0E\\xBA\\x00\\xC9\\x82\\xA9 \\x98jO%\\x8E\t\\xC21\\xE7\\xDCH\\xDE\\x00\\x0EpL\\x0C\\xD4Y\\x96h\\xEB.\\xB1\\x86\\x19\\x11\\x81f\\xDA\\x04.4\\xA0\\xAA\\xDB\\xEEB\\x1At\\xA9\\xC4\\x9At\\xF2a\\xE5\\xEB\\xD3\\x1A\\x93n\\x12B\\xF6\\x07\\x9D4\\xC3\\x1AV"
		"!mu?\\xDA\\xB5\\xD9\\xF8\\xE1\tP^\\x19\\x12X\\x01\\x1B\\x0Eb\\xC2\\x19\\x13-\\xC0s\\x0F\\x03\\xB5\\x12c\\x85y7\\xCD\\x88\\xC4\\xF2`\\x99\\x86\\x99\\x0F\\xCC\\x05\\x08<\\xB7b\\xAF\\x96|\\x0Bu\\x1A\\xF4\\x04\\x0F\\x06 d{J\\xFB\\x9E\n\\xDD\\xA6`A\\x83A)\\xB4i!\\xFD9G\\x1E\\xF3\\xC0'J\ni\\xFC,\\xC2\\xBA\\xA4NCyC\r_\\xE6{\\xBE\\xEC\\xD4o\\xD35\\xFE:Mc-\\x95W\\x9D,\\xAC\\x07\\x96\\x83_\\x99\\x9E\\x1Fz\\xD1"
		"!\\xA7\\xD4\\xF3\\x9Bn\\xF9M\\xAD\\xF0\\xA1i\\xE1\\xBA\\xBB\\x04\\xA1\\xB1\\xC1\\xC0\\x030\\x01Rh\\x16\\xB8\\x01\\xA6\\x02\\xC7Dc)\\xC42\\xCD\\xA9\\xA4J\\x1C\\xB4i\\xA9\\x886>?\\xD4\\xEC\\xF0d@Z\\x03\\xDA\\xF9Z\\x96\\x101!\\x18f_+c\\x96i\\x06k/\\xA0^\\x9Bf\\xDCS\\x0FfF\\xC1RBpO\\x1E\\x11\\x0B\\xC5\\xDA4\\x94\\xD7\\xC4\\xE8e\\xBE\\\\V\\x95K\\xAC\\x12\\xD8C\\xEB \\xD9\\x9EBx\\xD9\\xD9\\xCE$R\\xDCN\\x96\\xE9\\xAE\\xCB)i\\x1D\\xE9f^)\\xAD=u\\xC8\\\\\\xCE\\xAB\\x89\t"
		"W\\x12\\x16\\x8BJS*\\x0ELL0\\xF3\\x8BI)\\xA9\\xD2H\\xC7Fk\\x05K%\\xA1\\x19cH\\xC7Z\\x12\\x9F\\xEF\\xD3\\x0Fa)F\\xB8~\\xACbj\\x8CT^\\x9C\\x858P1\\x93\\xD2\\xCF=#\\x02\\xEA\\xA9\\x981\\x8A%\\x10\\x0B\\xD4=\\xD8%J`\\xED\\x8D\\xC1~J\\xC3\\xF9\\x81\\x8A\\x89$\\x14\\x8A`J\\x00\\x02\\xB6\\xD5p\\x06\\x8E\\x98\\xAAWp\\xF8\\x00\\xAC\\xBF\\x14@~\t\\xBA\\x00rcL\\x05\\x16\\x02\\xD6\\xDD\\x9AjPBXq*\\x1E\\xFB>R\\xE0NL\\xD8c\\x1C\\xC37\\xEA\n\\x98W+"
		"\\xA3A\\xD1`\\x0CK\\x16*aa*\\x19\\xA5\\xA8\\xEFqq\\x02k\\x13l\\x94\\xF1\\xDD\\x83\\x1D\\x11\\x0C\\x10J\\x14\\xE7PM2M\\x08\\x98@\\xC6\\xA4\\x81\\xF6\\x88RJ\\xC3\\x02\\x86\\x13\\xE9'\\x81a!\\xB0l\\x00\\x0FYl\\xC0\\x88\\xC2B^J\\x1D\\x8C\\xAE\\xE0\\x02\\xB4\\xA91&\\x18\\x10\r\\x8B\\x8AX3.\\x08\\xA45g \\xE5\\x86\\x1Bo\\xB1\\x0C\\xE3\\x0C\\xD6\\xB1X0\\x9Fm\\xA0=\\x1AcE\\xC1\\xB6\\xC3\\xEA\\x900\\xAD9\"\\xE4\\x80\\xC6\\x94`\\\\C\\xA9&\\x94\\x85\n~\\xAD\\xC6\\x98f\\x01!\\x15\\xAA\\x9D!\\xA0\\xB2zlb,"
		"\\xC1\\xAD\\x01\\xA1\\xC6\\xC4\\x00/\\xC0\\xF2\\x1D\\x1C\r&\\x15,\\xA8\\x88\\x01\\xE6\\xE5\\xB1\\xC1\\x143\\xB4\\xC6;]\\x13\\xBF\\x7F\\xC0\\x18X\\x1B\\xCAZ\\xAE\\xA3+\\x0C\\xCAC$'\\x04l\\x9E\\xE7\\xA7\\xAEpC48G\\xBE\\x92\\xA8\\xC3<P\\xEC\\x90xV]\\xDD\\xAA:=\\x8D]6\\xB6U\\xEAO8\\xB8$\\x9F\\xCD\\\\\\x91\\xB8~2\\xB1\\xD5 \\xAF\\xCA\\xDF/\\xAA\\xD9Q8\\x1C\\xB1W\\x9FP\\xFB\\x12@\\xF0\\xE6\\xEDb\\xB6w\\xEA\\x06G\\xA7\\xFE\\xB8\\x83\\x87&v6\\xB7\\xE98k\\x8A\\xD6y\\x10\\xA0\\xE2\\xFCm8/"
		"\\x97\\xE5\\xF9\\xDCe\\xAE@Y\\x0E'\\xE7\\x8A\\xC2\\x15m\\x94\\xB8\\x8E\\xFD\\x16\\xE3Agc\\xFE/o\\xFB\\xA1\\xC80\\x9E0\\xCE{m\\x9F{o\\xDF\\xFE\\xF5\\xFF\\x0F\\x837zz\\x97:\\x01\\x00", 
		LAST);

	lr_think_time(6);

	web_custom_request("collect_7", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xED\\x9A[\\x8F\\xE2\\xCA\\x11\\xC7\\xBF\n\\xB2\\x94\\xB72TU\\xDF\\xF7\\x08E\\xB9H\\xC9\\xE6z\\x94D\\xC9\\x03B\\xA8m73\\xDEe1\\xC2\\x9Ee\\xE7D\\xF9\\xEEQ\\xB7\\x81a\\x18O\\xB2\\xCCn2\\xBB\\x12\\x0F\\xA3\\xC1?\\x9A\\x7F\\xD7\\xC5U\\xED\\x86\\xFEg\\x16\\xB27\\xB3\\x0C\\xC7f\\xCC\\x98\\x81\\x02cX\\x80$\\xD4\\x909g\\xDA2\\xBC\\xFB\\x88\\xEB\\x0C2\\x92\\xCD\\xEE\\xDDJd\\x90\\xDDhs#\\xDEg@\\x80\\x80s\\xC8|\\xF6f6\\xB3L\\x06\\x08\\x81\\x01A"
		"!\\xCEafY\\xDA\\x03\\x11=\\x11D\\x07\\xC2{b\\xC4\\x81PO\\xA4\\xD0\\x07\\x92\\xAE\\xC9) \\x05\\xE4\\x8C\\x06\\xC9\\x12\\xAC\\xA0$N<\\x88\\xA5|\\x84\\xF5\\x1E\\x9F\\x89\\xA8\\x1E\\x0Bi\\x1Ea\\xD9c)\\xE8\\x11\\x16=VV\\x0Fa\\x8Dv\\x10K\\x1C\\xC4zP\\xDB\\xE006\\x83\\xDAV\\xC8!\\xECP\r\\xE2\\xE1)\\x9D\\x1B\\xD2vB\\x0Eb9\\xA8\\xED\\xA4\\x1A\\xD2vJ\\x0C\\x8A\\xE8\\x98\\x7F\\xDEc\\xE3@`\\x8F\\xA3\\x97\\x0C$\\x8C\\x05k\\x14\\x90\\xB1\t"
		"\\xAB$b\\xB0\\xFFcR\\x91\\x9A\\xBDF\\x1C\\xEC\\x98\\x80L\\x8F\\xC5\\x83\\x86\\x13x\\xC4'\\xD2.zf\\x93\\xB4q2\\xE2(\\xEB\\x14\\x029\\x11\\xA9\\x8D&\\x1Fh43IX\\xE5\\x0Ef\\x9CR\\xED\\x1E\\x8F\\xD5\\x89:\\xF3\\x98\\x9A9\\xCC\\x08\\x91\\x06\\x06\\x13\\xA2:q%r\\xABzn\\xCD\\x03\\xD7\\x08\\xA4{\\x19\"\\xF1\\xC0\r\\x02\\xC9=\\x17\\x0F\\xF2\\x86\\x81\\xA4\\xE8\\xB1I\\xF2\\xC2\\x98="
		"\\xE6\\x84\\x19\\xB9\\x1F\\x8D\\xE0b\\xF5\\xB1\\xEB\\xB1L\\x98\\x905\\xB8\\x98\\x04\\xC2\\x9EG\\x03N9\\xF6\\xEA\\xEC\\xFAjx\\xCA\\xCD\\xC9\\xF8X\\xCB\\x94\\xB8`<\\xE3\\xBD\\xBE\\x92i<\\x1B\\xCD\\xE0\\x9C\\x84\\x94 Be{\\xE3\\xA5N\\x9F\\x11`\\xFA\\xD8h4\\xA7\\xDC\\x1E\\xB9T{.\\x81P1\\xD8~Z\\xAD\\xCD\t\\xD7\\x08\\xB67s\\x7F\\x1B\\x1D\\xB8\\x06+{\\xAENu\\xB49p\\xEB\\xF0\\x8C\\xF7\\xF3:\\xE3N\\xB9\\x04\\x9B\\xC2I\\xC8\\x8Ft\\xC4\\x91\\xA7\\x90\\x1F9\\xF7\\xBCo\\xBA\\x10M\\xD2\""
		"\\x86\\xC7\\xF6\\xAF\\x94\\x8CM6\\xA6*V\\x11\\xA1 0Z'\\x8B\\xC8\\xB2\\x03\\x02\t\\xB3\\xAC\\x1C\\x97+\\xBF\\xAD\\xBB\\xFB\\xF1\\x876\\x9B\\x1F\\xDF\\x8CM\\x94\\xA4$\r\\x02(\\xCA\\xB3\\x05\\x05\\x02\\xC1\\x81\\x00V\\xFBH\\xA4\\xA1B\\x83\\x86\\x99\\xB1$\\xC1\\x11\\x18\\x97\\xFC\\x03\\xCB\\x84`\\x19\\xACD\t\\x16\\xC1*m\\x00\\xC1jkA08m\\xE3\\xA5\\xB3\\x14\\x8DtN\\x98\\xBE\\x8Bk\\x82X^(\\x9D\\x83\\xD8wQ+\\x95\\xDE\\x89\\x1D\\x07\\x81H+\t8\\x9F\\xCF!\\xDB\\xC4\\xA5#M\\xABAi6 @)"
		"\\xB6\\x90\\xFD\\xE1\\xED\\x9F~\\x9FA\\xB6\r\\xAB\\xE9f\\x1B\\x96\\xA1+o3\\xC8\\xD2\\xFF\\xCD\\xB6n\\xA2\\xB3\\xD3U\\xB3\\xCB \\xF3\\xED\\xB4-\\xB7\\xF5\\xA6\\xCB \\xBB\\xDD\\x86\\xE5\\xF4\\xB6\\xEB6\\xED\\x9B\\xC9\\xA4\\xAC\\xD6\\xE3\\xF6\\xB6\\xD9\\xD4\\xCB\\xFBq\\xD9|\\x98\\xEC_\\x97\\xAB\\xE6\\xAE\\x9A\\x94\\xB7\\xA1|"
		"\\xDF\\xDCu\\xF9.\\x14\\x13\\xDF\\xB6\\xA1k'F\\xD1x\\xE5\\xBB\\xD0v\\xE3\\xB0\\x1E\\xA3%T$\\xA8\\\\.\\x0B\\x15\\xD4\\x92XT\\xE3wm\\x06Y\\xB9m\\xDA\\xB6\\xD9\\xD67\\xF5z\\x9A\\xCDS\\xD8\\x14h`\\x87\\x0C\\x8CJ@\\xF6\\xF6\\x8F\\xBF\\x89\\xE3V\\xBEm\\xA7+\\xFF\\xD3\\xFD\\xAA\\xF1U\\x06Y\\xE5;\\x9F\\xEF\\xEA\\xAA\\xBBm\\xA73\\xA1\\x11FJ\"\\x8C\\x0C#\\x8C\\x08\\x11\\xE7\\x871\\xBE\\xDD\\x84\\xB2\\xDB\\xFA\\xAEn\\xA64\\xC6\\x03n\\xEB\\x9FB;\\xF5w]s$\\xDB\\xB2\r"
		"\\xDDt2\\xD9\\xEDv\\xE3\\xCE\\xB7\\xDD\\xFD\\xBA.\\x8AUh\\xC7\\xF5:\\x06 9=Y\\xD6\\xAB\\xD0N~\\xD54\\xEFC\\xF5;\\x7F\\xEF\\xFFR\\x97aA\\x0B\\xA1\\xF1\\xD3\\xF8\\xDD\\xE6\\xE6\\xE7\\x1F\\xA7d\\xD0(\\xED4\\xE3Hh\\xDC\\xC1\\xE8e\\x8AJ\\x0E)*\\xF9rE\\xC3C\\x8A\\x86_\\xAE\\x18\\x03= \\x19\\xF1.\\x03v,\\x80\\xD1X\\x98I\\x88Y5`\\xE7/\\x08\\xF6/}\\xF9\\xBE\\xAD\\xAB\\xB0(\\x85\\xAF\\xD8\\x07\\xCEM\\xE0\"\\x97\\xC2\\x89\\xDCi\\xAEr'\\x98\\x05W\\xCC\\x85(\\xCE3!\\x9CPh/\\xC9\\xC4e\\xD3\\x9D\\xA5i?"
		"\\xDD\\x05i\\xBAl\\xBA\\xB3\\x1C\\xEE\\xA7\\xBB \\x87\\x97Mw\\x9E\\xE0\\xFD|\\xC7\\x04K\tL(\\xBE0\\xC1?n\\xFDn\\xDDn\\x1B\\xDFv\\x8Cx3PN\n\\xB5\\xD0\\x97$\\xF1\\xA9\\xE4y=\\xF5\\x92\\x17$\\xEA\\xA9\\xE4yA\\xF5\\x92\\x17$\\xE3\\xA9\\xE4\\x93\\x8A\\xEA5\\xFB\\x80\\xA7\\xFE(\\xF9\\xF9\\xFE8\\x8A\r2\\xF6\\xB4\\xD4\\xDDF\\x87vY\\xAFo\\xAE\\x1D\\xF3{\\xE8\\x98Y\\x1Fc&"
		"\\xB1\\xF9\\x14\\xAF\\xAE\\xF1\\xBD\\xAEH\\xD7\\x15\\xE9\\x82\\x15i\\x167Z\\x17\\xD5\\xCD5\\x95\\xDFh*\\xAF\\x0F\\x17\\xFF\\xDF\\x87\\x8B\\x17\\xD4\\xCE5\\xB4\\x17<\\xB79\\xEA\\xF7\\xE56\\xEE\\xCB\\xE3\\xF6\\xFCU\\xF6\\xE5|\\xBA-\\x17\\xB2\"\\xAF\\x1C\\x07\\x19d\\xB0XQU\\xD23\\xDB\\xF2\\xF8u\\xE8\\x7F\\xDC\\x96?}\\xEA\\x0C\\xD7m\\xFAw\\xF1Pt}\\xE8\\xFC\\x9F\\xC67U\\x8F6\\xA9z\\x0E+\\xDA\\xF7Q=\\xD7\\xF6\\xFE\\x99+\\xE7\\x17T\\xD05\\xC6\\x9F\\xBF\\x84:\\xB3\\xFFj\\xDB\\xF5K\\xE8+}"
		"\\xB5M\\x88'kh\\x19t\\xF0\\xA5t\\xCA\\x16\\x15\\xAB\\xE0*\\xED\\xF5\\xF0\\x1Aj\\x91]\\xEA\\x02\\x87=\\xE8\\xF7\\xD1\\x05\\xAE\\x1B\\xA4ot\\x83\\xF4\\x05]\\xE7\\x9A\\xD3o3\\xA7\\xA9K(N]N`\\xDF\\xE5\\xDC\\xEBt\\xB9?\\xAF\\xC3\\x8F\\xFE&\\x9Ct:+\\xB4\\xC5\\xCA\\xFB\\x82\\x8A\\xA5\\xF0,Y\\xFA\\xE2\\x99N\\x17\\x7F\\xEBL>P\\xF2A\\xE0\\xA5>t\\xF7\\xAB\\xF0\\xC5.8\\xE6\\x13\\xF3\\xCD\\x12\\x8DX\\x96\\x15\n\\xE7\\x8Cak\\x85\\x97\\xE3\\xB2\\x1D\\xB6\\xDF\\xEDs\\xC0\\xBD\\xFD\\xF4*\\xF6\\xFB\\xCD\\xE6\\xC4~"
		"\\x15\\x14W.\\x94\\x88\\x18tUV\\\\V\\xFA9\\xFB\\xE3o\\xCC\\xC9~\\xD1\\xDB\\xCF\\xAFb\\xFF\\xA3\\xBD\\xA63V\\x12\te\n\\xB4\\x81\\xD4\\x92\\xBD\n\\xCF\\x9A/,h\\x88'3\\x04\\xA9t\\xE6\"\\xFB\\xF5\\xDB\\xBF\\x1F\\x97\\xCA\\xB6\\xEEB~\\x1B|\\x15\\xB6\\x8BEX\\x85\\x0Fa\\xDD\\x8D\\x86`\\x9E\\xB7w\\xC5\\xA8n\\xF3n\\xEB\\xD7m\\xDD\\xD5\\xCD\\xFA\\xE4\\xA7\\x90\\xEE~\\x13\\xA6k\\xFF1\\x03aq?\\x93\\x83\\x99\\x02=?\\x1D\\xD1\\x06\\xBF\\x8D\\xB1J'\\xB0\\x9C\\x04\\x96\\x06fj\\x0EY]"
		"M\\x7F\\x9B\\xE6\\xFB\\xC7\\xD6o6a{\\xB4\\xAF\\xB7\"\\xDF\\xF5x\\xF4\\xF82\\xCF\\xEBu\\xDD\\xF5n\\xDA}\\x96d\\x9F%\\xF1:Y\\xD2\\xF6$MZ1z\"\\xAE0\\xB0)\\x97D\\x12\\xE9\\xB94\\xA9\\xB4\\xABQZ\\xA8\\xDE~y\\xA1\\xFD\\xF5\\x07\\x7F\\xF3\\xDF\\xED\\xDFwY\\x9A\\xA0Rn\\xC2\\xCA\\xEA\\x89\\xD6\\x86\\x0E\\xCDw\\xEB\\xD7\\xD5b\\xD5\\xDC4\\x8B\\xBF\\xC56\\xBD\\xD8\\xF7\\xE9\\x1Ci\\xA1\\x8C\nK]"
		"QNZ\\x89\\\\\\x16\\xA2\\xCC\\x0B\\xBB\\x0Cy\\x10\\xCB\\x02\\xD5\\xD2\\xE8P\\xD1\\xE2\\x93`\\x1Co\\xD6\\xA9\\x1Dk\\xC5B*+h\\xC8\\xDBxP\\xE3\\xAB\\xDD\\x94O\\xEE\\xC1\\x93\\x19Nn\\xC6\\xAF5\\xC3\\xFE\\x1EN\\xA7\\xE08\\xB6\\xE6tJ\\xC7\\xD0\\xB9\\x0F\\xAB\\xBA\n\\xEDm\\xB3[,\\xD2\\xCB\\xD19\\xC8\\xF3\\xA2\\xF4^YW\\xE6\\xBEZ\\x96\\xB9,\\xC52\\xF7\\xA6\n\\xB95\\xAE\\xF4\\xA6R\\xC4\\x05\\x1F\\xA6\\xAE\\xD7U\\xF84=>\\x86\\xD6\\xD5\\xF43?"
		"\\x9Dn\\xEC\\xE9\\xA6\\xE9K\\xF6\\xCD\\xC8\\x17m\\xB3\\xBA\\xEB\\xC2\\x0F\\xA3UXvoF\\xB9\\xC2\\x9F\\xFD\\x10\\xEF\\xA1m\\xED\\xF3\\xDB\\xBA\\xAA\\xC2z\\xDAm\\xEFBt0\\x1D\\x9D\\xD1 \\xA4T\\xC0&6p)\\xE5\\xC1\\xCD\\xBA\\x9A\\xFEb\\xBDn\\xEE\\xD6e\n\\xD4_\\x93O\\xB4\\x14K!e\\x95\\xAB\\xA5\\xA1\\\\\\xFA\\xCA\\xE6N\\xBA\"'vL\\x0EK\\xA9K~>D\\xFED/Oh\\xFB\\xF0V\\xFD\\xC1w!o\\xEE\\xBA\\xC7!\\xA1\\xCF\\xF0\\xF1\\x19\\x0F\\xA3;\\xFA\\xE8\\x98:v\\xA2\\xA7n9\\x19\\xF7ON\\xE5\\xA5w\\x98K\\xC5:/"
		"\\xCA\\xB2\\xC8YV\\xE4\\xAC\\x8CKH\\xF1\"\\xB7\\xEA6o\\xC3*\\x94\\xDD\\xC3\\xE6\\xA4w\\x8B3\\x98\\xB9td*\\x1DW\\xFA&\\x92\\xF0\\xD5\\x02?\\x9F\\xFF\\xEB\\xDF\\xEE\n\\xAB~\\xDF+\\x00\\x00", 
		LAST);

	web_custom_request("collect_8", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xCDS\\xC1n\\xD40\\x10\\xFD\\x95\\x95%n\\xE3j\\xC6\\x1E\\x8F=[\\xED\\x01\\x89\\x0Bg$.\\xAB\\xA8\\xF2:n\\x9B\\x92f\\xAB&KA\\x88\\x7FG\\xC9\\x8AR\\x10+\\x15\\x84\\x80\\x8B3y\\xB6\\xDF\\xCC\\x9B\\xE7\\xF9d\\xAAYo\r\\x9E\\xC53\\x87\\x06\\x04\\x88\\x92S\\x08\\xA2\\x0E\\x8Cj\\x1CK\\xBDy\\x8F\\x83\\x01C\\xBC\\x7F\\xB8\\xE9\\xBD\\x01s%\\xF1\\xCA\\xBF3@\\x80\\x80\r\\x98l\\xD6\\xDB-QJ\\x02\\xE4\\xC0\\xB30\\x10\nC\\xF2\rl\\x894,"
		"8\\x07\\xF4@\\x98\\x12\\xB8p\\xC4cz\\x82+\\x02\\xD1\\x82\\xCF\\xF9\\x19\\x08\\xC8\\x89\\x07\\x8D\\x92\\x8EQ\\xE0%\\xDFL\\xED )\\x10\\xB2\\xEA|!\\x067\\xEF8 \\x9D\\xD3\\x83\\x07\\x06\\x81\\x00\\x84\\xE0\\x8E\\xEB\\x9C\\x12\\xE9\\xF1\\xAC\\x17\\x90cai\\xE6\\xF3s\\xE1\\x08\\xC4\\xEAu\\xFE\\x06\\xD6\\x04\\xCA@Au9 \\x12\\x02`\\xD34`\\xEE\\x16\\xA9\\xCB\r\\x99+\\x89\\x10)\\xCE\\x81\\x80y\\xF5\\xFA\\xAD\\x01S\\xFA<\\x8E\\x9B\\xB1\\xEF\\xDA:^\\xEF\\x1F..\\x96p\\xF5#`m\\xD8\\xA12Ugs\\xA6d\\xD9\\x11\\xD9,"
		"\\xB1\\xD8\\xC2^0\\x16E_p\\x95\\x87\\xEE6O\\xD5\\xEE\\x0F\\x93\\x01\\xD3\\xE6)\\xDBnh\\xEB\\x87\r=\\xFE\\xB6\\x9B\\xE70\\x190\\xE3\\xF4\\xB1\\xAF\\x9B\\xBB\\xFD\\xD8M\\xDD~X\\xAF\\xF2n\\xDC\\xF7\\x87\\xA9\\x9E\\xAF\\xFAz9\\xADW6\\xE0\\x8Bs\\x03&\\xDFw\\xD9^wm[\\x87\\xCDt\\x7F\\xA8f\\xD6\\x97\\xBE\n\\x8D\\xB0\r\\xCD/\\xC8\\xD4\\xE8\"\\xB96X\\xC1pi9{\\xB4\\x8A\\x88V\\x82K\\xD1\\xA1\\x13\\xF1\\xBBU7\\xDA\\xB1\\xF6\\xB5L\\xB5\\xFD^\\xA6{\"\\xF39L\\x06\\xB6\\xDA\\xCCF/f\nxf\\x01\\x17\\xFD\\xFC,9|"
		"\\xF5\\xA8k7/\\x87a\\x7F\\x18J\\xBD\\xAD\\xC3\\xF4f\\xA9T9\\xA0x\r\\xB6dE\\xCB\\xC1\\x89\\xDD\\x95\\xB2\\xB3\\x8E[\\xD2\\xC4\\xD2\\x96vw\\xDA\\xDF\\xFC\\x84\\xCF.\\xD0\\xFD\\xB7\\xAD\\x13\\x1E\\xBAg\\x98r\\xCA\\x12\\xCF\\xCCGa\\x8B\\x1D?U\\x84Q\\xB4\\x16n-\\xA7J\\x96\\x83\\x88M5\\x07\\xAB\\xAE\\xC5\\xBA+\\xEC\\xA8\\xFC\\x9E\\xA2\\x93v\\xE1c\\xFF\\x97!\\xFA/\\xFA\\xFF\\xC7z\\xBE\\xC8\n\\xEA\\xFE\\xCA\\xE4\\xFF\\xBBio\\x9A\\xCF_\\x00\\x0B\\x0C\\xAD\\x04\\x15\\x06\\x00\\x00", 
		LAST);

	/* Account */

	lr_think_time(10);

	web_custom_request("collect_9", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xCD\\x95\\xC1n\\xD40\\x10\\x86_ee\\x89\\xDBLe\\x8F\\xC7vf\\xAB= q\\xE1\\x8C\\xC4%\\x8A\\xAA$v\\xDA\\x944\\xA9\\x9A,\\x05!\\xDE\\x1D%\\xAB.\\xA5\"\\xA8\\x94B9eb\\x8FG\\xFEf\\xFE\\xFC\\xF9\\xA2\\x92\\xDA\\xE6J\\x9F\\x84\\x13\\xD2\n\\x02\\x98\\xE0\\xC8@\\xC6\\xD6\\x82\\x12\tc\\x9D.?\\xEA^\\x812<\\xDC^vV\\x81:\\xF7\\xE1\\xDC~P`@\\x83.@\\x95j\\x9B\\xE7\\x87s\\x0C\\x06\\x0Cy\\x0B\\x12|v\\x88\\x1C/y`\\xB4h0\\x06\\x8CsB\\x05\\xE4\\xE4\\xC41h "
		"pL`\\xC1\\x02\\x83\\x07\\x07F\\x80\\x1C\\xC81\\xC3z\\xF0\\x90\\x1B\\x11\\x969[\\xB3\\xF5`\\x80t&\\x16\\xD8\\x01\\x19Ov\\xDE OK9\\x16O\\xF3\\xD3\\xB1d`\\x8A\\xA2\\x00u\\xBD\\\\p\\xA9\\xE0\\xC123P\\xB0\\x04\\xEA\\xCD\\xDB\\xF7\nT\\x1Bw\\xAF\\xFB~\\xD8\\xF7u\\xBAJ\\xFD\\xF4\\xAEkcB\\x1D\\xBC\\xA4\\x9A#r\\x96\\x0C\\xB2\\xF3\\x1E\\xB3T:\\x14\\x8A:U5\\x93\\xA9+\\x05\\xAA\\xEE\\xCAq\\xDC\\x8D\\xF3\\x91\\xF1b\\xB8=;"
		"[\\xC2My\\xAF\\x1E.K7\\xDF\\xB7\\xDA\\xABrJ8\\xEC'\\x05*\\x96S\\x89m\\x1F\\xD3\\xA7\\x9DV\\xA0\\xC6\\xE9s\\x97v\\xD7\\xC3\\xD8N\\xED\\xD0o7e5\\x0E\\xDD~J\\xA7\\x9B.5\\xD3v\\xA3_\\x9D*P\\xE5M[\\xE2E\\x1Bc\\xEAw\\xD3\\xCD>\\xA9\\x99\\xC9\\x1D\\x98\\x16\\xBA\\x9C\\x8B\\x15,\\xD3\\xD8\\xC62GtM0\\xC8e\\xCCPX*4$dD\\xD7\\xECkz\\x12V;\\xE2\\x98\\xBATO)\\xFE\\x88e\\x14\\xE4Y1Os\\x99\\xDCK\\xF7\\xFF\\xD9z\\xBE\\x10\\xCD\\x1A\\xF4`\\xB4\\xCF "
		"\\x980\\x07\\xE1\\x8Ej\\xE5f\\x0F\\x17\\x10%P0\\x14\\x1Dz\\xED\\x1A\\xE4\\xD2j\\x14\\xAD5zGY M\\xDE\\xDBj]5t|\\x8D\\xBB\\xC7Tz\\x040\\xBA5\\x99\\x19\\xED\\xE5\\x0E4\\x83\\xDC\\x15\\xBF\\x81Y\\x05i\\x88\\xB4\\xC5\\xCC\\x05A\\xAEB\\xC4\\xAA\\x89\\x01\\xA3\\x0F\\x96\\xA8\\xAC\\xB2\\xAAv\\xEB*\\xB2\\xF70\\x1FSIA.\\x8B\\xE8\\x16W\\xF8\\x17#z\\xB9\\xB1\\xCC\\x98\\x8B\\xE9\\xF9\\x87>\\xF0\\xAB\\x0F\\xEC\\xAF9\\xC1\\xAAT\\xCD\\x9F\\x19\\x9C?\\x82\\xB9\\x83\\xF4~\\x8A%\\xEC\\xB4\\xB7\\xE2\\xB0.E#;"
		"\\xF2X\\xD5u\\x85\\xC4\\xD1H\\xC6>\\xD6\\xF1i\\xBE\\xBD*M:jm\\xF9\\xE3\\xFC\\x17Cx\\xB6\\xC6\\x17\\xC5\\xD7ol4\\xF3\\xC1\"\\x08\\x00\\x00", 
		LAST);

	web_url("account", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_10", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"e\":[\"0.7.20\",8,25954,6282,\"997scejv0n\",\"14owjl3\",\"g67g3k\",1,1,1],\"a\":[[26318,12,312,1226,12],[26351,12,700,1168,40],[26550,12,2762,1090,112],[26576,12,700,1082,124],[26611,12,700,1073,125],[26627,12,2762,1066,115],[27467,12,700,1026,56],[28236,12,700,1031,57],[28270,12,2762,1056,59],[28304,12,2762,1068,60],[28327,12,2762,1070,61],[28389,12,2762,1071,62],[28434,12,2762,1071,64],[28497,12,2762,1070,75],[28514,12,3464,1069,81],[28545,12,3464,1068,86],[28581,12,3464,1068,88],"
		"[28615,12,3464,1067,91],[28648,12,3464,1067,93],[28727,12,3464,1067,94],[28803,12,3464,1067,96],[28827,12,2762,1067,97],[29221,13,2762,1067,97],[29423,14,2762,1067,97],[29423,9,2762,1067,97,18387,21659,0,1,0,\".\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA-\\xE2\\x96\\xAB{\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA:\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA;\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA:#\",\"https://"
		"www.tastynibbles.in/account\",\"8hnyb8ofw.9pxi3b42\",1],[32233,26,\"pagehide\"],[25954,4,1,1263,9768,1263,541,0,0,1090,11,25498],[32235,0,2,582,3,14,4,24,5,27,10,3,25,34],[32235,36,6,[25998,1,26562,85,27904,0,28281,0,28530,0,28843,0,29230,0,29428,1,29624,0,29967,0,30499,1,30999,0,31655,0]]],\"p\":[[27904,6,1069,717,1068,\"DIV\",\"class=slideshow__slide slideshow__slide--b79f2203-8579-4b7d-bfd7-d67322ab8bc5 animate-out\",\"data-index=3\",\"data-id=b79f2203-8579-4b7d-bfd7-d67322ab8bc5\",\"style="
		"position: absolute; left: -50%;\",\"aria-hidden=true\",1070,717,1069,[5],\"class=slideshow__slide slideshow__slide--d28d5bab-47ea-4d83-a24a-bd600b868966 is-selected\",\"data-index=4\",\"data-id=d28d5bab-47ea-4d83-a24a-bd600b868966\",[9]],[29428,6,5,2,4,\"BODY\",\"class=template-index loaded osf-theme-expanse-5-may-2022 unloading\",\"data-transitions=true\",\"data-button_style=square\",\"data-edges=\",\"data-type_header_capitalize=false\",\"data-swatch_style=round\",\"data-grid-style="
		"gridlines-thin\",\"style=--osf-float-btn-bg-color: #BA4444; --osf-float-btn-color: #ffffff; --osf-font-family: inherit; --osf-font-size: 14; --osf-inline-btn-bg-color: #BA4444; --osf-inline-btn-color: #ffffff; --osf-popup-btn-bg-color: #BA4444; --osf-popup-btn-color: #ffffff; --osf-popup-heading-color: #BA4444; --osf-popup-text-color: #000000; --osf-popup-border-radius: 4px; --osf-field-border-radius: 4px; --osf-float-button-top: 15%\"],[29624,6,1069,717,1068,\"DIV\",\"class=slideshow__slide "
		"slideshow__slide--b79f2203-8579-4b7d-bfd7-d67322ab8bc5\",\"data-index=3\",\"data-id=b79f2203-8579-4b7d-bfd7-d67322ab8bc5\",\"style=position: absolute; left: -50%;\",\"aria-hidden=true\"],[29967,6,3446,2732,3445,\"DIV\",\"id=AnnouncementSlide-94506395-ca90-4526-bccb-24d19846dcdb\",\"class=slideshow__slide announcement-slider__slide animate-out\",\"data-index=2\",\"style=position: absolute; left: 0%;\",\"aria-hidden=true\",3444,2732,[5],\"id=AnnouncementSlide-0769ec4d-48e1-4566-8ea5-92d0ebc421cb\","
		"\"class=slideshow__slide announcement-slider__slide is-selected\",\"data-index=0\",[9]],[30499,6,3446,2732,3445,\"DIV\",\"id=AnnouncementSlide-94506395-ca90-4526-bccb-24d19846dcdb\",\"class=slideshow__slide announcement-slider__slide\",\"data-index=2\",\"style=position: absolute; left: 0%;\",\"aria-hidden=true\"]]}", 
		LAST);

	web_custom_request("produce_2", 
		"URL=https://monorail-edge.shopifysvc.com/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"schema_id\":\"online_store_buyer_site_abandonment/1.1\",\"payload\":{\"shop_id\":55925866671,\"url\":\"https://www.tastynibbles.in/\",\"navigation_start\":1708661455134,\"duration\":38533,\"session_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"page_type\":\"index\"},\"metadata\":{\"event_created_at_ms\":1708661493667,\"event_sent_at_ms\":1708661493667}}", 
		LAST);

	web_custom_request("collect_11", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661461014&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=2&sid=1708661464&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&dt="
		"Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&en=user_engagement&_et=13193&tfd=38649", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=", 
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

	web_custom_request("collect_12", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xEC\\xBD\\xEBr\\xDB:\\x900\\xF8*\\\\\\x9DJN\\xCE1%\\x11$xs\\xCA;C\\xC9\\xF7X\\xB6\\xE5k\\xEC\\xC4\\xE5\\xE2\\x05\\x94hS\\xA4BR\\x96\\xEDT\\xB6\\xE6\\x1D\\xBE\\xAA}\\x80\\xFD\\xB7\\xB5o\\xB1\\x8F2O\\xB2\\xD5 \\xC4\\x8BH]\\x9C\\xE4\\xCC\\xEC|\\xDF\\xD8\\x89,6\\x80F\\x03ht7\\x1A\r\\xF0{\\x8346\\xBF4\\x84\\x96\\xDA\\x12\\x85\\x06\\x8Fx\\x81G\\x82\\xCE7t]\\x8Dm\\xF2\\xF0$\\x04\r\\xBE\\x81p8}\\xF0\\xA5\\x06\\xDF\\x18(\\xEA@zl\\xF0\"/"
		"\\xF0\\xC2\\x1D\\xDF0\\x1B\\x9B_\\xBEH\\xBC\\xC6#Q\\x91x\\x84e\\xF5\\x8E\\xFF\"\\xC9<B)D\\xD6\\xA5\\x14 j|\\xE3\\xC9\\x8B=\\xCB'\\x8D;\\xFE\\x0B\\x124^\\xC2|\\xA3{\\x7Fp\\xDE\\xE0\\xBF4\\x84\\xC6\\x1D\\x83\\x02\\x05_\\x1A\\xBD\\xF0\\xD5\\xF3}\\xB3-\\xB7\\x04\\xEE\\xC3\\xB5\\x178\\xE14\\xE6\\x8E/8$\\xB4\\x84\\x8F\\xDC\\xB5\\x17(\\xF8#\\xF7\\xAC\\xE0\\xBF8c<\\xF6\\xC95\\xB1>yI[\\x96\\xD4\\x96\\xA4p\\x1F>\\xED_\\xF4\\x8Ex\\xCE\\xF7\\x1E\t\\xB7G\\xEC\\xC7\\xF0/\\xAE;"
		"\\x8C\\xC2\\x11i#\\x11\\xB5\\x04\\xF8\\xE5\\xCEM\\xD7\\x8C<V\\xA4q\\xC7#\\xFEKc\\x98$\\xE3x\\xB3\\xDD\\x9EN\\xA7\\xAD\\xC4\\x8C\\x93\\x97\\xC0\\xB3,\\x9F\\xC4-/h\\x9B\\xB6\\x1DN\\x82\\xA4\\xED\\x87\\x03/\\xF8\\x97\\x88$\\x93(\\xB8\\x9FD\\xFE\\xD6;q\\x97\\xA55\\xEExq\\x05\\x96\\xC6\\x1D/\\xF1_\\x1AFZ\\x80\\xFB\\xF7\\x7F\\xFB\\x1F\\xDC\\x05d\\xE1\\x8E\\xD3<\\x8D;^\\xE7\\xBF4H\\xD0\\xDC\\xEB\\x00Q2\\xFF\\xA5\\xA1I\\xAFHt\\xE0I\\xA1I\\xF0M\\xE5\\xBF4\\xFC$\\x82\\xAF\\x90\\x7FJ\\xAC\\xD8K\\xA0gE"
		"!G\\x0F\\x8F@\\x10\\xEB?x\\x84\\xCA\\x11\\xED\\x00x\\xC2\\xFC\\x97\\xC6$p\\x88\\xEB\\x05\\xC4\\xF9?t\\xBD\\xC1\\x17\\x1E\\x91\\x88 \\x0F\\xD4I\\xBF@\\x95x\\x00\\xDF4\\x00\\xC9\\x08\\xC3w\\xA8]d\\x83\\xA7\\x03S\\xF0H\\x154EAX\\xC7\\xBA\\x82x\\xF8\\x95xE\\xE61\\xAF\\xE8\\xBC\\xCC\\xCB\\xBC\\xC2K\"\\xAFB\\x02\\xE6\\x91\\xA8\t\\xD0HU\\x14\\xA0u\"\\xE6E\\x99W\\xA1R\\x01*\\x14x\\x89\\x96\\x07n\\x93$\\x1E\\x03\\xCBh\\xBC$\\x03\\xEB\\xD1\\xFA$\\x85W\\xF8/X\\xE5\\x85\\xBB\\xBB;"
		"\\xBE1\\x06n\\xC4\\xBC\\xCC#\\xBE\\xF1\\xF7v\\x83o\\x04\\xE6\\x88l\r\\x93\\x91\\xDF\\xE0\\x1B\\xE3\\x89\\xE5{\\xF6\\x81\\xB3\\xD5\\xE0\\x1B\\xF1K\\x9C\\x90\\x11\\xFD.Bf\\xE0\\x97\\x06\\xDF\\xB0}3\\x8E\\xB7\\x1E\\xE2\\x06\\xDF\\xF0\\xCD`\\xB0E\\x80\\xF9\\x1D/\\xDA\\x82\\xAE\\xE6\\x1Bq\\xF2\\xE2\\x93\\xADfsHL\\x87D\\xCD\\xB1\\xE98^0hZa\\x92\\x84\\xA3M\\x0E\t\\xC2\\xF8\\xF9c\\x83\\x97x\\x91o\\xEC\\xEF\\x18@\\xC0\\xDF\\x9D\\xAD\\xB5\\x99\\xAA\\xC1c^\\xE4%\\xBE\\xF1\\xF7E\\x83o|\r\\x1A\\xBC\\xCC\\x8B"
		"<\\xE6\\x1B\\x9D\\x93\\xED\\x9B\\x8C\\xBA\\x84\\x8C\\xC6\\xBE\\x99\\x90\\xA6=\\x89\\x93pD\\xA2\\xB8IKs~h:\\xC4\\x01\\x82\\xCD\\xC4l&\\x91\\x19\\xC4^\\xE2\\x85A\\xBC\\x95D\\x132\\x83[\\x93$\t\\x83\\xFB\\xB4)\\xF1\\xB7\\x89\\x19eI\\xC4\\x19\\x90x+C\\xF02&\\xF7iK\\xEFms\\xEC%\\xA6\\xEF\\xBD\\x92-\\xD7\\xF4\\xE3\\xACD<5\\x13{\\xC8\\x90E\\xE1$\\xC8\\xAA\\x1FD\\x9E\\xD3L\\xE1\\xF0\\xD5\\xF7\\x02\\x127\\x93!4R\\x81\\x19 \"^\\x14\\xEFx\\x15x#{\\xD2x\\x89W\\xF9\\xC6\\xF9\\xC5\\xCD\\xD1N\\x83o\\x00\\x05[\t"
		"yN\\xDAv\\x0CC\\xD2\nc\\xF7\\xDE\\x0B\\x00\\xD7}\\xDA\\x0C\\xEE;72\\xA3\\x81\\x174\\x93p\\xBC\\xC9\\x89\\xC2\\xF8\\x99\\xFB\\xDF\\xBC\\xD18\\x8C\\x123H>r?\\x1A\\xBC\\xCE\\x83t\\xFA\"\\xA2;\\xE8R\\xE8T$\\xF0\\x12L2\\x06\\xE2\\xB8\\x06H+\t\\xE0@\\x88\\xAC\\xDC\\xF1\\x08\\x86\\x01\\xA1\\xFCY\\x82g1\\x7F\\xC6\\xF0,\\xE5\\xCF2<c\\xBEqtp\\xFC\\xA9\\xC17\"\\xE2o\\xD9f\\x10\\x06\\x9Em\\x02\\xEB\r#\\xE2\\xBE\\x85\\x0F\\x10\\xF4\\x11\\xCC\\xFD\\x19~"
		"\\xE8'\\x98\\xFD\\xAAr\\x97b\\x1FG\\x04\\xC6\\xBB\\xC17\\xCCx\\x8B\\xF6\\xF3\\xAC\\x9A\\xFA\nl'h\\xC7\\xC3p\\xDCN\\xDAHl\\x9BqL\\x92\\xB8\\x9D\\x0C\\xC9\\x88\\xB4\\xEC8\\xFE\\x97\\xA7-MC\\xAA.(X\\x13\\x15Q\\x97%MR\\x14:\\x91\\x91(+\\xB8\\xC1#\\x18\\x1B\\x90:3\\x8A\\xA0_\\x91\\x06\\x14\\xF1\\x9Az\\x97\\x92aG\\xDE8\\xF9i:F^\\xD0z\\x00R\\x10\\x16\\x91&\\x88:\\xD6\\x05ERd, \\x19!EF\\xAA\\xAC\t\\x085@\\xC4IT\\xEC1ZD\\x18=\\x90{\\xC5\\xDE\\xB1\\xC3  v2\\xDF\\xF9\\xB6\\x13\\xB4\\xA0~\\xCF}"
		"i\\xD9\\xE1\\xA8\\x01\\x02R\\x02\\x0C\\x192\\x18j\\x90\\x9A\\xAA\\xC2#A\\xBB\\x9B+\\xEF\\x86A\\x12\\xCF0\\x00\\xB2\\x14\t\\xF0\\x83\\x98\\xF3\\x83\\x08\\xFC\\x00\\xD25\\xA3\\xC8\t\\xE2\\xE68\".I\\xEC\\xE1<M\\xE3(t&v\\x12\\x91'\\x8FLk\\x90\\x033\\x8893\\x88\\xC0\\x0C\\xA2\\x92R(\\xAA\\xF3\\x14\\x9A\\x0F\\xE6sk\\x10\\x86\\x03\\x9F\\x98c/f8`\\xF8\\xC4|\\xF8D\\x18>Q[\\x84cd\\x8E\\xE3\n\\x0E\t\\xBA]\\xCC\\xBB]\\x82n\\x97\\x84\\xE58\\xE2\\xC4L<\\x9B!\\x80\\xAE\\x96P\\xA1W\\xE2a\\x18%\\xF6$\\xE1<;"
		"\\x0C\\xD6d\\x1C\\xD7\\xF3I\\xDC\\xEEDf\\xE0\\xDC\\xFB\\xE1 \\xBC\\xA7\\xFA\\xF3\\x9Eem\n\\xE8^Ve\\xE2*\\x0Ej\"E\\x96\\x9A\\xD8\\x92\\xEC\\xA6\\xA5\\xB9\\xA4I$\\xD7\\x12dWU\\x88\\x83\\xEE%\\xF1Y\\x12[\\xE3`\\x00\\x0C\\xA7\\xC8\\xA2\\x84eMB3\\xA9\\xE3\\x8D\\xCC\\x01i\\x8F\\x83A\\x03\\xF4\\x8E\\x04\\xA47.\\x0E.@,I0\\xD6R.\\xC2$\\x18k\t\\xE7\\xDD\\x02\\xC3%\\xE5\\xC3%\\xC1pIJ\\xFE\\x0CC!\\xE5C!\\xC1PHZA\\x1E\\x81D\\xC2\\xD0\\xD9R\\xDA\\xD9HGw"
		"<\\x86\\xDE\\xC6B\\x01\\x00\\xBD\\x89s\\xC6\\xC5@'\\xCEe\\x14\\x06:q\\xCE\\x93\\x18\\xE8\\xC48\\xA3\\x1B\\x03\\x9DX\\xE6\\xBF`|7\\x13\\xE7)\\xE7\\x81\n\\xF8W`\\xF4\\xA6k\\xDA\\x84\\xFB\\xCE\\xB1\\xEF#\\xCF\\x7F\\xD9\\xE4\\xBE6\\x0E.\\xBA\\xDCyB\\xC6\\xE3\\xAF\\x8D\\x8Fi\\xDA\\x94x\\x83a\\xB2\\xC9\\xA9\\x82\\xC0 T$mrA\\x18\\x8DL\\x9F\\xC1\\x1C/\\x1E\\xFB\\xE6\\xCB&\\x17O\\xCD\\xF1G.\\x8E\\xECMn\\x12\\xF9\\x1F\\xBE6\\x16\\x0F9\\x9Dom/\\xB1\\xEFc\\xA8\\x11\\xBE\\xD1/\\xF7\\x81\\xDA\\xB2\\x89+"
		"\\x8BXtU\\xCDq\\x04\\x0B$\\x17\\xB6tWpD\\x9D\\x10IV%b\\xA9XFXlMC\\xD7\\x15\\xFFe\\x88\\xB6\\x9C\\xBD\\xDDWg\\xDF\\x9F\\x98\\xD7\\x87\\x9E\\xB5w\\xF5z4\\xF2'\\xEF\\x87b\r|\\xF7\\xE1F\\xD4\\x91\\x15\\xF4'\\xD6g\\xFF\\xD5\\xDC\\xD3\\xA7\\xE6\\xF5\\xAD|4:~\\xB2\\xFA\\xEF\\x87#\\xD3\\xDE\\x12\\\\\\xC9\\xC2.\\xB6\\x05\\xD1reU\\x14\\x05\\x17aW\\x16e\\xD1\\x12\\x14\\x89(\\x8E%`\\x8Cu\\xC7! H\\x1D\\xE2\\xAA\\xAEe\"KR\\x15E$\\xC8\\xB2\\xD1\\xD7\\xC6_\\x9C\\x0B\\xDD\\x93|\\xF8\\xDA\\xA0\\x14~"
		"m\\xFC\\xC5\\xFFZ\\x87h\\x82(\\x11G\\xC2\\x8E)I\\x8A\\xA4Y:B\\x9A$JHp]Kq\\xB0c\"\\x82\\x05\\xD9\\xA5\\x1D\\xF2\\xBB\\xFBC\\xD3-\\xC5\\x92\\xA0\\xA1\\x12\\x11tQA\"ru$\\xD8\\x8E\\xA6 \\xD5r\\x89\\xEC\\xA8\\xAA\\xE8\\xBA\\x16\\xC1\\x92\\xEDJ\\xB2\\xE8\\x8AD\\xB3tI\\xD3\\\\E\\xC3.\\x96*\\xFD\\xF1\\xB5\\xF1\\xD7G\\xEE\\xC72F\\xDC7\\xA3Q\\x18x&wn\\x06q\\x85\\x19\\xF1?\\xC4\\x8CCV\\xEB}l\\x06\\xF9\\x13<\\xDC\\x07\\xB8\\xA5J\\xB6+\\xC8\\x9A\\xEE\\xAA\\x9A\\xA4\\x13[\\xD3\\xB0\""
		"\\x99\\x82\\xEE\\xCA\\x92$\\x9B\\xA2\\xA6\\xC9XQ\\x89#\\xD8\\xFF\\x0CSJ\\xB2\\x84\\x89\\xAD#W\\xC1\\xC8\\x164\\xDB\\x15\\x1D\\x1B\\xEB:\\xD6\\\\\\xC1tm\\x82$I\\xD7t\"j\\x96\\x88t\\x0B+\\xAE\\xAA\\xA8\n\\x11$\\xD1\\xB2\\\\A\\xC6\\xAE\\xFDKL\\xB9\\xBCc\\x90-\\x8B\\xAAB\\\\EW5\\xC1R$\\xD3\\xD4\\\\\\xC12UMW]K\\xB2lM\\x15U\\xC1\\xB2\\x84\\x7F\\x849MY\\xD4\\x89iI\\x8Adb\\x15[\\xB2\\xE5X\\x02\\xB1\\xB0l\n*\\xD6\\x15\\xD3\\xB5\\x08B\\xBA)"
		"i\\x0E\\xB65W\\x13uK\\xD7E\\xC1T\\x90%kX\\xB4%\\xF7\\xB73\\xA7\\xF2\\x9F\\xC0\\x9CJ\\xCBq$G\\x114\\x0C\"\\x12\\xAB2&\\x9A\\xE0\\x12\\xC54\\x91-\\x10Iue\\x84\\xB0\\x8A]\\xD7\\xFCg\\x98\\xD3TM\\xC1\\xD1,U\\xB1tM\\x86n\\xB5d\\xD7!\\xA6+\\x8B\\x9AFTWvL]%Xs\\x90*\\xB8\n\\xB1\\x05QP,A\\xD2\\x102e\\x15\\x0BD\\xFF\\xC7\\x98SiY\\x82\\xA3h\\xAA.hXR%\\x0B\\xAB\\x92#\\xD8\\xAA\\x89m\\xC9\\x911\\xB1\\x89n\\x8B\\x9An[\\x16\\xFEG\\x98S\\xB1\\x04\\xD3\\xC2:B\\xBA\\x8AeQ\\x82\\xE9\\xA8 \\xC9\\xD5,"
		"d\\xAB\\xA6\\x825\\xEC\\xAA*r\\x14\\x84]\\x17+\\x16vD\\xEC\\x08\\x16\\x91\\x04QtlA\\xD1\\x9D\\x7F^r\\xD2\\xC5\\x9F\\xFDO2\\xA7\\x87[\\xB6m\\xB9\\xC4Tu\\xD7\\xD1\\xB0JT\\xC5\\xC1\\xBA.\\xCA\\xA6.\\x82\\xA8\\x80\\xA5\\x89$\\xEBD\\x11\\xF5\\x7F\\x869ES\\x15%\\xDB%\\xAA\\xAE\\xEBD\\xD30r\\x90F\\x10\\xB1\\x91i\\xD9\\xB2bK\\x04)X\\x13$Gvt\\xC9\\xC1\\xAAN$\\xC5TTY\\x96]G\\xB1uU\\xFE\\xA7\\x98\\xD3\\xC3-\"\\xDB\\x82l\"\\xC14m\\xD7\\xD2l[u\\x1DW\\xD3E\\xC7\\xD5\\x1C\\xCB\\xD4%\\xD5\\x14\\x11&\n"
		"Q\\xFF\\x19\\xE6\\x14]\\xAC\\x83\\x06\\xD1e[S\\x91+\\x8B\\x8E\\xAD\\x11\\xC5\\x94\\\\$\\xBAXp$d\\x8BH\\x12mA\\x90]d+\\x8Ae\\xB9\\x0E\\x96\\xB0h;\\x88\\x08\\x9A\\xAC\\xFE\\xF3\\x92\\xF3?\\x809\\x95\\x96#\\x8B\\x02V\\xB1$\\xCB\\x1AR\\\\YA\\x8AnI\\xA6\\xAA[\\xA6\\x89\\xB0#\\xDAX\\xD5\\x1DS\\xB4\\xFE)\\xC9\\x89T\\xACa$\\x9A\\x96\\xAB\\xA8\\x16\\xB1]\\xD3q\\x1C\\xCB\\x95]\\xC1rD\\xDBR\\x1CW&\\xC8u\\x1C,\\xEA\\xA2j\\xCA\\xC8\\xC6\\x92n\\x12\\x1B;\\x9A\\xEA\\xCA"
		":\\xB1\\xFE1\\xE6TZ21\\x05\\xD7\\x14T\\xD1\\x14\\x14\\x01\\x99:\\xB2,G%\\x82$ \\x19\\xEB\\xAE\\x8Ed\\xDD\\x14t\\xD31\\xFF\\x11\\xE6\\x14$]\\xD1\\x90,;\\x96K\\xB0 `\"\\xEA\\x8A\\x8D\\x11B\\x9A\\xE0\\x8A\\xA6#\\xEBH\\xB1\\x1CU\\xC6\\x8EI\\xB0\\x80tA\\x1311\\x1D\\xD3B\\xB2%;\\xA2(,`\\xCE\\x06\\x8Fa\\xD1\\x86\\xD35\\xB6\\xA6\\xCFV\\xAB\\xC0o\\xF1\\x90\\x90\\xA4\\xC1\\x7F\\xC1\\xF2\\x1D\\xDF\\x18\\x11\\xC73\\xB7L\\xDFo\\xF0\\x18\\x96uX\\xCD\\x97W\\xB0\\xAC\\xC3\\x1A,\\xAFxQ\\x04W\\xF9f\\x14\\x86\t"
		"\\xF7\\x9DkR\\xD7\\xDA>\\xF5\\xAC\\x9DF\\xDE\\xC8\\x8C\\xAA\\xAB\\xAAb\\x9E]\\xD3\\xF7-\\xD3~\\xDC\\xE4b\\x12yn9\\xF1\\xDC{%\\x9B\\x9C\\x0C\\x8E\\xC7\\x12\\xFC\\xBA\\xB8\"+&\\x1Cy\\x01\\xD9g\\x89\\xA8\\x85\\xE6\\xB0\\x8DM\\xDB\\x0B\\x06\\x9B\\x9C\\xD0\\x12\\xC8h\\x96\\xD61cR \\xB42=\\xF3\\\\\\x05R\\xCD n\\x96\\xE8\\x85\\xF4\\x94Z\\xA4\\xE6\\xD4\\x02\\xF4\\xBA\\xA8v\n\\x99\\x0B\\xC4\\x88r\\x99\\x9Cr+dH\\xB2C?\\x8C\\xCEG\\xA6\\xEF\\x1F\\xC0\\xE2\\xBD3\\xD8\\xE4\\xFEp\\xE9Om\\xEA\\xB6\\x19="
		"B\\x0E\\x15~\\xB3\\x1CGf4 yy\\xA2\\xC2om\\xEAQZy\\xA1\n\\xF0adMI[\\x08  \\xD56\\xC7\\xF1&7\\xF2\\x12\\x12\\x018u^\\x9E\\x99\\x8E7\\x89796vV\\x12\\x9C\\xA6\\x0E\\xE5M\\x0E\\xA1\\xF13\\xF5fB\\x02\\xF5\\xAB\\x06$\\xCE\\xB3\\x82G\\xF5b\\xE8\\xD9\\x8F)\\x14\\xA5P\\xE6F\\xBA\\xF0|\\xD2\\xA3N\\xD1MN~\\xC7h\\xF7\\x89\r\\xAE\\xE0b\\x9A@\\xD3R\\x0Fn:.\\x98\\xA2\\xFF\\xF1\\xAF\\x94\\xAB\\xB9\\xD8\\x8E\\x08\t83p\\xB8\\x0F#\\xF3\\xB99\\xF5\\x9Cd\\xB8\\xC9\\xA9\\x8A6~\\xFE\\x8B\\xFB\\x0E\\x8E\\x8A2G\\x17\\x06X^"
		"Dy\\xB1\\x91\\xFA\\xF8\\x99\\xB1\\xC2\\x8F\\xAF\\xC1\\x8F\\x06/\\x83\\xCB\\x03\\xEB\\x05_-8Bd\\xF0{\\xC8B6\\xAFdp{\\xC8(\\x7F\\x06\\xB7\\x87,\\xE6\\xCF\\xE0\\xF6\\x90s\\xF7\\x8C\\x0Cn\\x0F9w{\\xC8\\xE0\\xF6\\x90\\xE5\\xFC\\x19f\\xBA\\x9C\\xFB\\xA0e\\x98\\xC7r>\\x8Fe\\x98\\xC7\\xB2\\x96=+@\\xA5\\xAC\\xE7\\xCFt{#\\xA7O\\x01\\xFA\\x94\\x9C>\\x05\\xE8Sr\\xFA\\x14\\xA0O\\xC9\\xE9S\\x80>\\x05\\x17Z\r>jEI7Mh.\\x0C\\xD9\\xA8\\xA7<\\xF7\")@\\xA6\\x92\\x92)\t"
		"\\xD2\\x1Dl\\xAEH\\x00\\xA5\\x19\\xD0\\x1D\\xAF\\x02\\x9D\\xCA\\xAC7\\xB9\\xAF\\x01\\x07xU\\xA0V\\xCD\\xA9U\\x81Z\\x15\\x95j\\xA7\\xF9\\x80jU\\x9C\\x83\\xC3\\x88\\xB0th\\x85Z\\xF0\\xE3C+\\xD4\\xBC\\x97U\\xA0_\\x95\\x17\\xF9\\x06\\xC1\\xB7\\xF90q\\x06\\xA45\"\r^"
		"\\x85\\xB6\\xA9\\xF9\\x10\\xA8t\\x1F@\\x9D\\x91\\xDE\\xE0Uh\\x9B\\xAA1W\\x15\\xDB\\xA4q\\x06\\xA3fL\\x92\\xC4\\x0B\\x06qs\\xE6\\x01oQ\\xF0\\xF3\\xF3w\\x9F\\xB8\\xC9\\xA6\\xF0\\x83r\\xE8\\xF7f\\x93\\x82\\xC7\\xA9\\x0CK\\xE7\\xF2\\xE6\\x1F\\x92\\xAE\\x7Fd)1\\xB8\\x8B\\x9D<-\\x1AX\\xE6\\x07\\x19\\xF1H\\x96\\xE8\\x7F\\xA1\\x85\\xFE\\xCA\\xF2&fT\\x83bl\\x0E\\xBC\\x80n\\xCBT\\x92\\xAC0\\x82\\xED\\xA2(\\x9D\\xEF\\xC2\\x8F\\x94\\xC8\\xA1\\x17'\\xE1 "
		"2G\\xF7\\xF7\\x16\\xC5\\x18$$H\\xBE\\x83\\xF8\\x1C\\xD0\\x89S\\xC0\\xC4\\x8AD\\xE4\\xE9\\x0Bu\\xD4=\\x81`\\xF5\\x88\\xD3\\xB4&/$\\xA2\\xFB;w\\\\\\x96\\xE7\\xFE\\x1E\\xE4\\xCE\\xDC\\xE3\\xA6\\xE9&$\\xE2\\x0BPZ\\xB6i\\x990\\x0C\\xB5\\xD0\\xEF)\\x01\\xD3\\xA1\\x97\\x90\\x8F+\\xE8\\xF2\\xC8\\x14$\\xC4\\x80$\\xCDf\\x0Cb\\x96\\x9130}\\x9FD/\\xA5\\x87r\\xD2\\xFD}2\\x9C\\x8C\\xAC\\xC0\\xF4\\xFC\\xA6\\xEF\\x05\\x8F\\x9BA2l\\xDAC\\xCFw>h\\x7F-\\xCE"
		":\\x8D\\xCC\\xF1\\x98D\\xAB\\xD27-\\xE2\\x86\\x114\\x85v\\xEF\\xE6\\xD7\\xC69!\\xDC(\\x8C\\xC8\\xD7\\xC6L\\xD2\\x85\\x81\\xFFR\\x16w^P\\x16w\\xDF\\xFF\\x0B4\\x86\\x8D\\xC58\"O\\xE9\\xF0\\xA5\\xACb>\\x91\\xC8\\x1C\\x90fd\\xC2L\\xD9\\xFASh\t\\xC2\\x9Fw\\xDFgvr\\x10\\x06\\xA4\\xB0e\\xC6\\x90\\x98\\x93d\\x18FM\\xD3\\xF7\\x9B^\\xE0%\\x9E\\xE9\\xC7\\xEB\\x95\\xF0\\xCD8\\x99\\x15YQ\\x02\\xE8\\x04\\x8E\\xB9\\xBFO\\xBC\\xC4'\\xDFip\\x80\\xE7"
		"{\\xC9\\xCB\\xE6\\xD0s\\x1C\\x12T\\xF2\\xC5\\x93\\x11\\x9D\\xBF\\xB0%\\xB80{\\xDE\\xFE\\xFB\\xFB\\xA5\\x19)\\xB7Gd\\xEC{\\xD5\\x8E\\xFDs\\xCE\\x1A\\xFE\\xB3X\\x06\\xF4,\\x1D\\\\\\xBA\\xA1\\xE3=W\n\\x9BV8IJE\\xC2I\\xD2\\x0C\\xDDf\\x9C\\x84\\x11\\xA1\\xE4W\\xCA|\\x08'\t\\x17\\xBA\\x1C\\xCD\\xF2\\xD7\\x9Fof\\xCD\\x942\\xCF\\x8E\\x0Bb\\x00\\x86\\x0Fzc\\x0C\\xE3?\\xF6\\xECd\\x12\\x91fL\\xC6fd&aI\\x14\\xCC\\x15\\xBCg\\xA6\\xC4\\xACPi$\\x7F,"
		"\\xA6m\\xDEJ\\xF8O\\xA0-g\\x02\\x90H\\x85y0\\xDB6\\xDF\\xFA\\xDA`\\x18\\xBE6VM\\x83\\xE5hr\\xB3\\xEAW1y\\x81C\\x9EW#)\\x89\\xD9\\x14\\x89\\x1B\\x85\\xA3f\\x1Cx\\xE31I\\xB6\\xBE6@\\x11\\xAC\\xC6\\x93i\\x0F\\xBA\\xE7\\x9C\\xD2\\xF4+\\xF8l3\n'1\\xC9\\xC4\\xD4/\\xA0bl\\x01\\xFB\\xA0t\\x9E\\xFC\\x02\\xAA\\x11qL\\x1F\\xD6 t\\x88~\\x01\\xD1d`7)\\xC7\\xFFR\\xFB\\x1A\\xBC\\x06\\x16\\x99Z\\xB6o\\x8B\\xFF\\x1B\\xBC\\x06\\xD6\\x99&T\\xED\\x9C\\x91\\x17\\x99\\xB6OR3\\x07B"
		"!\\xFE\\xB59%\\xD6\\xA3\\x974\\x1F\\xC9\\x8B\\x1B\\x99#\\x12s\\xA9q2\\xF6\\x82\\xEF\\xC2\\xBB\\xEF\\xB3d\\x1A\\x05\\x02+\\xDC\\xCD(L\\xCC\\x84|\\x10\\x1C2\\xF8\\xEBcs\\x14/J\\xAA\\x07\\xFF@\\xC22\\xAC\\x92\\xAC/\\xC6;K\\\\\\x94\\xF0\\xE3\\xC7\\xBF\\xFE\\xCF\\xD1\\x8A\\xCC\\xA5\\xF5\\xBD\\xE8\\xD0\\xFA\\xF3\\x10\\x0C\\xDD\\x119O\\xCC\\xE8\\xCF\\x8F\\xE0\\x90J\\xDD.\\xC0D\\x9B\\xE6x\\xEC{\\xB6\t\\x1C\\xDA~n\\xA6~\\xAE\\xD0u?"
		"\\xDAC3\\x8AI\\xB25I\\xDC\\xA6\\xF6\\xD12c\\xA2`\\xDE\\x11\\xF4\\xBD\\xB3\\x81\\xD11\\xE8\\xCF\\xB9m\\x18\\x02\\xFD\\xD6\\x89\\x8C\\x15?\\x9D\\xBD3\\xFF\\xEC\\xD80\\x8C\\x9D\\x01}\\x0C\\xE1\\xD3\\xB6^\\xFA\\x1B\\xD2\\xA3\\xB3svyc\\x18\\xC6\\x19M\\xDA\\x87\\xCF\\xAEa\\xF4\\xA6\\xC6\\xDE\\x05\\xEA=\\xF5\\xE0\\xF9v@q@\\xFA\\x95\\xB7\\xF1t\\xAE??X\\xD7\\xBBS\\x00j\\x00\\xDC\\x81\\x8F\\xDDO\\xD3N\\xEF\\xE1i\\xE4\\x0Cm\t\\x9E\\xCF\\x00)\\xA02\\x0C\\xE3\\xA1\\xDD\\x9E\\x1A\\xDB\\xB7\\xE2\\xB3LQ="
		"\\xD2B\\x87P\\xDE\\xD9\\x97\\xA4\\xA3\\xCFIx{\\xBD\\x0B\\xD0N\\x8F\\x16\\xA2\\xED\\x12;Q\\xD8\\xFFt=\\x0Co\\xAF\\xA1\\x82\\xDD\\x94>\\x9A\\xDE\\xDF\\x96\\xFB\\xFB}s\\x0F\t\\x04\\x9E\\xE9\\x87qJ\\xA90\\xA0\\xDANl\\x89\\xC7C\\xC8I\\xF1\\x19\\x18>N\\x8C\\x13l\\x90=4$\\x14\\xC9\\xAE\\x96\\xE33\\x8C\\xF3\\x81\\xF1d\\x8Dv\\x93\\xDB\\xBEa\\x18\\x024m\\x1B\\xB0v\\x1E\\xC3\\xE8\\xDA\\xBD\\xBA\\x9DZ\\xD21\\x10\\xB5sD\\xF3SRw\\xC6\\xD2\\xC4:\\xFA<\\xE8\\xDC\\x88\\x9D\\xC7\\x1Bc{xzz\\x8AO\\xDC}"
		"\\xED\\xD8\\xD7n'\\x87\\x8F7\\xFD\\x93\\xEDs\\xD1=\\x8B\\xBA\\xA7Q\\xDB<\\xBF\\xD9{\\xFE\\x86\\x8C\\xA3\\x81\\xBD}\\xDD\t\\x8D\\x13E8z\\x9C\\xD2\\x0EO\\xCB\\xEFm\\xDB\\x1BO\\x9A0x\\xC6\\x17\\xC6t`\\x9C\\x9B\\xC6Awdt\\x8C\\xDD\\xCE\\x86\\x11\\xF9\\xD8\\xB8>\\x1E\\xDC\\xEEu\\x067{\\xA7\\xFD\\x9B\\xEB\\x8Eg\\x18\\x07\\xD3\\x97\\xFE\\xE0\\xDA\\x16\r\\xC3\\x98\\x1A\\xFBW\\xFD\\x8EB\\x8C\\xDD\\x87\\x9B\\xBD3\\xEF\\xE6\\xF0\\xD5\\x98\\xF6\"cJ\\x1E\\xB6G=\\xCB\\x98\\x9E\\x18'cK"
		"{9\\xDF\\xFE$\\xF4\\xB6\\x8Di\\xCF\\xEA\\xBC\\xF4\\xE2n\\xC70z\\xDD\\xCE\\xA7sy\\xFC`\\xE0\\xD3\\xBD\\x0E\\x9E\\xF6\\xCE0>\\xD5:\\x9D\\x07i/\\xEA\\xBF\\x8C\\xFA{\\xBB{\\x8F\\x9D\\xA9\\xF1\\x90\\x0C>\\xB5\\x07\\xD0\\xCD\\xBB\\x0F7!\\x0C7z0\\xA6\\x86q\\x0B\\xDD\\xB7?\\xE8Hv\\xD4\\xE9\\xDA\\xC6t{\\xE7\\xF4\\xEC\\xF6\\xC5y\\xF4\\x86\\xB2\\xA2v\\xB7\\x1D\\x17\\xDF\\xC6\\x8F\\xA3\\xA3\\xE9n\\xE7J{\\xEE\\xB8]\\xB3\\x8B;\\x9F\\x1FO.G\\xCF8\\xBE\\x14\\x86b08\\xB6\\xF4+\\xE1\\xA9\\xDF}6\\xCF"
		">\\x1D\\x18\\xE4\\xE9Bu\\xF7\\xAE'\\x9Dh\\xA7\\xC8\\xBC\\x020\\xE5$\\xAD_\\x7FU\\xF5OSd\\\\>\\xB7w_/F\\xEA$P\\xFA\\xA3\\xC3d:\\xEA\\xCB\\x9D\\x012\\xAD\\xC1\\xCE^\\xD4\\xEE\\x18\\xDF\\xFCKe\\xEFa\\xB2\\xD1\\x1D\\x0CP\\xEF\\xB1\\xDF\\x8E\r\\xF5\\xEAA\\xED\\x9C\\x04\\xA3\\x93\\xF6\\xE0\\xF2)\\x14\\x8FB\\x84\\x8F\\xBF\\x1D\\x9C(\\xED\\x03\\xF3\\xD5\\xDD\\xD6\\xF6wN\\xB6\\x93Q\\xBF\\xEB\\x86\\xC6\\xF1\\xF48~\\x19\\x8B\\xED\\xBD\\xC3D\\xBA\\xFE\\xD4\\x8F\\x1Ct|\\xE4\\xDD\\xDC\\\\?"
		"\\x8B\\xA7\\x9Do'\\xF1\\xE8\\xB0\\xB7s\\xF2\\x1A\\x9C\\x9E\\\\\\xBC\\xBA\\xE7\\xDDhh$\\x96u\\xE4\\x8C\\xC8\\xEE\\xD1\\xE1\\x95N>9\\x8At}"
		"\\x14\\xDD\\xDA\\x07\\xF6\\xC4\\xDC\\xB9r\\xE2\\xF8\\xBA\\xFB\\xA9\\xA7\\x8C\\x8F\\xBA\\xEE\\xC5\\xD5\\xC9\\x8D\\xF5\\xDA\\x16\\xC6\\xC7\\xE7\\xBD\\xF3\\xDBOG\\x07\\xB7\\xE3\\xA7\\xA1\\xAA\\xC5\\xC6\\xE5\\xBEr\\xEA\\xF7\\xA2\\x88\\\\tM\\xEBT\\x8F6n\\xDB\\xE3\\xC9\\xE9\\xAD8\\x89\\xDAg\\xDF\\xC6\\xFD\\xFD\\xC1p\\xA3w@\\x06\\xDD\\xE03\\xE9\\xE1\\xDE\\x99q\\xFAps\\xDCn\\xCB\\xC9\\x03\\xBEM.\\x1E\\x1Ew\\xBF\\xED8#\\xD2;\\x1F\\xFA;\\x87jre\\xF8/\\xE2\\x85\\xF1\\xF8\\xAC\\x9C)"
		"\\xDA\\xAE\\x8Fw\\xDA\\xE6\\xD5S\\xA0\\x1D~\\xDB\\xDF\\xED\\xE3\\xC3s\\x84%<\\xF8\\xFC\\xC9\\x9E\\x1CI\\xC8\\xD9\\x1E\\xBE\\xC6\\xD2\\x8D\\x15\\xEF\\x9C\\x18N\\xFB\\xE0R\\xD3\\x06)?\\xBA7\\xF8\\xF9b\\xD0{\\xDE\\xD9\\xB9r\\x1F\\x1F\\x05cp\\xD6\\xF5\\xC2O\\xBB\\xCF\\xFD\\x1BG\\xBC=K\\xC6\\xDE\\xF3\\xF3\\xE0\\xECR<s\\x87\\x97\\xF27\\xF9\\xEA:&}|\\xE8\\xB8\\x03\\xE3\\xF0\\xA5\\xE3\\x8F\\x8E\\xA7FO5:g\\xC3\\xDB\\xBEpr6\\x1D\\xABA\\xB4An\rS\\xC67\\xD3\\x9B\\x81\\xFE:\\x92^\\x82\\xD3\\x13\\xB2{F\\xB4^"
		"7\\xB2\\xBD\\xCF'\\xC3\\xF6\\xA7\\xF3sU\\xB9\\xBC\\x92\\x8F\\xDA\\xDE\\xF6(:\\xF2\\xCEe\\x83\\\\\\xCAH\\x9FFG\\xD2\\xC3\\xE8\\xDCz<\\x97\\x11\\x92_\\xCED\\xF7\\xC5{:|\\xD2\\x1F\\x9F\\x85\\xDB\\xDE\\xADxvt;\\x15\\xD5o\\x9A\\xEA\\x1D\\xF7=m\\xA7\\x13\\xCA\\xBB\\xE7\\xA7\\x07\\xBD\\xA9\\xB4\\xFF\\xADc\\x85\\x9E\\xEC\\x7F\\xBA\\xD83\\xF6\\xB6\\xC7\\xDA\\xEE\\xA7\\xCF\\xD7\\xA7\\x1B\\x89~q)\\xA0\\xA3\\x07y\\xDF\\x8BQ\\xC7T&=\\xDD\\xB9\\xD8\\xE9M\\x9F\\xA2\\xDD\\x91\\xE5\\xCA"
		"{\\xDD\\xF67\\xD1\\x89\\xAE\\xA5h\\xF2\\xF9r8\\x8C\\xBB^\\xFF\\xE4\\xE15\\xD8\\xF5\\xBB\\xAF7\\xC3\\xFD\\xCB\\xDB1~\\x1E\\xAB\\xCAS\\xFC\\xD4\\x1Fjz\\xB7\\xCF\\xE6\\xC3\\xDE\\xA1\\xD1\t\\xA7=\\xE5\\xC08>\\xEAE;/\\xBD\\x8B\\x83\\xD7\\xDEC\\xF7\\xF3\\xF8\\xE5\\xEC\\xFA\\xB0\\xF3\\xED6\\x1E^\\x7F><\\xBC\\xE9|:\\xE9\\x19\\xBB\\xFB\\xBB\\x9D\\x89\\x9D\t\\xE5v[3\\x8C \\x9B\\xFF\\x03C<8\\xEC\\x0C;\\x03\\xE3\\xE9\\xD3\\xED\\xDE\\x95\\xD794&"
		"7\\xCFS\\xC3\\xE8\\x1C\\xC6\\xC6\\xC9l\\xFE\\xEDu\\x06\\xB7F\\xB7\\xFB(K\\xF2\\xD0\\xDBV\\x84$\\x10\\xCCW\\xC34v\\xBE\\x8D;\n\\x08\\x94\\xAD\\xADZ\\xAFvq\\x0F\\x85\\xED5\\x176QR\\x083x\\xC0\\xC3\\xB1D\\x85\\xCD,\\x9C4\\x12\\xB3\\x18o\t\\x16[\\xD3!v\\x18Q\\x8D6o\\x03}d\\x01\\xB3\\x9B\\x02\\xF8G9\\x81\\x13\\x8A\\x89i \\xE7f\tV$\\xDA\n}\\xE7c\\x08>\\xE1\\xE4e\\x13}\\x9Ci\\xF1\\xB4\\x11\\xA30\\x84\\xE0\\xD2\\xC1\\xA6\\x19\\xC0\\xD2\\xD33c\\xE2|l\\x8E\\xC2\\xD7f\\x18?\\xCF\\xE7\\x19D\\xE6Kl\\x9B>)"
		"\\xB4ws\\x18>\\x91\\xE8{\\x86\\xBF\\x98D\\x17\\xB5\\xA1K\\x9D\\x9C\\xDF\\xF36T\\x0CE\\xC8\\x9C~k\\x86Au\\xAD\\xFE\\xF5+\\x11\\x04\\xE1k\\xA3&\\xB7\\xEB.\\xC8\\x8E\\xEA\\xB2\\x0FM\\x7FQ~1\\xCB\\x9F\\xAE\\x12\\xB8\\xBF\\xBF\\xCF\\xFA\\xF5#\\x8CVs\\x98v&j\\xE1\\xAC\\x07\\xAD\\xF0\\xB9\\x19{\\xAF\\xD0(\\xE6\\xA9\\xB2\\xC2\\xE7\\xB4\\xF3\\xEA\\x93\\x16\\x14`\\xE8\\xA0\\x1F]?\\x9C6c;\n}\\x1Fr%\\xE1\\xC4\\x1Efn/X\\x83/2\\x93?VV\\xEB\\xD5n\\x86\\x85S\\x1D\\x9AYG\\x8D\\xBD  \\xD1\\xF7t%J}"
		"\\xDA\\xAC\\xD1\\xF4;\\xEB\\x0Es\\x92\\x84\\x1F\\xCB\\x8E9Yx7\\x83@4\\xB18~\\xE6\\xE2\\xD0\\xF7\\x1C\\xEE\\x0FBH\\x96\\x97b\\xAAOcq\\xE0\\xF5\\x89\\xD4!YH\\xB2m;\\xEB23\\xF0F\\xE9\\x8C\\xC9Z\\xC0\t--\\xE6\\xBC\\xC0\\x05g\n\\xE1`\\xEC\\xCC\\xE8\\xE3\\xBA\\x19+\\xBE\\x90\\xAC\\xA3,?\\xB4\\x1F\\xE7\\xD6%\\xE0\\x03\\xD6\\xCA>\\xE0|U\\xC2\\xCD\\\\\\xC2\\x1A\\xB8\\x84\\xB5\\xDC\\x91\\xAD\\x81\\x0BX\\x932\\x87\\xB3\\x06.`-w\\x01k\\xE0\\x02\\xD6rG\\xBB\\x06^^M\\xA9\\xB8\\x94\\x1B\\xBC\\x06\\xFE^-w\\xB9k4f"
		"[cq\\xA2\\xE5\\xA0\\xD20\\x08#\\xF0\\x88A\\xAC\\xFA,R6~b\\x01\\xA6_\\xA8\\xABY\\x87u\\x96\\x96{\\xE8uXU\\xE9\\xB9\\xCF[\\x87\\xF6\\xEA\\xB3\\xF6\\xC2\\xBAK\\x87\\xA6\\xE9y\\xD3th\\x9A\\x9E{\\xB7uh\\x9A\\x9E7M\\x87\\xA6\\xE9r\\x1D\\x81\\xCBBW!\\xA8\\xD7\\x0F'N\\xDB\n!n\\xDF\\x0C\\x063p3\\x834\\xD3\\xE3)i,t\\x83\\xFF\\xA2\\xA9\\xBC\\xAE\\xDD\\xF1:t\\x9E\\x9E\\xBB\\xC8u\\xE82]e+\\xC5?\\x8C \\x08'\\x81MF$H\\xCE}\\xCF!\\x11\\xD7r}\\xCF~\\xF4\\x92\\x97&\\xAC\\xA6a\\xB4\\xBF\\xB3i \\xA2\\xF13\\x04\\xC6C/"
		"\\xEB\\xE9\\x06%\\x96\\xA5;\\x1E\t\\x02/WV\\xA74<^@p\\xA6B\\x10\nA\\xAA\\xB3\\xFD\\x19$\\x884\r\\xF1\r#;\\xA3\\xE0\\x05\\xA9c\\x07\\xBCd\\xDC\\x93\\x17OL\\xDF\\x7Fas\\x96\\x8B\\x1F\\xBDq\\x9A\\xF2\\x107\\x83\\xB0pRa\\x16\\x01\\xFCG\\xCF\\xF4\\x82n*\\xD9\\xA0\\x06\\x89\\xD6 \\xE6\\xBB!H\\xA0\\x87<\\x04\\x89ol\\x1F\\\\5\\xF8\\x86\\xE7l\\x9D\\x9A\\x03\\x02eL/ QF\t"
		"%\\xC3\\xCE\\xC1H\\x90iI\\xCC\\x7F\\xC1\\x1A\\xEC\\xCAz\\xCE\\xD6l\\x10\\x98\\xAB\\xA0\\x19\\x90i\\xEC\\x93$\\x81#\\x1E\\xE1x2\\xCE\\x90\\xCDe\\xE4\\xA8\\xDF&+\\xC6\\xDA\\x07u(\\xB4\\x0E\\xB9P\\xC7\\x95\\xE7\\x90\\xB0\\x17:\\xF48@\\x8Am\\x94>!A\\xA5\\xB9\\xF3\\xC1\\x85SP2\\x85\\xB3\\xF2\\xAC)\\xF1\\x14HIL\\x8B\\xD6\\xBB\\xD5\\x84h\\xE5(\\xF4\\xC9\\x96\\xE3\\x99~8\\x80\\xB3\\x00\\x91g22\\xD8\\xA1\\x0F8$#S\\x8C\\x19v$P\\x88^\\xA0\\xAE?"
		"\\xF1\\xECG\\xC3qj\\x08\\xE4\\xE8g\\xB3\\x99\\x1E\\x15\\xE1\\xBEA\\xCE\\xA6\\xE98\\xCD\\x19\\xF9\\x88\\xF2\\x06\\x12\n\\x15P\\x8E\\x80\\xE3\\x13Y\\x05\\xA7\\xA9\\xCB\\x8D\\xE2\\x8F\\xA1\\x10\\x1DR4\\xBF\\xC1\\x94\\x9E\\xC5\\xA0c\\x9B\\x9E\\xAE\\xC8\\x98-M\\xA1c\\x87\\xD2\\x89(I\\xC0\\xB3\\x88v5\\x92\\x19\\x1B\\xDF\\xF1\\x8D\\x96\\xE9\\x8C!\\x0C$un%\\x1E\\x89bn\\x88\\xD3\rK\\x8E\\xA3&\\x8A\\xE9{\\x83`\\x93\\xF3\\x82!\\x89\\xBC\\xE4c\\x9A\\x92\\xEEj\\xCC\\x01S\\xCB\\x81nj\\x96\\x13*\\xDB"
		"!\\x85\\xF4\\x1F\\xD0\\x94\\xC4\\xB4|2G\\x0B\\x80\\xB8d8\\xA3e\\x19\\x0E\\x9A\\x9Ej\\x8E\\xDA\\xB4e\\x05\\x98\\x0Fv\\xCD\\x96\\xCC\\x0C\\x9A9p\\xB1\\xA3l\\x12\\xC0\\xCEu\\xA9\\x12\\x16|C\\xB5\\xD9\\xEA6;\\xFF\\xEB\\xB5\\x995\\xB8\\xE0\\xB0/WV\\xF0\\x96\\xAF\\xDF\\x05+[;\\x8B\\xA2Z\\x84\\xD27\\xC71\\xD9\\xE4f\\xDF2Z\\xD2\\x98\\x00j\\x15\\xA5 V\\x05x\\xCC\\xD6\\x18\\xDE\\xD4F\\xA6\\x1B]\\xB3\\x86\\xD7\\xD3\\xBFb\\xF8\\x97\\xB4\\xA1v0\\x7F\\xCC\\xE4\\x06\\xC79\\xDE\\xD3\\x1F\\xE6x\\xEC="
		"\\x82\\x04\\x0F\\x13\\xCFe~\\xB5\\xA6eF3\\x9A\n8\\x10\\xA2\r\\xAB'\\xEA\\x0F\\x03u\\x15\\xB93\\xCF-H\\x1C?\\x97y\\xF1\\x8F]\\xFA\\xB3\\x9A\\xFA\\xD7&\\x15\\xDA\\x9B\\x9C^\\xFC\\xF98#\\x9D\\x05\\xAD\\x81\\x19\\xCB`\\xD4^\\xA4a\\x13u\\xE3Q\\x1C\\xB4<\\x0F;\\x0B7;\\x8F(\\xE6)\\x0B9\\x9B&\\xE4>\\xCD\\x19\\x05\\xB4_[\\xB3\\xEE\\xB4\\xCD(iz\t"
		"\\x195\\xE3\\x89m\\x93\\x18\\xD4vBb\\x9E\\xAB\\xC91\\x19\\xC7\\xC4\\xF7\\xD3\\x0C\\xB3n\\xCF\\xDAG\\xAD\\xCFbg\\xCD\\x82\\xFA\\xE8\\xE2\\xAE\\xDC\\xB3\\x82\\xA0j\\x9D\\xED\\xEA\\xE0\\x1792\\x1B\\xF0\\x8C!\\x81\\x86\\x9A\\xD1V\\xB3^\\x9B\\x1D\\xDA\\xA4\\x07\\x06\\xE5\\xAC\\x83\\xE6\\xCFr\\xA6)\\xE5Jf\\xFB\\x8F\\xFF@\\x1D\\x90\\xDC\\x1AO\\xE2a\\xD3\t\\xA7\\xC1\\x0CyaLST\\xC2\\xF8\\xB9\\xB0VJ3\\xFD(N\\x00\\xB0PL\\xDBt\\xC2\\xA6e\\xC2*\\xA8\\x88i\\x1C\\xA6V\\xD6&gZq\\xE8O\\x92\\x19\\xABQ"
		">\\x00\\xFCB\\x01\\xC0\\xF8\\xAF\\x00\\xA9\\x99&\\xDB\\xDB;;;;\\x85<U.\\x85\\x1Ffx\\xA6aj9x6'\\x8ASaikfA\\x12\\xC5V\\xB1\\x1A5\\xA1\\x8C;\\x9B\\x1CE\\x99V\\x9E\\xCC\\xE5\\x02\\xD5\\x192G\\x10\\x15|Oa\\xB6\\xCB\\xB5h\\x90\\xC4:B\\xEA\\xE6d\\x01su\\x16\\x05^\\x02\\xF1*6\\xE1Za\\xE4Ah\\x89\\x7FO\\x9F\\xF9\\x85e\\xE8\\xFA\\xBE\\xB6L\\x91\\xD4\\xDA\\xB9\\x98u@\\xC1yC\\x97\\x92\\xCDd\\x18\\x85\\x93\\xC1\\x90[\\xCCv5\\x94,&4\t\\x13\\xD3_\\xAF\t\\xB3)M\\x9CU\r/v\\xD6|"
		"\\xA9\\xB5\\x9A\\xBEH\\x14-kcI\\x12r\\xE6\\x12\\xEA\\x8A\\x02\\xD1,\\xD2S\\x94tV\\xB5\\xCE\\xE90\\xF4Il\\xFA\\xA4\\xD0u\\xBF\\xA999\\xEA\\x19\\xA3\\xBC\\xA5\\x8Ej\\xB7\\x8CH\\x1C\\x9B\\x83\\\\\\xE0\\xAFQt&L\\xE9\\x90C\\xE7\\x94D\\x15\\x93\\x94\\x11\\x8B\\xF0\\xAC\\x9B4%\\x04\\xB3a_\\xBF{\\xAB\\xAA\\xC3\\x0E\\x1DR\\x9E\\xD4\\x99\\x81\\x86\\xE6$W\\xD6\\xB6\\xD4\\x07\\xDA\\x9C\\x1F\\x81a\\x16\\xD1Z%<\\xAB8\"\\xA3\\xF0\\x89,\\xAB\\x9FJ\\x0E\\xD6\\x07r\\x89\\x00\\xD6\\xB6\\x888\\xF3\\xE3\\x9E\\xEA\""
		"M.\\xCA\\xDF\\xD4\\xFC+\\x99\\x17\\\\I\\xA0\\x97\\x92J\\x94\\xFA/\\xCD\\xF9\\x8E\\xAA\\x1D\\xE4\\x05\\x1DQ\\xE8CqNB?\\x91(\\x81\\xE3\\xF13\\xA1\\x9B\\x84\\xE35{\\xB0U;tM\\x12EaT\\xC3\\x00\\xE5N\\xA2\\xD1l\\xCDxl\\xDA\\xF4\\xD0\\x15\\x08\\xF3y\\xFC\\x8B\\xED\\xDCh\\xD3\\xF5\\xA2\\xCC\\xD0M\\x9C4\\xA8\\xAEXgMW\\xFFX\\xCBB\\x8D\\xC7f\\xB0\\xFE\\xF4Y\\x89\\xAA5\n\\x03\\xF2\\xB2\\xEEP\\xD5\\xE2\\xB5\\xFD0&%\\xECEt\\xAE\\x1F\\x9A\\xC9&G\\xB9s\r\\xD9S\\x1C\\xD3\\xA2Q1\\xF3\\x16or\\xECr\\x98\""
		"\\x93O\\xA2\\x18\\x06p\\x1Cz\\x05\\x8B\\xB5:5D2\\xAA\\xB2\\x883n\\x92o\\xF5\\x02\\xA9nlh\\x81Yh\\x915\t\\x1C\\x9F\\x94aL\\xEB\\xF3K\\xB2\\xA7\\x7F\\x9Bc\\x7F\\x12\\xAF\\x91m\\xB1\\xAC]0\\x97\\x16\\xDA\\xF0u\\xB3i\\xE49\\x8E_je\\x81\"F\\xC1\\xCC\\x90Y\\xD8v/p\\xC3,WIuU\\x8C\\x85Z\\xF9\\x91L\\xC3\\x19\\xDEU\\x1D\\xC6y\\xA3A\\xBD\\xB1\\x1A\\x11\\xDFL\\xBC'R/U\\xA4\\xB2\\\\,\\xAC\\xB6\\x0B\\x8B\\xB5\\x02E\\xC3\\x88\\x90%4\\xB5\\xD2\\xD0\\xFC&\\xDC\\x82\\x13\\xFD\n\\x81\\x94?"
		"\\xE7\\xD7ps\\xB4\\x8Bb\\xF9\\xBA\\x92\\xDF\\xD8\\x8C\\xA9\\x97\\x0C\\x19\\x87\\xFD\\x9EF4E\\xF1\\xDD\\x02Z\\x7FG\\x83\\xDCp\\x12\\xFD\\x07\\x0F\\xCB\\x7Fr\\x8B\\xFE\\xAB\\x8D\\x10\\x08\\xEA\\xE6\\x8AF\\xFDBK\\x96\\xD7\\xBE\\xAEt.\\xD6W\\xDC\\xEELO\\xA4\\xFC,\\xD2\\xB9\\x86d+\\xCEwkad]\\x027Qq\\xE3\\xD6,\\x95\\xC6<\\xD7X{e\\xDF@\t{^\\xF8\\xDB\\x04\\xB6\\xB9\\x93\\x97:kW\\xB1\\xE0\\xB7\\xDE*|c\\xD7\\xCE-\\x9F\\x16R\\xC8\\xADe\\x08.6f\\xABN\\x83U=\\xFA2\\xFB\\xEE\\x05\\xE3\t"
		"p\\xA2\\x93\\x84\\xB0\\x80\\xA9YC\\xD0\\xCA\\xE6\\x17\\xFB5\\xAE\\x0CQ\\x14\\xAB\\xF6\\xF5\\x1F\\xB9o\\x8F[a\\xDCeF\\xE9\\x13l\\xC2\\x04I\\x9C\\xEF:q1\\x81@\\xE1\\x1A\\x1E\\x9A\\xF3\\x93T{x\\xAD\\xC1Z\\\\\\xF1r\\xC3\\x94+\\xFAI\\xEA\\\\$\\xC2\\xDB\\x98\\xA5\\x15\\x91\\xC1\\xC47\\xEBl\\xF0?,\\xAB\\xC8\\x93K}\r\\xBFc\\xF2\\xD7,.\\xEA\\xC5\\xDE\")\\xC1\\xCD\\x19\\\\ c\\xD7&\\x8C\\xDE\\x1ET\\x9A:^\\x90W\"U\r\\x82Eie\\xEA\\xC42y\\xB3\\x11EyP\\x81\\xA3\\xC3\\xEF\\x82%\\x1E\\x1CU\\\\\\xC7\\x9C\\\\\\xB7}"
		"sb\\xB1\\xD4\\x8E\\xB9\\x9E,.\\xA5\\xCB,\\xBF\\xD4n\\xE5\n\\x8B\\x8697\\x1E\\xC3V\\x80\\xFEx\\xAB\\x89;\\xBBBn}!\\x96M\\x0C\\xCCD\n=\\xE7\\xB9p\\xFE\n\\xF3\\xBD\\x1D\\x0FM\\x07\\x96:\\x02\\xD7D4\\x00\\x8A\\x9E3\\x13x\\x8E\\xFD\\x83Sf\\xD5\\xA9\\xC3N\\x98\\xFE\\x8E\\x85@\\x99%\\x9A\\x11\\x19\\x13\\xBA\\x88\\xA3\\x7F\\x9B+\\x98\\xCB\\xA6?\\x95<\\xAC\\xB9\\x99 \\xB5$\\xF8-d\\xCB\\xE3\\x8C\\x8A\\xD16s]\\xC7\\xC2\\x8D\\x96\\xE4X^"
		"\\xBC\\x18\\xCB\\xC4z\\xD9\\x0Bb\\x92p\\x02W\\xE8jQ\\x96y.\\xFF\\x10Z\\xE2_<\\xCB\\x01\\x86\\xD1\\xFCp\\x08\\xF2_U\\x12\\xFF\\xB9\n\\xFEI\\xDC\\x8B\\xD7\\xD25\\xBA\\x10#\\xF8\\xAD\\xCFC\\xE7\\xFEf\\xDA\\x19i\\xB0Qs\\x00cB\\x82\\xE4C\\x12\\x8Ey\\xEE\\x0F\\x99\\xFE\\xF0T\\xA5\\x8A\\xA2\\xF8\\xD7\n<\\xF1oA\\xC3\\xC6?\\xC3\\x91\\xE2\\x84\\xFE\\x11h'\t\\xC2;\\x9E\\x83#\\x1B\\x1F\\x18\\xE2\\xBFx.\t?\\xCC\\x90\\xAF\\x87\\xFDw\\x10\\x1A\\xFE\\x0E,\\xBF\\x82b\\xC9\\xA4w=?\\x81I?"
		"\\x8E\\xC2\\x81\\xE7lr\\xDB\\x9F\\xE9a\\xF7\\x8B\\xD9\\xF6`\\xAB\\xE7\\xD9Q\\x18\\x87n\\xD2\\xCA\\xAA\\x86\\xB8\\xC4\\xA4\\x0B\\x8C\\x13'\\xD1\\xD6\\x9F\\x8C\\x88?y\\x8E\\x04N\\x01\\x9C\\x92\\xF4'\\xCF\\xED\\xB1\\x82\\x17p\\xCD\\x9E\\xF0Wu\\x82\\x17\\x0C2Q\\x14\\xF3\\xBF\\x02\\xFDY\\x98\\xBF*J\\xD7\\x01\\x89\\xA5I2\\xDF~\\xE7\\x99\\xF6w\\xB6=\\xDA\\x1AU\\xDBO\\x02p\r:\\xE9\\xBD\\xA8\\x7F\\xD5)\\x8B9\\xFBs\\xA9ze:\\xA9\\x95\\x84\\xE3fU?"
		"\\xD5\\x9B\\xF2\\x15Q\\\\\\x94\\xDA\\x95\\x06\\x17I\\\\\\xB8\\x83\\x90[\\x80\\x94z\\x10/k.\\xA0f\r`Jay\\x1B\\xCA2<\\xAB\\x94U\\x97V\\xBE\\x0E\\xB9\\x85\\xA8\\xCD\\xF9\\xA6W\\x84f\\xA6b\\x7Fb\\x05\\x94/a\\xD3k-W\\xFB\\xD2\\xB9\\xC5f$\\xF7s\\x96\\xF6\\x9CS\\xB3j\\x07q\\xA5\\xDD\\xCF:\\xC6[\\xE9\\x97[a\\\\\\xB3:\\xB1RY\\xAE\\xBD\\xC9\\xE3W\\xCF\\x14ju\\xD5\\xB3\\x02k\\x9D+\\xA5\\xE2\\\\]\\xB6\\xE0J7\\x98h<z\\xC5dc\\xE36\\xEF\\xE6^"
		"\\xCB\\x99\\xBE\\xD2M\\xB7nO\\x8BZMO\\xAF\\xC4\\xBD\\xA0\\xAFg\\x8E\\xD3\\x16*\\xF6Da\\x04`\\xAFk\\xBE\\xB6\\xB7\\xF9\\xE7\\xD6l\\x15j\\x89\\xD5v\\xBD\\xC5o\\xB6^=H}{-\\x8B\\xFD\\x8DU\\xFC\\xF2\\x82~\\xC4o\\xEF\\xC7\\x95\\x83\\xF6\\x86\\xAA\\xD6s\\xD8\\xFD|\\x17\\xBE\\xDD!X\\xC7\\x84o\\xE8\\xBC\\xC5\\xF3\\xBC\\xAAe\\xE6v\\xF9\\xE8q\\x97_\\x90*+z\\xC9\\xF5!\\xB2\\xABh0\\x03\\xA4i\\x99\\xB1\\x17\\x97\\x17\\xC3?\\xE9\\xC2\\xFF\\xB5\\xFA\\x85Z\\x1D\\xF0\\x13[\\x08\\x0B{{\\x997+\\x8D,"
		"Z\\xCBzX\\\\\\xE7\\x12\\xD5'J\\xBF\\x0Bw\\xC5\\xA1Q\t\\x8A\\xE4\\xE6\\xBC\\xE9R\\xC9>\\xC9\\xBC\\x1F\\xCA/\\xEE\\x07,\\xDEw\\xFC\\x99m\\x85\\x8A.\\\\\\xCE.z\\x1D\\xB7\\xFC\\xECnF\\xBD\\x8E\\xC7\\x8Bb\\xB5\\xEA&\\xCAoiq^\\xB7Xc_\\xAC%%\\xDF\\xB2\\x9B\\xFC\\x1F0L\\xF3\\xAE\\xC2\\x19\\xF3\\x95\\xC3N\\xB9y\\xC7\\xDC|\\x98\\\\\\xC11)\\xAF\n\\x88"
		"[0\\xB7\\xEBB\\xDA\\xD6\\xD2\\x0E\\xEB\\xF2\\xFC\\x9Bq\\xFDF\\xC6\\xFF\\xD9\\xBAWp\\xFF\\xEF\\xAA\\xE6\\xAD\\x9C\\xBE\\xBEQ\\xF0\\x8B\\xC1\\x13\\xF5\\x16T1\\xFC\\xEF?jX\\x17M\\x949m\\xF5K\\xEC\\xFE\\xCB&q\\x91\\xE0:\\x9F\\xF6*ce\\xA1\\xBD:\\xEB\\xEC_\\x08|\\xA8\\xD9\\xFA\\xACZ\\x83 d\\x92iX\\x93YA\\x8Bs\\xAF\\xA8\\x07\t\\xEF\\x96\\x9B-\\xF3xJ\\xFCUb\\xAD\\xA59\\xAB\\x9CX\\x9B\\xBDH\\xE1\\x8C\\x8B$\r\\xAF4\\xAE2dl^"
		"-'p.\\xD3\\x12\\xDAj\\xA6\\xE9\\xD2Mv\\x16C\\xBEj-9\\xC3\\x9Fr\\xC4Rb\\xAB\\xA6\\xE0\\xCF\\x11\\xB0\\xB8\\x91\\xBF\\xAB\\x86%\\xFCY\\x12\\x03\\xEB-\\xEC\\xEB\\xF8\\xB7p\\xD5\\x1B\\x0E6\\xF0_\\xBFOz\\xCE\\xCB\t\\x90\\x1F\\x9B\\\\]\\xE4\\xE2\\xAFxs\\xE47\\x853T&D\\xB6\\xFD\\xE3\\xC2o\\xFD\\xA2\\x0EN\\x9E\\xCE\\xA7,\\x8ASN\\xBF\\xB6\\xFF^\\x19T\\xF1=\\x0F\"l>or\\xE9\\xE9\\xC7\\x8F?\\xB8\\xBF\\xDB5\\x0B\\xC77\\xAB;"
		"\\xE8\\xF0\\xEA\\xB6\\xA3X3\\xE9W\\xF7\\xD6\\xBA\\x0B\\xA7\\xF6\\xDF\\x95\\xD0chL\\xA9\\xB6\\xBAKZ\\xF3\\x18\\x1A\\x05\n\\x958p\\x95E\\xCA\\x17\\xB2\\xAEe$\\x14p/fLF\\xF2\\xBAD\\xAC^\\xA3\\xBD\\x95\\xCC\\xB7\\xAD(\\x17M\\xD5\\xB9f\\xFC\\xAC\\x9D\\x02?\\x0F\\x938\\x81#\\xC4\\xB3{\\x1B\\xAA\\xB6\\xC6\\xCF\\xF6\\xD7\\x8Ai\\xCE-\\xB62\\xE6k\\xFD\\x1D\\xB6\\xFBOV]\\xAC\\xF5M\\xFD\\xFC\\xFB\\x18c\\x8E\\xF0%+$n\\xC5\\xE2\\x8A[\\xBA,[\\xDE\\xECR\\xE8m)"
		"\\x86l\\xBEcs\\xF1\\xAA\\x97\\xA4\\x08\\xFCL\\xC3\\xC8iZ\\x111\\x1F79\\xFA\\xA7\t\\x90u\\x87\\xFD\\xE7))\\x1F?x3%\\xA5\\xB1[!\\xBC\\xEB$,\\x04\\xC0/g\\x88\\x9FD\\xBA\\xA4\\xC9s\\x11/\\xBF\\xB19\\x10\\xDE\\x96\\x1D\\xC2XGZ\\xFF\\x96*\\xE6\\x9BZ\\xAF\\xAA\\xB8\\x05!d?\\xD6PW\\xB9\\x8E\\xAB\\xAA\\xABu5\\x8E\\xE3E\\xE9\\xED\\x0B\\xF4H\\xF3d\\x14\\xAC-\\xB1\\xD7\\x92Z\\x85F\\xD7\\x87\\x8F\\xFDD\\x1D\\xFF\\xBBY:DR_\\xA3$/"
		"\\xA8\\x90\\xAB\\xC4R\\x8AU\\xA1\\xB3p\\xA3\\x94\\xCB\\x0Fn\\xCC\\xEDD\\xFELg-\\x13\\x06K\\x98ba\\x1D\\x0B\\x16\\x83k\r\\x04\\xB74\\xCA\\x8C\\x9B\\x8F\\xA5\\x13\\xE6\\x12\\x17\\xEE\\x9F\\xFFQ\\x0Ey\\xE2\\xAA\\x9B\\x86\\xE2\\xC2\\x89\\xBFz\\xF6\\xFD^#\\xA4\\x12~]\\x14\\x13o\\xDFC\\xAD\\xC5\\xF2\\x0B\\x07\\x0F\\x8Ax~!:\\xFEwh\\xFA\\x9F\\xE8\\xA0\\xA5'\\x10\\xDE\\xD4Ekc\\xFA\\xA5C\\x11o\\xEE\\xA6\\xB5\\x8FXp\\xF3'\\x0F\\x84\\x95\\xA2j6\\xAF\\x9AH\\xAB\\xB5\\xA0\n\\x87y\\xD6\\x90\\xB3o\t"
		"\\xB4\\xE6\\x16\\xC6Hps~=\\x94\\xB9e\\xDF<\\x8D\\x7FFX-\\xF57\\xCE\\xD36'\\xE3\\xD7\\x11\\xD65Re\\xB1l\\xFC\\x19\\xF1\\xD7\\xA4gI\\xE6\\x83&\\xB8U\\x1E\\x9Aui\\xFFg\\x99\\xEEg\\x05l\\x16\\xFD\\\\\\x1Fd\\xCF\\x954\\xF8\\xA2:\\x17D\\x17s\\xBF\\xA4\\x9CKfz=IJe\\xDC\\x7F\\x9E$\\xAEpJ;\\x1D\\x10\\xF4v\\x1E]|\\xBE\\x90[q\\xC6\\xF0\\xA7jH\\xA5\\x03\\x85\\xCFd\\xC7zS\\xA4h\\xCC\\xFF\\xA4\\x1E]d\\x1Eq\\x02'-\\xEC\\xB8\\xB7\\x1E\\xA0|\\x8B\\x1A\\xFA\\x15\\xCD\\xF3\\xCB\\xCAf\r"
		"\\xFD\\xB2\\x86R\\xE0\\xD6\\x94\t?\\xDE\\xD0-o\t{\\xE0\\x96K\\xE95\\xF9\\xE9g-\\xAA\\x05\\x1C\\xB5\\xD2*\\xFD\\x1D{\\xF9o\\xAB\\xF0w\\xED\\xA1\\xAE]\\xEBO\\x84v\\xCE\\xDC\\xD7Z\\xB7\\x10e\\xFCk\\x9Ep\\xAD\\x8BtT\\xB9\\xD7\\xE6\\xF7\\xB8\\x89\\x7F!\\x88xN\\xD7\\xD7\\xECf\\xB2\\xC5\\xFA\\x8A\\x15\\xFA\\x92\\xC5_\\xADZYo\\x01\\xBD\\xDClY\\x8Dc\tU\\xA5[\\x99(\\xFF\\xAC\\x8Bm\r\\x01\\x90\n 01\\xD7]\\xB7/\\xCF\\xBBp\t_a\\xF1\\x154\\x16N\\x11\\xD5\\x84\\xDC4\\xD9<j\\xCEi\\xEFz\\xB9\\xB5\\xE0\\x0C\\xE1*E]"
		"\\xF4\\x92U#\\x18\\xEB\\xEFK\\xE3j\\xEE&\\x9B\\x80\\x16\\xB7\\xCD\\xB8\\x82{\\x9A\\xF9gk\\x8F1\\xA2\\x95\\x01\\x00u1\\x86\\xBF\\xC9w\\xB6<\\xF0X\\xA8\\xA1\\xAB&\\x82\\xA7\\xDE\\x07\\xFD\\xDFB\\xE0\\x7Fq!\\xF0\\xCFp,\\xB7\\x86\\xB77\\xEF\\xBF\\xB5\\xF7;\\xB85vK\\x96l\\xB6T\\xE4\\x1E\\xB4\\x15n\\xE7\\x85;k\\xF8yXa\\x07 \\x07\\x0EQ\\x15$VAR\\x15\\x84\\xAB \\xB9\nR*\\xA0q\\x05bV \\xB9\\xF9\\x9C\\xC3\\xAC\ndR-W\\x81\\x84~\\xB5X\\x15\\xE4W\\x0B\\x82x\\xAD\\xE63-R-M/"
		"B\\xAAB\\xAD\\xD0y\\xA9B\\xDD0L\\xAA\\xD0!1\\x9D*4\\xAA\\xC9X\\x05\\x95\\xFC\\xE5k\\x9D]\\xE7\nzKX\\xA0\\x94\\xCA\\\\\\x0E)u\\x0C<\\x7F\\xB2\\x16\\xDE\\xCA\\x03\\x92m\\x89\\xC6\\xAA\r\\xF7\\xC8G9tJW8\\x94O{/.W;\\xCEeDq\\xF6v\\xEC\\xE5$\\x94\\xAE\\xAA\\xE5\\xB8\\xD57\\xC5\\x16\\xF2\\xC4\\xD9\\xFBy+\\xF8\\xA9\\xBCZt\\xFB\\xA4\\xEB=\\x97n\\xE4\\xAA\\\\=\\x19U}\\xF4uG\\xAA\\xAB7T.\\xBF}r\\x0E\\x9C\\xDF<5\\xE7\\x18\\xCC\\xAEj\\x15\\x11V\\xB1&)X\\xA9c\\xB0\\xB9\\xD5^\\xE1\\xA5\\x08\\xB9v]~"
		"\\xE7D4\\xB0fG\\xF3\\x16\\x9C\\xD5\\\\p\\xB6Q-\\x9DZ\\\\\\xE3 ?\\x1B\\x0F\\xF6\\xD2\\x88\\xB2y\\xC8\\xE2\\x10\\xFE\\xFC\\xB3\\x80r\\xDD\\xFB\\xED\\xDEz\\x98\\xBF\\xAC\\xFC\\x9ApH\\xB9\\xE6\\xEE.Fm\\xCB\"C/(\\xCD\\xF8j\\xD7\\xD0\\xC966#Rs1\\xE5\\x8C\\xCB\\x9B\\xCE\\x98^<\\xFE\\x96\\xA3\\xFE\\x85`\\x1A\\xBC\\xE2\\xE2\\xBAJ+\\x97\\xFA?\\xAB\\xDC\\xA5\\x96:(\\xB7\\xB6\\xE6\\xAA]r\\x95C\\xC6\\x93s\\xAE\\xA4\\x05'\\xEF\\xCB\\xEE\\xD0\\xBA\\x93\\xF7s9\\xC2U\\x18\\xE2\\xE5\\x19\\x96\\x97\\xAE9\\xBA/"
		"\\xB0\\x93\\x8B\\xF4\\xD4o\\x95\\xD652\\x86k\\xE2\\x8B\\xD7\\xCA\\xB7N\\x9E\\xA5\\x0E\\xFD%\\x8A\\x81\\x9B_\\x08\\xFD\\xB9O\\xFC'\\x02,\\xC6\\x1D\\x93\t\\xF9\\x93\\xE72\\x00\\xCF\\x19\\x91g\\xFA|\\xF1\\xF5\\xEA\\xF5*\\xAD|\\xB4\\xB6\\xACYZX\\xD4d\\x15\\xE1\\xE2%\r\\xB3e\\xA2D\\x7F\\xE6\\xBB<\\x7FE\\xC3fe\\x0E\\xC2\\x99Z9\\x9E\\xBD\\xA1\\xA4:\\xAE?U6\\xFC\\xA9bk\\x94\\xB1'\\x96g7-\\xF2\\xEA\\x91\\xE8\\x83\\xD0R\\xB5\\xF4P\\xB0\\x94\\xFE\\x91\\xA9x\\xD5\\x14\\xA1zH\\xB8\"L\\xCC\\xDF"
		"(\\x98\\xCCM\\xD3\\x0691\\xAF\\xD7\\x0B\\x19\\xE8\\xFB\\x89\\x8AU\\x86\\x93\\x04:\\xA0N\\xFDV\\x8A\\x0FK%\\xEB6\\xC1k^\\x064\\xD3\rszl\\xFE\\xC5@\\x0B\\xB2\\xAD\\xCEQG\\xC6O]\\xA4\\xCC-0\\xF1\\xEA\\x8F\\x85\\xC3Ky\\xE0\\xBD<+;\\xAD\\x14\\xFF\\\\M\\xA6WO-L\r\\xC7\t\\xF0Ce\\x01\\x90eH7#\\x16&\\x83\\xC00#Rw_p\\xD52]d\\xB1\\xD6\\x19\\xC8+|.\\x0B_\\x99P\\x11#\\xE5\\xE4\\x95\\xFDXb\\xDD\\x05\\x97~\\xFE\\xFC`T7~\\xDFd\\x8A/\\xA15{G\\xD3xL\\xCC\\xC8\\x0C\\xE0@i\\x9A\\xAB(=koWYY\\xCF\\xE6&\\x9DLnhO\\xE2&}"
		"k\\xD5rn\\xAB\\xE6\\xAF\\xBB\\xE1k\\xCD\\xAB\\xBC\\xEA\\xABX\\xB8\\x1E\\xA9?D\\xBB\\x00\\xCB\\x17xU\\xDA\\xD6\\x9F\\xC1dd\\x91\\xE8\\xCF\\xBB\\xCD\\xCDY/R\\xA2\\xE9{\\xAB\\x9A\\xEBL\\xAF\\x85x\\xC2IR\\xC6S'\\xDFj/\\x87\\xAA\\x0EE\\xE8\\xBC\\xB4\\\\\\xD3!^P/\\xD1\\xAB\\xF6\\xB7\"W\\xF4\\xC3\\x1F\\x0C]\\xFD\\xBE\\xF0\\xB2\\xDB\\xAA*\\x04\\xFDQz\\\\p\\x9B[\\x81:z\\xD6\\xB9\\xD6\\xEF\t\\x1B\\xF4\\xB0\\xF9M\\x8F\\x9Cq\\x85m\\xF0y/\\xDF\\x92\\xD7\\x8C\\xCBB\\xC5\\xE9\\xF7S\\x14sU;"
		"P\\xAE\\xF8\\x7FJ\\x86\\xEC\\xFC1\\xD1\\x051\\x85Kh\\xD7u\\xF1\\xB7\\xD1^\\xF2{\\xAD\\xA0\\xACZ\\x0Be\\xB0\\x92\\x08d/\\x1A\\xACU\\xC2E;\\x86e\\\\\\xD3RZ\\x91{\\xCD\\xAC\\xAB\\x1A\\xD2*O\\x95\\xAC-%\\x9FE\\xFA\\xB5\\xFDw:@\\xC9\\x90pq2q]nJ\\xB8\\x80\\x10\\x873\\x1D\\x878\\xDC\\x90D\\xA4xT\\xA3j\\xBA\\x88\\x8B\\x8E7\\x96M\\xDCu\\xF4Z\\xFD>\\xC1\\x9Cq\\\\<GX\\xABq\\x97\\xD9YR\\x85\\xD85I*\\x89\\xD7\\x9F\\xA1j\\xAEw\\xE6b^\\x96xm\\x97\\xDBU\\x0B\\xFAmI\\x1F\\x8C[ Q\\xE9\\xDB\\xDB\\x17\\x8D\\xDC\""
		"\\x8B\\xAF\\xF6\\\\x\\x1E\\x95T\\xB7\\xF3Q\\xC3\\xA0a4\\xA2\\xD38\n\\xD7{]\\xC2r\\xAF\\x91\\xB4\\xE0\\x92\"\\x05$\\xAAX\\xED\\xAB_\\\\\\x7F\\xC9\\xB2\\xBC\\xD4\\x154\\xB7\\xF2\\xAF^\r6\\x7F\\xC7\\x7F\\xED=~\\x8B\\xD7\\xE6\\xF2\\xCA\\xB5y\\xF1f:T\\xB9w\\xAE%\\xA8\\xEB_\\x9A\\xB7\\xBA\\xF8/T\\\\\\xB7\\xFC,\\xDC\\x18\\xC6\\x113&M/\\x00S\\x82\\x03\\x11\\xC8\\xD7\\xB4\\xB6\\x92i\\xC9\\x1Au9\\xEE\\xF5p\\xFEV\\x84\\xCB&\t\\xB5\\xAE\\x9A\\xFE\\xA0\\xCEl\\xC2J="
		"\\xC7S\\xA7\\x07R\\x961\\xB6Tq\\x1F\\xCC\\xB1W\\xCD\\xCD\\x18\\x8B\\x8C\\xF9ui\\\\v\\xC6`6\\xA2`\\x128\\xE4\\xC9\\xB3Is\\xEC=\\x13\\xBFIw\\xAA7\\x85\\x15\\xB6AJ\\xC8&\\xB5\\xB7\\xF9e\\x19g\\xAB\\xB55\\xB2\\xA6\\x86<\\xCD\\xB7\\xEC4\\x89R\\xB1\\x8DJ\\xFE\\xBF|\\x01\\xCB\\xADi\\x7F\\x80T\\xA4+\\xD2\\xEA\\x0EJ.a\\xEB.y\\xAB\\xE2\\xB2\\x92\\x9F\\xBB5U\\xAB\\x8A\\xCC%7\\xA6\\xFE\\x8A4\\xFD\\xB5\\x1BR\\xD9\\xBB?\\xB3\\xFD\rT\\xF1v\\xD2\\x17\\x1A7Mv\\xF2dd\\x06\\xDEx\\xE2\\xD3\\xE0\\x87\"\\x11\\xEBdZ|/"
		"\\xE7\\x8Cw'1\\xD0\\x92r\\xE2\\xBCt\\xA7\\xD2uy\\x86xi\\xFA\\xB2\\xB4\\x9F\\xD0-U\\xA7\\x17W\\x95\\x01u\\xF7\\xF5\\xD42\\xD9\\xEC\\x1DK\\xAB\\xC3)\\x16^\\x95[w\\xB9)q\\x10^\\xC3\\x15@)(K\\x9F\\x12\\xE3\\xD5\\xD9\\x9F\\xB5G\\xC1r\\x01\\xBA\\x94\\x8D\\xCB\\xB2s\\x19a\\xF4\\xC5,\\xAB|\\x14scU\\xBB/\\xBA\\xCE\\xA5\\xB0\\x9Bs\\x01\\xDEu^\\x86\\xA5\\xD3m\\xCD\\xF3\\xDF\\xEA\\x12\\x9B\\xBCf\\xA4k|\\xEF\\xB9\\x83>\\xBD4\\xB7`*-\\xE9M\\x10\\x8C5\"q\\xDER^6\\x1E\\xC5\\xB5#\\xBC\\x9D\\xAE:@\\x85"
		">\\x90\\xDE\\x86\\x13\\x06\\xC2\\x89\\xC2\\xF1\\xDC\\x92kvS\\xA9\\xE9\\x8F\\x87\\xE6\\x07\\xB6\\x00\\xDBRJ\\x16P\\xB6,k)\\xF2:\\\\\\x15\\x8E\\xC6>\\x81\\x17\\xA7\\xB1\\xB7y\\xAD\\x7F\\x81\\xC1bd\\xEB\\xA2\\xAD\\x7FGX\\x15o\\xEC\\x05\\x03\\x9F\\xCC\\xC2\\xB7\\x7F\\x81B\\xC7{jAx\\xC2Z\\xEF\\xF1[\\x0FOI\\xB3.\\xBC\r{\\xD5\\xEB\\x18jk\\x80\\xB7d\\x0F\\xCD\\xE0\\xB1|\\xD7G1\\x94i}js\\\\\\xB5/\\xA33\\xE9\\xCF\\x02\\x82k\"\\xE6\\xB28\\xB1|"
		"\\xC3t\\xB5\\xC3\\xA8\\xE6\\x8C\\xF5\\xD2H\\xE9e\\xB5Ik8\\xA8\\x16\\xD7\\xA7\\xBD\\xB5:U\\xD1~\\xA1\\xBA\\xF9M\\xDD\\xD5\\x96\\xDB\\\\p\\xFC\\x1A[\\xECu\\x87 \\x97W\\xC0\\xA6U\\xCDL\\xA8?c\\xBA\\xE4\\xF5Fk\\x1A\\x83\\x0B\\x11/:\\xC1\\xB9\\xE05\\x00\\xB5\\xAF\\xF9\\xCC\\x9D\\xB2\\xEC\\xDD\\x8B#/\\xF0F\\xDE+q\\xEA\"!k,\\x04l\\xABJqW>\\xDFH\\xA2m^\\xBE\\xCB\r\\xB9h\\xEB\\xD6\\xD8o_\\x81q>\\xEBR\\xB4\\xE5\\xBD\\xFEU\\x98\\xAB\\xB9\\x97!o\\xFF\\xCD\\xD4~"
		"\\xC1\\x8D\\x804\\xD3\\x12\\xF5\\xECf\\x92u\\x06\\x7F\\xB1\\xBD\\xB1\\xD0\\x80k\\xFF]\\xF4\\xA2\\xD1\\xDD\\xEFR\\x95KW\\xA7\\xAB\\x02\\x93KK\\xAA\\xCA\\xA8/\\xA4i\\xF1:\\xAD\\xE4tH\\xF7\\x9D\\xA201\\x13\\xF2A\\x17\\x1C2X\\xE8\\x9F\\xA0\\xAB\\xB3\\xF4U\\x9C\\xE9I+\\x16\\xF04\\xCF\\x0B\\xEB\\xE0-\\xE5[\\x894^\\x0Fg\\xBC>\\xCAp-\\x8C\\xE1\\xDA\\x08\\xD7\\xC0V'\\x88\\x98\\x017\\x07\\\\\\xB3\\xCE\\xC5/\\x89\\xE4\\x16\\x86\\xB2\\xAD\\x94:\\xD5-\\xFC\\xF6\\xDF\\x15\\xE9\\xF3\\x87l[\\xAEhV/"
		"\\xFC\\xA9\\x89\tH\\xED\\xCC:\\xAD\\xB3\\xFAU\\xCFM$\\xB6\\xCA\\xCB\\x94YPV%a\\x95\\xE3t\\xC1\\xFDzs`:\\x17!\\xF4\t\\xB6\\xAA\\x9B\\xF0\\xC6\\xE7\\x85\\xD1M\\x93\\xC8\\xFF\\xF0\\xA7c&\\xE6&]w\\xB6\\xC7\\xC1\\xE0#\\x04[*\\x98\\xF7\\xAE:'gS\\xE1\\xD3\\xDE 4\\x0C\\xC38>\\xBF\\x1C\\xEE\\\\\\x0E\\x0C\\xC3\\xE8`x&]\\xE3\\x06\\xFE\\xAA\\xBDO\\x8A\\x07_\\xBA\\x9F;\\x07\\xD7\\x9F{\\x86a\\xC4\\x17\\x86a\\x1C\\xEDLw\\x8C\\xD1xJ3u\\xF6\\x9C\\xCE\\xC5\\xE5\\x8Ea\\x1C?"
		"D\\xFA\\xD9\\xF4\\xF2\\x1B\\xE0\\xE9v\\x1E\\xCEw\\x0F\\x8F\r\\xA3\\x93\\x8C\\x0C\\xC3\\xB016\\x8C\\xD3\\xC3g\\xC3\\xE8n[\\x86a\\x0C\\xD4\\xD80\\x8E/\\x0E\\x0C\\xC3xV\r\\xC3\\xD8\\xB3^\\x88\\xD7\\xBBl\\xC3Wu\\xC7\\xDF\\xE9_\\x9Daqt\\xF885\\xB4\\x9B\\xF0\\xF6\\xA13\\xB5\\xF7:\\x8A{\\x1A\\xBC\\xE2i\\xDB}z\\x1E\\xB4O\\x83\\xD7C\\xF1X!\\x0F\\xE1\\xD1\\xEE\\xB3\\xFD\\x19\\xABgcAR:\\xF2\\xF6#>9U_\\xB5\\xA7\\xA3\\x8DSi{0\\xDD\\xDE\\x08\\xA5'\\xBD\\xFF\\xD0\\xB94:\\x1D\\xE3h\\x7F0\\xB9\r"
		"\\x0F\\x87\\xB7\\x9F\\xAFD\\xE7\\xEA\\xF2x{\\xF0||`Ow\\x92\\xDB \\x10\\xD5c\\xBF};\\xBA\\x1D\\xF5\\xCFn\\xAEwG\\xE6@\\xB6u\\xC1\\xD9\\xEF\\xDF\\xC8'\\x9F\\xFD\\xF6\\xAB\\xAEm\\x9Cn\\x07\\xC8L>?\\xA9\\xFAF\\xDB\rO/\\x8Fu\\xF7\\xE0\\x14\\xEF?\\x9F\rN\\x0Cc08\\x1B\\xBE\\\\\\xF7\\xC2\\x93\\xE9\\xB7O\\x83\\xF0\\x9B\\xB27<\\xB8%R\\xA2\\x92\\x9B\\xE8\\x9B2\\xD9\\xEFl[Z\\xFB\\xF4UT\\xF7^b?\\x1C\\x98\\xED\\x87WY\\xD3vo\\xF6"
		"<\\xFB4ho\\xB4O\\xCC\\xF1\\xA5\\xE2\\x90\\x93\\xE0\\xF37\\xB4\\xE7\\x0C\\xBE\\x9DN\\xBB'\\x13CB\\xC6n[8\\x17\\xF6\\xBB\\xDD\\x8E\\xF0l\\xF4\\x8F;\\x97x\\xB7\\xD3\\xBF\\xEE\\x08\\xC7\\x9D\\xFE\\xC4\\xF2_e=4\\xB6\\xAF$u\\x7F*j\\xE4t\\xDFSqo\\x7F\\xBB\\xADx\\x9E\\xD4\\xD66\\xF6wv{{\\xFD\\xCBA_\\xB9\\xDE\\x19\\xF6/e\\x83\\xDCv.\\xAE/\\xBA\\xCE\\xA370:]\\xFD\\xC5?0nI\\xEF\\xE1\\xE0\\xB9\\x7F\\xB1\\xF3\\xD2{\\x89\\xCD\\xE3\\xBD\\xB6\\xB4\\xD1~\\x92Tc\\xEFb\\x10\\xA1\\x8Dv;\\x16\\xED\\x13\\xF7\\xE4\\xF3H"
		"~\\xB2\\x8E\\x95\\xAE\\xF9\\xAA=\\xDC\\xA0\\xE3\\x0B\\xC1\\x14\\xF5'U\\x81\\x9C\\xED\\xF6@\\xF9\\xA6\\xC7\\xFB\\xEE\\x93\\xF48|\\xB8\\x11{\\xF2\\x8D18\\x1C\\xC4/;\\xA3\\x81pzsc\\x18\\xFD\\x88\\\\>\\xE2\\x8D\\xD3\\x0B\\xED\\xC1\\x91\\xAE\\x90\\x8F\\xCC\\xF1\\xD5\\xE0\\xD2xu\\xC3\\x83\\x9E\\x18\\xF9\\xAF\\xF2\\xB3>\\xD8\\xDF\\x97;\\xC9\\xB3\\xE1\\x18\\xFAi\\x07\\xBD\\x1E\\x07\\xAFO/\\x9D\\x8D3%<z\\x0E\\xC3\\xF1\\xA0\\x8B\\x82\\xCE\\xE9\\xAD\\x1D\\x1A\\xC6\\xC0\\xDB\\xED\\x07G\\x07\\xDB="
		"k\\x83\\x04c\\xD9\\xBBB\\xE4s\\xE7u\\x9B\\xEC\\x87\\x07\\xC2\\xAB\\xAC\\xB5\\xDB\\xCF\\xF6\\xF4\\xE0\\xB30\\xBA\\xED>\\xF6\\x06\\xFA\\xB9\\x98D\\xD6\\xC6p\\xF7q\\xC3u#\\xA1\\xDF}\\x1C\\x7F\\xBA\\x1A\\xF5\\xC5+C\\xED\\xEF\\xDF<\\x1B\\x83~\\xFF\\xF5\\x88\\xC4\\xFD\\xDE\\xF4\\xE1\\xC0;\\xF0\\xFC\\xDB\\xEB\\xAB[\\xF7t\"Yq\\xD2;\\xDC8\\xBF\\xF1\\x1E_:\\xA3\\xCB\\xD7\\xC7N`\\xE8\\xFB;\\xBD\\x97c\\xBB{3\\x18\\xF5\\xF7\\xAF\\xBA\\xEA\\xC80\\xBA\\xDDCsp\\xB2\\xD3\\xE9X"
		"{N0V\\xFD\\xC1\\xF4\\xE6p\\xE7\\xF1\\xC0|\\xFA\\xAC\\xB67:\\xF6\r:\\x7F2\\xCC\\xBD3_O,S|\\x0E\\x87\\x0F\\xBD\\x8B\\xBD\\xE7#-8|\\xB9\\xD80\\xAE\\xFB\\xF1\\xE49\\xB6\\xF6\\xF4\\xA7`,(\\xA4\\xDD\\xBF\\xBEqN\\xF7\\xBD\\xE9\\xFE\\xC8\\xBB\\xFE\\xE4w\\xEC\\xEE^\\xFF\\xF3\\xCB\\xB1m\\x18\\xFD\\xF3\\xD7Qg\\x12\\x9E\\xF7\\xBF\\xDDx#i\"\\xA9\\x1B\\xED\\x9DOgX\\x9B\\\\\\x1C>\\xC9\\xC6qg\\xC3\\xBA\\x8A\\xD4\\xED\\x81)>\\xC7m\\xE3\\xF1\\xE2\n\\x1D\\x9Eo\\x0C\\xBE\t\\xC6\\xE1K\\xD8?x<\\xBD\\xBE\\xD4\\xCD\\xEB$"
		"<}<\\xF5\\xACc\\xB1-\\x1Am_\\xE9w\\xA7\\x87\\xFA\\xC5\\xE5Q\\xDF\\xD8\\xEE\\xE0\\xA1}\\xD3n?\\x7F\\xFA\\xEC\\xCBd?\\xD9\\xD8p\\xAD\\xD8\\xB8\\x1C=\\x0Fon\\xF6\\xBD\\x1E\\xDA\\xF6\\x8C8\\xD2\\xCF\\xD4[\\xFB\\xEA\\xEA\\xF2\\xCA\\xF2\\x1E\\x0F\\x9C}Gj\\x0B\\x17\\xD7\\x07/\\xD3\\xB8m\\\\\\xDF\\\\\\xC5\\x9D\\x17cp\\xD0u\\x1E\\x8D\\xE7\\xB3s\\xE3\\xDA\\xD8;\\x10\\x07F\\xB7\\xEB_\\xA9]<9\\xF2N\\x9E\\xD4\\x8D\\xB6\\xBF38\\xBB\\xD56\\\\\\xF7\\xDB\\xD1\\x91\\xA3\\x18\\x1D\\xFBQ\\xBA\\xEDM:\\xCA\\xA4"
		"{\\x1D\\xF9\\x13I} \\xA2\\xBE\\xBF\\xFD\\x8C\\x1F\\xAF\\xA6}/~:\\xD2\\xB4\\xDD\\xDDo\\x8Ff\\x7F{\\xE7\\xECr\\xDF\\xD8\\xEEt\\x8Cp\\xD4\\x01\\x02\\xBD\\x9BA\\x7Ft\\xB4\\x83\\x86\\xE7\\x83~\\xFFvpp\\xB9\\x8D\\xFC\\xC3\\x91\\xA2\\x9B\\x89\\x8B\\xF7\\xCF\\xB43t\\xF3)\\xDC\\x97\\xFB\\x07\\xA7\\xC6\\xF5\\xF5\\xA9\\xBE\\xF1t\\xD5\\x1E\\x9C\\x1C\\xB4\\x07\\xFB\\x8F\\xA4?\\xDD\\x98\\xEE\\x19\\x9F/"
		"\\xA6\\xC6\\xE1\\xA1\\x9Cl\\xB4\\xDDv\\xE7r\\xFB\\xACc\\xE0\\xE3\\x83\\x9DO\\xBD\\xED\\xDEK\\xEF\\xE1\\xA0\\x9B\\xF4\\x0F\\xBC\\xC0\\xDB\\x93T\\xBD\\x8D_^M5Q\\xF4\\x8Dv\\xFB\\xC8\\x7F\\xD1\\xC2\\xED(y\\x91\\xED\\xB0m\\x1D\\x9A]cgj\\xDFv\\x1F\\xA7\\xD3\\x8B\\xC3\\xED\\xA3\\xEB\\x9Bn\\xB7\\xDB\\x9D>\\xDB\\xDB\\x83\\x1B\\xE9\\x15)\\xC3\\xCF\\xDB\\xC1E\"=\\x85\\xA7xgxp~m\\x08\\x9D\\xDD\\xC1moz\\xFCm\\x7F\\xE7y(=\\xF4\\xBC=\\x94X\\xD7\\xF1`\\xFF"
		"!0Dk\\x7Fd\\x90N\\xE2\\\\OO\\x8EP\\xEF\\xC5\\x0E\\x0E\\xD5\\xA9a\\xF4\\x07\\x83\\xCE\\xC8\\xDBx\\x1C\\x1C\\\\\\xB7O\\xCCO^\\x18\\x1DNO\\x8E&\\xBB\\xE7\\xC3\\x13\\xE1\\xA8w\\xDE;\\xDD\\xD5\\x8D\\xCB\\x9B\\xCE\\xF9\\xF8U\\xD9x\\xFA\\xE6=\\xEF\\xFB'\\x171>\\xD5{\\x07;\\xD7\\xFB\\xE6v\\xFC|>\\xBD\\xE9\\x85;\\xE2hgo\\xF7\\xD0\\xDE\\x93\\xCF?\\x19\\xC6\\xDEa\\xF7\\xDB\\xC3S\\xDB\\xB0N/\\x03\\x90\\x14\\xBAft\\xFB\\xFD\\xFD\\x8Er|9\\xBA\\xFDf\\x8E\\x1E_\\x8D\\xCE\\xC1\\xE0|,"
		"\\xC7\\x925\\xB5\\xF6O\\xCE\\xBA\\x06\\xEAo\\x1F\\x19\\xD7\\xB7\\x8F\\xA7\\xB6z\\xF2\\x1A\\xBF\\x1AZ\\xB8\\xEF\\xCB\\xF6\\xE4\\xF3\\xD5\\x8B\\xECL\\x9E\\xFA\\x9D\\xBD\\x83\\xCF\\xD3\\xEBA8\\x18\\xEC\\x19\\x1B\\xBB\\x83\\x13\\xE5\\xF9\\xB1s|q.j\\x91\\xA2?mG\\x17\\xE2\\xC6\r\\xB2\\x0Fz\\xDB/\\x87\\xF6\\xF0\\xB3\\xF2\\xE9\\xF1\\xF3\\xD5\\xCE\\xC8\\x88\\x87\\x8E\\xF2\\xA9#(\\x8E\\xE1\\xD9:\\xDE9\\x91\\x8C\\xD7\\xC7\\xCEt\\xEF\\xF9t\\xD8="
		"\\x1Ah\\xE3\\x04x\\xE7\\xF6\\x85\\xF4\\xC7\\xFA\\xC3\\xADh\\x89\\xC6(\\x9E\\x18\\xC4\\xEDiI\\xF0|\\xD8}\\x94\\x0F\\xCEO\\x07'G\\x17\\x9F\\\\\\xC39\\xDE9\\xB9\\xDA\\xEE\\x19b\\x7F\\xFFh;\\xEEt:]\\xCD0v}k\\xD4=\\x9A\\xFA\\xB7\\x07\\xE7\\xDD\\x81|x~\\xE5\\x1Fz\\xAF\\xA4o\\x98}\\xD3\\x1B\\x85\\xD7\\xC6\\xE5\\xEE'a\\xD0\\x8E\\xF7\\xF6\\xA6\\xFB\\x9Ew\\xDD\\xED\\x9D\\x8B/"
		"\\xC6\\xE5A\\xDF0\\x9E\\x0FT\\x1B\\x0FvFd\\xF7\\xD6\\xC3'\\x87X#\\xF6Q\\xEF\\xD5\\x96\\xF4\\xEE\\x99\\xB73\\x1A\\xECt\\x8C\\xF3g\\xA3\\xDD\\x7F5\\xB4\\xA7\\x9B'\\xE3ygp\\xFC`^\\xDF\\xDA\\xA2yL^\\x8Dx\\x1C\\x8D\\xC5\\xA3\\xDD\\x871\\xDE\\x1D\\xDF\\x9E9\\xFD\r\\xE3\\xB1\\xFF4=\\xF2\\x1E\\x04\\xA3w\\x1Ev\\xDBF\\xFF\\xE0\\xE0\\xF3\\xA3ot%\\xE3\\xEA\\xB2\\x13v\\x9EG;Z|\\xFA\\xB9ox/O\\xC7\\xDA\\xA1\\xE6NN\\xF7\\x1E\\xCE\\xDACL\\xF6]\\x81\\xF4\\x9C\\xE1\\xE3\\xCE\\xF1\\xF0\\xE4t\\xFFA;\\xB9\\xD88\\xDE"
		"{8\\xD3\\xB4\\xCE\\xF3\\xED\\xA4sb\\xC8\\x8F\\x87\\xC9YL\\xBA\\x97\\x9D\\x9D\\x9Dn\\xEF\\xFC@0\\x9C\\xD1\\xA0\\xB3\\x1D\\x86\\xDB\\xA6\\xB9\\xEDk\\xB1q~q\\xFE\\xF8\\xD2\\xF3?\\xBD\\x8E\\xBF\\xDD\\xEE]\\xA2\\xB1\\xB9\\xE7\\x9F\\xAB=\\xA3s\\x14}\\xD6$KW5Cy\\x9DN\\xCD\\xC7\\x8B\\xD1\\x8Ep38x<\\x0F\\xF6\\xC7\\x1Dw\\xAF"
		"{\\xB51x\\xBE\\x19\\xEA\\xDA\\xB7O\\xE7\\x8Fr\\x97\\\\\\x10\\xE3\\xF9\\x8A\\xF4O\\xA7\\x97\\xDE\\xB1f\\xF4\\xCE\\x1F\\x9E\\x07\\xCE\\xD1\\xF1gl\\x187\\x8Fg\\xDF\\xBAG\\x1D\\xE3\\xB3\\xDD\\xDBO\\xAE\\xA6\\xE7\\xE6\\xD1c\\xAF\\xD7\\xDB?4\\x9EN\\xBE\\xE9\\x07\\xFD\\xC3\\x1D\\xFDLs\\xF7\\x9Fw\\xFC\\xC3\\xEB+d\\xED\\xECj\\xE6\\xF1\\xFE\\xC3\\x86\\x9A\\x88\\xAA\\xFBtt\\xB1\\xED\\x7F\\x9E~\\xDE;z\\x19\\x86\\xFB\\xC2\\xC9\\xF6\\xC6vp)"
		"<\\xB6\\xFB7\\x86\\x89\\xFA\\xA7Z\\xA7\\xD31\\x1E\\xAE\\xE3\\xC9\\xF9\\xEEu(\\x1F\\xBD\\x9E\\xDD<\\x7F\\xDA\\xBD1\\xFC\\x87o\\x9E\\xB1\\xFF\\xFA\\xED\\xB9;=\\xE8\\xECL{\\x17;g\\x1D\\xE7\\x96\\x84'7=C\\xED\\xF8\\x1Bg\\xBB7;\\xD6\\xB4#\\x87\\xE7\\xD2\\x81\\xA1o\\xE3\\xF6\\xC1\\xEE\\xCE\\xD1\\xC6\\x0E\\x0E\\xDC\\xBEr\\xB0\\xBD{t1x2\\xA6\\xFD\\xFE\\x81|;::K\\xCE\\xE3\\x83\\xE3\\xF3\\xC9\\x8B!L\\xA6~\\xE7\\xF2\\xA5\\x7F\\xDA;\\xBD\\xDE\\x16\\x85\\xB6\\xF1)\\xD4:/\\xA7x\\xFB\\xE2\\xF0\\xC2\\x1D\\x9C\r"
		".\\x1F:\\x1B\\x83\\xDDp\\xC7\\xD6\\xCE\\x14s\\xB4\\xB7\\xDD\\xD9\\x98N\\xE4Q?\\xEE\\xF7\\x0F\\x9EoF\\x91\\xD3\\xBB<\\xDCx\\xED_\\xF4\\x94\\xE3\\xD7\\xFE\\x0E\\xF9\\xB4w\\x82/\\x0F\\xBF\\x9D\\xBC\\xEE\\x1A\\xDB\\xFD\\xDEm\\xDB@\\xDF\\xBA\\xE7\\xAF\\x1D\\xB7\\xFF\\xD9S\\x91q\\xE4\\xBE\\xF4\\x90\\x1A\\xEF\\x18\\x07\\x07\\xC6\\x8D\\xE6\\xF6\\xBD\\xEBO\\xC6\\xCD\\xEE\\xE0`\\xFAz`]_<\\xE1\\xFD\\x07\\xCBq/\rW;;=\\x1A\\xEE#\\xCF\\x0E\\x1F\\xDC\\xD0\\xE8\\x7F:\\xD8\\xB9\\xD4\\xAC="
		"\\xFD\\xF1\\xECeW0\\xCF\\xBCW\\xE5\\xE6Tx\\x94\\xBB\\xF8(\\x1E]\\xDE\\xE8\\x17\\x89al\\xEF\\xBC\\xEC\\x18\\x1B\\x07W\\xEE\\xC4\\xDD\\xDB\\xB94\\x8C\\xFE\\x8D\\xD1!\\x0F^p\\x1Aa\\xE7h\\x07L3\\xE3\\xFC\\xF2\\xEA\\xE4\\xEC\\x93\\xDC\\xBD98\\xD8\\xFA\\xF3/.\\x08\\xD9k\\xAB\n\\xCE\\xE8\\x9A\\xD3,-\\xB8]\\xB1\\x99\\x06\\x96\\xAC\\xDC3X|\\xE7Iysm\\xE6\\xB1\\xA8\t\\x90\\xA8#a4\\xF1\\x13o\\xECgG\\xFAa\\xE54!\\xE0y[+\\x18\\xA1z\\xDBF]%\\xB3C~Y\\xB4R+"
		"{S\\xBD9\\x1E\\xFB\\x1Ea\\xB5\\xAEq\\xA3\\xE9\\xAA\\x1Be\\x97\\xB5\\x8C\\xBE\\xF3j\\xAD\\xA6\\xBD\\x11_\\xB5\\x81e\\xDFT\\xE1r\\x88u\\xCE-W\\x8EgV\\xD3\\xA2Z\\xF7\\xD2\\xD2;\\xE6\\xDE\\xD2\\xA6V\\xE5\\x95\\xA0\\xD5K\\xCBK/\t\\xAD=\\xE6\\xBB\\x92\\xCB\\xAA\\xD5\\xE4\\x1D\\xF2F|%\\xBAk^\\xF5Y\\xBA\\x9E\\xB6\\x9C\\xF4{\\x1A\\xB1\\xA4\\xCE\\xF9\\x97\\x18,8U\\xFA\\xA6\\x86:$1=?\\xAE\\x19\\xA2%\\xAF\\x85Z\\xB6\\xD9U\\xFFv\\xB3\\xD9e9\\xB5"
		"[\\x843.\\\\\\x90\\xBA\\xDA\\xD1\\xBF\\xB8O\\x177oA\\xD3\\xE6\\xEE\\xFB\\xF9G\\x1AV\\x9C\\xC8on\\x17\\x1B\\xB7t\\x7F\\xFD\r\r\\xAB\\x8C\\xD9\\xEF\\xE8\\xDE\\x1A*\\xDE\\xE4\\xA9\\x9F\\xF3#\\xD6\\x8B1\\xA6\\x1Bh_\\xCE\\x91X\\xB3Q\\xA1\\xC8h\\xD1F\\xC5\\xEAv\\x14\\x0E\\x8A\\xA7\\xDE\\xAC\\xDA\\xA0\\x96\\xD5x\\xD6\\xB8r\\xA9\\xB8\\xF9S\\x13\\xF6\\xB2\\xA4\\x97\\x16\\x1F\to\\x85\\xC9\\x90D3\\xD2\\xD7\\xBDJe\\x89~]mN\\xCC\\x9B\tsQ\\x96\\x95{\\x07\\xDER\\xFBf\\x10&\\x1F\\xE8\\xA5\\xA1\\xA5\\xF1\\x9C?"
		"\\xDF\\x02\\x86Kj\\xC3\\xBC\\xA9i\\xD5\\xB3\\x13k\\xC4\\x13P7\\xF3\\x92\\xF4%I\\x05\\x9Fg\\xE1\\xA4$0uunVcP\\xC09\\xD8n\\xDBN\\xD0\\x8A\\x87\\xE1\\xD8s_`\\x87\\xB9\\x1D\\xB7]\\xCF'q\\x1B\\xB5\\x05\\xA4\\xE36R%\\xA5\\xAD\\xC8\\xBA\\xD8N\\xDA\\xA8m\\xC61I\\xE2\\xB6g\\x87,\\xD4\\xA5\\x15?\r\\xFEE\\x12\\x14]G\nV\\x15AD\\xAA\"\\xA9\\xA2\\xB6\\xE2\\x8D\\xA9\\x99\\x15\\xBA^c\\xE8\\x8E\\xC4\\xB2\\x16\\xA5\\xE2t\\xCE\\xE4\\x98\\xDF \\xD3\\x16{Q\\x85\\x96\\x80\\xD6\\xB7~\\x160\\xE6\\xE2w\\x8A\\xAEz;"
		"h\\xF5\\xDE\\xB7\\xF5\\xF8\\xAD\\xC5$A\\xFD{PB3Yuh\\xBD~;|\\xA9\\x8C\\x7F\\xD3\\x8Eh~\\xCB\\xDF[%G\\x8E\\x82\\xED\\x01\\xAC\\xF9\\x1E\\xCA\\xF5\\xA5\\xC3\\xDC\t\\xA2\\xA2\\x84^p\\xEB\\xCF\\xE2\\xBD\\xAB\\xEA\\xB5\\x07\\xF5\\x1A\\xBEf\\x8B\\xD4D\\xB6\"[o\\xDF\\xF7}k\\x10\\xE0\\x7F\\x87\\xFA\\xE5\\xB4\\xFC\\x97\\x0E\\xF5\\xE3\\x96\\x9F\\xC1X\\xB4D\\xCF\\xA3\\xBF\\x97\\xBC9\\x05\\xAEr\\xA3_#2\\x98\\xF8\\xE6\ne\\x9D\\x97\\x9E\\x89\\xA6\\x02\\x86\\xD8\\xF4W\\x07(\\xAD\\xC2"
		"[\\x95\\x06\\xE5\\x9A\\x16\\xC5\\xF0\\xD4I\\xE6E\\xAFG\\xA9\\xAF\\xE8\\x8F0\\xC8L\\xB1%\\xB5\\x16C\\xF2\\xD6\\x8AAZh\\xE7\\xADSE\\xDD\\xEB\\x10\\xDFF\\xFA\\xDB\\xEC\\xEA7W\\xBD\\x90\\x11\\xAAop[x\\\\\\xA7>.\\xB1r2\\x8A\\xAB\\xA8Oy\\xA16\\xAE\\x99<\\x8B\\xC3\\xB0\\xAA\\x0E \\xB6>Z\\xD06~Q\\xB1\\xB5\\xA6E\\xB5\\xB5K\\x08a+\\x82\\xF2T\\x9D\\xC7X\t\\xD5\\xA0\\x92?\\x19F\\xE1d0\\\\w\\xDE\\xD5\\xD7\\xFC{\\xA79\\xB7\\xF2\\xB2\\xC8\\x9A\\xA3\\xA0\\x19\r\\x89\\x97\\xF8\\xD5y2\\xE3*\\xBCB&\\xAEcp\\xD4V\\xF0"
		"?\\xE7!4n\\xAD\\xCBo\\xD6\\xBB\\xC8\\xEE\\xA7<(\\\\\\xAD\\xB3\\x81\\xAB\\xCC\\xF1%\\xD7w\\xFF\\x94k\\x81+\\xAF\\x8B\\xEB\\xEFZ[|\\x85[Y\\xE9,~}\\xC1\\x9A\\xEBan\\xB9\\x93\\xBC\\xB6\\xD6\\xFA\\x1E)+vvs]\\xF6\\xB6\\x89\\x95\\xF7\\xBE/t3\\xFC\\xF7z\\xF6\\xBF\\xD7\\xB3\\xBF\\xB6\\x9E\\xAD\\xE5\\xC7E\\x97n\\xAE\\xB8_q\\x9DS\\x17\\x8B\\x17Z+M\\xF5\\xFF\\xBF]\\xF8\\xFA\\x96S\\xDA\\xFF\\xC0\\x8D\\xAFo\\xBFxy\\xFEEO\\xF5\\xAD\\xC9\\xF0\\xD2+\\xF4(\\xF2\\xCC\\xFEHo\\xD5K\".\\x19.z\\xD7OYm\\xAC\\x8B,"
		"\\x7F\\xC5\\xA4\\xF8W\\x15\\x9B\\xF8&l\\xCE\\xEF$\\xCD\\xF9}\\xA4\\xC1\\xF5\\x90\\xB5\\xB6\\x19MoB2\\x89\\xD2\\xA3\\x8C\\xEB\\xAE\\xF4\\x97\\x9AfAxO\\x97\\xEFuS\\xD4!\\xAE9\\xF1\\x8B\\x1C\\xCA&m\\x93<\\x91 \\x89\\x17\\xBC\\xFD{I-5\\xF78\\xD5\\xDE\\x9E\\xC0\\xAD\\xB6\\xF2\\x16^\\x9DR\\xB66Wg[\\xB44Xyzd\\xAD\\xB9\\x95\\xDE\\xC2\\xBB\\xF6\\x95\\xEC\\xBF\\xD7\\x06X\\x8A-O\\xFDc\\x867cF/!\\xA3M2\\x1A'\\xB3kM\\xB3,\\xF1d42\\xA3\\x97B\\x8E\\xF5\\x8F!\\x99\\xCE\\xF8>\\x1E\\x86\\xD3"
		"{3\\xF0FTv\\x96V\\xB6p\\x19\\x92\\xE7Sf(_\\x8C\\xB4\\x82O\\x00-c\\xD5\\xD5\\x98\\xD9\\x0BR\\xE7p\\xC0\\xD8V\\xA9{\\x1B\\xE6E\\x979\\x01\\x12\\xB86\\xE4\\xDE\\x0C\\x9C\\xFB\\xD86}rO\\\\w\\xC1\\x9ECA\\xFA\\xD3\\xACpI\\xDB\\xE2\\xF8\\xF6\\x85\\x99\\xE2\\x95yV\\xA5\\xAF}C\\x8B\\xE9\\xFB\\x9C\\xD0\\xC2q-\\x91\\x8B\\xF3,I^\\xC60\\xBF\\xD8\\x9Bhu_\\xA2\\x95=\\x89\\x96\\xF6#\\xAA\\xED\\xC5z\\xAE\\x8D}\\xCF!\\xF7n\\x14\\x8E\\xEE\\x93!\\xB9O\r\\xCD\\xE5\\xED\\xA0_}3!\\x9F?\\x88\\xC2\\xBBe\\xCDY\\x963^/"
		"\\xE3Z\\x99\\xDE\\xC8)R\\xE5\\x16B\\x91\\xDE>\\x98\\x7F\\xE8\\xF5\\xAD\\xFA\\x15,\\xBF\\x84`%?\\xFE\\xDA0\nk\\x0E\\xA2\\xB0\\xDE\\x10\n\\xAB\\x07P\\xF8y\\x16\\xA5\\x07F\\xD6nZs}\\x16\\xADf]\\xD4\\xC0\\xF9\\x9C\\xEB\\xE5\\xFAo.\\xFD\\xA5\\x91\\xFC/\\xC5\\xA4\\xE9\\xDAx\\xDD\\xC6\\xDD\\xAC-Hkr\\xD67\\xB0\\x92q\\xADLof\\xD1u\\x18p\\x05{\\xFD$\\xF3\\xBC\\xB5\\x87\\xD7c\\x9FJ\\xBEE\\xBD\\xBB\\x92}n\\xDE\\xC4>\\xAE\\xE9\\xFBuVD\\xE9,\\xDF\\x98D\\xF1\\x98\\xD0{j? v\\xEA"
		":\\xAB\\xEF\\xF6\\x83\\x92B\\xD23z\\x9F?HK\\x0F\\x11\\xFE\\x06l\\xE5.\\xFCUt\\xD5\\xC1+b|;\\xC2\\xDFGZeR\\xACa\\x1D\\xD6\\x8F\\xE62Y\\xCF\\xEE\\x90ZK\\xA2W\\xF3\\xAE\\x8Br\\xC9\\x14\\xB9\\xFDP\\xEA\\x86U\\xE3\\xBD~\\xB9\\xFA)\\xB4\\xA2\\xD8O\\x14Y<\\xC5`m5[L\\xB7\\xBC\\xF8\\xDE\\x9D\\x04\\x01\\xF1\\xEF\\xA9"
		"{\\x1F\\x9CM\\x0B6\\x1Ck\\xBDl\\xD5\\x97\\xC5\\xFCh\\xF0\\x08\\xA9\\xBC\\xCC#\\xA4\\xF0_D\\xC4\\xCB\\xE8\\x8EGH\\xA3\\x10\\x95B$A\\x02\\x90NA\\x1A\\x05\\x89\\xE2\\x1D\\x8FD\\x81B\\xF4\\x02\\x04\\x01D\\x14\n\\x10\\x91BP\\x01\"Q\\x88X@-b\n\\x92\\xF2\\xFAE\\x99B0@\\xEE\\xF8Fz!d\\xF5\\xB7\\xC1#Q\\xA19e\\xFE\\x0B\\xD6\\x84;\\xBE\\xE19[#s\\xE0\\xD9M{H\\xEC\\xC7p\\x924\\xE1(h\\xBE\\xD0\\x87\"\\xB4\\xB9\\xA2R\\xA0\\x896WT\\x0BH\\x98;=\\x8DDi\"\\xAC)"
		"\\x8A\\x8C\\x11\\x12%A\\x97\\x91\\xA2\\xCBr\\x83o\\xD8\\xBE\\x19\\xC7\\xE5\\x9C\\xDC\\xEC\\xC9\\x1C\\x8FS\\x08TH\\xBBN\\xD4\\xF8\\xC6\\xC1\\xEE\\x99\\xD1\\xDBi\\xF0\r\\xD3\\xF7\\xC3\\xE9\\xD6C\\xE8\\x05M\\xD3iR\\xA7\\x10\\x89\\x93\\xD4/\\xD5\\xE0\\x1B\\x94\\xE6\\xC4\\x1C\\x0C\\xC0\\xB1\\xEC9[\\xC6uSR5M\\x13\\x91\\x80\\xDA/\\xA2av{\\xCD\\xED\\x97\\xD3\\xB0\\xBBst\\xDDGV\\xBF3+\\xE3\\x87\\xA6\\xD3L\\xBC\\x11\\xD9B\\xAA\\xA0)\n\\xC2:V%\\xB5\\xC17\\xD2}\\xB8-\\xA1\\xC17\\xA8\\xB7\\x96~"
		"\\xA3o\\xF9\\xD8*{\\x1D\\xEA\\x96\\xFB\\x905\\xB2\\xB7\\x86I2\\x8E7\\xDB\\xED\\xC4i9\\xE1\\xC4\\xF2\\x89\\xED{\\xF6c+ I;q\\xDA\\xD1\\xC4ogT\\xFEKd\\x06N8*\\x92!J\\xEF\\xED\\xA7-\\x84\\xDE\\xBBq2\\x07wG\\xC9\\x96\\xF4\\xDE\\x1Al\\xA5\\x11G\\xEF\\x07\\x13\\xCF\\xD9:9~o\\xC6/\\x81\\xBD\\x85\\xDE\\x0F\\x92\\xD1\\x16\\x96-\\x82E_x5EAx?\\xB0\\x9D-$\\xF9\\xE9/z\\xEF\\x8C\\xCC-\\xE1\\xFD\\xE4~\\xBA\\x85D\r\\xBE\\x0C\\xB7TQx?\\x89\\xFC\\x94\\xE8w\\x92\\xF1N\\xDC}"
		"'\\xEEN\\xA7\\xD3Vb\\xC6\\xC9K\\xE0Y\\x96O\\xE2\\x96\\x17\\xBC\\x13wM\\x9B\\xFAm\\xDE\\x89\\xBB~8\\xF0\\x82w\\xD2nD\\x92I\\x14\\xDCO\"\\xFF\\x9D\\xB4\\xFDN\\x94\\xB3<\\xEF#\\xE2\\xAE\\x85\\xF3=}\\x05\\xCEV\\xDDh\\xBDO<\\xCB\\xDC2f\\x95\n\\xEFv\\xC4w\\x9A\\xF0N\\x97\\xDE\\x89\\xC2\\x05 z'\n\\xC7)\\xAE\\xF7\\xC3`\\x0B\\xF0\\x0F\\xC2p\\xE0\\x13\\xD3\\x89I\\x04\\x17\\xD1\\xC5\\xB0\\xCF\\xF3\\xDE\\x8DF[\\x02t\\xCE=![\\xE8}"
		"0\\x86N\\x18\\xC7\\xB6\\xE3o\\x05\\xA19\\xF6\\xDE\\x9B\\xD0\\x8F\\x08cU\\x12\\x15\\x05\\x0B\\xADY\\xAF+\\xF2\\xFB\\x89in=k\\xCA\\xFB\\x89im)\\xF8\\xFD\\xC4t\\x9F\\xFC\\xAD\\xE30\\x81\\xB6\n\\xC6\\x87\\x0E\\x8C\\xDF;\\xA9\\xA3\\xEB-\\x01~\\xDF\\xA9\\xDD=J\\x02M\\xEF\\x0E\\xA3pD\\xDEI\\x1D$\\xA2\\x96\\xD0R\\x90\\xA2\\xB6\\x90&\\xBFS\\xBB4\\xC5\\x9B\\x8C*i\\xEF'\\xE6\\xC8\\x8212\\xC7[\\xD7^\\xE0\\x84\\xD3\\x18\\xBE?m!\\x8A\\xFF\\xFD\\xC4\\x9Cn\t\\xEF\\x89}?\n\\x1D\\xB2e\\xBEw}"
		"\\xE2\\x0C\\xA0U\\xB69\\xF6\\xB6\\xD0{`\\xEF-\\xEA7}'m\\x8F\\xCD\\x01\\xB9\\x7F\\xF2\\xC8\\xF4\\x9D\\xD4\\xA1\\xDF\\xC7f2\\xA4\\x035?\\x94\\xEF\\xC9h+yj\\xA1\\xF7vro\\x87\\xE1\\xA3G\\xEE\\xC7\\x11\\x89I\\x90N\\x85\\xBFO\\xB6@\\x906x$Qi&\\xEA\\x0Be\\x80\\x865YG\\x82 i*l\\x90Q\\x11\\xF0E\\xD6\\x95;\\x1EIT\\xEEIB.\\xC0$\\x91\\x97$&\\xBD\\xD88\\x7F\r\\xFE\\xFD\\xDF\\xFE\\x07G\\x87\\x97c\\x83K%\\x98$\\xF1H\\x10Y\\xDE\\xF3Go\\xCC%\\xE1\\xEC\\xCE{H\\xC6<\\x12\\xA8 \\xE4\\x91NQ\\xCB\\x14\\x00\t"
		"\\x8C\\xD4T\\x0E\\xE5Z\\xB4\tW\\xA8BQ\\x85\\xE5\\x94S\\xC2(\\xA9*\\x8F\\x049\\x17}\\x92\\xC6#A)\\xA4\\xEB\\xF4\\x19\\xE0%\\xEC#\\xF0\\xE1\\xDE\\xDF\\xD3\\x1B\\xB8\\x1B<\\xC2\\x02\\xCBV\\x90\\xFE\\x18\\xF1H\\xD0rTX\\xA4\\xCF\\x00/\\xA1\\x1A\\xC7\\xD3\\xF1\\xFD\\xBD5\\x004\\x12\\xCB\"\\x16\\x8Aa\\x06\\x93\\xEA\\x8A\\xC5v\\x14\\xFA>u\\xC2By\\x99\\xE5\\xC5\\x052\\x14\\x1E!\\xA1\\x80O\\xA5\\xCF\\x00\\x07|\\xBC\\x82u\\x80j\\x0C\\xAA\\x16J\\xEATJg\\xCF\\xB2@\\x9F\\x01\\x9E\r\\xAC\\x8CR\\x98,"
		"\\xF0_T\\xE5\\x8Eo\\x0CA\\x1ET\\xB7`\\xC9sB\\x82\\x18\\xB6\\xDE\\xDB\\xAAe\"I\\xD7\\xA4\\xA6i\\xABV\\x13k\\x82\\xD44M\\xC1l\\x12\\xC5\\x16MW\\xB5DKS\\xDAV8\\x08\\x9BXUf\\xDB\\xB3S\\x00\\xB4F^\\xD0\\xB2\\xE3\\xB8\\xC1\\x7F\\x11E\\x85\\xC72/\\x8A\\x1A\\x10!2\"\nzU\\x96\\x18L,\\xF0\\x8A\\x8C\\x19P*\\x02e\\x06,\\xAAW\\xB0\\x05\\x1A<\\x92\\x15\\x96\\x96\\xB2\\x88\\x8Ad(\\xA02\\xA0R\\x04j\\x0C\\xA8\\x16\\x81:\\x03j\\x05\\xA0\\xC2\\xBAQ\\xD6\\x8B@\\xD6\\x8F\\x8AP\\x04\\xB2v)\\xA8\\x08d\rS\\xC4\""
		"\\x905L\\x91\\xB26@\\x0B\\xE8\\x84RX\\xFB\\x14\\x9C\\x0F\\x9B\\xA2d\\xF3\\x93\\xF6\\x96\\xA2\\xD2g\\x80\\xE70-\\x9D*\\x95\\xF9\\x1F\\xA7\\x07\\xB8\\x9AI\\x18\\xFA\\x96\\x19U4?K\\xE7X\\xFA\\xEC\\x19H\\xD1\\xD3\\xF9\\xAAhK\\xD0\\xA6{R\\x0B\\xB1\\xB2-\\xAB\\x1C\\xA9*0\\xA4:\\xDF\\xE8\\x19\\x07\\xC7Y\\xC9\\x91\\xE9\\x05\\xCDLr@U=\\xD3\\x0B\\xBA\\x99(QQZP\\x15\\x96P\\x93^G\\x06{,\\xA3\\x90\\x86\\x8E,$\\x8C\\xBE\\x89(+\\xC7\nB5\"\\xAB\\x06\\xAD\\xACf\\x11n\\xC0\"e\\xD2%e"
		"[\\x15\\xA7\\xD2I\\x95j%S\\x1AZ@\\x1C\\x0E\\xF4A\\x1A\\xDB\\x92\\xDA\\xC0i\\x02`\\x94\\x19\\x02\\\\`$Ua@\\x99ot./.N\\xA0;\\xE9{\\x03\\xD2\\xFD\\xDC\\x8CB\\xB8\\xB6\\x14\\xEEtl\\xDA^d\\xC3f=|\\xF7\\xEC0\\xE0f\\x04\\xD0k\\xFB\\x1E\\xE2\\xE6(\\xDD\\xBD\\x83G\\xA8Ue\\x15\\x14\\x84\\xAC\\x9A\\x8B,\\xD66=\\x95{\\xAAV'\\xF3\\x8A\\xC6\\xAB&\\xB0\\x9C\\xC5\\xC9\\xA4\\xA1\\x14\\xA8\tu\\xC5'\\x1E7\\xFB\\xD2l\\xA6\\x06\\x1D \\x12Y\\x19\\x94\\xD3\\xA5I\\x99@L\\xE9\\xD2p*?\\xB5\\xE5}"
		"\\x0E\\xE8d\\x96\\x13\\x17\\xD0)T\\xA16<72Gds\\xFF\\xA2w\\x049\\xD5\\xE2|\\xA0V\\xEB\\x8C)<g+\\x9Fc\\xA5\\x14:\"Y\\x1A\\xD2\\xB4t\\xBAj\\xC5\\x15\\x8A\\xA6\\xD39\\xF1\\x05\\xE3;\\xBE\\xD1\\x8A\\xE1\\x0E\\x9E\\xC0|\\xBA\\xBF\\xF7\\xBD\\xE0q\\xB62\\xAA\\x8B\\xEF\\xA0\\xE1ClM\\\\_j\\x9D\\xD0\\x82\\xF9Xp\\xA1%\\x16_N\\x065\\xA4\\x9Fi\\x1D\\xE9\\xAC\\xE6\\x8B\\xD5\\xA6\\xA0\\xFB"
		"{\\xE2\\x93\\x11\\xBC\\xEF\\xA6\\x19O\\xAC\\x9C\\x82\\xF9\\x97H\\xC1\\xBB\\xAB\\xD3w\\xC0\\xD1\\xC76\\x87roX\\xBE\\xC6\\xF7\\xE2\\xA6O\\xDD\\xE9u\\xB5\\xD6&\\xAES\\x7Fqw\\xB2\\xC1#]H%\\x9D\\x96\\xF2\\xA4$\\xC1h\\xE8(\\x05\\xEA\\xC2\\xA2\\xA1\\xCE\\xE4^u\\xA4gIH\\x17\\x19\\x16\\x94\\xCBr]JEXA\\xEE3\\xED\\xA5\\xE3T:\\xEA\\xF3\\xA6C.\\x12\\xF2\\xAF\\xCDf\\xE2\\x05/) 7\\xB7t\\x99\\xA1((\\x0F]a0y\\xAER\\xC8\\xAF\\xA6\\x82n\\xA6Dt\\x8D\n"
		"\\xC0\\xFCYO\\x05\\xA2\\xAE\\xF1\\x8D\\xDD\\x93\\x93\\x8B\\x9D\\xB3\\\\\\xE6A\\xA7grp\\xBEw\\xEA\\x13h\\xEF0\\x11\\x9D\\xC9JQ\\x10X%z>\\x1DD\\x01e\\xA2N\\xD3e\\x00\\x88\\x14\\x00\t\\xCB&s\\xDE\\x19\\xA2 \\xB1\\x12\\x05\\x9BB\\x04\\x8B\\x92\t3\\x86W\\xA6\\x00Hh\\xC4O\\x83\\xCD\\xF8i\\x00\\x96\\xB1\\x00\\xD6\\x11\\xBD\\xA9\\x1A\"/\\xB6h@q\\x83oD\\xA1O\\xB6\\x98\tn\\xA6\\xF43:\\xA80\\x85\\x8F\\x99\\xECl\\x80\\x85\\xDF\t\\x9F\\xB7\\x80\\xC1\\x15\\xCC)\\x18hRXmr\\x91\\x04\\x95\\x01\\x15\\xBEq~"
		"j\\x1C\\x97p\\xDES\\x97\\x16D>\\xD1\\xD7\n\\x00\\x0E\\x8DeW\\x8B\\xED\\xD23\\xA9\\x9A\"\\x05\\xF3P\\xD5iB\\x8DT\\x85\r\\xFC\\x06/\"\\x94fb\\x16'+)2`\\xDA\\xD3\\xBC.\\xAB\\x00\\x95\\x18T,f\\xC5\\x0C(\\x95\\xB2\\xCA\\x0CZP\\x12\"R2i\\xCD\\xCA\\xAA\\x14\\x00\t_4A\\xBB\\xAB\\xA8\\xAA\\x98\\xD8a\\xE0\\x98\\xD1KIs1\\xFB;\rW*>4\\x9Bf\\x14\\x85\\xD3&\re\\x83\\xB6i\\x0C\\xBF:g(\\x02\\xE7\\x8BHg\\xA9\\xDA\\x9Bj\\xA7\\xDF}3\\x1A,%\\x84q\\x80(\n\\xAC\\x92t`t]"
		"\\xB8\\xE3E\\xE8\\x11\\x00\\x82\\xA3\\xE9\\xB7\\xB6\\x9B\\xEE<B\\xAD\"\\xAB\\x00\\x15\\xBA_\\x942\\xED\\x96v\\xBF\\x88)\\x00\\x12\\xD2\\xA1\\x13)q2\\x83\\xE2\"\\xC5\n\\x03\\xCA\\x94b^\\x13t^C4Ee)J\\xB1*\\x8D*\\xCF/\\x08\\xA6\\xD0\\xDF\\x9D-\\xD3\n'\\xC9f\\xBBm\\xF9f\\xF0\\x08\\xF4\\xE94]\\xA4\\x8B\\x15\\xE5\\x8E\\x17\\xC1\\x94e\\xBAP\\xA6\\xCF\\x88>\\x03\\xBC\\xBCF\\x9CiPQ\\x12Y\\x8E\\\\v\\x89\\xB0\\x12\\xD5Q\\x01\\x0B\\xA6\\xCF\\x00\\xCF\r\\xB9}*\\x9A\\xAF\\xD3 \\x98l\\x9E1#u\\x16\\x1BS~"
		"l6\\xBD\\xC0\\x83~\\x05\\xAB\\x90\"\\xC4\\x85J\\x95\\\\\\xD8\\xD2JU\\xFA\\x0C\\xF0\\xC6\\xFE\\x8E\\xB1]\\x14\\x98s\\x06\\xB3\\x08\\x8BW\\x9A\\x97-\\xE20E\\xA83\\xE0\\x9C-\\x15\\x84\t\\xE1\\xE0\\xA3\\x99\\xDD\\x0C>\\xF4\\x1C\\x92\\x1A\\xCAg$&\\xC9y\nn\\xF0\"\\x16\\x18\\x0E\\xBD\\x80\\x18\\xD6\\xB7\\x00\\xC4E\\xF3\\xB9;\\x89\\x93pD\\xA2#p6\\xEC\\x86\\xD1(\\xA3\\x96^\\x148\\x0B,\\x03\\x9C\"+\\x8E\\x8A8%\\x06\\x14\\x0B8\\xCF\\x88\ra^\\xA7f\\x1CO\\xC3\\xC8)aMI\\x16\\xC1rc\\xD2\\x9E\\xF6\\x1A,"
		"\\x84u\\x9D\\xC2s<\\xBBTO\\xF4H0\\x89\\x0BT\\x01\\xEC\\xFE~f\\xC4\\xCF=7\\x9B\\xA34\\xBB\\x08\\xCBh\\x8AQ.\\x92\\xAB2\\xA0R\\xEE\\xDB9,P\\\\c9\\xF3\\xF5\\xB5\\x88\\xF5L\\x95h\\x1A\\xF0\\xB9,P\\x00$\\x94\\xD0=y\\x0E\t3f*=5S\\xF3\\xBA\\xC1\\x8B2J\\x0B\\xCBE\\xC9+\\x8BT3P=\\xE4\\x10\\x17\\x1A\"K\\x14\\x04I\\x14\\x0C\\xAE\\xA2\\xAC;l?n\"P\\xB2[=\\xA4sHm)\\xC8\\x17\\xD5\\x16\\x129\\xF8\\x94FB\\x93\\xFE=B:\\x87qK\\x05\\x05$\\xE3\\x99\\xE2\\x00\\x89\\xD8\\xE8R\\xB3\\xFF\\x03\\x89\\xED\\xBF\\xBE6 Y\\x9E\t"
		"\\xCCY#\\x15\n\\x80\\x84/:x\\x8A\\x04\\x85\\xD7%\\x89\\xD7%|W\\xA3\\xFA\\x86\\xE4)\n\\x03&\\x82K\\x1AP\\xD4p\\x0B\\xEB\\x1C\\xD6\\xB5\\x96\\xAEAM*C\\\\T\\xC6\\xB2\\x96\tKV\\xBDN\\x01\\x900_=\\xAFK2\\xAFK\\xC0?\\x8A\\xC0r\\x15\\x15\\xA0\\x92\\x8B\\xC0\\x14\\x97\"R\\x00$\\xBC\\xA1)L\\xAA~AH\\xC6\\x80DbH\\x8AjP\\xC9%&\\xABJ\\xA6\\x00H\\xC8\\x19\\xBA?\\xF1\\xECG\\xC3q\\xF6C?\\x15\\x00\\x8A\\xC2r\\x15\\x8D\\x01E\\xCD\\xC4)\\xC3\\xA5Q\\x00$,\\xEB\\x02\\x9D\\xE5\\xD2\n"
		"EU\\x81\\x01u\\xFE\\x8B\\x8E1\\xAFc\\xA8AE)T-\\xB2\\x9E*f\\xD24\\x95\\xE2\\xAAD\\x01\\x90\\xB0\\xC0\\x1Am\\xF0\"\\x98W4\\x93\\x94OfU\\xCED$\\xC3\\xA4P\\x00$|A\\x82\\xA2\\xA6\\xBDq\\xEE%d\\x7F\\xCEw\\x90\\xDB\\xF1\\x99\\xE5\\x98x\\xF6\\xE3\\x0B\\xF3r\\xA6 \\x10.\\xBE\\xF923\\xC9DUe\\xE8\\x95\\x02\rZ&V\\x19\r:\\x05@Bc\\x1F-\\x90\\xC9\\xF7\\xF74h\\xB4\\xC1\\x8B\\x9A\\xC0\\xB2\\x17\\x84\\x14\\xA8\\xD4T\\xA2f6\\xF45\\xF9\\xF3\\x89p`\\x0Br/\\xE1\\x843\\x03\\x8E\\x8CL\\xCF\\xE7\\xA6^"
		"2\\xE4L\\x8E.\\xC2\\x92\\x90\\x9B\\x8C\\x1D3!\\x90%\\xE2\\xC6L,\\xB6\\x00\\x03\\xD4$R\\x99\\xDA\\xD8=9\\xEB5\\xF8\\xC6\\x88$\\xC3\\xD0\\xD9\\x1A\\x871\\xCC\\x9F\\xF4\\xF8\\xCBV\\x9By\\x85\\xDB\\xD4'\\x9C\\x8A|\\x9BI\\xEE\\xFB\\x19\\xCC\\xB4m2\\x86\\x88f3\\x8AI\\xB2uy\\xB1\\xDB\\xD4\\xF2}\\x95\\x01\\xBDh\"\\x196\\xC1U\\xD1\\x8C\\xBDA\\xD0\\xF4\\x02\\xD6\\xAD\\xA2&QQ\\x9E\\xF7\\x16\\xA8t,\\xD1\\x04j\\x1B A\\xD3\\x00,30.\\x08U\\xD0\\xE4L\\xCA\\xB2\\xC2*\\x05@BZX\\x14)"
		"Xc\\xE0\\x82\\xA2\\xD7r\\x11\\x9B\\x96\\xD5\\x05\n\\x80\\x84EK\\xA0\\x82W\\x84\\x8BG\\xA6\\xEF7\\xA9]<\\xB3\\xFA@A\\x03\\x06=\\xF7\\xA1\\x8Az&gKK.\\xDA\\xFF\\xBA\\x94\nr\\xBD\\xA8\\xC2\\xAE@fg\\xD3\\x144\\x1C\\xCD\"\\x15\\xA6\\x96^\\x90\\xC9t\\x1F\n2*\\xA98CH\\xD2\\xEF\\xA8T\\x16\\xB1\\x0EBO0%\\x99\\x93\\xE4\\xF4\\xF5\\xC9\\x9C\\x88[\\xAA\\xCC\\xC9zK\\x95\\x8FR\\xA1\\x98f\\xF3\\x91\\x060\\x8E\\xFE\\xC1\\xA6$\\xB7\\x04A\\xE4\\xD8\\x1F(\\x88\\x9AXo\\xC9\\x1C|\\x1C"
		"!\\x08\\x06\\xE2D\\x15\\xB7D\\\\\\xC2.\\xD0LG\"\\xD4\\x829\\x9A\\xCD\\x90pK\\xD3\\xB9\\xF4sFCJ\\xD8+\\x90\\xAD\\xA6\\x92\\x13!\t$\\x81\\xAE\\xA5bWW\\xD3\\x96\\xF0\\x88\\xFA\\xCB\\x11\\xA6\\xCD\\xD6S\\xD1\\x977Q\\x92\\x99L/R\\xD1\\xA4ml\\xD26\\xA6\\xCD\\xC2\\xCD\\xF4\\x0F#\\x9C\\xA6T\\x9A\\x08\\x94\\x01\\xF5\\xB4\t\\xBE\\x88\\xD2\\xCE\\xA1\\x7F\\xCAmL\\xFB\\x80\"\\xE1\\xB0\\xA6\\xB5T\\xA9\\xA6\\x8D\\x19e\\xAF\r^\\x12\\x84T6\\xA6\\x8D\\x94\\x04D\\x1F\\x01\\\\i\\xA4\\x04z\\x99\t"
		"G\\x840\\xCD.e2\\x8E\\x8AKI\\xC0\\x14\\x00\tu&j\\xEA\\xF5\\xA2\\xCBP\t\\xB47\\xCDZp\\xDCI\\x82\\x92\t,jcK\\x82J\\x01\\x90PBX\\xE7\\xDB\\xE0\\xEA\\x1D\\x1EI8\\x86\\xEA4\\x86H\\xFDiD\\xF1\\xC4\\xCAvqa\\xC5\\x1E\\x98O\\x80Xg\\x88\\xB5\\xCAz\nf\\x92\\x84\\x04\\x96\\xAE\\xB3y/)\\xF8\\xAE\\x88&&fd\\x0F!'Js\\xA2y\\x87_>\\xCBK\\x849\\x919%Q\\x0C%EV\\xB2\\xE8\\x9C=\\xA7x\\xCFH<\\xF1\\x93x\\xDE\\xB4/!J)hFiVf@KH\\x9A\t\\xFA;\\xBEq\\x94\\x8AS\t"
		"a*\\x9B\\x1B\\x07\\xC7\\xA7\\x97\\x173\\xA7\\xEA\\xCC\\xFD\\xD8\\x80\\xB8~j\"\\xDF\\x03\\x1C,\\x1D\\xD3\\x9F\\x90\\xAD\\x7F\\xFF\\xB7\\xFF+\\xFB\\x078d\\x8A\\x03p}A\\x92N]\\xC2\\xD0%\\xB4\\xF4$q\\xB5\\x06\\x85+w\\xBC\\x84\\x14\\x96U.\\xF0\\x04\\x98G\\x14\\xA8\\xF0\\x8D#\\xA3\\xB3s\\xD4\\x00\\x97D\\x94Y\\xED;\\xA0l\\xA0\\x1E\\x8D\\xE5S\\x0B\\x1C\n\\xF6\\x10\\x05ji\\xE5w\\xAC\r$-\\x94\\x121\\xD3\"_(\\xF4\\xAEQZ\\x140\\xF43\\xCB\\x88\\xBE\\x91\\xCC\\x9D\\xF8\\x00\\x82snv\\x18\\xC1\\xDDp"
		"[\\xA1\\xEB\\xCE \\xE6\\xD8KL\\xDF{%\\x05 \\xF5\\xA1l5xI\\x14\\x18As\\xB2}\\x10y\\x0E$\\xA34\\x99\\xC5_P)+\\x89\"\\x03\\xA2r#fZ4\\xEB\\xF9J\\x83f9\\xE6\\xDAt\\x9A\\x15\\xFC\\x82\\xB0(A\\x15\\x12\\xABB\\xE4\\x1B\\xA7@\\x07f\\xCF\\xC5\\xE9.\\xB2\\x91\\x04#\\x0Fa\\xAC\\x01\\x88\\x8D\\x18,\\x8A+\\x83\\x9B\\xEF\\xBF\\xE7C,\\xAA\\x99\\xE6dH5\n\\x80\\x84\\xC6\\xBE\\x08U\\xEB\\x0C\\xA0\\x15rI\\x02\\x03\\xEAY\\xD5`q\\x01\\x08\\xD6\\xC7H\\xA4\\xBBV\n\\xF4\\xE7\\xBC\\xB9\\x10\\xA5+1 "
		"AT\\xA0\\xAD\\x92\\x98\\xE9_\\x86\\\\\\xA2\\x00H\\xA8]\\x11\\xD1\\xBDc\\x98x``\\xD1\\x8C\\x053A\\x92\\xE4L\\xCF2t\n\\x05H\\xF9>\\xD4\\x1C:\\x88\\x8A\\x02\\xAB\\x88\\xA2TYf\\xA5\\x88R\\xA3\\xAA5\\x9D\\x8B-\\xBA\\xBE\\xF9\\xEEz\\xBE\\xBFI\\x9D\\xB6q\\x12\\x85\\x8Fd\\x93\\x1E\\xBDO\\xBF7G^B\"\\xDF\\x1By\\xC9&\\xCA\\x80\\xE9\\x81>q\\xFC\\xFC\\x03\\xEA\\x99\\xE92\t\\xE1;^\\xC2\\x02\\x93\\xFA\\xEC\\x11e\\x92\\x19l\\x05\t\\x8B\\xF4Y\\x9A\\xDF\\xF6\\xCD\\x04;x\\xCE\\xB8\\xD2S\\xB3i\\x06A8\tl*"
		">\\xA1iXbH\\xC4\\xCC\r+a\\xCC`\\x8B4\\x06E\\xCC,\\x1A&\\x99\\xB0\\x9C\\xCA\\xF1l>\\xE0T\\xB0CB\\xC1\\xB6\\x92\\xB0\\xCA\\xC0\\xAC+%\\x15\\xC4\\x07\\xD6\\x18t\\x99&`\"\\xB1\\xB0I#a\\x9D\\x95+\\xB2\\xA1,\\xCC$?l=\\x8A\\x00A\\x14\\x02)EZd\\x91\\x81\\x0BK/I\\x96Ri_(\\x8D)\\x04R\\x16\\xE9\\x008\\xBB>\\x195'\\xE3\\xAC?d\\x99\\x15\\xC2E\\xDCL\\x1F\\xE4\\x00\\x95\\x02 aq\\xBB\\x99N)5\\\\\\xD6X\\xC1\\xE2\\x14\\x91u\\xAAvrus\\x1A\\x11\\xC7\\xA3\\x11\\x8D\\x99\\xAE\\xF9\\x82\\x04]\\x9B\\xE9"
		":z2\\x95\\xEE\\xD2l\\xC5\\xDF&f\\x04\\x84+\\xC2L:\\xDF\\xF1\\x8D\\x99\\xD8VP&\\xEDX\\xA7(\\xA9\\xFC\\x83\\x94\\x8A\\x88d\\x0C\\x027\\x85\\x0CM\\xDF\\x85\\xF2\\x12\\xCB-\\x96p`\\x06\\x95V\\xE2Hmi\\xB6\\xC0\\x95\\x14\\x99\\x15,v\\xAE\\xA2\\xE4\\x920\\x05\\xA8\\x14\\x00\t\\xCC{\\x99\\xEA\\xF6\\x895\\x02'\\xD9\\xBC/3\\xD5\\x17\\x12\\x98Z\\xB4T\\xB1g\\x15=\\x95\\x9E\\x18\\xB8\\x95E\"\\xE4\\xA2k\\xE0\\xC5\\xE9\\x0EBq\\xB13\\x03\\xD3\\xFD\\xAD\\x06/\\xA9\\xC2LZ\\xDE\\xF1\r\\xEA\\x05+\\xAF\\xB2 "
		"\\x0BJ\\x05%\\xCDrM\\xB8\\xA9\\xE7\\xC3\\xCB-\\x03\\xA7\\xBCdKB.\\xAA\\x96o\\x01\\x02\\x91J\\xDC\\\\\\xC8\\xC3\\x07\\xDD\\x8C\\x05y\\x01\\x96\\x9D\\x84h\\xAEb\\x0E\\x0C\\xFB\\x17,\\x07f9\\xA4\\xCC\\x97$\\xA92\\x83Q}\\x02\\xAET\\xAA\\xD8\\x99\\xEBl\\xC6 `\\xE9\\xD0\\\\ra\\x00T\\x95\\x01\\x95Y\\x85X\\xA4\\xBB\\xAAh\\xA6|f\\x1A>\\xF7\\xC51\\x84T\\xE5A~ P\\x84!P5\\x86L-\n\\x0EUgP-S9\\x9A\\xC0@\\x05\\xE7\\x8C\\xA4\\xA1\\x14\\xA8\t\\x99_\\x98yY=\\x87\\xCC\\xB9\\x01\\x8F\\xD2\\x01\\x03\\x8D)"
		"IK\\x94M\\xC9\\xF0\\x04o\\x1E\\x14\\x92h!(\\x9CJ\\x1AE/[\\x96t\\x12\\xDB\\xC0\\xC4T-J\\xB4H}\\xD6\\xB1\\xF92J\\xEDrMfYq\\x9E\\x15>\\xA0_4%\\xD5K:\\xEC\\xC6JT\\xF1)\\x14\\xCA\\x985\\x81\\x1D\\x80d\\xEB\\x9E\\xB9\\xB4\\x1B\\x11\\x81\\x9857\\x84\\xB8\\xC8\\x06\\xE3\\xE5Y\\xB8!\\xC4\\xBF\\x15bk\\xFEe\\x92\\x8C\\xEEms46\\xBDA\\xB05\\x0E\\xA7\\xB0ke\\xBD\\xBC\\x07p*\\xF1f\\xE1\\x04\\x14\\x14\\x87\\x93\\xC8&[!\\xBDY,NB\\x10'\\xAC\\xDF\\x1E\\xE2fP|\\x0F/"
		"\\xB4Ic\\x94\\x16\\xE7\\x99\\xA6S%H\\x07XF0p\\xA0v\\xB1P\\x82\\xA0L[\\xA5\\x8AX\\x17S]\\xA8\\xCF\\x89\\xA2\\xA2\\xAAkZfT\\x8ER\\x00~L\\x8B\\xE5!Q0\\x1F$\\x9CG\\xEBp\\\\q\\x01\\x0ES\\x89\\xEAF\\x1D\\xF3\\x8D\\xCB\\xA3\\x82\\xB9I\\xEF_\\xF1\\xBD8\\xC9\\xB5m\\x1C\\xDA\\x1ExO%]a\\x85\\xE4\\xA2\\xE8\\xD3\\x8B*0\\x85h\\xA9\\xCE\\xD4\\xE7T \\xF3\\xF0\\xFB\\xE6K8I2/\t}\\xDA\\xB2H:\\x88\\x14\\x16\\x98Oe\\x80\\x0F\\x91N\\xF4\\x9C\\xF5V\\xEAq\\x90t\\x9D\\xD5Q\\xF0\\xBCaA\\xC8\\xF4gJ\n\\x08\\x04\\x80@JA]bAd`T"
		",-\\xA5\\xFA\\x13\\xA9\\xF2\\x9C\\xFA\n\\xCC'n\\xF6\\xC5\\x1B\\xA4'R\\xE7\\x9E\\x9BMJp\\xD9\\x94H7.\\xF3L\r\\x1E\\x831\"#Z\\xD9L.aAN\\x95+X\\x95\\x05\\x83r\\xB6r\\x9B\\xB9\\xA7\\x06$\\x99\\xA1\\xCC\\x92\\x16\\xDB\\x16n\\xBA\\x03@\\xBB\\xCF1\\xA3\\xC7l35]E\\xA4\\xAFHLW\\x0CXP(\\x01\\xB8\\x10\\xE4\\x87\\xC1\\x16\\x91\\xD5R_j\\x14\\x82\\x97\\xAEqS\r_^I\\xDAf\\xC4b\\x8BR\\xD7c\\x97"
		">cAg\\xF8\\xEA\\x96\\xB6\\xC0\\xA5\\x98Z\\x1D*\\xCD\\xF9\\xB6\\x1AG\\xA1\\xE5\\xF9\\xE9\\xB8U\\xEC\\x19\\x1A\\xE3D\\xD3\\x8Fa\\x85\\x8D\\x99\\xED\\x81Qa\t\\x84\\x91Hm\\x90\\xBA\\xD9\\x93R&\\xD1t\\x8C\\xC4\\x12_!\\xCC\\xC0\\xCC`W\\xB1\\x02P97\\x17\\x18D\\xA1\\x10H)j\\xA2\\xEAz\t#\\x95\\xE5,\\xCE0\\x8C\\xB4\\xCCb\\x98a\\xD4)\\x04R\\x1A\\xE7=\\xE3(\\x9F\\xD34\\xA4\\xB8\\xE9\\x05n\\xD8\\xE01350s\\xF73t\\xB0\\xFF\\xAF\\xA85\\xAD="
		"\\xF7\\x06\\x01wP\\xF28`Q\\xA4FD\\x9A\\xB9\\x1B\\x11p\\xB22\\x03\\x02R\\xA5Ls\"Y\\xD7\\x019\\xCE\\x14\\xD8\\xAC:\\x99B \\x85j0\\xA4\\x88\\xA5\rY@\\xA3\\xB0,\\x05%\\x8CE\\x95j?V3\\xDC\\x8C\\xE3CV-\\xD3Q\\x15\\xE5\\xC6<\\xCBX\\xD4i\\x1E\\xCC\\xD6x\\xB04\\xC0\\x92\\xC0`\\xFA\\xDC\\x94\\x9F\\x15N\\xF5 \\xA6\\xBAV\\xA4\\xF9\\xB3\\xC9\\x01\\xA1\\xBA\\xF3\\xF1MY\\xB1\\x94\\xF7\\xB2m-\\xCC4#\\x14\\xCA\\x11\\xE0\\x82\n\\xD4\\x11\\xA5G\\xA6 \\\\\\xD8\\xE8\\xC4T\\xAB\\xCCV\\x1D\\x1A(U,"
		"\\xA9\\x14\\x84%\\xA5\\xD0\\x14\\x8D\\xC1\\xD4\\xB4)\\x10A#\\x01\\\\g\\xF0<@\\x15\\xC3JLSj9\\xFB\\xFF\\xFD\\xBF\\xB9\\x7F\\xFF?\\xFF\\x9F\\xEC_5\\xEE\\x18\\xC3\\xBAM\\x9B1\\xCAi\\xAAE9\\xEB\\x85;Ou'\\xE4\\xC8\\xD5\\x10\\xD5\\x83\\x18Ve\\xBAH\\x13\\xCAs\\x18N\\xB7\\xC1Q\\xA2\\xD9.\\x1D\\x14\\xC6,oa\\xBD\\x8Ba9\\xA6\\xCB|\\xE3\\xE8\\x00r(\\xF4\\x01\\x80_\\x90\\x0E\\xEBo\\x0C\\xCB0\n"
		"Rr\\x90\\x96*\\x86\\x1A\\xE5CM\\xF1\\xC2\\xF7f\\x13daD\\xE28\\x95\\xF2E\\xF1\\x8DaM\\xA6k\\x14\\xDFz\\xB8@O5x\\x0C\\xCB6ZN_\\xB3\\\\*\\xB3\\xE7j\\x87\\xA5\\x1E`\\x91\\x855\\xB1\\xC0\\x0EZ\\x0C\\x05EV\\x10\\x15g\\x9D,e\\xFA\\x8E\\xC9\\x0C*\\xF2\\x11MY\\xB5T\\x05\\xAC2\\xCB\\x8DKX\\x95T\\x97\\xA5=?\\xA74g\\xCB\\xEB\\xEC\\x91<\\x8F\\xCD\\xC0!N3\\x8D\\x84\\xC1T\\xB8K\\x14\\xCB\\xCF`\\xC8\\xE0\\xCD\\xE6\\xD0\\x8C\\x9B\\xF0\\xD6b'\\x9C\\xD2}\\x99\\xC83\\x01FO@\\xB1\\x1D\\x17,k\\xAC65\\xAD\r"
		"\\xC2\\x9A`\\xEF\\x17\\xC1\\\\\\x01\\xB1M\\x13\\xB5,QP\\xEFx\\xAC\\x08\\x0C\\xAE\\xD7\\x14RRM\\x0E\\x99\\xCA\\x85D\\x06Gsp\\x89\\xC1\\xC598fp\\xA9\\xAE\\x12\\x99%\\xE2\\xB9B\n\\x83\\xCBsp\\xD6\\xA9\\x8A2\\x07g\\xCDW\\xD49\\xB8\\x9Ei~\\xB0\\x1C\\xB1*\\xD0g\\x80W}l\\xA9\\xE7\\x95y\\xD7\\xB0\\x8A\\xD2\\xAC\\xAAP(.2\\x18\\xAA)\\x1E\\x8Ei|\\xF0\\x97qD\\\\\\xEF\\xF9\\xAE\\x80Ib\\xA5\\xC4\\x02&\\xCC`R\\xD9\\x0F\\x99Y?\\x14\\xE57\\xBA\\xC4\\xA2\\x0B\\xB1\\xB1o\\xDAdHw\\x90J^\\xE1\\xB9\\x7FK\\xED&"
		"\\xEAq\\x9DqPz\\x1C'uu\\xB7Z\\xAD\\x06\\x8FU\\x99\\xD1\\x84\\x0Bt*\\x0C&\\xD7\\xE8\\xB3t\\x9B\\x0C\\xF6$\\xEBj\\x83%\\xFB\\x028\\xDD\\x11\\xA0\\xCB{\\xAC\\xAA\\xAC\\x02%\\xDF\\x02\\xC4\\xAA\\xC6\\x80jq\\x1D\\xF8\\xCB\\x95\\xDA3\\xBD\\xAA\\xEA\\x0C\\x7FAyh\\xC2\\xCC\\\\\\x9B\\xC9\\x10\rQ\\x08\\x9E\\x0F#\\xAE1\\xD1\\x9A\\xE9\\x99Q\\x98\\x89\\xA0Oi\\xA9\\x92\\x84\\x02%9\\xF3W1\\xEC\\x98B\\xF0la)\"\\x88\\x97\\xC2\\xA0\\xD3"
		"(\\xB8$\\x8A4efx\\xD5\\xD8l\\xD4t\\xD1T\\x9A\\x03kJ\\xADg\\x89mfd\\xEC1\\xCER\\xD8\\xE6\\xC5\\xFD\\xFDl\\xED\\x825\\x8D\\xA1b\\xB1*tg\\x0Ek:\\x83\\xCE)\\x8C\\xE2\\xF6i\\x05k|\\x7F?\\x0B\\xDC\\xC4\\xBA\\xC0\\x100\\x83I\\x93@\\x05\\xEAhf\\x00\\x82\\xDA\\xCD\\x8DC\\xD0\\x95\\xA8\\x9CS\\xA2\\x10L7Vs\\x0F\\xCF\\x1F\\x99S\\xBA&V\\x08\\xE6\\x8FJ\\xFBU\\xC7\\xACt\\xC9|\\x05\\xE5*\\xCE\\x87\\xB12\\xFB\\x90r\\xE8\\x9C\\xD5\\xAE+3C\\xEB\\x8Eo@$\\x115\\x1Dt55\\xA1\\x98\\x8A\\x06\\xFD$\t"
		"\\x14\\x9C\\x81t\\x06\\xD2f Y\\x10\\x18H\\xCFA\\x88\\x82dA\\xC8A\"\\x03\\xA1\\x1C$1\\x90\\x98\\x830\\x03I9Hf \\x9C\\x83\\x94\\xCCP\\x83\\xB9-\\x0B*}\\x96\\xE7w\\x08\\xCB\\xBEz\\x880\\x02\\xAB\\xAF\\xC1\\xCB\\xC0\\xD6\\xB4@\\x1E\\xC4$\\x0Bzf\\xD6Q\\xA4\\xC0\\xBB\\x12\\xA6\\xF0\\x94\\xADEQ\\x050J\\xC1(\\xB74e$\\xCEL=jq\\xF9\\x9E\\xED\\xA5\\xB6\\x98\\x0Cl\"\\xE5]\\x850}\\x04p\\x06\\x92\\x19(o\\x1ER\\x18H\\xCEAjfpQ3[F\\x1A\\x05@BE\\xB0<y\\xF1\\xC4\\xF4\\xFD\\x17v&"
		"\\x80\\xCB\\xAC\\xB8\\xFB\\xFB\\xB19\\x89\\xB3p\\x91RT~*J\\xBD'\\xB25\\x0E}\\x0F\\x04\\x80\\x0C\\\\F\\xEB\\x98\\xAD\\xD6\\x81WeQ`\\xD0\\xE2\\x89:\\xA3\\xE0\\xFB8\\x87\\xEA\\xF2m\\xC6\\x92[\\x84\\x92\\x12q.\\x1C/\\xF5\\x92\\x97&\t \\x86\\xD8\\xE1<0\\x0C\\xCC\\xC1\\x80\\xDE\\xF5\\xE6\\xC1-\\xC5NFfzJ\\x8F\\xAE]\\xB6$\\xD8o4-zB\\x05\\xCE\\xF9\\xC9\"J\\xA9\\x11\\x0B\\x9B-\\xB2(\\xA6\\xC6\\xE7\\x02!\\x03\\x13@\\x16%\\x9A\\x07\\xF2\\xC2$\\x84`o\\x08\\xBFI\\xDDU\\xE1\\x98P\\xBFw\\xD5]\\xE5\\x05qb\\x0E\""
		"sD\\x0F\\x83\\x15\\x0F\\x87\\xBAa\\xE8\\xC4\\xED\\x7F\\x19\\xFA[\\xB0\\x0F\\xCAf\\xAB,bV\\x8DT\\x10A\\xB2\\xC8La\\xCA@`@\\xCBp\n\\x0C+4%#\\x07\\xD2\\xB2\\x93hE\"\\\\\\xD3&V\\x18>R\\x1A\\xE8\\x02\\x80\\xD9\\xFF'\\xAE\\xEB\\x81\\x1F\\xA8] @e\\x88\\x95\\x12\\x01\\x1A\\xB5\\xC9\\x8B\\x04\\xE8\\x14\\x02)\\xAB\t\\x00\\xF9:\\xB1\\x08\\xAD\\xDF\\x1E\\x9Apn\\xBD}\\xD9\\x8D\\x1E\\xB7\\x9B\\x9F\\x87\\x13\\xDFx\\xD9\\x8B_\"\\x07\\x0Fn\\x86\\x9F\\x9F\\xFB9) $h\\x15z\\x91\\x14\t\\xA5\\xB6{\\x01\"R\\x08\\xA4Tx"
		"{\\xEE\\x1CG\\xF9\\x91\\x9D\\xDB\\xC9\\x81\\xD9\\xB2!]&\\xCA\\x92\\xC40\\x8B\\x05y,K\\x98\\xAD\\x02 V\r\\x18\\xBAUY/\\xF0\\xDC\\x97\\xA2#\\xECk\\x83\\xBED=U\\x16_\\x1Bw\\xDC\\xAF\\x96\\xA0\\xAB\\x02\\xEE;\\xBB\\x16\\x11B4t\\xB8\\xAB\\x92\\xFB\\xC1\\xAE)\\x0E\\x03\\xFF\\x85\\x8B\\xED\\x88\\x90\\x803\\x03\\xA7\\xF4F\\x1FU\\xD1\\xB3k\\x8B\\xFF\\xF3)\\x17\\xD8\\xBB\\xB6\\xE0\\xAC\\xCA\\x8F\\xF2\\xF9\\x13@\\x0E\\xF7\\x03\\xCEn\\x15eM\\\\t\\\\\\x85foQ\\xAFb\\xD3\\x0B "
		"\\xE0\\x16\\xDE\\xDF7W\\xF8\\xAD\\xFD\\xB3\\x94\\xA0\\x9C\\xF2\\xC5\\x87h\\x96SUh;\\xB0\\x9BL\\x19K\\x9E?\\xD1;D\\\\\\x05'dW\\xD2ud\\xBAq\\xAD\\xD2C/\\xF4\\xD8\n=\\xA7B\\x0F\\xA4\\xD0S(:\\x9D$*\\xCD,K\\xFF_q\\xDF\\xBA\\\\\\xC9q\\xA4\\xF7*m8f\\xC2\\x17tO\\xDD/R \\xD6\\xD4\\x88\\x14\\x15+R\\xB2HSv0\\x18\\x13\\x07\\x07\\x07\\x17\r\\x80\\x03\\xE1\\x00C\\xCE\\xAC\\xF7\\x8F\\x1F\\xC2\\x0F\\xB1o\\xE0\\xD7\\xD9'q|\\x99Y\\xD5U}\\x0E0C\\xEE\\xAEMJ "
		"\\x90Y\\x95\\x9Du\\xEB\\xCE\\xFC\\xAA*s\\xBE\\xE8\\xE8\\xAD\\xF8\\x93{6\\x1E\\x1DS\\xF16\\x13\\xDB7H\\x83w\\x8A\\x9D\\xC5Oz\\xA6c\\xCF\\xD2\\xBB\\xE6\\xDB\\xE7\\x8C\\xD0\\xE6\\xC5\\x8AK\\x13\t,+\\xAC\\x16V\\xF3\\xCE\\xB1+Y\\xCErx\\xE7\\x89\\xE0\\xE9\\x88s\\xB3\\xE1u\\xF4\\x89k\\xFE\\xF1\\xF6\\x0C\\xFB\\xDC\\xB7\\xF8d\\xB9\\xC0\\x9E\\xE3,"
		"<\\x12\\xC1\\xBB\\xD0\\x0B_o\\xAF\\xAF\\x19\\xFC\\xD9\\xBDZ\\xE3\\x05v6\\x9E_\\xED.\\x7F\\xF63\\xF78\\xBD\\x8F\\xEB\\x01`\\xD3\\xF3\\x0F\\xE1\\xB1T\\xAD-\\x9C\\xD9\\xB5\\xAD\\xDA{E\\x04Oo\\xA7'\\xB4\\xBF\\xDF\\xAC\\xCE\\xDE\\x8F\\x0F\\xDBq\\xB3\\xC2a\\\\c3\\xCC\\x14\\xC0\\xD7\\xA8Y\\xB6\\xA0\\x8D\\x83\\xF9\\xED\\xBDa'y~\\x02{\\xCD`|\\xFC\t\\xB8gO\\x8F\\xC0\\x99G\\x0FdBn\\xF9\\x8A,O\\x040\\x9E\\x94uw\\xB5~{\\xBD\\xD95\\x8A\\x06\\xA9\\xE4{E#;\\xE6\\xB3\\xF0D\\x040\\x9E\\x14\\xBE\\xBB]\\xAD[\\x053;"
		"\\xF1U\\x06`\\x82`\\x88\\xF1\\xB4\\x8C;Da\\x98\\x85\\x00=\\xE0\\xCB\\xC8E\\x88!\\x82\\xA7\\x9D\\xE8'\\x84\\x9Cn\\xDEm\\xEEW\\x17\\x9BF\\x8C`\\x03\\xB3\\x18G\\x04O\\x9B\\xD1O\\x88\\xB9\\xD9\\xAC\\xAE\\xB1\\x0F\\x7Fs\\xBA\\x9D;\\x0CH\\x03Ut]\\x87\\x01h\\x08\\xBE}@$\\x02\\x18O>\\xE0\\xE2~\\xBB\\xDE\\xDC\\xBFo\\xD4L\\x0CI\\xCCR2\\x11|H\\xCF\\xAC\\x1F(X\\xE3\\xD3\\xCF\\xC2\\x80Q\\x84v1\\x02\\x89\\x08\\x91\\x18\\xAD\\xB0bY\\x9C\\xDFo?\\xE0\\xF2X\\x17p\\xE3U#\\xCF\\x10"
		">\\xD2\\xC8\\xB3D\\xF0\\xD1\\x1C\\x94w |\\xC7\\xAB\\xD3\\xEB\\xED\\xC5\\xEE\\xD5\\xED\\xE6\\xC7\\xDD+\\x84a\\xD9\\x9C\\xD1\\xEF\\xCD3\\\\\\xF5\\xE0\t\\xD9\\xF4\\x91]z0>\\xE1h|A=\\xBE\\xA7\\xA3\\xE7\\x1E\\xA0\\x03U\\xF6\\xAD\\xC4(\\xC4\\xD0\\x1C=\\xF7@\n\\x88:\\x1F\\x02\\xF6\\xF0\\xEE\\xC5\\xB3\\xE7\\xAAp\\xEDc\"\\xC6\\xD3\\x07\\xDE=\\xDC}\\x94J\\xAA\\xADj\\x84\\xA8\\xDB\\xA7\\xC2\\x9B'j\\xE3M\\xC1\\x9FG\\xA9\\xC5N\\x17o\\x10}/\\x07\\xAAn\\xB7\\xEFV\\xD7W8\\xBC}2\\xEF\\xFF\\xADi\\x03m\\xBE\\xFF)"
		"W1V\\xF7\\x0F\\x15^\\xE0\\x1D/\\x0Fp izV\\x01\\xC8=\\xA0\\x01\\xA2\\xF9gP\n\\x08\\x1B)\\xBC.\\xA4D\\x86\\x17\\xF6 k~\\xB3V\\xCCZ\\xF4\\xDB\\xBC\\xDB\\\\\\x9Fh\\xD4KT\\xCF\\xA7\\xC6\\xFD\\x03*@\\xB4\\xF6F\\x7F\\xDD\\x82\\xFAB|\\x7F\\x0F\\xDF?\\xE5\\xD6p\\x86\\xDF\\x9F2q\\xF6\\xAC\\xD5\\xF9\\xE2\\x1A@\\xE3\\xA2H\\x03.\\x14P\\x87\\xAE\\xAB\\x9D@\\xBE\\x11i\\xBA\\xB5\\x88\\x81\\x18\\xE4\\xA7Q\\x93/\\xB6\\xF7\\x17\\xDB\\x87z4\\xE3\\xEF\\xF6\\xF7\\xC2<P\\x83\\x1C?y\\x99\\x94\\xC3&\\xA8\\xE9\\xD9\\xDB?"
		"P\\xB3\\xABu\\xF3\\xBE\r\\x93\\xB1\\xBA\\xBB\\xDB\\xBD\\x92D\\x84\\xF7\\xAB\\xF5\\xDB\\xAB\\xDB\\x0B\\xC8\n\\x0C\\x13\\xB4o\\x12\\x1Ck\\xDA\\xBD\\xA2\\x9Bp#\t\\x1CE\"\\xCAG\\xC6\\x10\\xE0\\x90\\x18\\xAF1N91\\x86\\xF0\\x8B\\xD7\\xFB\\xFDf}\\x05x\\xD4\\xE7\\xCC\\xD0\\xC3\\xBE2rhb\\xC4}\\xA9\\xA0\\x04\\x8E\\xE8\\x8A\\x89\\x8F\\xFF\\xEAas\\x7F\\xB3\\x1B\\xB7\\xE7\\xA3\\x84\\xEFAy\\xCDX\\xC5\\xC1\\xF2\\xF7\\x9Bs\\xCE\\xA1p}\\xB5~\\x8F\\xC2\\x86\\x00\\x8EC:\\xAC\\xEE7t\\xB27([\\x81\nZ\\xCAA9\""
		"\\x84\\xE5\t\\xEB\\x0E\\xEE\\x98\\xD1\\x8E\\xA0\\xBC\\x94/_\\x8C\\x80\\xB3\\x1BA\\x05\\x06\"\\xF6\\x9F}w\\x7F\\xF5n\\xB5~\\xDF\\xA8\\x19\\x19\\xA0\\xD8/\\xCA\\x1D\\x80[\\x99W\\x12T\"(\\x81.\\xF6\\x0BK\\xEB\\x19\\xBD\\xBC\\x96\\xDD\\xF6\\xA02A\\x1E\\x07\\xCA\\xEF.\\xAF\\xEE\\xEE\\x10)\\xAB*\\xA2U\\x03G\\xE0\\xBB\\x17\\xB4&\n8|&e\\xB9u%\\xA0\\xC7\\xB8\\xA3C\\xE0A\\x1B)\\xAF;)V\\xA8\\xE6#R\\x10O\\x0BR\\x9C\\x94o0\\x99\\xA0="
		"\\xE3\\x10\\xDD\\x98\\x14\\xA4\\x03\\x17\\xBE\\x10\\xA1\\xAD\\x06\\xE7*\\xF9s\\x0C\\x92[,R\\xC5\\xDD\\xADn\\xC7\\xF7\\xBF\\xC6sB\\x81\\x0E\\x9E@2\\xB0\\xB8\\x03\\xE2\\xBC\\x19K\\xA5?\\xE1\\x1BU!\\x8C\\xC554k\\x06k -\\x894y;\\xD29\\xA1\\x800qDM\\xCD\\xF7# T\\x1CQ\\xDBWb\\xC0\\x1B\\xBD\\xE0\r\\\\\\x1B\\xE1\\xE2L \\xCE'hX\\xF0\\x8D\\x85\\x82\\xDA\\x19c\\xF8\\xE7\\xD1q@\\xBC9\\x12i\\xBA\\x079\\xA1\\xDANM/T\\xD7\\xA9\\x19f,Bj3:\\x01\\xCE'\\xA8)(\\xC8\\xF26\\x9F\\x1E\\x8C\\x82~"
		"Idu\\xDD\\x88\\x90qD\\xED\\xBA\\x11\\xF8&Q\\xBBn\\x84\\x02u?\\x9A)\\x86(\\xE0|\\x82~\\x97\\xAB\\x9B\\xD3\\xC7\\xFB\\x0B:\\x86I\\x96A\\xB0V\\xEA\\xF7R\\x9DP\\xBB>\\xB3^\\xA8\\xAE\\xF9\\x12\\x05\\x1B\\xC8\\xAD\\xED\\x16\\xC9\\x02o<:\\x0E6R\\xA9`\\x97{\\xD8\\xF35\\xF3\\x00\\x84\\x93\\xCADy\\xBF\\xDB\\x14\\x0F\\x7F\\xF3\\xC9\\xD9\\xE6c\\x8D\\xC1\\xE6\\xEA\\xF2\\xC2X\t\\x8E]`\\xD0\\x9BC\\x86F\\x85r\\x0C18\\xCD%\\x9Cjj\\x19\\xA1\\xE9\\xBEV\\x9CkY)a\\x9AZNh\\xB2\\xD5\\x85x\\x03\\x1E?\\x02\\x1D2\\xC4o\t?"
		"(\\xB4\\x80B\\x05/\\x15\\\\#$\\x08\\xAD\\xD9\\x87Byt.\\xC01\\xE25[H\\x81\\xF0\\xAA@\\xCC\\x85\\x83\\x1D\\\\\\x16\\xD6\\xEC\\xD0\\x07\\xC2\\x04\\xE6`]A\\x1C\\xFE\\xB0\\xDC\\xA0n6oyG:x#%\\x9B{\\xCC\\xC1[!.O\\x06\\xCC\\x18\\x1B\\xEE\\xC9\\x8El\\x1D\\x06\\xB8\\xFBT\\xDC6\\x1A\\xF9\\x8A\\x18\\xB0F\\x81\\xFE\\x06\\xFD\\x89!#\\x87YQ\\xC9\\xB9V\\x12Z|j\\xC8\\xE0\\xC6R\\x89\\xA6\\xF5\\xF0,\\x89\\x96?q\\xC8\\xE0b\\xA2Bh\\x14\\x86\\xCBH4\\xBD?d\\xF0\\x04\\x89g\\x9AN\\x0BN\\x88vo\\xC8\\x82\\x17\\xD6|"
		"\\x80$\\xC0\\xBF\\x92y&\\xAB\\x0CN\\x923\\xC4\\xE9V\\xDA\\xDE9\\xA9\\x00\\xF7\\x87J\\xC6\\xAE~\\x16jZ|\\xCE\\xDA\\xB3\\x0B!*)\\xD5\\xEEN\\x85\\xA8\t\\x92Y~r\\xBE\\xDC\\xDEl\\x9A\\xD5\\x1B\rc\\x1A\\x8BR\\xAF\tJ\\x19\\xBE\\xB8\\xDA]\\xB6\\x85-\\x01!\\xCD\\xF76:\\xA2\\x04\\xDA5>t\\x94o\\xC6E\\xCA\\x8E\\xE4p\\x80\\xC5g \\xE7;\\x8E!z\\x91\\xDB\\x9C\\xD4\\x0Ep\\xAB\\x0E\\\\r\\xFC3`\r\\x9Cn\\xFE|\\xF5\\xD0*\\x1B\t=i\\x95MD\\x01\\x87O\\xEE\\x98\\x8CH8!f\\xA17\\xC7\\x1BCR\\x04\\xAA,\\x1F\\xF6{|"
		"to\\x1F\\x86\\xD7\\xDB\\xED\\xDB\\xE6a\\xF0w\\xFC~g\\xFF\\x89P\\x92\\xB6\\x9C!\\xA4\\xA4Q*Y\\xA2\\x80\\xD3)\\x05\\x1F\\x86\\xE8\\xADe\\x92<\\x01(\\xCB\\xC7|\\x03\\xBC\\xA4}J \\x8Cd\\xAF\\x18A\"m\\xB9H0\\xC8\\xDE\\xE0o\\xD7\\xDB\\xDB\\xC7\\x87\\xE1/+ \\xC5M\\xF1\\xC4h\\xC5\\x81\\x19u\\xFD~\\xF8\n G[:\\x13\\xC6\\xD145+\\xA2\\x80\\xD355k\\xA6\\xE7\\xE6P`\\xC8\\x86\\xA0\\x8F\\xE5\\xC3~\\xC7HG\\xF3\\x9Cl\t\\xDDX\\x16\\xFC\\xE3\\xF9\\xF9\\xE6\\xBE\\xD5';\\x02.\\x96\\xE5\\xBE \\xB0\\xA2-\\xE7\t"
		"\\x90X\\x96\\xFBz\\xF3c'M\\xD0\\x00\\xBEl\\x19\\xE0\\xE0DO\\xE4\\xF9\\xB2%\\xDF\\x1Euq\\xD2a0i\\xF2\\xE93\\x8D\\x9F\\x03\\xFF\\xA4\\xEB\\xAEL\\x1F\\xB4Z\\xF5,b\\xCE\\x94\\x0F_y7x\\xF7\\x07\\xA7\\xA7\\xEC\\x06\\x07\\xB3\t\\xFES,\\xFD\\xF3\\x8D\\xC0\\x15\\x01\\xBEPRE\\xAD\\x08\\x9F\\x07\\x11\\x15s\\xDE\\xBF\\x03\\x1A\\xE1\\xE0\\xA42\\xFA\\xAF9\\x9EK\\x84#\\xD3\\x84\\x08\\x8BpZ\\x92#z\\xF7\\xDD`0\\x80\\x83=b\\xB3\\x0FU\\x9D\\x14\\x9D\\xE3\\x04G\\xB8,D"
		"[x\\xF7%\\x11\\xCF\\x9B\\xF5\\xF6\\x0C\\xD1\\xD6\\x7Fz\"\\xD6-\\xC4\\x06\\x11\\xF1\\xD4F _3\\x8F\\xF0m\\xA8\\\\8\\xA4i\\xD9\\xF4\\x8F\\xF0j\\xA8\\xD8\\x8C\\x19Dx.\\xF5\\x98\\xDE\\xFF\\xC0\\xED\\x08T\\x1A\\xAE\\x90\\x9C\\xE0\\x1E)\\x90\\xAF\\xDF\\x0F\\x84ULG\\xC7\\x11\\xAEKs\\xC3;\\xC2qI\\x91\\xE8\\x8BW`A0P\\xC9H\\xA19\\x9AK\\x84\\xAFR\\xE0\\x012*#\\xBC\\x91\\xAC\\x89\\xF3\\xBDN>\\x81\\xE4\\x85\\xD4Z\\xBC\\x11\\xEED.\\xE71\\xF0\\xBD\\xC3&\\x9F\\xAF\\xB7\\xCA\\xBE\\x85\\xA7"
		">\\xFC\\xF1\\x9E\\xD0\\x9B\\x08? \\x97\\xD6}\\x06\\xFF|\\xF8o;\\xD039\\xE6L\\xFF\\x9A\\xD0\\xB3\\x08? \\x97\\x17\\xCCo\\xE0s\\x83\\xA8\\xC9\\xC9\\x96\\x89\\xC2>5\\x8B0\\x86\\xFCjy*\\\\\\xC8a{>|S|\\xE8\\x08\\x97B\\x955\\xF7g\\xF2\\x1A\\x87\\xE2\\x03F\\xE3\\xC8o.'L\\xC5M\\x8E\\xC6\\xB3\\x87[v\\x81#\\x0C~\\xE5\\x88\\xD1\\x9C\\xCD\\x8C&\n\\xB9\\x819\\xA3IB\\x8C\\xCF\\x9C3\\x1D\\xDA?\\xBA}\\x87\\x08\\xE3\\x9D\\xEA7h]\\xB4\\x8A|\\xEF\\xFAn\\x8AV\\x13!Z\\xD5i\\x04+"
		"\\x9B\\xC8\\xBA-k\\x85h\\x16\\x1A\\xDDn\\xC7\\xD3\\xC7\\xEB\\xEB\\xCD\\xC3n\\x8E\\xF1\"\\x87\\xFF\\xA3uR\\xA9\\xB9\\xA1\\x19ad\\xABz:\\x81]\\xFB\\xE1O\\xA57a?\\xD6\\xA8'<\\x14/\\x87\\xD7\\x8D?\\x1Fm$\\x9F\\xBE\\x1B\\x8C\\x97\\xC3\\xEB\\xCE\\x89\\x8F0\\xFAT\\x19\\xEBo\\xC4oo\\x9E\\x92g\\x8F\\x9B\\xB6\\x81\"\\x8C \\xAD\\x89\\xF3\t\\xAEL9\\xB7\\xD0\\xB9\\x83j\\xD0\\xF6\\xE88:\\xCD\\x92\\x9C\\xEA\\xE4\\x1B\\xA1\\xB6xgtV\\xA8\\xED\\xC5\\xB0\\xE8\\\\\\xF5\\xE4KmO\\x14p>E;\\x02\\x05\\xAAr:M\\xC6"
		"!\\xE6\\x8C\\xF5\\x88h\\xE0\r\\xDE\\xD6\\xA4i\\x10\\xA9\\xBE{V\\x14j\\xE84MB\\x8D\\x9D\\xA6\\x99`\\x86\\xC3\\x10\\xC3\\xAE\\x1C\\xBC\\xE07\"\\xE7\\xAD\\xA4\\xFD\\xC8'2\\x89\\xBC\\xF8\\x8FxQz\\xC5\\xBE\\xBE\\x04.\\xC0\\x9D\\xD2\\x93\\x7F\\xEF\\x9C\\x93\\xE89a\\xB0\\x93\\xCAn\\xED&\\xA3\\x02\\xE2\\x0BLqR:\\x0Fa\\xB2\\x818\\x83\\x9E\\xBCM\\x93\ny0\\x93\ry\\xB2\\x08\\xBF0e\\xE3'\\x8F\\xD8:6M&\\xC5AO&\\x98)\\x18?\\xE8)i\\x8B\\xBC\\xC1\\xD1\\xEF\\xA6D\\x02\\x14\\x82;"
		"\\x80\\xC0\\xCC\\xF5d\\xB4\\x99\\xBC\\x0F\\x93#\\x92M\\x11\\xB2D*\\x17\\x0E\\xC1\\xD0\\xD3\\xCD\\xA4}\\xA0\\xDFH\\xA3\\xDDH\\xDA\\xB9)\\x8E3q=\\x92z\\xA4\\xE8(\\xFA\\xD9\\x90\\xC7Y\\xE88\\x19\n\\x96\\x90FQ\\xD1\\x0436\\x1A\\xEDFR\\x12\\xEA\\x8E\\x8D\\xFE\\xEB\\x91\\xB44\\x1A\\x85\\xA1\\xA5\\x8B~\\xACm\\x1F\\xA1\\xA5E\\xBD\\xB1j9\\xD6~\\xDB\\x8D\\xAC\\xA4\\xCEL#}\\xD7#\\x94\\x8C\\xA4\\xEF(JZ#2I\\xDFq\\x8A\\xE0\\x9B\\x94FhiIa\\xD6\\x89\\x15\\xDE\\x8D\\xA2%\\x9EK\\x14\\xE6\\xAEG\\xD2\\x13\n"
		"\\x8F\\xA4'i\\xCC2E<\\xD7\\x08\\xA2\\x0B+=\\xCEZ\\xEFHY\\x9A\\x00\\x85\\xB4&EIg\\xD1\\x133\\xA0\\x8A\\xC4\\xC8\\x93\\xC2\\xA2\\xA4\t\\xD2q\\xAC\\xD2\\x8E\\x95\\x94IP[\\xB0f\\x1D\\x8D64\\xF6\\x89\\xD4\\x1D\\xE6.\\xE0\\xD1\\x1F'\\x95\\xF40\\xEB8\\xCC\\xBD\\xF8\\x01\\xF1\\x9D\\xA6d\\xD3zt\\x93\\x89\\x1E\\xA1? ^:\\xDBeG-\\xD0S\\x88^\\x86'\\xE9<Y\\xE7FK\\xBFE\\xAB\\xD1\\x816N(\\x95\\xB5\\x9D25)\\xA6D\\x8A\\xE6o\\xF4\\xE4R\\x18\\xDC\\x14|\\xC0\\xFCM\\x83\\x9FBJ\\xEB\\x11}:\\xE8\\x91\\xE8f\\xD2<^"
		"z\\xB0S\\x92\\x0E\\x1E\\xE8\\xA9\\xA3\\xCC]\\xA3mQ\\xDE\\xA5\\xB4\\x93\\xB9K\\xAA21\\xBB\\xF5\\\\\\x0B\\x1A\\x0E\\xA6h\\xC8B'Z?6A\\xC3\\x81te\r\\x07\\xD2v\\xA7\\xA7H\\x1A:m\\x87F\\xFF\\xB5\\x1EHSR\\x91\\x94ea\\xD1\\xEA\\x1Di5?\\x9F~#\\x9DFY\\xF8.;\\x9E\\xAC\\xA5)4:Ic\\xAE:W\\xDA\n\rI\\xB3q\\x12\\xC5F\\xD2\\x91\\xB4\\xA0\\xF1\\xCF;\\xD2k,:B\\x02q\\xD743\\xF5\\x00\\xC5FV\\x11#B\\x82w25\\xF1\\x86\\xE0i\\xC8\\xEA\\xD0\\xCCL\\xD2\\x9DL]\\xD7\\x19\r--\\x8D "
		"iY\\x85\\x8D4\\xBE\\xA4cv2\\xD4c\\xA3\\xC8\\x8Eu\\x1BY\\xCFF\\xF3\\xF5\\xA8i\\xA8G\\x19c(:\\xB7\\xFB\\xB5QS\\xD2\\x86\\xA6\\x9EQ\\xF8\\xCFd\\xD0\\xC20\\xE0\\xBF\\x1F\\xF0\\xD2\\xD5\\xF4\\xD2\\x8D\\xBEDY\\xB1\\xC6\\xA6\\x1F\\xCA\\x1B7NY\\x9BU\\x9ATJ\\x03\\xFFT\\xF2\\xAF\\x0E\\xB4@\\xDC\\xE4\\x82\\x1D\\x141\\xE3h\\xE9\\x9D\\xC5\\xBFS\\xF1\\x1D\\x93\\xF8\\x8F\\xF6\\xE7\\x87\\x1B|4'k\\xD3\\xCAS\\xB0\\x19\\xFC`\\x8FB\\x8DZMBi\\xC9\\x08\\x94\\xE3?|e\\xC2d\\xB2\\x1B\\xE2\\xE4\\xB3[\\xE9)\\xD1\\x1B\\x1D?"
		"9\\xFC\\x8E\\x9Dbt\\x14\\xAB\\xA6\\xE7Q\\xB4\\x19\\xF0\\xC6I)K-7\\x05.\\xFE\\xE1\\xF8\\xE8\\xF73\\x16\\x1D\\xBDe0w\\x0E\\xA0\\xC3\\x80o\\xD4\\xDA\\xAC\\xD5`\\xBD\\xCB\\x93\\xF5f4A\\xA9\\xC9\\xE94\\x04\\x975\\x8DjPJ\rQ!\\xB2\\x8E\\xF9.\\xEB\\x90.u\\xF0\\xF1\\xDAj?\\x1A\\xE5\\xC3\\x97\\xC9\\x18\\xF3\\x9D\\x8F1\\xAD\\xD5\\xE8\\x03B\\xC0\\xF9Qk\\xAD\\x07\\xAD}\\xA6\\xDF.S\\x8E\\xDF\\x99\\xAC\\xE3nL\\xDA\\x8D\\xDA\\xE6Q\\xFBl\\xF0\\xCBz\\xD4\\xC1\\xB8A\\x8D&\\xA40\\xE4\\xE4\\xF8\\x17\\x13C|\\xA7}\\x88_"
		":\\x9D\\xDD;<\\xE7R'\\x15\\xDE\\xB9\\x1C\\xD2\\x14\\xCD\\xEB\\xAA\\xA6\\xB6AYZ\\x18\\xE8\\xCB\\x104Z1(j\\x17`w\\x9D\\xDC\\x14\\x95\\xC5/\\x96~\\xD1`\\xE9A\\xEF\\xE8?\\x95L\\x7F\\xE1\\xC7\\x87\\x9B1Q\\xC7(\\xE3\\xD76\\x98\\xC1\\xC7!Z;\\xA40P\\xABR\\x18m\\x8CSvx\\xEFE\\x97\\xD1\\xF3\\xA3\\xC9\\x93K\\xDC\\xEC1\\x85\\xC9\\xA4\\x0F7\\x06B\\xD4;|KVQ\\xAB89\\x9F\\x86\\xFA\\x0BG+B\\x92\\x87\\xA8#\\xEC\\x18\\x13\\xE2g\\xD1\\xA98i\\x14+\\xBF\\xF0\\xB4L\\x8C\\xCCk\\x1B?\\xDC\\xCCu\\xEC\\x94S|"
		"\\x1D\\xA3\\xF3S\\x08\\x0E\\xC8\\xBD\\xD2\\x08B\\x14\\x9DUS\\xCC\\x91\\xB0|i\\x18\\xFD\\xBA\\xB6:O\\xC9af\\x07\\xEBh\\xD9\\x1A=\\xB9\\x98\\x87\\xEC\\xECd\\x92\\x1D\\xF1\\xD1\\xD7<\\x8F\\\\\\xC1\\xF3\\x7F8>\\xFA\\xA2\\xEE\\x18D\\xEF\\x19s_\\xAC\\xAAq\\xD29\\x0C\\xDAOI\\xD9\\xBF)|\\xE0\\xF1\\xA67\\x03^\"\\xE6AO9\\xC6)\\x05}\\xA9\\xDD\\x94]\\xF8\\x9B\\x9Et\\xA0%\\x00\\xC6\\x08\\xCE\\x03\\x8A\\x8FT\\xFC;;e\\x95\\xFF\\xA6\\xF0A\\xB3\\xE3\\x94@\\xD6:|\\xAB\\xE3\\xE4m\\x9E\\xB2\\x8A_\\x9A\\xC9g\\xFB7|"
		"\\xCE\\\\\\xC2\\xD2\\x9Ar\\xC8SJ\\xE1\\x01\\xC5\\x07*\\xFEN\\xA33\\xDC\\x87\\x9B8\\xB9@\\x16\\x82\\xCB\\xDF\\x85I\\xF9\\xF475NZ\\xFBI\\x850N:M\\xCAe\\xBC\\xE0\\xC2\\xA4\\x92\\xA1_\\xAE\\xF1\\x1B~\\x190\\x08\\x16o\\\\\\x15\\xFE\\x86\\xF2\\xF5\\xFF:`\\xBE\\xB1\\x08\\xFA\\xDB\\xEA\\xEB\\xB1-=N\\xCAZ\\xFC\\x9F\\xF9\\xE5\\x97A\\xE1\\x05\\x9A\\xC6Jh\\x7Fh\\xAB\\xA9\\xEBC\\xD9\\xAA`\\xBF\\xF7[\\xDA\\x05\\x89>\\xF2\\xCE\\xC2\\x02\\xC8\\x88\\x83\\xF6\\x97^"
		"\\xA3@\\xA2\\x02\\xD1\\xC7\\x03\\x85\\xAC\\xB9t0\\x92}\\x96B\\xE9@!\\x97YRPec\\x02\\xEE\\xC6\\x15\\x02\\x806\\x17xc\\xD0\\xCD\\xDECwC\\x0ELC\\x9B\\x0F\\xB3\\xAB\\x15,\\x11\\xC08\\xFA\\xFDW\\xBF\\xC3a\\x90\\x8CK=\\x94\\x1A\\xE7\\xF0\\xB6\\xF2\\xFA\\xEC\\xF6\\x15\\xB6\\xBB_\\x9D_]ov|\\x06\\xF7\\x8D<\\xE2\\xCD\\x1F\\xB6\\x17\\xDB7Z\\xA9\\x9F\\xA6\\xBB\\xDB\\x8B\\xBF{w\\xA2\\x837\\xD6\\xA9h-\\xA7\\xDBA\\x10\\xBA\\x7FU\\xB1\\x83\\xFE\\xE9x\\xF8\\x97H\\xFC/\\xE6\\x80P\\xF3\\x13"
		":\\xCBI\\xDF\\xD8\\xB6\\xC3\\xBC\\x10\\xDD\\xF1\\xF7\\x96\\xE2\\xC4e\\xE5\\xFE\\x85\\xFD\\x95\\xFFM\\xBA\\xEB\\x90\\xD4\\x7FQo\\xE5g;+H\\xBF4Q+c\\x88uC\\x87a\\x81\\x90\\x88\\x10\\x0FE\\xAD48\\xD0N{u1d)\\xD6B\nQ\t\\xB1\r[\\x19\\xA3fjs\\xC3+FS\\xF7\\x85\\xA4\\xAA%\\x02\\x18O\\x9F\\x1D\\x8A\\xD1I)\\xDBV\\xF5Bt\\xDDS\\x83P}\\xF3\\xD4X\\xF7\\x8F\\xA4*o(\\x81\\xD1m\\xF0\\x1F\\xBA\\x1C\\xFF\\x91c\\xDD\\x7F\\xDD\\x95\\xE32\\xBC1\\xB8\\xBC5>\\xECG}"
		"\\x881\\xCB\\xE3\\xEB\\x01\\x96\\x9Fq\\x8C\\xBC\\x8B\\x12\\xD0\\x05a9:\\x8E\\x80GI\\xF2\\xF2,\\xE1\\x81{\\xF4\\xDF\\xDE_]\\xD06,\\xDF\\xB2\\xC0\\xF1\\x92\\xFB\\xED\\xF5\\xAE\\xBBi\\xFF\\xF3:b\\xD1N\\xB9\\xCF\\xB1\\xDE\\xDE\\x9E\\xF0\\xF3c\\xD2\\xAC^j\\xD2\\xB0\\xC4d\\x84\\xD8\\x1D\\xAC\\xEFujn\\xDD\\xFF\\x0C\\x95\\x96C1\\xDF\\xED\\x1F\\x1FJ\\xE3c\\xB2\\xF2\\xF8yO5&W7\\x0By\\xC2$O\\x040~"
		"\\xD1\\xE1\\xFF\\xBF\\xEE8\\xC6\\xB8L\\x92\\xB1\\xF4G\\x10\\xB1\\xCDdM\\xB1\\xEE\\xDB\\xC9\\xB3\\x13\\x11\\xC0xne\\xA6,\\xC5\\xDA\\xE5\\x95\\x95\\x10\\xBB\\x95\\x995S\\x9B\\x98\\x9B1\\x9B\\xBA\\xFD'U-\\x11\\xC0xfef'\\xA5\\xDA\\xDE\\xCA^\\x88\\xDD\\xCA\\xCCA\\xA8Mcs\\xE4M\\xC2g\\x1E\\x90\\x9A\\xAD@BEs\\xE6\\x9D\\xB4\\xEE\\xD6\\xEF\\xD1qR\\x8A\\xE8\\xB1\\xDC\\xF8B\\xC4\\x91\\xF0\\xC3qR\\xB2\\x19\\xD6\\xD1\\x0C\\xD1R\\xB9\\xF7U\\xE9V\\xE8fAwB\\xB7\\x0B\\xBA\\x17\\xBA"
		"[\\xD0e\\xAF\\xAB\\xA3E\\xA2\\x81\\xD7\\xD3\\x13o\\x16u\\xB4L4\\xF0:\\xBAVB_\\xB4Qk\\xA6\\xEB\\x85\\x1Cmd\\x17\\x87\\x82\\xA7%me\\xF7D\\xFE\\x9C\\xF77h\\xE0\\x92\\xF6DH\\xBAnp\\xC8\\xD1@>D\\x8B^\\xD6A\\x8A\\xF8C\\x1B\\x13t\\xFB\\xE2~\\xFB#m9\\x8C\\xB8:xs\\xB3\\xB9=[\\x95\\xD4>\\xFD\\x91L>}\t\\xA1Q\\x846\\xB1\\xA5\\x93NB\\x8C\\xCF=\t\\xB5\\xB3\\x14\\xEC\\xF7\\x12y'%\\x19Uv[h\\x13'\\xE1\\xBD\\xA3<\\xD1\\xFB\\xEB\\x0F\\x8F\\xD7oq>\\xF0M\\xDD\\xCD\\xE1wl2F*\\xE8F\\x88\\xAD"
		"{.\\xDCs\\x867a\\x92\\xB1O*\\x8B\\xFC&\\x07z\\xA9\\xC4\\xA4\\xDB=\\x9E>l\\x1F\\x00\\x98'\\xE3EX\\x13\\x814\\x99 D\\xDF\\x8DM\\xD1\\x96\\x06\\xC7D)3\\x9Fp)}Qrn%\\x93\\xA4\\xCC\\xB3\\xDD*\\xAA\\xD5\\xB4\\x96%:\\xBA\\x84c\\x92\\xB3\\xA1;\\xC8\\xCB\"\\xAFI\\xC2\\x95\\xAC\\x12b~\\xEE!%\\x8BS\\x1F\\x93(Y\\xCD\\x95\\xED\\xFCzJ\\xB0\\xBD\\xB5^,\\xFA\\xE6T-G\\x05H\\xD6R\\xB1d\\xEB\\xFA\\xF5\\xB0\r\\x93uB\\xB7\\x0B\\xBA\\x17\\xBA"
		"[\\xD0\\x83\\xD0\\xFD\\x82\\x1E\\x85\\x1E\\x16\\xF4$\\xF4\\xB8\\xA0g\\xA1\\xA7\\x9E\\xEE\\x94\\xD0\\xF3\\x82\\xAE\\x99\\xEE\\xD4\\x82n\\x84\\xAE\\x17ti\\xAF[\\xB4\\xD7I{\\xDD\\xA2\\xBD\\xCE\\x97\\xCD\\xB7'O\\xEE\r\\xC3wW\\x9B\\x1F\\x87\\x9B\\xED\\xFD\\xE6p\\x81\\xA3\\xE3\\x04\\xB3\\xCE\\xECG\\x02\\xF9\\xDD\\xE6a\\xB8\\xBA\\xE5S\\x83\\xF3\\xEErr\\x91\\xB7\\xA0x\\xEC\\x12\\xAC3\\xBB\\xBFu\\x8D\\x03\\xC3\\x08\\xC75<\\xEEf\"jg\\xDE9\\x92\\xDA^\\xD1\\x9F W\\x92f\\x92W3\\xC9\\xD0\\xCE\\x0BE"
		"{\\xBE8*\\xDB\\x07J)\\xF9}\\xBC\\x7F\\xBC\\xDEP~\\xC7\\xED\\xD9\\xD9\\xD1q\\xC2G\\xD8\\x95\\xDD\\xBB?a[g\\xBE\\x9F\n\\xB6\\xE3\\xED\\x91n3\\xC2\\x1A\\xFC\\xCB\\xFB\\x11\\xC6Lz\\xD0y\\xD2^\\xBF\\x03\\xCA~m\\x140<;\\xB9\\x94G\\xFE\\x1D\\x9E1\\xFC\\xD4\\xE4}\\xD9?\\xC1\\xB3\\xAEW\\xEF\\xFBG\\x05\\xDAOy\\xE6\\x12\\xEB\\xA8b\\xC8\\x9B\\xB5;\\x1B]\\xDA\\xE8\\xD1\\xF9\\x10\\xC6\\xB4Y\\xF91\\x9B3\\xB59];\\xA3\\xD7\\xA7G\\xDD\\x1A\\xE1\\xB3\\xA2\\xF4\\xEBp\\xE0\\xE6ka]\\xC1\\x96\\xC5\\x05\n"
		"\\xE4\\xD8\\x12\\xEB\\xAD\\xDCi\\x95\\xED\\x9B\\xBBmM\\x9D|\\xBA\\xDB^?>l~=\\xC8\\x96\\xCE\\x8B_C\\xFDH\\xEA'\\x1F\\x9Em\\x82>\\xB7\\xE7\\xD6\\xB9\\xB3\\xD1\\x9FG=\\xBA\\xD5Y\\x1A\\xB3\\xCB\\xA7\\xA36\\xD9\\xE8\\xAC\\xD6.\\xAC\\xCD/iB\\xAF\\xB6\\xE6\\xC4@\\x08gH\\x93\"\\x89n\\xF1Y\\xDD\\xB2\\xF3\n\t7\\xC7\\xF5*\\xAB\\xD1y\\x13\\xC6\\xD3\\xF5\\xFAt4\\xEEL\\xE7\\xE4\\xC2\\xD9\\xFA\\xEC\\xF4\\xE8\\xF8{\\x1BR\\xF8\\xA1{\\x9CY<.3\\xA6\\xC0\\xA1Q\\x8F\\x8ESP\\x8C\\x1F fRT(\\x124"
		"!\\x0B-\\xC5\\xB0o\\xC5G\\x1ER\\xB0\\xF4g\n-\\x80\\x81\\x80\\xD7\\x06LW\\x9D+\\xAB\\x90\\x98%\\x05\\xCF>R\\xA9\\x1D\\xE8\\xCF\\x14\\xFC\\xFE\\x81\\x89\\x14bu\\x92\\xAC\\xB2\\x11\\x94\\xC4.I\\xFD\\x02\\x87L\\x84\\x14\\x0E$s\\x98-\\xCF\\x14\\x95\\x14k\\xB29\\xA4\\xC8\\xFE\r\\x98\\xB3\r\\x98\\xA2\\x11j\\xE3\\x8D\\xA5h\\xD9a)\\x9E|\\x82\\x15\\x1731>a\\x9F\\xF3q7\\x9F%M\\xD1KU\\xD7\\xCA\\x0BB\\\\\\x1C\\x11\\xEDO\\x1Br\\xC8\\x8E\\xDE\\xC1J1J\\xD5\\xD62\\x89\\xA9\\xBA0B\\xC8D\\x00\\xA3{\\x00YA|F4%%e\\xDA"
		"^J\\xEC\\x0C\\x81I\\xBDd#\\xE2\\xFE\\xA6d\\x84\\xDCvS\\xB2\\xD5I\\x91\\xCA\\x8E\\x08`\\xEC\\x0F\\x0Fp#\\xEE\\x92\\xE4\\xA5\\x98k\\xEB\\x06!\\xFAvxp\\xA8\\x83\\xA8\\xA1}n\\xAA\\x0E\\x8A\\xD4\\xCDD\\x00\\x83[\\x9B\\xB2\\x12J\\xDB6\\x1C\\xF4\\x00\\x11\\xB6\\xED\\x93\\xF6}\\xCAFJ\\xB5M\\xCD\\x96\\xFD\\x18\\x99\\xC7\\xD9\\xD1\\x9F \\xEF\\xAF\\x82\\xEC\\xAB##\\xAB \\x07\\xF6GJ\\xEDH\\x7F\\xA6\\xEE4SY\\x059U\\x87DVA\\xCE\\xE4\\x96H\\xED\\xAC\\x14\\xFD\\x99\\x0E\\x1D"
		":\\xCAJ\\xB3\\xBBQ\\xCF8fe\\x88\\x92\\xD53\\xF7\\xF0\\xE4f\\xE7\\xC3\\xE3\\xED\\xEA\\x80;\\xDB\\x1C#\\xEC\\xBC\\xC9\\x8E^\\x92N\\xF1\\xF5\\xA1\\xA3\\xE3\\x0C\\xFBW\\xA9N\\x13G\\x94\\xBC\\xBC%r@\\x93\\xDD\\xEA\\xFE\\x8CN\\x8C|oS\\xA0vyv\\x8D\\x1Ai\\x81(yy-\\xE4\\xA9;\\x9F\\xC0\\x02\\xDEm.\\x1A\\x91\\x91\\xBD\\xAAF$\\xFBYY=sw\\xB2\\x13\\xD9\\xCB\\xCB\\xEC\\x8D\\xCD\\xF2\\xB4\"JV\\xCF\\xDC\\xA3|\\xBB\\xB9_]\\xAF\\xE8R\\xED\\x88\\xD3P\\xEFg\\x810\\x97\\x94\\xEB\\x04\\x1A\\xA2d\\xFD\\xDCX^^"
		"\\xAD\\xDFRh\\x85\"\\xC6\\x92W\\xD8\\x8AqD\\xC9\\xCB[-\\xAD\\x98\\xB3G\\xBA\"Zdx\\xF6\\x12\\x1B\\x19\\x81(yy\\x83\\xA5\\x95q\\xBB\\xBDE\\x17\\x8D|\\x99\\xB5\\x91\\x16\\xC9\\xF7l\\xA5%\\xA2d\\xFDL\\xCF\\xB3\\x94\\xBE\\xCFuf\\x8Ft\\x96d\\xD8G\\xCD\\xFA\\x99>\\x97.\\x1A\\xE9\\xDE\\xE8,\\x0C\\xEF\t\\xD5\\xAD\\x1Dc\\x88\\x02\\xCE\\x93\\xC2h\\xE4\\x9A\\x1B\\xA8H\\xA7T%Zv\\x80\\x1B\\x89\\x8E(\\xD9"
		"<\\xD3\\xF5\\xE8\\xB2\\xFEJk\\x11\\xE7\\xC9\\xAFn\\xC5\\x05\\xA2\\xE4e\\x10\\xE4\\xEE\\x92\\xED\\xFDf\\xF5\\xF6|\\x85t0UP$G\\xFC\\xFB\\x1A\\xBD5\\x9BD\\xBExK\\xC9\\xD5\\xFB\\xA5W`\\xB6\\x8A\\x08y\\xE9A]\\xDA\\xE1\\xD2\\x96kT\\xE2\\xA5U?\\x1Bo\\x15\\x8E[\\x88\\x17.\\xD5\\xB7\\xAA\\x15j\\x84\\xB8\\xB8\\x8E\\x7F\\xBB\\xF9qD\\xBC\\xE9A<}\\xFEc>\\x0F9r\\xCC\\x7F6vp\\xA0\\xE8D\\xAE\\x0E\\xE2}\\xCE\\x12g\\xF4\\x0C\\xEFw\\xF1\\xC5\\xF9\\xFB\\x8B\\x97="
		"\\x08\\xD9\\xF6\\xD1\\x93\\x0112\\xD8\\xF8\\xF5\\xF6a\\x0E\\x93\\xBB:;\\x1Bo\\x89\\x90m\\x90\\x8A\\xBE\\x95\\x16\\x85\\x18\\x8E\\x8F\\xBE\\xFD\\xFC\\xBF\\x7F\\xFB\\xD9\\x9F?\\xFF\\xACD\\xF4\\xBAm\\x05\\xCD\\x19\\x10\\xA4\\x9F('\\xDB\\x1C\\xCAs\\xF9\\xFCl\\x93Hn\\xA2\\xF1f\\x9B\\xAB\\xEBO\\xBEmv\\x8A\\x08\\xB9\\\\\\xEEXD\\x0F\\xFB\\xAD8\\xE4\\x03\\x0E\\x83\\x1E=\\x8D.0\\xFB{\\x0Eb\\xC0p\\xE7\\xFD\\xE6o\\x8FW\\xF7\\x9B\\xB3\\x92>\\x89b\\x92[U\\xB2Yp:I\\xC9\\x9B "
		"\\x8Ey\\x95wt\\x9C\\x9Df\\xC5\\x9Cj\\xB55B<\\x10\\xB6d_)IWXo\\x88\\xDE\\xDD_\\xDDPbC\\xC9N\\x9C\\x9D\\x15qs\\xA4|\\x98\\x0F\\x05\\xAA\\xE0.s\\x9E\\x08\\xB9\\xA6\\x87\\xCB.\\x08\\xC5\\xB7\\xC5\\xA2\\x10\\x17\\xF7\t\\xD6;(E\\x18\\xE9\\xB8\\xBD\\xBF\\xBA\\xB8\\xBA]]\\x8F\\x82\\x8Dd\\x97\\xA4R\\x83\\xBEdX\\xF5m\\x12\\x86\\xEC\\x15\\x11\\xC0h\\xE3\\xAAu]W#W\\xD3e\\xC1\\xDA\\xF7%\\xD8\\xED|W\\xB6\\x87B\\x8E\\x8E\\xB3\\xD7,"
		"\\xBD9\\xBE\\xDF_%B\\x19S\\x01\\x0CQ\\xC9\\x12\\x01\\x0C9\\x0E\\x9B\\xBD\\x13R\\x83\\xC1e\\xEF\\x19\\xBE\\xD8\\xBF}4\\xA3\\x1DlRf\\x1F\\x18\\xD1\\xD8C\\xA4\\xE7\\x922\\xA0\\x7F\\xDD\\x8D\\x0F\\xDB\\x8B\\x0B\\x04\\x17}<\\xE5\\xB03\\xD2x\\x0E\\x8C\\xDD\\x04\\x9B0\\x10\\x1CIp.\\x87\\xFB\\x13\\xA2\\x10e\\x9F\\x84\\xBA<\\x8E\\xDA<\\xAF\t\\xA4\\xC8\\xD0\\xE1\n'\\x8E\\x17\\xF2\\xDB\\x9B\\xCF\\xF4\\xB8\\xCC\\x08L\\xB9\\x95\\xE24\\x8E\\x15v\n\\xB6\\x86\\x80="
		":\\x06\\xA4\\x81*\\xD9\\xE7V\\xC3\\xC0PN\\x0Erz\\x19!z\\xAB$Qe!\\xE9{\\xA7\\x81\\x85\\xE6`\\x18\\xED\\xA1nG,ZG)\\x02r\\xB0\\x8C\\xF6<\\xA3\\x1B\\x7F*=\\xB4rT8\\xCB\\xBEd\\xD1\\xCA\\x0B\\xD5=\\xADU\\x95Q\\xF5\t\\x8C&\\xB1>\\x88F\"\\xFADF\\x93\\x98Nq8\\x99\\x9E\\x18Mbz\\x98\\xF5\\xCF\\x8C&=\\xA3\\xFF%]y\\xE0\\x8F`>:\\xCEQQ\\x95\\x1C\\xBA\\xBE\\x8D\\x0CK\\x81\\xFBd+\\x16\\x92J[\\xA2a\\xE4\\x8AuK\\xB5-\\xF0M]\\x99\\xEA\\x14BN\\xE8\\x8E\\x91+\\xBE`\\xADj[\\xA2'd\\xAB^\\xBC\\xAE\\xF4@ S\\xFBM~"
		"\\xD8\\\\\\xFF\\xEA?g=d\\xA3b\\x1C\\x94R:\\xA1e\\x91\\x81\\xA3z\\xAF(\\xC3\\x19u\\x998}\\x80)\\xFC@\\x9C\\x19\\x84^\\xCA\\xF0\\x00\\xA9T\\x1B\\xC00\\xC3C\\x93t\\x90\"-i\\xA2\\xE4\\xA4\\xF6\\xA4Y\\xCA\\xEFK\\xD2\\xE0aQ)\\xDDI\\xB3\\x84d\\xB5\\xD2\\x1CQr\\xB2\\xFB\\xD2\\x90\\x17@\\xA4y)\\xE5:i\\x81@\\xB0\\xE6\\xD8\\x92\\x1A\\xD4\\xA5}\\xA7\\xED\\x97\\xEA\\xC3W\\xB1\\xFC\\x1E?\\x1C\\x1D\\xE7\\x14\\x19\\xAF\\x99\r\\x1D8["
		">\\x10\\xE7\\xE9`\\xF2\\x05x\\xA9\\x99\\xB3r\\xCAR-\\xB5\\xCD\\xC0\\xBE\\x84\\xEF\\xEC\\xCF\\xAC\\x89\\x92%Y7\\x02C\\x13\\xD9\\x08\\xB9\\xEB\\x05\\xB8n\\xBE3:\\xB3#J\\x96\\xBC\\xDB\\xB5\\xBA\\x17\\xB2\\xEB\\xAA\\x07AOh\\xCB#\\xC3\\x95#8D\\xFE\\x14\\xD8B\\x9C\\xBD\\x9C\\xE9\\xCF\\x9C\\xD3\\xBE\\xA3\\xA9\\x95R\\x15\\xB8`OS+\\xA5\\x19j\\xE0\\xFAZ)C\\x7F\\x13cyN\\x04\t\\xD1p\\x8E\\xE8\\xDDh&o\\xD7v\\xB2t\\xB2o\\x08c\\x98B\\x18\\xC2\\xA8\\xF5\\xE4\\x0C\\x0EGM8E\\x07\\xF40\\x991\\xF3\\x7Fw#\\x8E8\\xEA"
		"<\\xE6\\x81\\xFE^\\xD3\\x91g\\x1C\\xE6\\x8CC\\x9E\\xBC\\x1Ep\\xCAjr\\xE6\\x1D\\xC9\\xC6\\xA19\\x9D&\\x9C\\xACJ\\x10\\x9C\\x06m&\\x1D.\\x9DY\\xAB\\x91\\xC4D\\xC8\\xD6z\\xC2\\x89\\xD24\\x12\\xF7\\xC3\\x11\\xF4\\xB6\\x05\\xEBX\\x80\\xB3\\x9F\\xF1\\x1Es\\x97\\x00]\\xC1\\xC7<\\x10\\xF5\\xE3PvN\\x8E\\xD3A>\\xBFV\\xF0/cf\\x01\\x87\\x01\\x13|\\xB9N\\xE9&\\x8EV\\xF0=\\xB9tc=h\\x05\\x8F2\\xED\\xE3\\xC8\\xB0\\xEA\\x9A\\x8C\\xE9\n\\xEF\\xBD\\xE4\\xBA\\xF14!\\x91\\x80L\\x1C*\\xD2\\xB1#2\\xCA+"
		"\\xF8\\x93\\xCC\\xCE\\x0B6\\xD5\\x86\\xBF(8\\x895\\x89&\\x08\\x1C\\xC6\\x92\\x95\\x9E\\xC0\\x04\\xAD\\xE0\\x0Ef=O\\x108\\x83\\xC8U\\xAF\\xB4\\xDD\\xC7\\x13\\xB4\\x82\\xE7G\\xD0\\x05MO\\xAD\\xE0\\xF7\\xCD\\xFBwZ\\xE9\\x82D\\x94\\xBF\\x13A\\x0EO\\xE3\\xF9\\xDF>\\xDE\\xAE\\x10\\xF3Q+\\x9D\t\\x13x\\xBA\\xE87\\x8C\\x02pi\\xA3\\xC8\\xE7\\x7F\\xBA\\xF4\\xD7\\xDB\\xDB\\xF1\\xBB\\xCD\\x85\\x94\\xD6\\xE4\\xCE?]z.i\\xC8Q\\x7F\\xBA$.i\\x0E\\xAF\\xE1\\x9AK\\x05K\\x8E\\xF8\\xD3\\x15^\\xB3{)"
		"\\xA5\\x1D\\xF9\\xDBO\\x97\\xFE\\xED#\\xEE\\x16RQOn\\xF5\\xB3-l\\xF4\\x0E\\xE46ch\\x9D\\x85\\xE9\\xA3\\x95\\x89\\xE4\\xFF~T\\xB3r\\x97\\x90\\xC4$rs?\\xD2\\xFC\\xB6B&/\\xF6\\xD9\\x9Em\\xCB\\xC3\\x9C<\\xB033\\xFF\\xF3\\x9B\\xE2\\x9FJy]\\\\\\xC4\\x1F\\x8E\\x8F~\\xB7\\xDD\\xEC\\x86\\x0B\\xC4\\xE5\\xA7\\x8C\\xA8\\xC47\\xEC\\xDB-3\\x13q\\x10m\\xFAM|\\xC6\\xE1\\xA8\\xDF-\\x1E/W\\xB7g\\xD7\\x9B\\xCE\\xDE\\x1A\\xE1n\\xAC\\xC6\\xBB\\xC7\\x0F\\x97\\x8Fo\\xDF"
		">\\x8E\\xC6\\xAB\\x8Be\\xB5\\xAB\\xB3\\x93\\x10B\\x0E!$\\xE7\\x92\\x8B\\xA4\\x85%-H\\x9Dr\\xE3L+\\xC2\\x11\r\\xB3\\x17Y{\\x11U\\xFE+dn\\x1E\\x17\\xB2\\xCA\\x95e\\xF0\\x06\\xFA9\\x8E\\x9C\\xF5\\xA9\\xFC\\xF57\\xD4\\xA7\\xB4\\xAB0`,\\xBFk\\x08\\xAE4\\xFC\\xCCF\\x81P\\xA8r\\x99\\xCB\\xB1;x\\xA8\\x1B\\xF6\\x90\\xA7qw\\xB9\\xBA\\xBB\\xC3y\\x14\\xFES'\\x7F\\xA8/\\xA2N)Dg\\\\J1S_\\xC4\\xF2\\xD0\\xD0\\xAA\\x92\n5>\\xDD\\x17\\x0BY\\xDF;\\x8A\\xD2\\xEC4\\xBD\\x93m.\\x12R#\\x17\\x16\\x1FS\\xF3/h\"e\\xB0]"
		"\\xF3\\x05\\xDC\\xF1\\xE6\\xEA\\xFA\\xED\\xF3\\xAD4:9\\x97=Z\\xE9\\xB4<\\xB7\\x89\\xEA\\xA7\\x953\\x85\\xAA?\\xD6\\xCA*\\xAB\\xB4\\x92\\xBF<\\xAE\\xCC$\\xD7\\xCE$Wf\\x92\\xB3\\x1Fme7\\x9FW\\xEF\\xAEV\\xD7\\xD2X\\xA3\\x9E\\x9C\\xCC>\\xC7\\xA0\\x82\n\\x96\\x9AV\\xE6\\x92k\\xE7\\x92+s\\xC9\\xF9\\xE7's#\\xAB4\\xCDs\\xD3\\xCA\\xC4p\\xED\\xC4p\\x15>Y~\\xD0\\xCF\\xCE\\x06\n\\x85DY\\xEA\\xFB@\\xCCZ\\xC1\\xDA\\xB5\\x9E\\xEBw_hJiO\\xDF\\xF5\\xFA\\xDB8\"2-o~\\xE1\\x91\\xB0m\\xB9n\\x9B\\xBBC+"
		"X\\xA9D\\xF7\\xEA\\x13d\\xAE\\xF9\\x0E\\xAFV\\xDE\\x94j\\xCDMD\\xAD\\xBC-(\\x04.\\x82\\xDE\\xDD]\\xBF\\xA7\\xC2\\x15d\\xC0\\x11\\xDCz\\xA4B+\\xEF\\x193h\\x8EN\\x14\\xF8\\x83\\x91\\x06*Y\\xC3\\x86\\x95\\xD3\\x18'T7t\\xBE\\xFE\\xFC~\\xDF\\xAC\\xDF\\x0E\\xDB\\xC7\\xCE\\xDC\\x80\\x01[o\\xDA\\x97+\\x87\\xC7\\xC3\\xC3\\xEA\\xA7\\xCD\\xEE\\x98\\xA2\\x80\\x9E\\xB5\\x00\\xD1nX\\xAF\\xAE\\xD7\\x8F\\xB8\\xFAv6\\xAC\\x1E\\x86\\x822L$+\\x11\\x1C\\xC0}\\xA5\\x95\\xCF\\xF4'\\xD1gS_\\xAB\\xA0\n\\xFD@\\x006\\xADc"
		"<\\xE6\\\\\\xE8Z\\x05-%\\x83\\xEAF\\x06{E\\xC5\\xD7/B\\xD9\\xFD'\\x1E\\xED\\x10\\xB1\\xAF\\xA5Up\\x85a{\\x19\\x9E\\x10\\x82NF \\x12\\xF1\\xDAc\\x08H*^8\\xCB\\x93*\\xE5\\x1F\\xFE<\\x85T\\xCA\\xC5\\xA5\\x84\\\\8i\\xC1\\x89\\xAAp\\xF2\\x92\\xA3g\\xC0@T\\x8C\\x86H\\xC4\\xEB\\x9A\\x19ma\\x98\\xAE\\x99\\xD1\\x11\\xCC\\xD0\\xC9\\xF0D\"\\xDE\\xE2\\x81\\xA1p\\xD8ru\\xDE\\xB3\\x90X\\xE8aY#\\x15\\xCE\\xB2\\xC11\\x17\\xCE\\xB2\\xC1I\\x15\\xCE\\xB2\\xC1I\\x0B'\\xA9%\\xC7\\x14\\x8E^r,\\x81"
		"!O\\x85\\xAF\\xA3l\\x89\\x18\\x9A\\xE4\\xA8\\x1CU\\x98_7\\xC9\\x17\\xAA\\xAB\\xF36\\x85B\\xF3]\\xBF\\xA5X\\xE8\\xFB\\x81\\x8D\\xFAy\\x9BR)\\x19\\xBB\\xC1Hy\\xC6ZDhVD\"^7\\xA0Y\\x0B#\\xF7s?\\x1BBh:\\x19\\x96H\\xC4\\xEB;'\\xBB\\xC2\\xB1\\xDD\\x80f_\\xE8\\xCB)\\x90C\\xE1,\\xD7@\\x8E\\x85\\xB3\\x9C\\x049\\x11\\xFE\\xC3_\\xA2\\xC0\\x96>6\\x15C`f\\xEDn\\x8D\r>\\xA6\\xE6\\xD2\\xDD\\x1A\\xDBt\\xA0i\\xD5^=\\xD6\\x1A{mL\\xDF\\x8F\\xD3\\xD4u\\xB7\\xC6.\\x1A\\x97\\xEC\\xE6\\xBE\\xC6fX\\x88\\x9D^\\x1A;["
		"!2\\xB3\\xD1+\\x14\\xAA\\x9F\\xF5\\x8A\\x85\\x16z\\xBDR\\xA1\\x1F8\\x08\\xDA\\xEB\\x95K\\xC9\\xD4\\xE9\\x85-\\x9E\\x90z\\xBD\\xB0O\\x13\\x123g\\xBD\\xB4)T]\\xF5\\xD2\\xB6\\xD0L\\xA7\\x97v\\x85~`\\x7F\\xBD\\xD3K\\xFBR\\xD2\\xF5z\\x85\\x19D+B#\\x91\\x88\\xD7NO\rO\\x8E\\x19\\xB1\\x97\\x91\tzke\\xC07\\x8B\\x9Ay\\xDD\\xC4\\xD1\\xF0\\xC3\\x88#\\x81\\xE7ezjx]L\\xD7\\xCB\\x1A\\xB6p\\xCC\\x92\\xE3\n\\xC7.9\\xBEp\\xDC\\x92\\x13\n\\xC7/9\\x91`\\xC0n\\x88\\xE0\\x0CE\\xC3\\xCCy\\x88\\xE0\\xF105\\xD5"
		"!\\x82W\\xC3\\xB4\\xBE7\\xE1\\xBD\\x10\\xDD\\x1E8c\\xD0\r\\x11\\xFC\\x18.\\xA9\\xBB\\xEEE\\xD9h{\\xBD\\xE0WD\\xCB\\xCCY/\\xB8\\x00Lu\\xB3^\\xA1\\xD0|\\xAFW,\\xF4\\x8F\\xBC\\xD94\\xECv.\\xD9\\x0F;\\xAC\\xF18?\\x88\\x80W\\xC7\\xF4\\xF6A0\\x93\\x89\\xEE>\\xD6\\x010\\x9D\\xB9d\\xDF\\x010\\x88\\xE3\\xBCHa\t#x\\x95v\\xB6\\x7F\\x90/\\xF4\\xFD\\xD8\\x03\\x8B\\x07\\x85R\\xD2\\xF7\\x0F\\x8A\\x04\\xD4vB\\x13\\x91\\x88\\xD7\\x19\\x84d\\x01\\xAEn\\xCFF\\xDE\\xF2\\xD2\\x9A\\xC0\\xD7\\xC0UZ\\xA105c\\x0B\\x0Ej\r+"
		"3&\\xE6\\xED\\x1F\\x8B\\xC1\\xF1gCG\\xAD\\xB4\\x86a\\xC9%u/\\xC1\\x16\\xBAi\\x0E\\xC7\\xA0}\\x85^\\xE0}Ks\\x1B\\xA6eZ\\x88\\x08D\"\\xDE\\x81\\xB39H\\xAD\\x1E\rW\\x8E\\xA5d\\xE8%\\xA4B\\x8F\\xBD\\x12\\xB9\\xD0S\\xA7\\x04\\x8C\\xC0\\xE4:\\x11\\x81Qa\\xE2\\x1DP\\x02\\x81\\xC6\\xA2\\xA3n\\x84\\xFD\\xC7%\\xFBf\\xC0\\x08dz\\xDF\\x13\\xB0\\x01\\x99\\xDE\\xF7\\x04l@\tU+\\xB7\\xAF\\xB4\\x0E\\x0C\\x08\\x13\\xF3\\xFB\\x1A\\x1DFk\\x98\\x80L\\x0F\\xA5\\x02\\xAE\\xB7i\r\\x9BO\\xB2\\x98\\xCEB2\\xD1\\x88\\xD9\n"
		"\\x81\\xAD\\xC7\\xF4\\xDC\\x0B\\x81\\xA9\\x97]/\\x04\\xB6^v\\xCC\\xEC\\x84\\xD8B7\\x0B!\\x8E\\xF0\\xE3y\\x9B^k\\xD8z9\\xF6\\xA4 \\x801cr\\xB4\\x16\\x18\\xFF-\\x84$H\\xA7\\x80\\x80\\xBA@\\x9F\\xC4Z\\xC2\\xC4\\x9A\\x82t8w\\xE9\\xC2\\x143nG\\xE2J\\xBE\\x9F\\x82\\xFE\\xD2\\xA8)\\x87\\xEB1O\\xC1\\x8F\\xD6O\\xFAK\\xF8\\x93\\x1A![DZ\\xE6\\x13\\xAF\\xEB\\xAB\\xFB\\xF55\\xEDa\\xFEtb\\x08\\xF4x\\x7F\\xE2qo\\xED\\x1E\\xDBmZc\\xFEp\r\\xDA\\xA8\\xC8xE\\xA3,\\x00\\x12\\xFC\\x89\\xB8\\xBE\\x89TOf\\x86]"
		"\\xCB\\x9AK\\x96i\\xC4}\\x1E\\xBD\\x1Do\\x1Fo\\xE8\\x81\\xAEVin\\xECi\\x9D\\xBC\\xA0\\xAF\\xF5\\x00\\xA4\\xD6\\x08\\x82\\xA7T\\xEEi\\x91\\xF1\\xD8\\x8E\\x96\n\\x8A*\\xDD\\x9C2\\x03\\xA8\\xED\\xD8d\\xC5 jG\\xD3\\x0C\\xA4v\\xB4\\x06\\\\\"oZ#\\x96\\x1F(\\xC4;\\x0C\\x7F5[\\x1FZc\\x02I\\xF9\\xF6\\xAB\\x81\\xAC\\x05\\xAAI\\xE0\\xA35R\\x18(zifA\\x8D\\x82\\xA3\\xC5\\x86\\xED&a\\x84VB\\x9A\\xB1\\x1E\\x91\\x90\\x99B<\\x92\\xE0\\x15\\xAD?\\xA3T\\xE5\\xE4Y\\x84Ank\\xD5\\x84_\\xD4F\t\\xD0C\\xBCF\t"
		"\\xA3le\\x98V\\x82\\x9B\\xA1\\x18\\x91\\xE0\\x99B\\xBC^\\x89P9\\xBE\\x15\\x11g\\xD4ED$\\xA6\\x10\\xAFS\"WFc\\xEC\\x1A\\xEC\\xA0\\xA9&j\\xA56Z3\\x85x\\x9D\\x12\\xDAT\\x8EnE\\xD8\\x19\\x1F\\x11\\x11\\x8E)\\xC4k\\x95\\xD0\\xBE2\\\\+!4\\xC0\\x06\\x7F\\xC7\\x8C\\x8EL#\\xEE\\xA7D\\xE6\\xD9\\xDC\\xAE)\\xBF7o\\x87\\x18\\x9Dj\\xFD\\xCE\n0:\\xCF\\xB0Gy\\x18\\x92\\x87\\x83F\\xDC\\xA7\\x0FV\"\\xADl)hT/\\xC1TF\\x1B\\x86H\\x1Bl*\n\\xA33\\xFC\r\\x12\\x90\\xAB\\x1A\\x11\\xF0\\x9F\\xFF\\xD7\\xFFA\\xB6\\xCF\\x89s}"
		"\\x1E\\x81?\\xA3\\x12?\\x1C\\x1F!\\x84\\x1EQ\\x83 \r\\xFC\\x86\\xB3\\x86\\xFA\\xD5D\\xC1\\x0E\\x1A\\x93\\xCB\\x98\\xC4Db\\xCF\\x9Dmr%Wc\\xD0XU\\x89\\xEDV\\xAE6V\\x17\\xC6\\xC7\\xCCAC8\\x19\\x17\\xD5\\xBD\\x0C[\\x19\\xDD'\\xCF@\\x820:\\xCB\\xC8\\x104\\x15B/%0\\x8D\\xB8\\x8B\\xADwml\\xAC\\xDC\\xD0\\x8B*x\\xC6\\xFC\t663\\x8D\\xB8r(\\x04\\x01\\xCB\\xD9m0NUv\\xDF\\x19N\\x0B\\x02\\x82*6Q.J\\xA9b\\x18$)\\x9C<s\\xAC\\xE0\\x1D\\xED\\xD0`\\x11\\x81H\\xECyh\\x9C\\xAF\\xE4j\\xA6\\x1A,\\x17!\\xFA^"
		"\\x9BX\\x19\\x1F\\xB1\\x88\\x8DK\\xB5h\\xECe\\xE4\\xCAH\\xDD\\xD0 k\\xAD0\\xFAu\\xE9\\x1B\\xE8\\xA5H\\xF1\\x86i\\xC4\\xDD\\x1B\\x1Ao+\\xD7\\xF4\\xA2\\x9C`2\\xCD\\xD0\\x10\\x92\\x06\\xCD\\x8D/\\x87\\x12(\\xB7\\xA0\\xF4&\\x81d\\xCC^\\xA8\\x10\\x05\\xC5\\xE1\\x01\\xA0l\\x8CR%\t\\x8A\\xC3\\x9C\\x14gN\\x16\\x14\\x879\\xCD\\x0C\\x08JP\\x1C\\xE2\\xE0\\x80n\\xE5h\\x06z\\x84\\xA3\\xDD\\xCCip\\x9B\\xD2B\\x06M,s\\xE9\\x02\\xFD\\xCF\\xB9;\\xFF\\xE7\\xEDj\\xF7\\xB09\\x13\\xAC\\xFF\\x0E\\x7F\\xBCq\\x88\n"
		"\\xF0\\xD7;\\xBE\\x93\\x9Em\\xF0\\xDEfl\\xE7\\x98\\xE0\\xEA\\xA3:\\x0C\\xD1\\x10\\x1C\\x92\\xCA{\\xA6\\x8DNJ\\xD5\\x82 @\\xDD\\xFB\\x04\\x80\\x80\\xAA'\td\\xD2bE\\x80H\\xECy\\xD2\\xC2\\xC1\\x16\\xF2\\xFC>\\xC1\\xC9\n!\\xF6K\\x08\\x9E,3\\xE2\\xC7\\xDE'\\x98}R\\xB4\\x7F\\x9FD[\\x19\\xFD\\xFB\\x84N\t0\\xA3\\x1F\\x87\\xD8\\xC0KUJ`\\x1Aq\\xF7&-\\x19\\x9C\\xCC\\xED\\xDF'dxf\\xDFMZ\\xB2=a\\x95\\x98XO\\x11YSg\\x06\\x19\\x93\\xCC\\xEE;\\x83l\\xC6\\x1C\\xCAd\\xAA\\x07\\xA4\\xB4!\\x1BQ\\xB28\\x1C\\xDB\\xDC\n"
		"\\xB33^Ut\"S\\x106\r\\xB8?c\\x9A\\x95;\\xA8\\xAFRVQe\\xAB\\x82\\x8A\\xC1\\xBEQ\\xFA\\x8B\\xFB\\xED\\xED\\xC3\\xEE\\xEAl1\\xDF\\x82\\xF5!\\xA8@\\xF3\\x8D\\xCCL~f\\x07\\xD0\\x984\\xC3d@\\xEB9Q\\x8F6)\n\\xF6\\xD5M4rV\\x94\\xEB[\\x93\\x99F\\xDC\\x9F\\xBDhH\\xF5o\\xA0\\xFA\\xEB\\xAB\\xDB\\xDB\\xD5\\xCD\\xF6\\xB6kCT\\xCA(\\x1B\\x11W^\\x1BL\\x15yR\\xB7\\xABb\\xC8\\xFD\\xA9[\\xF5\\xDFH\\xA2 \\\\\\xA4\\x12\\xA0\\xACk\\x04\\xA6\\x89\\xD6\\xBD=@\\xBE\\x0F\\x8C+p\\x7F\\xC9\\x90\\xFCi\\xB5~"
		"\\x1B\\xDE\\xE87\\xD6\\xBBMv\\xEB\\xB3\\xF1<o6\\xA3S^\\x8FY\\xEB\\xF5\\xB8N\\xE7)\\xE7t\\xAE\\xCE\\xF3\\xAA\\x1F\\xA5\\xA8\\xA3\\xB2Q%R\\xD8W5\\xFAQ\\x82\\xC5\\xAC\\xEB\\x19\\x80.\\x9E/\\xD5\\x8B\\x82\\xBC\\xF5\rM\\x82\\xA5\\xB5\\xAF\\x85,\\x00\\x1B\\xB1\\xEBk\\xC1\\xC2l\\x16r\\x85Q\\xAD\\xD2B\\xB4\\xAA=\\xE3\\x05\\xA5*\\xE3#@\\xAAU\\xB6\\x165\\xBD\\x0CW\\x19mx{m\\xC9IbF7\\xD3,\\xAC\\xEA\\x02\\xEBU)\\x91i\\xC4]\\xBE\\x16,\\xCCk\\xE1\\xC6^T\\x16\\xBCo~-\\xD0\\xE94\\xD0\\x88+"
		"\\xAF\\x85XW\\xB2\\xD5\\xBA\\xB0u\\xAF\\x826\\x82\\x10\\xF2\\xE2G.\\xB6R\\xC5\nB\\xC8\\x1C\\xAFf\\x8E\\x13\\x84P8y\\xE6x\\x06\\x11\\x85\\x13\\xD2\\xCC\t3NX\\xDA\\xA1#\\xD3\\x88\\xFB\\xCB\\x16\\x1F\\xBD76\\xF1\\\\\\xFBs\\xB7\\x1E7\\xD9\\x84\\xD1\\x05\\xAB\\xC7\\x95>\\xCD\\xE3\\xE9Y\\x8C*X\\xBF9\\xDF\\xE4\\xC5\\xC24\\xD1\\xA4L\\x1F3\\xABS\\xD5\\xA23\\xDE\\xAD\\xCE\\x15\\xB0\\xC4\\xD9\\x8A\\x92\\xD4J[\\x8C\t\\xE1\\x90\\xED\\x84\\xB5\\xA8\\xA9{\\xDB\\xD2\\x1A\\xC34\\xE2\\xFE\\xEC\\x16~"
		"\\xFB\\xF5\\xEF\\xB1Y3*\\xBD\\xFC\\x14\\xBB\\xA0L\\xF0\\xA4\\x8B\\xADO\\xE8L~k\\\\\\x855\\x7F8>\\xE2\\xF8\\xD3T\\xC1\\x0BX\\xD9+\\x1F*6\\x89\\xB8W\\x14\\x85\\x9AJGA\\x1C\\xFB\\xD2i\\x06\\x18\\xAD&\\x0F\\xDC\\x9A,\\x90aW\\xD2\\xAA\\x06\\xF3\\x93)\\x073\\x1F4\\xE2~\\x8A\\xB7u\\xB9\\xA5\\xBBM\\xEC\\x16Y\\xF2\\xD1\\xB9\\xBA\\xEE\\xE5\\xDA\\xCA0\\xF5-@+\\x9A\\x89\\xFD\\xD0\\xC0\\xEC'\\xE0\\xB0F\\xF4\\xC2\\x0FV:0\\x8B\nu|\\x91\\x19g\\x0C\\xD1\\x1AG\\xF3\\xDB&"
		"\\x81\\x00\\xA58\\xE1\\xF6\\x96\\x80\\xA1re\\xD4\\x90\\xC3j\\xE9\\xB4XX<\\x18\\x97\\x9E\\xB5uz\\x86\\xE4\\xAC\t\\xF40X\\xFB\\x02\\xBD=s\\xE5\\x1Bc\\x05\\xEB_S\\xBA\\x03\\xBAM\\xEEX1\\xE7*\\xD5\\xB6\\xA8\\x99\\x85\\x03\\xA0\\xC5\\xBA\\xF2>\\xB1\\x02\\x81i\\xC4\\x9DE\\xC4J\r\\xBD\\x884#zUDf\\x1Aq\\xAB\\x08\\xAF*5w\"\\xD0\\xCD\\xBAD\\x18\\x12\\x110\\xF1A#\\xEE,\\xC2V\\xAA\\xE9E4\\x90`\\x15\\xE1\\x99F\\xDCYD\\xA8T\\xDF\\x8B\\x88\\x0C#v\"\\x12\\xD3\\x88;\\x8B\\xC8\\x95\\xDA"
		"!\\x99\\x16f\\xBC\\x8E\\x1DRe\\x83\\xE6\\xCFIG3\\x056d\\xD8\\xCB\\xC2n\\x17X\r\\xBE99\\xE468F\\xC8\\xBA\\x9A^\\xC0\\xA9=0K>\\xE4o\\xDEp\\xA6\\x1FZ\\xE7\\xB4\\xFFG\t-\\xC22kR\\xF9\\xEC\\x7F\\xC2\\xC9\\xAE=\\xC4\\x8Co.hK\\xDBx,\\xBEAc,\\xED\\xA2\\xE5\\xE6\\x1E\\x94\\xB6\\xB4)\\x06\\x13\\xC0\\x96-\\xBE\\xE4\\x80\\xCEZ\\x8C\\xA50r#\\x82\\xF6\\x9F\\xB2\\xC0\\xC1>\\x04.k\\x047\\x03\\xFBpk>\\xF1\\x80\\xD6\\xF7>\\x04Z\\xE5\\xB4k\\xC3\"M\\xFBx7cg\\xD2\\x02\\xF2'a5\\x80\\xD9\\xB5 "
		"T\\x86oED\\xC1\\xCE\\xBA\\x16$\\x01\\xDD\\xEC2h\\xD53-x\\xEA\\xFC\\xD5\\xDC\\x88\\\\\\xA56\\xF0\\xA0Mj\\xC6\\xDE\\xA4\\x11\\xB0\\xFF\t\\xB1\\xB3Iu\\x8DH\\xA62t+\\xC2\n\\xF6\\xD66\"\t G\\xECO\\x98T\\xFB\\xC7\\xAB\\xAA\\xE6\\xB0\\xE9E\\x94k\\x1F\\xDB\\x00vE\\xF3(0\\x1F\\x98\\x9D\\xE6\\xA92b+\\xA2\\x00q\\x02\\xD7[\\xF2\\xD2\\xC8&Ky\\x0F\\xAE\\xF7f\\xB0v\\xCA\\xE1;\\x9F\\xBEL\\xDFiwi\\xECDvA\\xD6\\xA5VV\\xFB \\x7F\\x1A\\\\\\xBC\\xD6vD,\\xEE\\xD1\\xB81\\x8Di4\\x0E\\x7F\\xF8A\\xDB\\x0F_\\x19;"
		"Xw\\x9D\\x86D\\xA2L\\x15\\xA5\\xEB\\x91\\xFE\\xAB\\xB3\\x93\\xDD\\xBB\\x8B7\\xF5:\r\\xDDm\\xDA\\xBD\\xBB\\x18\\xE6\\xC0\t\\xEB\\xEB\\xDD(\\x01*\\\\\\x1C\\xB4\\xBA\\xD6\\xA3^\\xF9\\xC9\\xB9\\x81~p\\x1CT\\x9C\\x04\\x9Ft\\xFA\\xCC#$8\\xFD`:\"\\xC3\\xC6\\xEBQ\\x0F\\x9AT\\xB0\\x82#\\xD6Nq\\x82E\\xDA|\\xE8$\\xB3%\\x1FRl\n9\\x0C\r\\xDC\\xAA\\x02|\\xE5;\n\\xEB\\x9D0Ap\\x7F\\x89\\xF3\\x81k\\xD4W\\xB7\\x0F\\xDB\\x9B\\xD5\\xC3\\xD6\\xF4\\x86\\x8Es\\xC6h\\xA7\\xB8\\x01\\xA9"
		">\\xA77\\xD3\\xB0\\x84M5\\xD3\\x9AT1G\\xC7\\xDA\\xC130KS\\xCD\\xC15\\x10\\x18\\xF0\\x87\\xE3\\xA3\\xCF\\x7F\\xBA\\xC3\\xB1\\xAEz\\xB1J;,\\xE9\\x82\\xED\\x89\\x81\\xED\\x94\\x15\\\\\\x10\\xDC\\xFDlnm\\x00\\xB1\\xFE\\xEFq<e\\xB7\\xD4\\x91\\xF7\\xC7\":x\\x00\\x87\\x00+\\xFE\\xC79\\x15\\xB4SA\\xC0C7\\x1F\\xC1pp\\x18\\x84\\x18\\xFA\\xD2\\xA92>r\\x08\\xC3\\xC1{\\x90\\xA2\\x1DR\\xE9\\xC8us\\xDD\\xD6\\x9A\\xC3\\x02%"
		"(\\xD2\\xD5Lx\\xDAiS\\x89\\x8B\\xD2\\xB62\\x0E\\x04\\x1D\\xEB\\xB4\\xC0\\xB2\\x95\\xA2\\xB6k\t\\\\\\x08\\xE3L/7\\x08\\xEC\tn\\xD5\"Vb\\xE8K\\xA7\\xCA\\xF8X_\\xC0\\xC4\\x97\\xA2\\xA9\\xD3\\xC2\\xA8\\x19/\\x95\\x99\\xEE\\x8C\\x16\\x88\\x15\\xDC\\x9F\\xEF\\xAE\\\\\\xED.\\x7Fs\\xF9x\\xFF\\xD7+\\xBC\\x08\\x97\\xEE\\x88\\xA6@\\xB5\\x98$\\xC6\\xD4\\xA7t\\x1B\\xFD\\xB8\\xD2V`Y\\xCA\\x980\\xA7\\x19\\xA2jN\\x00\\xD7n\\xA2\\x1B?\\x83\\xAA>\\xE1\\xE2\\xAEv0\\xF5\\x0B:Z\\x86\\xDEDAV\\x9D\\x91c-"
		">\\xE9D\\x9CT9\\x1D\\x9A\\xEB`\\xEF\\x17`\\xB4\\xF4\\x1A\\xAC}BU\\xC1-\\xE3\\x04s\\x9F\\x89V\\xF5\\xA5Me|\\xC4\\x0Fw0\\xED\\xA5h\\xAF8\n\\x9Ar9I\\xC6\\xDFz\\xC1h\\xDD|\\xD2\\xC3\\xD9P\\x89\\xBE/\\x1D+\\xE3#\\xC8\\xB6\\xA3m5.\\x1A\\xFB\\x96d\\xC6~[\\xB9\\xB4\\x81\\x06\\x1B\\xD2\\xD9\\xB9/\\x9C.\\xC4r,\\xBA\\x946\\x95\\xF1\\xB1\\xBEp\\xB6\\x165\\x9D\\x16\\xB4[\\xE6s/\\xD7\\x0B\\xF6\\xECf\\x94\\xDF\\xD1\\xA6\\x18\\x13\\xFB\\xBEp\\xB12>\\xD6\\x17.\\xD5\\xA2}_\\xD06X\\xE8"
		"[\\xE7\\x95\\xE0\\xDC\\xE0\\x16-h\\x9F\\x8A\\x88~Q\\xDAT\\xC6\\xC7\\xFA\\xC2\\xDBZ\\xB4\\xEF\\x0B\\xF8\\x04&\\xF4o'\\xCC\\x1F\\xC2\\xD4)5}\\xD1\"Tb\\xDF\\x17\\x18ga|\\xAC/0\\x18R\\xB4\\xEF\\x0B\\x9Fg\\x00\\xBB\\xBCE\\x82\\x80\\xDA\\xC4\\xFD\\xD9o\\x91\\xDF\\xAE\\x1E6;\\xBEk\\xEA\\x96\\xAF\\x11\\xC2\\x05\\x92FH+\\x8D\\xA4\\xE6\\xF2\\x98\\xFE\\xA802\\x95\\x17\\xA0\\x1C\\xE1\\xAB$\\xD6\\x84v\\xB45\\x16\\x97_J\\xF8!\\x05\\xE0./\\x90\\xE0g\\xA4\\xBA\\xACC\\xDA\r"
		"\\x839L\\xD9\\xC2\\xDB\\x17\\x08t\\x10N\\xB7\\xC7\\xE6h\\xD3+\\xF6\\x1F=\\xF8\n\\x84p\\xBB\\x19\\xDF\\xA7\\x9B\\x93B\\xECK\\xC3S`\\xC6\\xC7\\xF0}G\\xBBK\\\\\\xB4;!\\xE3\\xE0\\x05\\x98\\xD4O\\x14r\\x01`/\\xBBhg-|%\\xBA\\xBEt\\xA8\\x8C\\x03g\\x85z-b-\\xDA\\x7F\\xBE\\xC99H\\xFDG\\x8FL{\\x18\\xE7.\\xCE}A\\x86=\\x13\\xFB\\x85N\\xE6=1\\xD2\\xC7\\xFA\\x82\\x0C~.\\xAA;-\\xC8\\xE4\\xEF\\xE1~G\\x16?l/\\xF7\\xF3\\xE0~\\x9E\\xAE\\xDF\\xACn\\x1E\\xCF\\xEEW\\xBB\\xD5\\xD9\\xE5\\xFB\\xD5\\xEEn\\x83\\x84B{\\x9F"
		">\\xDC\\xF0u\\x98\\x82\\xE4\\x12\\xF0\\xB3:\\x00\\xD9\\xC1)\\xB0\\x15\\xE6o3\\xBCQ\\xB5\\x82\\xCFv3\\x17\\xCEA\\xC1`\\xCB\\xCC\\x85g`\\xBBP*\\xDAe\\x01X\\x89\\xDB\\xCD\\xDC\\xAC\\x0B'w\\x98\\xA9\\xCB\r\\x8EZ\\xFA\\x8E\\\\aXP.W\\xF0\t7\\xA2\\x0B\\xB17r`\\\\\\x0B\\xE3#\\xC7\\xF1\\x1C9\\xC8\\\\\\xD4\\xF7\\x8AG\\x86o\\xDBY\\x80\\xCE#H\\x97\\xB2r\\x17-r%v\\x9F(\\xE4\\xC0.\\x8C\\x8F\\\\<@nl.\\xEAU\\xD7nO\\xDE\\xAF\\xB6\\xBD\\\\+"
		"\\xF0\\xB1\\xAF\\xA6\\xB2F\\xF2\\xEAB\\\\\\x94\\xF6\\x95\\xF1\\x91\\xBE\\x00\\xBD\\x14\\xF5\\xBD\\x16\\x91a\\xE9Nn\\x12\\xA8\\x9A\\xD2\\\\\\x17-r%\\xF6}\\xA1Ue|\\xAC/\\xC8i\\xA5\\xA2\\xFD\\x1C\\xC0\\x85v\\x82\\xC0;\\xB9V`q\\xAF\\xE7\\xBE \\x9F\\x95\\x89}_h_\\x19\\x1F\\xEB\\x0B\\x1Dj\\xD1\\xBE/\\xC8\\xCF\\xB4\\xF3\\x95Ud\\x94f\\xD0\\xD5\\xEB\\xFD\\x08\\xF9:L>\\x0E\\xFEZ\\x9B\\xC9\\x1A\\xDC2\\xB6\\xF6\\x0F\\x06\\x19u\\x06\\xE3\\xD7\\xB8\\x8B<\\xA4\t"
		"I@\\xC0\\xF4H\\xFF\\x17\\x13\\xFF\\xBC\\xC6-g\\xBA\\xEA\\xFC\\x87\\xA0\\x06\\x97&g\\x07\\x97\\xF1\\xD3\\xE7\\xD7\\x94?\\xC6\\xBB\\x89\\x92aL\\x8A.N\\xFB\\x81\\x12%x\\\\Y\\xD7\\x1E\\x96\\xB7\\xAD.\\xD8\\x7F\\xE6\\xA3(\\x03\\xFF\\xA7\\xFEo\\xF97*\\x92\\xCB\\xEA\\xEC\\xF1\\xD1\\xE7_\\xD1\\x9FZ\\x90O\\xCE\\x91-\\xC7+\\xD0l\\xDA\\xED`\\x8E>\\xFE>\\x18\\x9F\\x89j+u\\x99\\xA4\\xBD8\\xA4\\x84\\xBF\\x9C\\x92\\xA9\\xBE\"\\xD4b\\xBCC@Lz\\x9A\\xAB\\xB5m#\\xD3\\x0B4Z\t"
		"A\\xB0T_vI\\xAAR\\xB1r\\xDA\\xF2\\xA9Re\\x1B6\\x98h\\x88\\x93+'\\xCD\\xE5\\xADb \\xF5\\xE8\\x9Bo\\xFF\\xFC\\xC7\\xAF\\x7F\\x07\\xCD\\xAC\\x16\\xEC\\xD5[\\xF5D\\xBB\\xDEm.6\\x0F\\x14\r\\xA8A\\x98\\xD0\\xBE\\x9B\\xB9\\x81\\xD6T1\\xD4i\\xB4y\\xE3i\\x7F\\x01\\x16V%8\\x81i\\xBD\\x95\\xAD\\xA3`\\x95%\\x8E\\xAF\\x1C\\xD7\\x94\\x0F\\x82\\xB9\\xD6\\x16DAP+!16\\xDA\\x00\\x9E\\x9E\\xDE\\xE6\\x817\\xCC\\x7Fh\\x03\\xBAPh\\x1B>$\\xC9\\xBF\\xD3f\\x01_\\xFC\\xACX(\n\\xEE\\x93F\\x84&\\x1A\t"
		"\\xA4BP\\x15\\xBE3\\x8A\\xEBoro\\xF4f\\xFF\\xD2i\\x1FQ\\xF0{OI\t\\xF8\\x02\\xDA\\xA7\\xDE\\x90\\xD5\\xC8\\xCE\\xCB\\x08\\xAE\\xB7\\xCD\\xC9>\\x0F\\x87\\x80\\xC9M\\x8C\\x8F\\xDAV\\xCEA\\x0BL\\x81\\x95Cd%4\\xEB\\xAF\\xBBq& \\x01\\xDB\\xC1\\xA6\\xAC\\x10\\x19U\\xD4\\xA5\\xF0D\\x1B\\x02:\\xE6\\x109\\x1Ayz+\\x80\\xCB\\xB7\\xF2\\xBD\\x13L\\x97\\x98\\xCF@\\xCDt\\x8F\\x88\\xC2\n\\x93 Wk\\xF1\\x1B\\x8D\\x12 j\\xA4\\xFC-t\\xF7\\xE4)\\xCC\\x9B\\xCD\\xC3\\x8A\\x84\\x84Z\\xD87\\x00 "
		"2\\x02W\\x8C\\xB8h\\x99\\x04Y\\xF6r'\\x10W\\xB9\\x89\\x91+#\\xB5\\x8AxU\\xE9y\\xDEje\\xBB\\xC0\\xD3^\\x0F1K8\\x10~\\xB07\\x028\\xFF?\\x9F\\x80\\xDDM\\xDF\\x8FN\\xC0O\\x84\\xBE5R\\x083\\xC0\\xEE}s:\\xD4\\xC3[\\x12r\\x93[:`\\x1F\t\\x1F\\xE5`\\xF9\\xB3\\xE5\\xFD\\x0C\\x96\\xCB8\\xC0}\"p\\x9E\\xF2\r\\xD3\\xE9K\\xEBYf\\xAC\\x9C\\xD0\rD\\xAA\\xF4rh\\xD4\\x06\\xEE\\xED\\\\9-r\\x8D\\xDC\\xC1\\x15`\\x97\\xC7\\xC2\\xBB"
		"!X\\x9E\\x12\\x0B7\\xC3\\x1FLe\\xE8\\xF6\\xA9\\xC1V\\xBA\\xD9\\x1B\\xFE\\xE0*\\xD3v\\x0F.h\\xFD\\xFF\\xA7\\xE1\\x97+\\xD0\\xBF`\\xF8\\x9F\\xDA7\\xD0>\\x04\\xD9\\xA0(\\xD9\\x90y\\x06\\xD0\\xEE\\x1E\\x93\\xC333\\x80v\\xF0\\xDA\\x10\\xB3\\x1A\\xC9\\x8Eys\\xC3\\x97\\xED\\x9D2\\x03h\\xAF\\x8E9\\xB9\\x1D\\x0B\\xDA\\x80#zT\\xFD\\x0C\\x88\\xA6rt;\\x10\\xB4\\xDF&\\xCE\\x8A<6:\\xD9\\xD3\\xF0\\xE5\\xF6\\x8F\\xCC\\x00\\xCA\\xDC\\xCE\\x0C\\xD7="
		"5T\\xBA\\xDF\\x9B\\x011Vf\\xE8\\x1E\\x9Cd\\xAB\\xE3\\xFF\\xCB\\x17\\xA8\\xDE\\x14\\xFFy_\\xA0\\xFDM\\x17\\xED\\xE1L\\xD2\\x96\\x8E\\x8F\\xCD\\xC1\\x19dc.\\xE4\\xFC\\xCC\\xB0\\xA7f\\x9BF\\xFA\\x1F\\xFE#m\\x07\\xF9\\xA4\\xFBaO\\xB6rL;\\x00\\xC9U\\xBA\\xED\\x87=\\xF9\\xCAi7~<\\xB9})v\\x8F\\x8D\\xB2!\\xE4\\xCB^\\x90\\x0C;\\xB9{\\xCC\\x88\\xDDSs\\xA5\\xA7\\xBDa'\\xDF\\x8F\\x99\\xB9}0y~i\\x0E\\xD3\\xE2\\xC9\\xE3k\\xE2\\xBAx\\xB8{\\x05\\xC5/\\x867\\xBC=\\xDA&"
		"\\x00\\xF7\\x80\\xF1N\\x1B\\xD8l\\xBC\\xC3\\xFF\\x93\\xA2\\xAE\\x97\\x11*\\xA3\"\\xDDH\\x8B\\\\\\x88\\x1D\\xEA\\xE2\\xC9W\\xAEG\\xC7(\\xEC;Eu\\xD4H\\x90\\xCC\\xF8~\\xEB\\x13#9r\\xC1\\xEC\\x91\\xC1\\x8A\\xE2\\xD7j\\xA4Df\\x14\\xBE/;#\\xEB8\\x96V\"\\xCC\\xEA\\x00E\\x08.\\xEF\\x8B\\xBB\\x19\"\\x96\\xC6 g0C\\xCB\\xE1\\xB0g7w\\x082\t\\x97\\xA2\\xBE\\x97\\x11+\\xA3D\\x19\\xD4\\xC8\\x1B\\\\\\x88\\x9D3\\x8F\\\\\\xC1\\x15f\\x0E\\x9E6\\x1A\\x03\\xF9\\xCEv\\x01\\x0F ]"
		"o\\x81\\x82\\x91o\\x9A\\x83\\xE1\\xA0y\\xE4\\x0F/\\xCF\\xC7 gn\\xC1l\\xD1\\xD3R\\xD4\t\\x08\\xDB\\x17\\xF5\\x15X\\xC5Q\\x9A\\x1A\\x0E\\x87j\\x04\\x01L\\xFB\\x1A\\xB1\\x82\\xA0\\xD8\\xC1*\\x11iu\\x80\\xE7\\xE6\\xFC\\xDE\\x03rE+\\x7F8>\\xFA-E\\x9E\\xD5\\xC1(\\xC1\\x1F\\xBB\\xB2\\x98\\xD3\\x05x+]\n\\xC7\\x88\\x00\\xBB`\\x0E\\xE2\\xAB\\xCD\\xB0\\xC0[\\x92\\xA2\\xA6\\x97\\xE1*\\xA3Bd\\x01~\\x90\\x10\\xBB\\x8Bl\\xC1\\x84\\x19\\xBC+"
		"\\xC3\\x82\\xE1sK\\xBC1\\xC0\\x13\\x12\\x80\\x8D\\x87e\\x90\\xBE6YP\\xB3\\xAE8\\x1C\\xA1\\x82\\x84\\x85@\\xEF\\xB4\\x00O\\x88\\x90\\xAD\\xBE\\xA4\\x99q\\x9C\\xD2\\x08\\xB85\\x84\\xFFP~\\xB9g;\\x02\\x7FKQ\\xDB\\xCB\\xF0\\x95QA\\xE5@{|L\\xEC0\\x9B`\\xE3\\x8C\\x05\\x95\\x8E\\x80\\xE7C\\xD8N\\xAFo\\xAEx\\xCD<'*\\xE6\\x15\\xE0N\\x10\\x14\\xD3U\\x827!\\xF0J\\x99zs\r#\\xB0I_\\xC3V(\\x84\\xE7uS\\xA1 \\x1C}\\x85\\x19\\xB5@N\\xF69X\\xAE\\x0E\\xE4\\xA6\\xEA\\xBD'\\xC4\\x02"
		"<\\xF0\\xAB\\x13\\xC9\\xBD\\xD8Y\\x17\\xE70\\x90\\xBB\\xD9\\xF8\\xE8\\x01\\xB6:\\xB9\\xE7\\xA5\\x04\\xEC\\xF3\\xD6\\xE3\\x0E\\xE4`\\x1A\\xD7\\x94\\xB0\\xE2lW\\x82\\xEB}\\xEC\\x00\\xE3\\x95\\xDC\\xEBZb\\xE1U\\x07X\\xACp\\xB8\\xE7\\x12I\\xDCi9\\x99\\xBB\\xB9=\\x1B\\xFE\\xF9\\x7F\\xFF\\xD3?\\xFF\\xEF\\x7F\\x9A*$\\xF1j\\xA4\\xAC\\x19h\\xBF_\\xB8\\xCD\\x01\\x86\\xAB\\xB7\\xE5\\xDC\\xEB\\xF0\\xC5\\x9F?\\xFF\\xFC\\xDF\\xFD;\\x94\\x84\\xF9\\xEAe\"\\x85\\x18\\xA9"
		"[\\xC2\\xC2g\\x0E0Y\\xBD\\xCC\\x9F\\x10\\xE9\\xBE\\x1D\\xD2/\\x913=\\x17\\xF2\\xECL\\xCF\\x840\\xBB\\x98\\x82W\"A\\x13;\\xD3\\xE0>\\x93\\x08@\\x87\\x90j\\xC9\\xD8\\x8B\\xC8\\x95\\xD1\\xDD\\xDD\\x08QUFww#\\x90;\\xE1:\\xB0=\\x90q\\x8FI\\x1A\\xA2\\xEE\\xF7\\xD0\\x9F\\xB4\\xA9\\xD0]0\\xFF\\xA4Zw\n\\x17\\xD9\\xA2\\xAA\\xC3\\xC97\\x12\\x03\\x99\\xF1\\x98\\xD5!\\x1Er8\\xAB!\\xF6\\xB0\\xBA\\xA0Y\\x1EC-\\xEF\\xF7\\xCB\\x177\\xF7\\x1E\\xF9\\x8E\\x86=J\t=E\\x82b\\x15\\x14\\x9E{0\\xC7}"
		"_\\xDD\\xBF\\x1FIPo\\xDA\\xE9@\\xD6o\\x89\\xB2+M\\xCA\\xE2HS\\x16\\xACg|\\xE8\\xF1fuE\\x1D\\x06\\xB3Nj\\xE4V\\x12Y\\xB8DO\\xEAyIUK\\x12gj\\xB5\\xD6\\x06\\x0Fd8\\xBA\\xD4=\\xC1\\x89s\\x1E\\xD2\\xC1\\x98^_R\\x8C\\xE5\\xF1\\x13\\x10\\x93\\x90|\\x15\\xE5\\xBA\\xA7\\x86\\xD9O/O\\x8D\\xE2\\xE1\\x87C\\x91H\\xE6+u\\x01V\\xA2\\x14\\x8C\\x9D\\x80\\\\\\xE9\\xFD\\xF4\\xC6K\\\\\\x18-\\xFE\\x10r\\xE3C\\x97\\xD9\\x98\\x8D@\\x06\\xE0>\\xBB\\xCC`="
		"J\\xC9\\x85\\x08W\\x19\\xB6\\xD7\\xC3WFw\\xAC\\x1C\\xC9\\xC1\\xC8\\x7Fo\\x97Y\\x8E\\xE2\\xD3S\\xEA0H\t\\xC9X\\xE2\\xA4\\xCA\\xE9\\xD7w\\xCE\\xB3\\xA3\\xCE}\\x12\\x95\\x12\\xFF>\\x94\\xC3x!\\x11\\xA0\\x1C\\x95\\x16\\x0E\\xCA\\x08\\x07x2vs*GW\\x0E\\xD7\\xB1\\xB3__\\x1E\\xE0\\x04\\x0E\\xA0\\x1Cf\\\\\\xD8[\\xE2\\xF8\\xCAq]\\x8DP\\xE9\\x05mH\\xC1\\x10'VN\\x8BfE\\x95f(\\xA0\\x08\\xC9\\x02 \\x80\\xF9\\xF4\\x14\\xFDTL%\\xC2\\xBE\\x14y\\xED\\x14A\\xFA\\xA6\n(\\xC8\\xA3i\\x03\\x05\\xEFuJ\\x85\\xF5\\xF4"
		"<\\x8D\\xB4\\xC7\\xC1\\x05M'\\xC0Uz7?\\xA2\\xF6\\x95\\xE1:%\\xC2\\xEC\\xE9\\xCBX#\\x08-c\\x1B\\xF1\\xC0m\\xD7v\\x9EF\\x9Dj\\xC9\\xD8\\x8B\\xC8\\x95\\xD1\\xAD\\x17\\x04F(\\x8C\\xEEs\\x10\t\\xD6\r\\x9D\\xB5\\x1E\\x8D\\x11\\xE4!\\x96{\\xAC2O\\xA3\\xB1\\x95\\xD3-\\x90h\\xDC\\x0C'H\\x9F\\x18/(D4\\xAE\\x9F\\xA7&T\\x8E\\xEF\\xE7\\xA9\\x89\\x95\\x13\\xFAyj\\x1A\\xF4\\xA1< \\x0BhAI\\xB0\\xDAy\n\\xF3S8\\x9DJ\\xB4\\xD9Bt\\xAB\\xFAy\n"
		"3T8\\xED\\xAB\\x14\\xE9\\xAF*`Q\\x848\\x819\\xE2\\xE1\\xF0\\x88O\\xCE\\xD3'\\xC1\\x9F\\x08cUDv\\xB3\\x04\\xF6jA>\\xCA\\xD3\\xA3`&\\xF1\\xD0\\xB1\\x98f\\xAA\\xDAT\\x0B\\xC6N@\\xAE\\xF4~\\x8A\\x90\\xE9\\xCA\\x8Cn\\xBD\\x90\\xF1\\x1A\\xBB\\xAB\\x02\\x91\\x8CV|\\x12\\xE3\\xA1c1\\xEDTu\\xB6\\x96\\xECg\\x0C\\x99\\xB1\\xCC\\xE8\\x97\\x0CY\\xB2\\xCC\\xE8^\\xA9\\x91\\xEC\\xD8\\xA4\\xBA\\xA9JV,>\\xAB\\xD1\\xF5\\xAF\\xD4H\\xE6,s\\xFA5Bfm\\xEA\\x96/"
		"\\x19\\xB6\\xF8\\x9A\\x96\\x0Cau\\xAA\\x92\\x85K\\x1C\\xBFx\\xA5\\x92\\xA9\\xCB\\x9C\\xC5+\\x95l\\xDE\\xD4\\xCD\\x19/ \n1\\xBB\\xA9J\\xE6/s\\xFA\\x1A\\xA1\\xD2\\x17\\xAFT2\\x87\\x99\\xD3\\xBDR\\xC9*\\xEE>\\x9F\\x91,_|\\x84)=\\xD6\\xA7}\\xF5\\x0F\\xA0T\\x91\\x0Cf\\x96\\xD3M\r\\xB2\\x97S\\xB7\\xC4\\xC8\\\\\\xC6g\\x1B\\xCC\\xE7\\xE6'\\x99\\xD1\\\\\\xB0\\x1B\\x0B2\\xA5\\x99\\xDE\\xCF\\x0B2\\xA9\\x99\\xD1-\\x12\\xB2\\xACs\\x01O&\\x9C\\xCD\\xD5\\xC7\\xF4\\x1F\\xF3\\x0FH"
		"(\\xF7\\xAB\\xDB\\xED\\xED\\xE6\\xD7\\xBB\\x87\\xFB\\xED\\xDB\\xCD\\xAF\\x90\\xAAN~\\x1F\\x7F\\xBC:{\\xB8\\xFC\\x95\\xB9\\xFB\\xE9\\x1F\\xB9\\xD2?\\x08\\xFD\\xE6\\xEAas\\x7F}us\\xF5\\xF0+\\xAD\\xFE\\x91\\xDA\\x1F\\x19kj6\\xC1\"\\x99\\xE4y\\xBE\\x1DGg\\x13\"\\xD9\\xE3\\x82\\x06\\xF9D[oH%\\xC6\\xF0IW\\x12/\\x9B\\x02\\x93xi\n\\xECp\\xF2\\xE8\\xFB\\x92v\\xF6\\xDC\\x83\\xA2\\xC02\\xC8\\xCD\\xCC.o_\\xD2\\xCF\\xAEm\\xD0\\x96K\\x06v\\xF6\\xDA\\xEE\\xF9\\xD4~A\\xDBa?Kji8\\x96\\x8F\\xEF\\x07\\xA2&"
		"v\\x10\\x8B\\x7F\\x83\\\\^\\xE4 \\x8AO\\x05\\xDF\\x0B\\x1B\\xC5\\x7F\\xFE\\xF6s*\\x8F\\x85H\\xA9\\xA2Ky\\x98\\xBCA\\x0C5\\xF1\\xA2\\x90!K\\x97\\xF4\\xC0\\xD1\\x18\\xA6Yv\\x1A\\xE7\\x8A\\x8E\\x9DF)\\xC44\\xCF~\\xE3\\\\(\\xB0\\xDF\\xD8I\\x8F\\xEC\\x0BV\\x97\\x9A7]\\x87\\x0E\tB:,]\\xD2\\x04G\\xC3k4ev\\xF1\\xCA%\\xAC\\xCDf\\xF8\\xED\\xE6\\xFA\\xEA\\xDD\\xE6\\xFE\\xFD\\xF0\\xD9\\xE9\\xF6\\xDDf\\xCF\\xFB\\x1C\\xB6\\xB7\\xC3W\\xDB\\xDD\\xC3\\xB0="
		"\\x1F\\x1E.7\\xC3\\xEF\\x1F67\\xBB\\xE1\\x7F\\x0E\\xFF\\xE9\\x1BI\\x03(\\x94\\x12\\xC7rx}\\x89\\x94\\x01\\xBB\\x01\\xF16\\xAF\\xD6+\\x0E\\xD0\\x1D\t\\xAA\\xA8w\\x8C\\xFA\\x07oo\\x87?R\\x94\\xD1\\x7F[\r\\xB4\\xF8\\x9Crh\\x01Y\\x8B\\xD9q\\x8D\\xB9\\x8D\\xC4^b\\xB9#!Xq9\\x7F8>\\xA27\\xCD\\xC01\\x7F5\\xD2\\x16WWQp\\x1A\\xE4\\x08c\\xFF3\\x1E8qs\\xE8\\xD2\\xD9\\xF5\\xE3\\xAE\\xDE9C\\xEA\\xE3R\\xDB\\xF7bce\\x84\\xEE-\\x02K[\\x18\\xBD\\xD1\\x03K;\\xF4\\xF7\\xBC\\x91\\xE6\\x8B=QJF&"
		"\\x87\\xACX\\xA3\\xEB\\xD5\\x87\\xF7\\xD7\\xDBUM\\xDE\\xF3sN\\xD6\\xFF=\\x1C\\xAB\\xE2W\\xDDl\\xD7o\\x1F\\xEF\\xDE\\xFC\\x03\\xAD\\xBA\\x7Fl\\xEEY\\xFBh\\x93\\xA7(C\\xF4\\x00\\xE2\\xEFN\\xBEG\\xD0\\xA9\\x01\\x01i\\x06\\xDC)\\x1Fp\\xBFi\\xC0&\\xF5\\x00\\x1Bo\\xC8J\\xFDPj\\xD0\\xC1\\xAE\\x07r\\x88O\\xF4\\xA4\\xAA\\xA6W\\x1F6\\xBB\\x93\\xD5\\xE3\\xC3\\xF6\\x08M\\xD4\\xD2\\xC4\\xD4G5D\\x06\\xB1\\xC2\\xE8\\xCE;"
		"#\\x15\\x18y\\xD5\\xD4\\x1F\\xC7\\xD1\\xCE\\x9B\\x1E\\xBF\\xB8\\x0F\\xCEqe\\xF4\\xD3\\xBB`\\xD1f$\\x10\\xF8\\xE1\\xE8\\xF8\\xFB\\x88Ca\\xD1bGH#\\xBF\\x18\\xFB\\xFE%\\x99YU\\xBF\\xB8\\xDF\\xCF`\\x10\\x9C\\xEAI#3X\\xF5\\xADk\\xFD(\\x0E;e\\x12{Z\\xC8\\xDD\\xFD\\xD5\\x9A\\x85\\xA4Za\\x11\\x8D\r=ru\\xFE\\xBE\\x065\\xBE\\xDF \\x05\\xD4n<]\\x9D]\\xCC\\x197\\xF7\\xC3vc\\xA7\\x84="
		"eY\\x95\\xC8\\xC5\\xC5\\xDEvR\\x07\\xD2\\xE9i$\\xD7\\xAA\\x9E2n\\x83\\x12\\xAD\\xF8\\xB9U\\x88\\x15g\\x99\\x92j\\xED-m$\\xAF\\xAEnn4\\x91\\xEB\\xF8\\xD9g\\x95\\xB5\\x87\\xB4U\\xEC\\xEBR.\\xEB\\xA5\t\\x10\\x11\\x9F\\x80\\x97/2P\\x97\\x92\\xA1\\x17\\x91*\\xA3\\x8B\\xD2\\x86\\x94\\xD4\\x85\\xD1]\\x92@\\xD6ivn\\x9B)L\\xBFb\\x82\\xA7r1\\xE0\\x17O\\xD7\\x87\\xAB[^\\xA8\\xBB\\xEAn\\x92\\x89d\\xDE\\x9C\\xE6`\\x93\\x8A\\xA7\\xE3*G3\\xE2\\x9E\\xFEx\\xBA\\xDE\\xE8\\xF1,\\xF8\\xF3\\x84\r"
		"\\x9F\\x94\\xD2\\xFE\\xD4v1[\\xE3\\x82\\xE1i\\x1B\\x8E\\xBB\\xB9\\x0B\\xFFK\\xF4^4\\xC8VFw\\xA9\\x18\\x89\\x9B\\xC8\\xC9\\xFF\\xB7i\\xA4~c6\\xE9<\\x9D\\xAF\\xED\\xA8\\xCF\\xD6g\\xA3;;_\\x8D\\xD9\\x9E\\x85q}\\xAE\\xCDf\\xB3^\\xBB\\x8D>\\xFDH#1i\\xBAFz\\xC1%J\\x8A\\xAB\\xDA\\x96 \\xF8\\x02\\x8C\\xDEh\\xAD\"b\\x9C!\\x84ZP`\\x05]Rn\\xA34\\xCB\\xCE\\x95#>N\\xB4\\xAE\\xC6\\x1D?\\x10\\xFC\\x1D\\xD9\\xA2\\xD8\\xA7/\\x8B\\x01\\xAE\"\\xE1\\x02\\x94lj\\x7FE\\xC1a,>}YQ\\xD6\\x8AG^\\x858q\\xEB\\x93=\\x90aS#/"
		"Ru\\xC8\\xCB\\x8A\\x82\\xCF\\x17\\xFB]\\x1D\\xE4+b\\xAF<\\x1Dr\\xFA\\xDA\\x15\\x05\\xAFOJ\\xF6\\x8B\\xD2\\xE6\\xCA\\xE8\\xDC>\\xA4\\x1E*\\x8C\\xDC\\xAD(\\xA7\\xC5\ro& \\xFC>r\\xDF)\\xED\\xD0\\xBF\\xD6d{\\x0B'\\x99f\\xDA\\x8FW\\x97\\xC5A6oR\\xF01+gG\\xBDQqt\\x9Bs7\\x9E\\x06\\x9FG\\xA0Lg\\xEBS\\xB3\\xB1y\\xF5\\xC4\\xA4\\xB3\\xC6\\x1F\\\\Y\\xCEV\\xFDM\\xDF0W\\x19\\xFD\\xE7\\x02\\xDE(`\\x89\\x7F\\xDB\\xC6\\xEA7\\xCE\\x86\\xB3S\\xBFJ\\xE3z\\xA5OG\\xB7\\xF2f\\\\\\x05\\xE7\\xC6\\x10\\xBD=]"
		"\\xEBp\\x96\\xE3\\xF9G\\x1A\\xBB\\\\a.\\x08\\xA2\\x92\\xFA\\x88\\xA1H\\xE9\\xC4\\xC8H\\xBB\\xC2\\xE0/\\xC7>\\x88+R31h\\x02n\\xB7\\xC2\\xE01\\x0B'?\\xB3\\xC2\\xE6\\xC4\\x03H\\xA5\\xC4PDY\\x1Cp\\xA0\t\\xCEH^\\x1FZap\\xA3\\x0B\\x14QV\\x18\\xFC\\xE8\\xE8\\x9Ae\n\\xF7\\x99\\xD0\\x88\\xE4\\xDD\\xA1\\x15F\\x98\\xA7\\xEB\\xBFYp\\xA0c\\x7F;&\\x11D\\xE9\"s\\x9F]a\\xF0\\xA9\\xA5dw5\r\\x91\\xC0\n#w+\\x8C0Hb\\x84\\x0E\\xBC@\\xFA$F\\x0F\\x9A\\x89HX!\\xFA*\\x85\\x7F\\xE9\\xEB|"
		"\\xF5\\xEE\\xEA\\xFD\\xEAZ\\xEC\\xCB\\xCDyJ\\x1Bg\\xD2x~v\\xAAF\\xB7>=\\x1B\\xB3\\x8B\\xEB\\xF1L\\xAD\\xE3\\xC6m6&\\xB9x\\xC0\\x02\\x0B\\x08#\\x19\\x0E/\\xA6\\xE0\\xAA\\xAA\\xB6o\\x83\\xAF\\x8C\\xFE\\xD5\\x0EW\\x1D\\xC0\\xC9\\xBFF\\xBB\\x9E\\xB2\\x19[\\x8D\\x97+\\x82\\xFC\\x16\\xCC\\xBB\\x14\\xFAO\t\\x9Cy\\x02`\\xDA\\x15A8\\xA4\\xEF\\x0BR\\xB60L\\xAA\\x14r\\xBF\"\\x08<$N\\xC9\\xCC\\xBDX\\x11\\xCB|\\x15\\x89\\xBC\\x90\\xD0Lf8\\xFA\\x04\\xA0\\x80u`E\\x10B\\x18\\xFAo\\x0E\\\\~I.>\\xDF\\xB2\\xC5\t"
		"\\x92a{?\\xCC\\xA7C\\x12y1\\xA9\\xF8\\xE7\\xE4\\xF3\\xF2\\xADGbF\\xF6\\xB4i\\x95\\xF8\\xCC\\xEDI\\xECX\\x13-H\\xEBs\\xF1\\xFBx\\xCF8\\x11\\xBE\\x96\\xDB,\\xE8\\x92\\x92\\xCB\\x0C\\xF9\\x9D\\x0B7\\xC6\\x8E\\xC6~I_XX\\xC0\\xE2s!\\xAF\\xC4\\xD9\\x19.Ir\\xF6*\\x8D\\xBC\\xDCZ\\xB2\\xFB.\\xEEP\\x0E\\xE4(\\x0C\\x7F\\x12O\\xA1=y\\xFEOT\\xD3\\x1E0\\xAC\\x0FX\\xE2#AZ\\x1CS\\x94\\xB2O\\xB1\\xA5\\\\\\xDA\\xE1\\x8B\\xD5[\\x08A\\x8C\\xD2y\\x14b\\xD0\\xD4\\xE3\\xA9\\xB1"
		">c\\xD0\\xB4\\x92\\x81\\x1A\\xA4\\x9A\\x1E\\xE8\\xEF\t\\xFAm\\x80\\x85a\\x1C\\xBE\\x11\\x83J\\x08{\\xCD\\xC8\\xAD\\xB1\\x12\\x0C\\xAEu#\\xC1\\xB7\\x98\\x1F\\xA2U\\xD6\\xC5\\x94(\\x84\\xF2\\xA5\\xDFW\\x13\\x8Ex\\xF9\\xA4\\x175\\xE1\\x80\\xA7\\x8A\\x05\\xED\\xAB\\xF9\\x97\\xAB\\x87\\xCB\\xA1\\xC4\\x81\\xFA\\xEA\\xEA\\xFA\\xED\\x9E\\x9Ep\\xD7\\xE7W~\\xD13\\x94\\x97xQ+\\x96\\x17r!$y_\\x1E\\xD03\\xCF/F\\xD1\\x13\\xB9\\xC1iM\\x1E\\x98\\x0E\\x9F\\xD1\\xE2?"
		"\\xDC\\x8B\\x99L\\xE3\\xBA\\xFCX\\xBB\\xAC\\xEA\\x82be\\x90\\xB8[\\x97l\\xF1\\x82\\xE6!\\x81\\x97\\xE6|\\xEF\\xB8h\\x84t+\\xCFM\\xA5\\xF3\\xFB\\xED\r=\\xCF\\xCB\\x0C\\xCCm\\x90\\xFEL\\x96'\\x93\\xE5\\xD2\\x9D\\x89\\x91\\x1B\\x16+'\\xB4\\x15\\x12O\\xCAN\\xA3\\xCC\\xF3\\xB2\\xA5\\xC1\\xCDK\\xF5:\\x14\\xDE\\xC7|?\\x05\\x99\\xB4y\\x0E\\xE56*\\x7F&\\xFB\\x95\\xC9\\xBAW\\x04\\xBE\\x9EpL[\\xC1\\xF1\\xB4\\xEB\\x1E\\xEAy\\xE6u\\xB4\\xC0sa_\\x91"
		"(\\x93$\\xEB\\xB6\\x81\\xF0\\xE7\\x84\\x1C\\x17\\x8A\\xE4\\xCAi\\x0E@\"\\xFF\\x17\\xCD\\xAB\\xF6\\xA1\\x84\\xE1\\xF71\\xA2\\x91\\xF3\\x8B\\x86}O\\x11ce>d\\xD36\\x10\\x8E\\x92\\x90m\\xAF\\x08\\xFC\\x11\\xE1\\xB4c\t\\x9B0+\\xD3?4\\xCA\\x88\\xF3\\xB1\"d\\x9D\\xE6\\x19\\x94MY[\\x83\\xC4r\\xAD\\xF7c\\x90o\\xBA\\x14J\\xC7G\\xDF\\xFC\\xB7?\\x81\\x08\\xB7#\\xCF\\x07\\xE8`w\\xF0\\xF4\\x99s\\x87\\xF5\\x92\\xE6\\xD8\\xB0\\x94\\x92(\\xCF\\xB7\\xFFa\\xAB\\xF0\\x0C)"
		"9\\xA3c\\xA4\\x809tfJ\\x18\\xF6\\xF8\\xFB\\x18\\x13\\x17\\xF72\\xF8\\xA5z\\x90\tS\\x92B\\xC7\\x98\\xA9\\x07`\\xA2e\\xDD\\xE8\\x98d\\x02\\x94t\\xCE\\xF59\\xB92\\xD2\\xFC\\x1C|\\xBF\\xB2\\xAE7%\\x11\\xC9\\x8C\\xE7CM\\xA7,\\xCF\\x81\\x15G\\x83U\n\\xDA2\\xBE\\xAEo\\x8Fs\\x95\\xD1\\xB4\\x07\\x86:\r]\\xA9\\x1E\\xCAp\\xBB\\xBE=\\xB0\\xC4\\xE6\\x81*K\\x19\\xE6o\\xAE\\xD1*\\xE6^\\x86\t\\\\r}\\xC7D\t\\xEA\\x10rm\\xEE\\xE4B\\xD3\\xDC\\xD3B#\\x15|\\xDB\\x9B\\xA5\\x9Cm:\\xAE\\xD0\\x1C\\xF7^W\\xD77="
		"T\\xCA\\x85\\xA63\n-r\\x8FtuS\\xD3j\\x94\\xFB\\x01w\\x81\\x8Eq\\x1F6\\x1F\\xD3u\\xD9\\xE3\\xA3\\xDF\\x7F\\xF1\\xE7\\xCF\\xBE\\xFA\\xFC\\xE8\\xF8hu}\\xBD\\xFD\\xF1\\xE4\\xAF\\xDB\\xAB\\xDBqu6^\\xDD>l\\xEE7;$*\\xDF>\\xDE\\xCD\\xC9\\x8C/.\\xAEn/`\\xC5|\\xF6\\x97\\xD1\\xC6\\x94\\x92\\xD1J\\xBFzo>[\\xBD\\xFEj\\xFC\\xED\\xFB?m_\\x7F\\xFE\\x87\\xBF\\xFCW}\\xFA_\\x7FS\\xB3\\x10oWH\\x9A~\\xB3\\xC1e\\xD2\\x14\\x02\\xAETF\\x0B,\\xEFrsuq\\xF9p\\x02@\\x92\\xAC7\\xFAm\\xF7\\xF0\\xFEzsrv\\xB5\\xBB\\xBB^"
		"\\xBD\\xFF\\xD5@{\\x13\\xC3\\xBB\\xAB\\xDD\\xD5\\xE9\\xD5\\xF5\\xD5\\xC3\\xFB_!\\xBD\\xF8\\xD9\\xE6\\xF6\\xD7G|\\xCB\\xF5\\xF2\\xE1\\xE1n\\xF7\\xABW\\xAF\\x1E\\xCE\\xA6\\xB3\\xED\\xE3\\xE9\\xF5f}}\\xB5~;\\xDDn\\x1E^=\\x9C\\xBD\\xBA\\x7F\\xBC~U\\xB5\\xFC\\xBB\\xFB\\xD5\\xED\\xD9\\xF6\\xA6U\\xC3\\xD8\\x97\\xEBw'Z\\xBF<\\xDF=,\\xE8\\xE77\\x0F'\\xF6\\xE5\\xE9\\xC5\\xC99\\xFD\\xF3\\xF2\\xE2\\xF1\\xEA\\xEC\\xE4\\x8F_\\xBF\\\\\\xED\\xDE\\xDF\\xAEO\\xF4\\xCB\\x8B\\x87\\x9B\\x13\\xE7O7\\xCE\\\\\\xAB\\x0F+"
		"\\xA3\\xD4\\xCB\\x8B\\xF5\\xD9\\x89\\xB6\\xD7\\xFC\\xAF~yv\\xB3:Q/\\x1F\\xDF\\xFCx\\x82\\xA0\\x9F/\\x1F\\xDF\\\\\\x9ED\\xA3^>\\xDE_\\xB3\\xD2/\\xECg/\\xCC\\x17/\\xCC\\x17\\x07\\x8C\\xDD\\x17\\xE6\\x8B\\x15\\xA7\\x03}a\\xBE\\xB8\\xDE^\\\\\\xDD\\xBE\\xB0_\\xDCo\\x1E\\x1E\\xEFo\\xDF<\\xDE_\\xBF\\xB0\\xBF}a|-\\xF3\\x12\\xD7\\xC8>E\\xE6\\xCB\\xEB\\xD5\\xE9\\xE6\\xFA\\xE4\\xD0h\\xBD|\\xB8:]\\x9D|V\\x1E\\xAA^|n^$\\xF5\"\\xDB\\x17F}\\x0BA/\\x8C\\xFA\\x9Ae\\xBD\\xBC\\xBC="
		"\\x81\\xFC\\x8B\\xED\\xF6\\xE2z\\xB3:\\xDBm\\xEE\\xDF!&\\xE6\\xB4\\xDE\\xDE\\xBC<\\xBF\\xBF9Q\\xE8\\x9C7\\x9B\\xCD\\x89~y{\\x87N\\xB8\\xDB\\xAD\\xCF\\xAEOn\\xB7\\xAB\\xBB\\xAB\\x97+\\xF4#\\xCE\\xD8Z\\x13\\x82SS\\xE9\\xF5\\xE0_>\\xAEV'?\\xA5\\xF0\\xF2quz\\x12\\xDC\\xCB\\xC7\\xD5\\xF9\\xBB\\xEB\\x93\\xAF\\xB7\\x0Fh\\xAB\\xFA\\xEC?\\xFC\\x06\\xE3\\xF7\\xC2\\xFE&\\xE7I\\xE1\\xDF\\x17\\xF1\\xF5\\xEFH\\x05\\xE2\\xBF\\xBE\\xBC\\xDF\\xDEl^"
		"\\xD8\\xDFh\\xA3'5\\x05\\x1D\\xE2\\xA4\\x93\\x7F\\x11_\\x13\\xE7\\xEA\\xF1f\\x8F\\xF7\\xF2qus\\x8A1Z\\xDD\\x9D\\xFC\\xE5\\xEA\\xF6l\\xFB\\xE3\\x0E\\xBF\\xBF;\\xD1$\\xFF\\xE5\\xE3\\xEA\\xC7\\x13\\xF5r\\xB3~s\\xB3=\\xDB\\x9C\\xAC^\\x9E_o\\xCE.\\xD0\\xAA\\xF5\\xEA\\xEE\\xEAD\\xBF\\xC4\\xF4>\\xD9\\xBC\\xDB\\xDC>\\xBC\\xB0\\xBF\\xBD[]l\\xDE\\x00\\xB6}a\\x7FC\\xBF\\xDF\\xAD\\x1E.i\\xA0\\x96C\\xF9rss\\xF2\\xF0n\\xD2/\\xD7\\xC8Q\\xBF}{\\xB5ysw\\xBF\\xD9!\\xBD\\xB3"
		":\\xFA\\xE1\\x87\\x7F\\xFC\\xBF\\xA9C\\xBD\\xE1\\x84\\xF3\\x01\\x00", 
		LAST);

	web_custom_request("track_4", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9sb2dpbj9yZXR1cm5fdXJsPSUyRmFjY291bnQiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lQlYxWm5ONWFFbUxZIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZWNhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbi"
		"I6ImFiZmVmM2QyLTVmNjItNDZjMC1iZjMxLWM2NDYwZmE0NWQ2MCJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTptYWdpY19zZGtfaW5qZWN0ZWQiLCJ0aW1lc3RhbXAiOjE3MDg2NjE0OTU4MDYsInByb3BlcnRpZXMiOnsicmVhc29uIjoiZG9tIn19XX0%3D\"}", 
		LAST);

	web_url("c1a778d0cb1e42f1_2", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("public_2", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_13", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xC5UM\\x8F\\xE36\\x0C\\xFD+\\x81\\x8A\\xDE(G\\x92\\xBFS\\xE4\\xD0\\xC5^\\x16-\\xDA[\\x81\"\\x08\\x16\\xB2M;\\x9A\\xB1%W\\x92'\\x93)\\xFA\\xDF\\x0B\\xD9I&\\x19\\xCC\\xCEq\\xD7\t\\x1CY\\xA4\\x1E\\x1Fi>\\xE6_\\x82d\\xB3#,\\xCA#\\xC1\\x08\\x08\\xE0\\xAC\\x04\\xCEK\\x06\\xA4,sW\\xE3\\xC3\\x13\\xD3\\x04\\x08O\\xCC\\xF1\\xA1\\x8F\t\\x90.\\xCB\\xBB\\xF81\\xB82`{ "
		"\\x92lv\\xBBX\\x94\\x10\\xBEqY\\xDC\\xDE\\x12\\xC6@\\xE4q\\x0Cq\\xC2\\x04\\xC4E\\\\B\\x12\\xF3\\xE2rKr\\xE0P\\xB2\\xA4L\\x80h\\xF9\\xA4:\\xE9\\x91\\x009x?\\xAEy\\xC4\t\\x94\\x8C\\x97\t\\xC4y\\xCE3\\xBE\\x87\\x1Dg\\x05$\\xC0\\x81\\x8B,\\x06\\x9E\\xA4\\xF9\\xB2J\\xCB8p\\x99?I\\x1E\\xFCDY\\x02\\x87\\x04v\\xE4x<F^:\\x7F\\xD2\\xAA\\xAAzt\\x91\n\\xD9\\xB8\\x83\\x19#9\\x8E\\x04H\\xDD\\xE8(<\\xAA\\xF6\\x14\\xD5f 0\\x1F\\xA9{i\\x95?E\\x83#@\\xE4\\x83|\\x8E"
		":c\\xBA\\x1E\\xE5\\xA8\\xDC\\xD9m\\x90\\x9D\\xAA\\xE9\\xD8O\\x9D\\xD2.\\xB2\\xF2\\xC5\\xD8Q^0j\\xA35\\xD6>je\\x8D\\x951\\x8F\\x91F\\x7F\\x86^\\x80\\xA8\\xD4\\xB2?yU\\xBB\\x9B\\xA8\\x8B\\xC9\\xCBn\\x90ZvhoLW\\xA0\\xB7\\xDE\\xB2qh\\x9FT\\x8D\\x17 \\xDFD\\x8D\\x99\\xAA\\x1E\\xEB^\\xD5\\x97\\xC0\\xFD4Th\\x1Fd\\xFD\\xF8\\x96\\xE9\\x15%\\xEA\\xDE9wW\\xBA\\xE1t_\\xA8P:\\xDD\\xD6S\\x857\\x1B\\xC66h\\xDD\\xABSe\\xA5n\\x94\\xEE\\xA8Eg&"
		"\\x1Bx\\xBA8\\x92#uf\\xF2\\x07\\xCA#9\\xC8\\x17\\xA3\\xE5\\xD1\\xBD\\x82\\xF0\\xE8aj:\\x8C\\x86\\xD0\rJ;/[\\xC4\\xE6>\\x96\\x1C\\xC7\\x08u'\\xBD\\x9A7\\xF6\\x97\\xD7\\xCE@@\\x9C\\xA6i\n1\\x88\\xD0-\\x1CR(!\\x07\\x01\\x05\\xC4e\\x96\\xC0\\xEC\\x93\\x02\\xE7\\x97#q\\x06\\x19\\xECD\\x11C\\x0C\t/\\x80\\xE7P$9\\xB0\\xFD~\\x0Fd\\x0C\\xED-\\x8A\\xE0\\xC2\\xCB\\xB4\\x84\\x18\\xCA\\x12\\xC8\\xEF_\\xFE\\xF8\\x8D\\x00\\xB1\\xD8o\\x1B\\xED\\xE8h\\xB1E_\\x1FV\\xA3\\xC5\\xF3\\xAB\\x0F}"
		"l\\xB1\\xDD\\x1EBJ\\xD68g\\xAC\\xEA\\x94\\xDE\\x12\\xE0e\\xC6 ^\\xD0v\\xE9~A\\xB9 \\x10 \\xF3\\xEFh\\x95\t\\x1D\\xB8\\xED\\xCD1d\\xEB\\xB6\\xAE\\xB6j|\\x85\\xF5~t\\x9B\\xF5\\xFAM\\xFB\\xAE\\xCF\\xEB\\xBA7S\\xB3\\xAE\\x0FX?\\x9A\\xC9\\xD3#Vk\\xE9\\x1Cz\\xB7\\xB6\\x93\\xF6j\\xC0\\xA8\\x97\\x1E\\x9D\\x8FPG\\x8DLD\\x9A2\\x96\\x96\\xBCd\\x15\"K\\xDA$zp\\x04vE\\xA8j\\xA8H\\xC8=\\xE33\\xE9\\x8C\\xDDe\\xFF\\xDDx\\x97B\\xDCpf\\x92\\x892\\x15-\\x8B+\\x14\\x8C\\xD7m\\x9B\\xC9\\x99\\xF3}\\xAD\\x03}"
		"\\xC1\\x16\\xFAb\\xA1\\xCF\\xAF\\xF4\\xEF\\xF8\\xBC\\xD7e\\x81\\xE4\\xAB\\x81fQ\\x16\\xB1\\xA8v!\\x8A?\\x8D\\xB8\\xF5\\xF8\\xEC\\xD7\\xCBs(\\x85\\xF3\\xA7\\x1E\\xDD\\x01g\\xE1\\x0C\\xD8(\\x19rG\\xD40Z\\xA5\\xFDB&]\\xC8\\xC4\\x90\\x02\\x8F9\\x90\\xCF_\\xFE\n=\\xDEl\\xAF\\xBA\\xA1m\\x8F\\xCF\\xAA\\xEA\\x91\\x1A\\xE3\\x08\\xA4s\\x17\\x93O\\x7F~\\xFE;d\\xD7K\\xE7\\xB6\\x1E\\x871\\xD4\\x82\\xD6\\x93\\xF3f@\\xEBho:\\xA5W\\xBD\\x91\r6+\\xE3Z\\xEA\\x0F8 \\xC5\\xE7Qj\\x874\\xA5\\x83<Q\\xC1\\x84 "
		"@\\x1A\\xE9%\\xF5Vj\\xA7\\xBC2\\xDAm\\xBD\\x9D\\xF0\\xB2_M\\xDE\\x1B\\xFDuNf\\xEB\\xFE\\x99\\xA4\\xBD\\x9A\\xB0\\xE9\\xD0m\\xAF\\x00\\xA7\\x11\\xBF\\x1EP6h\\xBF\\xD6rT^\\xF6\\xEA\\x05\\xB7\\xAD\\xEC\\xDD\\xF5\\x84;J_\\x1F\\xCE`\\xD6L\\xBA\\xB9X:\\xAB\\x1A\\xBA\\xEC\\x87e\\xAF4:\\xEA\\x0F\\xCBt\\x9E\\xB7)\ri\\xB4\\xBD\\x91\\x9EV^\\xD3\\xAA\\xA3\\xB5\\xE9\\x8D\\xDD\\xAC~\\xFA\\xF4k\\x92$\\xC9/\\xAB\\xB7.\\x17{;_W\\xBB\\xD1\\x9E\\xB6rP\\xFDi\\xB3R\\xFA\\x80V\\xF9;\\x9BS/\\xB8Y\\xF1+"
		"\\xA0\\xD2\\x81\\xCE\\xC7Ao|\\xDE\\x8F:\\x9Aq\\x1A?\\xC6xu\\xF9\\x08\"\\x948\\xCC\\xCF\\x8F0B'^\\x1D\\xD8|\\xBD\t2\\xB7\\x17\\xB5\\xB2Q\\x93\\xDB\\xAC\\x92\\xF1\\xF9Z\\x01\\x85}\\xF3\\x91}\\xA9\\xEE\\xDC\\x15\\xD4\\x9Bq\\xB3\\xE2\\xE9\\xCF\\xF3\\x10K\\x16A\\x89\\xAB\\xA0T\\xB3\\xAD\\x94\\xA3\\xDFP\\xC4[\\xC9\\\\\\xE5w\\x9E\\x06w\\x7F\\x1Ck\\xD7<\\xAE\\x9F\\xC4\\xFAU\\x15\\x97a1(}\\xD6\\xE0\""
		"1\\xD9\\xF7\\x8B\\xB2\\xF2EY\\xE9\\xC2*\\xF91S\\xAA`\\xF9\\xCD\\x94j\\xD3*\\xCFd\\xD3$i\\x9A\\xC9J\\xD6\\x95\\x10\\xD97\\xA6T|\\x1E\\x0C\\xD9B?\\xFD1\\xF4\\xB3\\x82\\xDF\\xD0\\xCF3QrdB\\x16\\xC8\\x19\\xCB\\x0B\\xD96\\xC5{\\xF4\\xF7\\xFF\\xFD\\x0F\\x89+f\\x9BF\n\\x00\\x00", 
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

	web_custom_request("collect_14", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xED[mo\\xE46\\x92\\xFE+\\\\\\x05\\x17$\\x0B5\\xCD\\xE2;m\\xF4\\xE5fz2\\x99\\xE0<\\x9B`gr\\x8B]\\xAFa\\xA8%\\xB6\\xADL[\\x12$\\xB5_&\\xC8\\x7F?\\x14\\xA5f\\xAB\\xDBmg\\x17\\xB7\\x87|Y\\x1BFw\\x15\\xC9b\\xB1\\xEA\\xA9b\\x91\\x92\\x7FI|rz\\x910j(gI*R\\xE0\\xCE\\xA5\\x9Cq\\x97&\\xCE\\x99.\\xF7?\\xDF\\xB1*I\\x13\\x90\\xF5\\xFD\\xCFk\\x91\\xA4\\xC9\\xB56\\xD7\\xE2S\\x92\\xF2\\x94\\xA5\\xEC2M\\xB2\\xE4\\xF4\\xE2\\x82knS`\\x81\t\\x8C]"
		"\\xA6\\x17\\\\+\\xB7\\xE5\\xF0\\xC0\t\\xA2e\n)p-R\\x90\\xCA\\x0C\\xDF\\x94\\x13(*\\xFCJ\\xA1.\\xD3\\x0B!PZ*\\xD3\\x8BdC\\xF3u\\xD6\\x96\\xFD#\\xBD\\xED\\x924\\xC9o|\\xFE\\xA9\\xDE\\xF4\\xB4\\xCD>\\xD7m\\x93=\\xD2\\xBC\\xBEM\\xD2$k\\xCACV>\\x1Dy\\xB9\\x95\\x8A\n\\x01p\\x16\\x96\\x9A\\xCA\\x94\\xEBT\\xA5`S\\x97\\xF2\\x94\\xAB\\x94\\xF3\\x14\\xA7\\xE6\\x0C\\xB6\\x03\\x84Nuz\\x01\\x82Cju\n\n\\x1C.\\xD1IH5O\\xB9\\xE6Hr+m\\xCA.//\\xD3\\xA4Ak\\x84\\xDE:\\x05\\xA7\r"
		"\\xCE\\xE3\\xB4N\\x93\\xF3\\xEF\\xFF\\xF4\\xDFI\\x9A\\xB4~=oZ\\xBF\\xF2}~\\x93\\xA4I\\xF8l\\xDA\\xB2FE\\xE7\\xEB\\xFA\\x1E\\xD7\\xD2\\xCD\\xBB\\xBC-\\x9B>I\\x93\\x9B\\xD6\\xAF\\xE67}\\xDFt\\xA7''yQ\\xD1\\xEE\\xA6n\\xCAUX\\xE3\\xC9\\xF8=_\\xD7\\x9B\\xE2dk\\x99\\xD9\\xBD_\\x9Ed]\\xE7\\xFB\\xEE$k\\x1A\\xBA\\xCEz\\xDF\\xF5\\xD4WT;\\x0BN\\x9A\\x8C\\xAF\\x8CVy\\xC1\\x9C\\xB6K\\xFAs\\xB0j[w]\\xDD\\x96\\xD7e5O\\xD0SB\\xD8A\\x7F;\\xE8o~\\x1F\\xFD\\x8D\\x82\\x89\\xFE\\xCC\\x02S  _\\xAD\\x96\\xCA\\xAB\\x15pQ"
		"<\\xA7\\xBFd\\x83\\xFEn\\xD0\\xDF\\xFE>\\xFA\\xF3\\xA9\\xFAB\\x16\\x90)\\xC7\\xBD\\xF4\\xD2[V@\\x91\\xC3\\xB3\\xEA\\xF3\\xA0\\xBEa\\x83\\xFA\\xEE\\xF7Q\\x1F\\x18\\x9B\\xE8\\x9F{\\xED\\xB3\\\\:e\\x97\\x05W\\xDE\\x15:\\xD3\\xCF\\xEA/\\x06\\xFD!\\xE8o\\xD8\\xEF\\xA3\\xFF\\x0F\\x95\\xFF1\\xBB\\xF6\\x935X\\xA1-+\\xB2l\t\\xCB\\x95\\xC8\\xB8\\xE42{6\\x04\\xF4\\x00!\\xC31A8-\\xD2\\xE4\\xCD\\xF7\\xFF\\x83="
		"\\xD7Y\\xD7\\xCD\\xB7\\xC9f\\x96\\xD7U\\x9F\\x95\\x95o\\x934\\xE9\\xFA\\xC7\\xB5\\x9F\\x7F\\x9E\\x95U\\xE1\\x1FN\t\\x07i\\xA4\\x15Z\\x9A3\\xD2\\xD4]\\xD9\\x97uuJV\\xE5\\x83/\\xCEH_7\\xA7\\x845\\x0Fg\\xA4(\\xBBf\\x9D=\\x9E\\x92\\xAA\\xAE\\xFC\\x19Y\\xFBU?\\xB6\\xDC\\xF8\\xF2\\xFA\\xA6?%\\xC0\\xD8\\x7F\\x9C\\x91\\xFB\\xB2\\xE8o\\xB6\\xC42\\xCB?\\xAD\\xB2\\xDC\\xCF\\xEE\\xCA\\xAE\\\\\\x96\\xEB\\xB2\\x7F<%7eQ\\xF8\\xEA\\x8C\\xD4w\\xBE]\\xAD\\xEB\\xFB\\xD9\\xE3)\t"
		"\\xEDk\\x7F\\x96\\xE0Z\\xC4\\xB0\\xA0\\xE4\\xC3\\xC7\\xBF\\x9E\\x7F\\x9B\\xA4\\xC9\\x7F}\\xF2\\x8F\\xAB6\\xBB\\xF5\\x1Di?7\\xB3\\xB6\\xEE\\x7F\\xE9\\xEB_\\xFA6\\xAB\\xBAU\\xDD\\xDE\\x9E\\x92\\xB6\\xEE\\xB3\\xDE\\x7F%4+\\xFC\\xF5\\xD7g\\xBF\\xFE\\xFA_h\\xE0Oe?;:r\\xDB\\xF8\\x92\\x04B\\x9F\\xDA\\x8E\\xFC')\\x834\\xF2\\xCBmY\\xCD\\xA6\\xEB\\xFECy\\xDB\\xD4m\\x9FU\\xFD\\xD9\\xAFa\rrXCX\\xCD\\x85\\xBA|"
		"\\xE2\\x10\\xB4L\\xD1\\xD6M\\xF4\\xC7\\xA1\\xC43\\x12\\xD4\\x1B\\xDD\\x91\\xAD\\xD7\\x84Q\\xD1\\x11\\x9Fu~Voz\\xC2\\xBA\\x17\\xDD5\\xF1\\xCF\\x9EG\\xF6\\xA6\\x08\\x9A\\xAA\\xA8\\xA9L\\x93\\xEF\\xDF\\xFE\\xF9\\xD5\\xFBo\\xA3Ru\\x93\\xE5\\xC1gp\\xE8\\xE6\\xDD\\xD4\\xAD_g}y\\xE7\\x07o_\\xB7\\xF5\\xA6*\\xB6(\\x89\\xA0Y\\xAE\\xEB\\xFC\\xD3\\x19Y\\xD6m\\xE1\\xDBS\\xC2B\\xFB\\xB0\\xC2&k}\\xD5\\x9F\\x91\\xDB\\xAC\\xBD.\\xABQ\\xE7&+\\x8A\\xB2\\xBA\\x1E\\xA9\\x1DV\\xCF0\\xF4\\xD6\\xEB\\xFA~"
		"74\\x7F\\x9C\\xF7\\xED\\xC6c\\x9C\\xA2o\\x86)\\xE6,I\\x93\\xB0\\xF09\\xEA\\x8BA\\x1A\\xD4\\xDFR]\\x9B\\xC7\\x88=\\xDC\\x95O\\xEE \\x06\\xEAI\\xB3Y\\xAE\\xCB\\xFC\\x9B\\xBE\\xCDV\\xAB2\\xBF\\xF2\\xD5\\xDD<\\xCF\\xAA\\xAC}\\xFCr\\xB9)\\xD7\\xC5\\xBC\\x90B\nV\\x14\\x99_.}\\xE13\\xE9V\\xCA\\xB1\\\\[\\xE0\\x85^\\xE6\\x12V\\xCA\\xAC\\xCC\\xB2\\xF8\\xF2\\xB6.|[\\xCD\\xE1\\xCBMU\\xAEJ_\\\\\\xAD\\xCB\\xDE\\xCF\\xE1\\xCB\\xDB\\xEC\\xBA\\xCC\\xAF\\x86\\\\\\x82\\xA4o\\xF3\\x9B\\xAC\\xEA\\xAF"
		">\\xF9\\xC7y\\xFB\\xB9\\xB9Z\\x97w\\xFE\\xEA\\xA7\\xF2\\xE3O\\x8BW\\x8B\\xEA\\xE3\\xBA\\xFB\\xB9x\\xBD\\x1D3d\\x96\\x97{\\xD6\\x85\\x9Fc\\xC3\\x91\\x94\\xB0\\xCDE\\xC1l[\\xBB\\xCE\\xEB\\xBE\\x99\\xE5\\xAD/|\\xD5\\x97\\xD9\\x1A\\x93\\xCE\\x1F\\x7F\\x18\r\\x0C\\xCE\\xE8\\x11'\\x1F~|\\xF5\\xA7\\x88\\x92\\xDE?\\xF4\\xB3\\xC2\\xE7u\\x9B\r\\x90\\x18\\x9C?\\x85C{\\xBD\\xFC\\x8A\\x83L\\x89\\xB6\\xF8\\xF7\\xF5\\x0E\n\\xD0<\\x90\"\\xEBn|A\\xEEo\\xCA\\xDEO|/"
		"\\xD0\\xF7\\x11\\x82l\\x8C\\x88\\xBD\\x80\\x95*\\xC4\\xEB^\\xAC\\x8C#&\\xF1RV!\\\\Vu\\xD5\\xCFV\\xD9m\\xB9~<%\\xEB\\xAC\\xAFS\\xB2Yn\\xAA~\\x93\\x92\\x1B\\xBF\\xBE\\xF3}\\x99g)\\xE9\\xB2\\xAA\\x9Bu\\xBE-Wg$\\xAF\\xD7u{\\x1A\\x15\\x8B\\x98\\xCF\\x96]\\xBD\\xDE o\\x0C.\\xCE\\x02P\\x83%\\xB2uy]\\x9D\\x92\\xDCW\\xBDo\\xCFH;\\x84\\xCDL\r=0B\\xC3\\xD7`O3\\x185\\xF9\\xE3\\xC7$M>\\xFA\\xAE'\\xEF\\xEBb0\\xB5\\x1D\\x823\\x19R\\xCE\\xE9\\xBB\\x8F\\xEF\\xCF\\x03\\xDF\r"
		"\\x8D\\xC9\\xBBo_\\xBDA\\xEF\\xBC\\x9Eg\\xCBz\\xD3\\x9F\\x9E\\x9C,\\xD7Y\\xF5\t\\xFBX\\x16\\x05\\xB84y\\xFD\\xC3\\x9B\\xBF\\x0E\\x9B\\x85\\x196\\x0B;nx\\xF0\\xCFnx\\xE8\\xED\\xFF\\xF3~\\xE78\\x9F\\xECuf\\xC5\\x8CX\\xE5\\x05\\x13\\xCE\\x19\\xC3\\xAD\\x15\\x99\\xA4ywt\\xB3\\x93l\\xA8W-\\x0F\\xFA\\xDB\\xDFG\\xFF\\xFDrUy\\xC5\\x0B\\xE7s\\xC6\\x98\\xD7E^\\xF0\\xBC\\xD0\\xCF\\xEB?\\x14\\x1CV\\x0C\\xFA\\xF3\\xDFE\\xFF\\xBDr\\xCF\\x19+\\x01\\x842Kf=\\xA8\\x15\\xCF\\x94\\x7F^}5\\xA8/"
		"\\x07\\xF5\\xC5\\xEF\\xA3\\xBE\\xB6\\xD3\\xD3\\x82\\xE2,\\x03\\xE0\\x05\\xF3\\xDC\\xE4+@\\x8C<\\xAF\\xBF\\x19\\xF4W\\x83\\xFE\\xF2\\x9F\\xD4\\xBF\\xBC\\xCD\\xAE\\x7F[\\xFF\\x93U\\xB9\\xF6\\xDD\t\\x9C0\\xA5\\xDC\tWV\\x9Fhm`d\\xBFn\\xB3\\xAA\\xB8Z\\xD7\\xD7\\xF5\\xD5\\xC7\\xAC\\xEB\\x1F\\xAF\\xAAr\\xB9\\\\\\xFBn\\xC6\\xE0J\\x19\\xE5W\\xBA\\x80\\x19h%fr)"
		"\\xF2\\xD9\\xD2\\xAE\\xFC\\xCC\\x8B\\xD5\\x92\\xA9\\x95\\xD1\\xBE\\x80\\xAB\\x07\\xC1\\x19m\\xAA\\xEBo\\xEE\\xE6\\xA0\\x15\\x17RY\\x01\\xC7V\\x8BG\\xC0\\xB0\\xDApt\\x1C\\xEA\\xA9\\x90\\xB4\\xC1Y3\\xF0C]R\\x16\\xF3\\xFB\\x9B\\xAC\\xEF^5\\xCD_\\xCA\\xE2\\xDA\\xF7\\x1F\\x9A\\xAC\n\\xBD\\xEC\\xD0+\\xF4\\x1F\\x12\\xD4\\xDF+BB\\x93\\x8BMvW\\xA6}\\xF1T\\x0E\\xE9\\x9A\\xACJq\\x18!\\xC7\\x9A\\x9B\\x17\\xDA\\xB2\\x17\\xDA\\xCA\\xDB\\xEB\\x17Z\\x97/\\xB4\\x15\\xE5\\xDD\\x0B\\xAD\\xEBl\\xE9\\xD7/\\xB4c~"
		"\\xCFZ\\xFF\\x92jM\\xEB_Rm\\xD3\\xF7\\xF5K\\x16\\xE9\\xEE^ZY\\x93\\xF57/4\\xE7e\\x9B\\xAF=\\xF9e\\xE8\\xF1\\xF7~[\\xB2m\\xAA\\xCE\\xF7g[\\xEE\\xB8e\\xED3o\\xB3\\x87\\xD9\\xB3\r\\xC7\\xE5lw\\xF0)\\x97\\xC42n\\x9F\\x1B\\xF7\\xF4}\\xF6\\xB8\\xBF\\xEE3wu\\xC3\\xECx{\\xFD0\\xEB\\xCA\\xCFA\\xDC\\xA0\\xC3lY?\\xC4\\xE6\\xBD]~\\xB2\\x99\\x0F\\xED\\xA1:w,\\xE2\\xD7\\xE1\\xBE\\x98\\x82\\xBCD6\\x0C`\\xBF\\x00q9\\x80}\\x80\\xBB\\xE3\\xDB\\xA0q0\\x9E\\xAF\\xC09\\x11\\x99|*CF\\xB6H/"
		"\\x04\\x1C\\x8B\\xB0\\xEF\\xF3\\xBA\\x8A\\xC5\\xD3a\r?L;\\xBA\\xC2\\xE8f\\xBB\\xB0\\xAD\\x0F&\\xACe\\xDD\\xF7\\xF5\\xED)\\x01\\x15YC\\xD9?aL+\\x92P\\x89\\x8C\\xFC|\\xD3vh\\xDA\\xA6.C\\x992pc\\xA1\r\\x8C\\x85\\x02\\xC5\\xA9\\xB8\\x1C9]\\xA5\\x8E\\xEB\\x8E\\x96\\x1A~\\xC2 \\xB35\\x9A\\xD3;\\x1B4u\\xB3i^\\xD7\\x0Fq\\xE5\\x07'\\xCA\\x018\\xB3\\xED\\xA2\\xECX\"9\\x1B\\x85\\x99\\x83\\xF9B\\xB3\\xDB\\xE9\\xC6\\xCD%^\\xE2\\xB1\\xAD\\x1B\\x9CK\\x93\\xEF\\xDF\\x7FwP\\xEE/1\\x05\\x97\\xD5\\xF5\\xAC\\xF5]"
		"\\xBDis\\xDF\\xD1N\\xD0\\xAC\\x99u\\xF5\\xA6\\xBF\\x99\\x01\\xCDn\\xB3\\xCFu\\x95\\xDDw!\\xA1/\\xEB\\xFEj\\xC8\\xDDM[\\x17'\\xC1\\x93Y\\xD3\\\\\\x95y]a\"N\\x06\\x07gS\\xD7r\\xC6`P\"\\xA83\\xD1m\\xB7\\x8ET\\xBA\\xC0\\x11\\x03'\\xB4m\\x13rH\\xE6\\xAF\\xFB\\x1DHF\\xDB\\x8C\\xDE\\xB5\\xAC\\xD9\\xC1\\xFDyg\\x8E\\x91w\\x14_\\xDBH\\x1Al\\xCD\\xB5:\\x90\\xF8\\x04G\\xC3\\xCF\\x01>8c2\\xAA/\\xA6\\xABR\\x91-'Q\\x90\\xFDx\\x88\\x81\\xA9\\xF0)\\xCAA\\x1F\\xAE\\xF1xf\\xF8b\\x15~"
		"\\x9E\\xF6\\xC4\\x1Cq\\x93\\x15\\xF5}8B\\x86?.\\x9B\\x07<\\x88d_i<\\x88\\x88\\x94h\\x9D\\x12F\\x81\\x7F}d|\\xC8+mV\\x94\\x9B.\\x801\\xFC\\xB1\\xE1\\xF3I\\xF7\\x98\\xDE@o'\\xDA\\xCE\\xF8\\xA4o\\x84\\xFDj\\xED\\x9F\\xB6\"sV\\x94\\xAD\\xCF\\x07\\xA7\\xE5\\xF5zs[=\\xE9\\x16\"zV\\xF6\\xFE\\xB6\\x8B'\\x8D\\xA36\\x18\\xF3dY\\x95x\\x9C{\\xD2g\\x9A\\x1E\\xD0\\xE7OW\\xF6\\x02|\\xC8\\x04B\\xEE\\x10*\\xE4y\\x14\\x91C$\\xED7\\x06\\\\\\xE9\\x08 \\xF5$\\xCB\\x84\\x0E;"
		"\\xCC\\x1Dd\\xA0\\xB1\\xDD\\x0E\\xED\\xA1g\\xD2\\xDD]\\x9Fvw\\xD7\\xF1N\\xC0\\xF0\\xDD\\x8D\\x80\\xC2\\xEFw\\xA5\\xBF\\x7F]?\\xCC\\x19aDp\\x12x\\xABr\\xBD\\x9EcnJ\\xD2\\xE4\\xE1v]u!\\x85\\x9C\\x9E\\x9C\\xDC\\xDF\\xDF\\xD3{A\\xEB\\xF6\\xFA\\x04\\xE3\\xFB$H\\xE6\\x8C\\xB98\\xA5\\x9D\\xC4\\x02\\xB0\\xB8\\x8A\\x14\\xF0\\xC6\\x9E3\\x80\\x81\\x15\\x1A\\x8F\\x84\\xC7;\\x9F!\\x9CP(\\xF0\\xD8\\x15\\xF6\\x16\\xFBt\\xC9 bW\\x9E&?&\\x07B_\\xD7\\xC5\\xE3\\xB3q7n\\x9B]"
		"\\xF9\\xD9\\x9F\\x12\\xE0G\\x1CF\\xC8\\xBA\\xAC\\xFC\\xEE\\x8AJ\\x1F\\xED\\xB3\rK\\xC9\\xC4J\\xF2#\\x1D\\xB6\\x97Q\\xC6\\x1D\\x1D\\xBF\\x15/\\x8FE\\xD9\\xAE\\xB8\\x98\\xC4\"9\\x96(~\\xAB\n80\\x9C\\x8C\\x86\\x13{nR\\x91/\\xD3\\xE4\\xD5`\\xD0\\xAE\\xCF\\xDA~\\xC8\\xCD{\\x07\\x81\\xFB\\x8C\\xDE\\xFA\\x13\\x07\\x8E3c\\x18c`\\xBF\\xC1\\xE0\\x9A\\xBF+\\x934\\xE9\\xB3\\xF6\\xDA\\xF7\\xF3\\xAB\\xF1\\x84\\xFE\\xAC\\x13\\xFEA\\xEB\\xF0\\xE3\\xD69\\x92\\x1E\\xA5\\xCC\\xB5\\x92\\xC7\\xFA"
		">Ip\\xCFv\\x1A7\\xE8\\xE7\\xBC\\x11wl\\xF1\\x82\\xCBf\\xC3\\xBD\\xC7\\x8B\\x98y&\\x95\\xBF\\xBC\\xBD\r?1\\xFFb\\xFA\\x9D\\xDC\\xC5\\xFE\\x7F\\xC1\\xFC\\x1FE\\x179v#\\xF4L\\xA7'\\x17h\\xCF\\xF4\\x9B\\\\\\x82m\\x9A\\xC6\\xB7y\\xD6=\\xED\\x1B`\\xAD#|\\xF7\\xB3\\x8F\\x89\\xFC\\xB1<\\xE3\\x0Cl\\xE4M\\xAB\\x13p1\\x9B=\\xC9\\xB2\\xC3$\\x9Cm\\x93-\\xB8!\\xCF^\\x0F\\xA9\\xB3\\xF7\\xED|\\xD3\\xAE\\xBF\\xFAb\\xF8\\xCE\\xAE\\x8A++@\\\\\\x01\\x17\n\\xBE\\x0ECa;"
		"\\x94\\x0F5\\x12\\xE8\\xA0\\x0B\\xE7\\x91\\x0F\\x83\\xC8\\xC2\\xAF\\xBA0B\\xC4\\x16>]\\x11\\x971?F!j\\x9Bg\\xB9L\\x93\\xD71\\xE6\\xA6\\xFE\\xC7\\xDD\\xF99W\\x86\\xE9t\\x94\\xA1\\xF6d\\x9B\\xC8\\x1F\\x0E\\xD1\\x9Cq\\x1BYfO3\\x17\\xB3\\xCA\\x11\\x03~\\xD7z\\xDF\\x97\\xD5uGVuK\\xFA\\x1BO\\x8A\\xEC\\xF1\\x0F\\xE4/\\x9Ed\\xAD'7\\xBE\\xF5\\xA4\\xAF\\xF1n\\xB2!\\x8F\\xF5\\x86\\x92\\x05>\\x89\\xC8{\\xB2\\x19\\x06d\\xD5\\xE3\\xA1\\xC4n\\xD3 \\xF6\\xE9\\xD3\\xDDA\\xB0\\x08\\x84#\\x9A|"
		"\\xC0\\xACF\\x167Y\\x7Fd$\\xEC`1Z@\\xF0-\\x8E\\x04\\xC4\\xAA5\\x14\\xD6\\xC3\\xED\\xC1\\x11c\\xB3\\x17\\x8C}v\\xB8o\\x1C\\x14I\\xE4:kN\t\\x86\\xEB^:\\x91\\xE1\\x88\\xC0\\x99\\x10Q\\x9B=X\\x08\\x19\\xB1ud\\xC9\\xE3\\xE2\\xD4\\x16\\xC4B\\x0E`\\xC3\\xD2\\x0Bw\\xFC9\\x97I\\x9A<\\x0E\\x1FC\\xD9\\x10\\xBE\\x8EeC\\xF8\\xDE>\\xCC!\\x96\n\\xE1\\x968\\xC8\\xD4Q\\xE6\\x80\\x1B\\xCEE\\xD0\\xC7D\\xBE\\x1E\\xE6\\xC2\\xF3|\\x92&\\xC5\\xFC\\xBD\\xC4\\xBA\\xE3\\\\p\"Y0_[\\x7F\\xF2s4\\xC7[\\xC9#c6"
		">\\xD1\\xA0z\\xC7\\xC2t\\x95g\\xCD<\\xE4\\xFD}\\xF6\\xCFuYm\\xF9\\x9C\t\\x1Bg7{Z\\xB9\\xC8\\xB7\\xE9\\x05\\x97X\\x8D\\x14\\xF3\\xF7\\x82\\xA3B\\x92\\x05\\x85.\\xB8\\x14)\\x972\\xE5R\\xA5\\\\j\\x1C'Y\\x1C\\xE7\\xA6\\xD8\\x90\\xB0\\x8B\\xCFq\n\\xC9\\xB7a-\\xC7\\x88\\x1E\\x92\\xC2\\xB0\\xA3\\x1EK\\x10\\xC1\\x01,\\xD8\\x1F\\xA7\\x07\\xA6/\\xA3\\xE5\r\\x8F\\x19\\xE6\\xA7\\xAA\\xEC\\xBB\\xF9\\xA6\\xF3\\xED\\x87&\\xCB\\xFD\\x0F\\xD5O]x\\xD2\\x81h\\x9A\\x85\\xCD\\xA2\\xA9\\xD7"
		"!\\xA7\\xCE\\x86\\x01\\xDD\\xBC\\xFB\\xF3w\\xAF\\xD1\\x1C\\xB8\\xA0Q'\\xBE\\xA7\\xBE\\x8C\\xF1~\\x99&\\xEF\\xCA4tV\\xDB\\xC8f\\x08\\xF6\\xD1\rz\\xF2XI\\x1F\\x14\\x91\\xA0\t\\xF2.\\x80\\xB9\\x14\\x80\\x05\\xC9z\\x9B;\\xE4^:\\x91\\x11\\xB9S\\xE1l'\\xDC\\x1D\\xCAf\\x04\\xE0@\\xB6\\xDDF\\xA5<<%\\x1F\\x00^\\xBA\\xD8\\xD3n\\xB3\\xBFb\\xD1\\x0C\\xC7\\x07\\x86\\x91\n\\xB6\\xAETl\\xF4\\xA2\\x7F\\xBB\\xAEkD\\xDD\n?g\\xE3\\x93\\x97\\xE0\\xB8\\xD6w\\x9Bu?\\x7F\\x1Dk\\x92\\xEF\\xF1\\xFA\\xF4m\\xF9\\x10D\\xF1"
		"(j\\xC8\\xDA\\x02\\x02P\\x94\\x88|\\xBE\\x9Db\\x81\\xCE|\\x9F\\xF5-\\x0EM\\xCAj\\xFE!\\x9C\\xDA_\\xAD\\x9B\\x9B\\x0CK\\xAB\\xC7\\x06\\xCF\\xC7c\\xF3]\\xB6\\xDE\\xF8.X\\xE9\\xB7~\\x81\\x1B2Q\\xF4&k\\x8BQ&gJF=\\xC4\\x9E~*\\xF2\\xE5V\\xBF\\x1FV\\xAB\\xCE\\xF7a\\x94\\x8E\\xADjo\\x94\\x89|\\xBD\\x1D\\xF5]\\xB6\\xE9\\xBA2\\xAB^\\xAF7\\xC33\\xF9\\xE2\\x8D\\xBF+\\x03TCJ\\xE1L\\xD98\\xCA\\xECIs\\x91ow6\\xBA\r\\x075\\x1F,\\xC4\\xA7\\x8BI\\xEA\\xC6\\xB7Y_\\xB7\\xF3z\\x13\\xB4\\xD4,\\x8EwS\\xB9"
		":\\xBAW\\xE3\\xA1\\x84\\x9BTpw\\xF9\\xD4\\xA4\\x94+\\xE6,\\x99\\xD0\\xD20\\xE5\\xA6\\x0Ce-\\x97\\x91\\x04\\x8Ev\\xE6LG\\xA7\\xEB=\\xA7\\xEB\\xE8t\\x1D\\x9D\\xFEz\\xEDC6\\x0B\\xCF/\\xAB\\xBA\\xBD\\xCD\\xD6\\xE3\\xD2\\x8E\\x01j\\xEBC\\xBFZ\\xF9\\xBC\\x87+|\\xB0\\xFE!\\x9C\\xFE\\xF7R\ng:\\xFAU\\xEF\\xF9UG\\xBFj\\xBC\\xAF0*\\x15\\x063ND\\xDBwm\\xD6\\xDC\\x94\\xF9\\xA8\\xC3o\\xCC\\xB3U\\xA7\\xBB\\xC9\\x9A\\xB0!\\xE8\\x08\\x0C\\xBD\\xB7!\\xE8I2\\xD8jb\\xB7\\xE9F\\x9BI6\\xE6\\x144\\xB7\\x86H\\xCA\\x14"
		"(\\xB5\\xE0TY\\x00I\\x045\\xCAq \\x82r\\x00\\xAD\\x88\\xA0\\x16\\x14\\xB7DPe\r'\\x92\\x02W\\x12\\xCE\\x05\\x05\\xA5\\xA5!\\x82J\\xE7\\x04\\x0E\\xB7\\xCCY\\xEC\\xCE\\x98\"\\x9C:!\\x9C#\\x9CJ\\xC3\\x00\\xB9\\x92[\\x834p\\xC1\\xECBP\\xC7\\x85r\\x04\\xA81FH\\xA2\\xA8\\xE0J\\x1B\\xC2\\xA9a\\xDA\\x9ACz!\\xA93\\xCA\t\\xC2)gFs\\xA2(\\x93 $\\x01\\xAA\\x8C\\xB4\\x96(\\xAA$\\x0B\\xF28\\x97f\\xA1)\\x13\\xCEJ\\xC2\\xA85\\xCAJM45\\xDCjd8\\xA7\\xA5\\x00b(3VX\\x02T:\\xAD\\xCC9\\x005 "
		"\\x1D\\xB1\\x94I-\\x05\\xD2\\xC0%\\x01A\\x8DQ\\xE2\\\\Sp\\\\j\\x02@\\x9D\\xD1\\xF6\\x1C\\xA8u\\x80\\xB3:\\x07b\\x01T\t\\x0B\\xB8\n\\xE6\\xB41\\x04\\xA8\\xD6\\x8Ci\"\\xA9d\\xC2ir`\\xEA\\xBFm\\xB7\\xF7/\\xBE}\\xEB\\xB4T\\xC1\\x9F.:\\xC9N\\x9DgX\\xE4\\xBB\\x89\\xF3\\x80\\xE2\r&.C;i\\xDD\\xE2\\x80&\\x8Cj\\xA7\\x14sDS\\xA7\\x19j$\\x05\\x03I4\\x95\\xCAH\\xF4\\x16ha\\x1DQ\\xD4)\t\\xE8\\x17|\\xA2\\x84\\xED\\xDA\\x1A'\\x0F\\xE9sE\\x19\\x13Z\\x11`\\x949\\xA5\\x16\\x8A2+"
		"\\xC1\\x12G\\x9D\\x06\\x86r\\xC0p\\xEE\\x88\\xA3\\x96[\\x8947Ls\\xE2\\xA8vF\\x9BsN\\x197F\\x10I\\x9DvL.\\x0Eh\\xF4#\\x97\\xD2\\x12I\\xB9P\\xC1\\xCD\\xCAj\\x04\\x97\\x11<tw\\x8E\\xCB\\x80\\xC9\\x00#\\x04\\x9D\\xD2\\x9A\\x08\\xEA4W\\xE2\\x90>\\xD7TIe\\xD1\\x9B\\x12\\x98\\x95\\x0BM\\xB5rB\\x13K\\x05Xn\\x11\\x0EF\\x05os\\xAE8Z\\xC9:\\x05H\\xE3\\x1Bt\\xE6\\\\P\\xA1\\x1CC\\xC79\\xA3\\xD5b\\x9F$\\x9CZ\\xA5,"
		"\\xA0\\x96\\x92\\x1B\\x04\\xF7\\x80d\\xE1\\xD4BR\\xC1\\x85\\xC1\\x05q\\xA1\\xB9$\\x92Z\\x8E\\xE6w\\xDA9\\xB7O\\x9D[*\\xB4\\x00N\\x0C\\x05\\xAE\\xB5YX*\\x9D`\n\\xB1)\r\\xE3\\xC4R\\xCDA\\xA3\\x13\\x9C\\xB1L\\x11K\\x8Db\\x1A\\xB5wL1{\\xAE\\xA8\\x94\\xB8\nN\\x99U\\\\,\\x0Eh4\\xAE\\xE4\\x08b*\\x14\\x04\\xA7h\\xA3\\x1C\\x82\\xC3J\\xCB\\x85Zh*\\x993\\x02_k\\x90\\xD2Y@\\xC9\\xC0\\x1DF\\x053\\xD6\\x88C\\xFA\\x1C\\x18\\x95\\xCC\\x18\\xA2)\\x18%$\\xD2N\\x04\\x90)&\\xF5\\xC2R#0\\x9A-\\x95\\x9AiC,"
		"U\\xDC\\x98\\x105\\x82\\x05\\xB4\\x18\\x8BQ\r\\x82\\x82\\xD0b\\x81h\\x12\\x06\\x90V\\x0C\\xA3\\x19\\xC5K\\x8E4W\\xFC\\x80\\\\Xj\\x9D\\x94\\x80\\xD2\\x98t\\x885\\xA1\\x94@\\xA7)\\xA3\\xA4A\\xBER&\\x98O+\\x03A9fEH`Z\\xB9\\xC5\\x01\\x8D\\xE2\\xB5V\\x16\\xBD\\xAA\\x99\\xB4a<\\x07t\\xAF\\xC1\\xD5-\\x80S\\x81\\xDAc\\x0ES\\x8C\\x13\\xE0Ts\\x86\\xEE\\x16\\x02@\\x1C\\xD2\\xE7 \\xA80L`VP\\xC6\\x88\\x05\\x08\\x0C\"\\x851'\\x99\n\\xB9\\xC4Y\\xE1\\x88\\xA1\\x02\\xCF\\x9D\\x040=p\\x04%"
		"(.`\\x01\\x8A*\\x8C\\x1D`T10\\xD8n\\x8D\r\\xD6\\x92\\x1C\\x8B?N\\xB5t\n\\xF9N\\xB1\\xB0\\x1E\\x0E\\x98m4\\xD5`y\\x00\\xB1@\\xFB(\\xEA0\\xF9)\\x04\\xB7\\xB6\\xC1\\xBA\\x1A\\xED\\xB1\\x9F#vY\\xE8\\xED\\xDB7\\x0B\\xF5\\x06\\xB3\\x90\\x81m\\xB61l/"
		"\\x0B\\xF1\\xC8\\x87I\\x16RT\\x08\\xA75j\\xC4\\x85\\xE5\\x0BA\\x95B\\x18\\x8D4\\xC6\\x84\\xC6\\x9A\\x088\\x95\\xC2\\x99\\x1D\\xCD0\\x1E\\xEDbBK\\x10\\xD8\\xAE\\xF0UW\\x12V\\x86\\x1E\\xA1B\\xA0\\xA7Gz\\x01\\x94Y\\xEBDl\\xC7\\xF4\\x8E\\xAF\\xECF\\x01SF\\x98a\\xC7\\x10T\\xF0\\x90\\x8A\\xB5v\\xD6\\xA2\\x91\\x80[L\\xE1\\xE3\\x12\\x06z\\x81>PFL\\xDA\\x8D\\x95:8\\xCB\\xA1j\\x13Zk\\x89\\x890\\xD2\\x12\\x82\\xD1\\xC7\\xF1\\xA3\t"
		"\\x0EL\\xB43\\xBAz\\xF3\\xEA\\xCD\\xB7\\x8B`t\\x11\\x8D\\xCB\\xF7\\x8C.#_LOQ\\x14@\\x1A\\x154d\\x0ES\\xBF1\\xB8\\xF1\\x8E4\\xDA\\xC0:\\xC7\\x03~8\\x9F\\x90\\x9CZ\\xAB`1eh1l\\x15\\xC0\\xB8\r^\\x92\\x0C\\x08\\xA3RJ\\xA7\\xE5\\x96\\xB1`\\x14\\x9F\\xCA\\xA3\\x1F\\xB6=\\xE2\\xD8\\x9D\\xD4\\xC1\"j\\xF0\\x99u\\x03\n\\x1D\\xA6\\xEA\\xA8.\\xD2\\x98K5\\xB30iW\\xCA\\x99@[\\x06SR)\\xE9\\x16\\x13Z0\\x8BUH\\x1C\\x1EV{`\\x8D\\xBF\\xBDG\\xCF\\x1B\\x07\\x03\\x14\\x98\\x93\\x18&R\\x08\\x15\\x19\\x01=\\x02\\xD3\n"
		"e\\x86\\xC9)-@3\\xBD\\xD8\\xD1J\\x83\\x1E\\xC0\\x85\\x02\\x02ZYHKa\\x86\\x91\\xC6<!\\x87\r`h\\x0E\\x9E\\x0E\\x9A*\\x1B),h\\x18&\\x85H+\\xADE\\x08f9\\xE0\\xC4h\\xA5]\\xB0\"\\xD6%#\\x8D\\xFD\\x1Dwr\\xD7\\x1Ep9\\x19\\x1F\\xE9Q\\xFEHsj\\xB5\t\\xA9S\\x0C\\xF5\\xC0n\\xF1{\\xE6\\xF9[\\x92^H\\xCE\\x03\\xDET\\xC4\\x9B\\xDC\\xC3\\xA1\\x8E|5-A8u\\x0C1\\x80\\x06\\xD0\\xCA\\x8A\\x01\rh\nF\\xC12\\xAD\\xD4\\x8E\\x96\\\\s\\xA3\\x16\\x91\\xD6\\x06\\xAC\\x0B\\xED\\xC3\\xC8\t&"
		"\\x07\\xA1##\\xDAk\\xD7CQ\\x00\\x86\\xD6\\xB7\\xC6\\xB9\\x1D-\\xB0\\xF6B\\xEFEZ\\xC8\\xE0=\\xB4\\x8C\\xC1RB\\xC9\\xE0\\x1EE\\x95\\x11\\x91\\xC6\\xFE\\x16\\x9C\\xDD\\xB5\\xEB\\xDDP\\xBD\\x93\\xAA\\x11\\x1E\\xD6\\x0E\\x91\\x1D<\\xC4v\\xCAN\\x8Dh\\xA2\\xB1\\xF4\\xB4.76\\x1E\\xA4\\xA3]\\xDD\\xF6\\xA4n\\xA6\\xB7$\\x8E\\x824\\x1A\\x8BEc9W\\x0BG\\x81\\x89PLj\\xCD\\x8D%\\x96:k\r\\x96J\\xCA\n!\\x88\\xA5VCh\\x0F\\xF4;,\\xC5@\\xDAsC\\xB9s\\xDA\\x84pVja\\xA8\\xD0:\\xD8^\\x80\\xC2q\\x86\n\\xC1\\x99Fg)\r"
		"a_\\xE2\\x80\\xB57\\xC3\\xFDS;)\\x17\\x86\\x82\\x06\\x8E]\\x18\\x07\\xE4\\xE0\\xDE\\xEA\\xA4\\xC0\\x83\\x98\\x19+8\\xB6\\xC0\\xDD_+t\\xBF\\xC6\\\\\\x80\\xAD\\x94q\\xC5\\x94\\xC2\\xBA\\xDBr\\x8BI\\x88\\x19\\xC9\\xD5y\\xD0\\x91#:\\x19\\x88sF\\x81)g\\x10\\xBC\\xD68\\x8B\\x89\\x861,Y\\xB8\\xC6\\xC2T\\x0B\\xCE\\xC9,\\xC8\\x92\\x80\\xB5\ts\\xC6\\x05\\xF5\\xF0\\x89\\x08C\\x0E\\x07#%\\x0E\\xD3\\xC2\\x02\\xE0\\x16(\\x84v8\\x1F\\x18c,\\x160\\x12t0\\x82`J1\\xBDe\\xBC\\x13\\xD4\\xE1&"
		"\\x8A\\x85\\xBC\\xD6v\\xD8t\\x95T\\x98M\\x9Ds\\xC3\\x06b\\xB1\\xA8\\xA0VH\\x05H[)0\\xCA\\x9Dta\\xC7rB\n\\xACc\\x99\\x12\\xA1\\xD9\\xE1|\\x9C2\\xC3qo\\xC7\\xEA\\x10\\x84\\xB5\\x92\\x00,8\\xE5\\xC0\\xD8\\xC8\\xE5\\x16\\xB8\\x18\\x06\\x84ZM\\x08+\\x06\\x81\\\\\\x99h!\\xF4\\xB29w\\x94i<\\xD6`P3p\\x88\\x05,\\xDF\\xF1\\xA0!\\xB4\\xC1\\x82\n\\x1C\\x82WR\\xC78\\x13\\xE4\\x00;\\xD3-\\xFE\\xD5B\\x08\\xDCm,\\x8B\\xA8sS\\x80Z\\x18nr\\x86\\x0B\\x9B\\x1F\\xEB{\\xDF\\xFA\\x82,\\x1F\\xC3="
		"\\x8D\\xE5\\xDBk\\x1E\\x8B\\xE7\\xEC\\x00\\xD5\\xFDGU\\xF7\\xF7\\xD4W\\xD7Y_\\x867\\x1C|^\\xDF\\xE2k\\xC7~\\x96\\xDFd\\xFD\\xB2\\xEE\\xBBo6\\xFD\\xED\\xD5\\xF0r\\xC4||\\xB9\\xEDKd\\xDD\\xFA\\xA2\\xDC\\xDC\\xCE\\xEF\\xFD\\xF2\\xEA>\\xBC\\xEE\\x10\\xB8yv\\xDBd\\xE5u\\xB5\\xED:\\xB6\\xE1\\x05\\x95\\x94\\x97\\xC3\\xDBuU]7\\x1E_\\xA1\\xAFj|\\xCF\\xAEm'\\xFF\\x890\\xDE\\xFD\\xE2+\\xC2\\xBB\\x07\\xF3_\\x87\\x9B]+\\x86\\xF5\\x0C\\xEB\\xFC6\\xEA\\x1C\\xDEps\\xDB\\xFF}\\xF8\\xF7\\x1B\\xEC\\xFF~"
		"\\x83\\xFD\\x857\\xD8\\xC3\\xBF\\xF9q|\\x1BR\\xE0\\xB3#\\x83\\x9Ff\\xFF\\xFFd\\xF0\\xEAlv\\xE3\\xB3\\xC2\\xB7WW~\\xEDo}\\xD5\\x93c\\xCC\\xD9\\xAC\\xDB,I\\xD9\\xCDv/\\x9C\\x87\\x07\\xF5I\\x91\\xF5\\xD9,\\xDCEV\\xD9]\\x92\n|\\xEA\\x1Ffr\\xE9\\x85J\\xF1.i\\xD7\\xA3\\xF3Y\\x8B/\\x9Ar\\x81o\\xCF@\\xCA\\x85\\x88\\x0FQ\\xDE\\x85\\xF9\\xFE\\xD2f\\xF8h/"
		"\\xEA7h1\\xBB\\x1F\\xD8d\\x9F\\x9C\\xCD\\xF0\\xED\\x8E'\\xCC\\xBC\\xBEmZ\\xDFu\\xBE\\x08\\x16\\xC0\\x7F\\xFE\\xFB\\x97Y\\xE0\\xC9\\x82'3LV\\xFE\\xAF\\x9Aa4\\xD8\\xE5\\xE5\\xAF\\xFF\\x0B$\\x96{\\xD9\n:\\x00\\x00", 
		LAST);

	web_custom_request("collect_15", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661494352&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=1&dp=%2Faccount%2Flogin&dt=Account%20%E2%80%93%20Tasty%20Nibbles&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Flogin%3Freturn_url%3D%252Faccount&sid=1708661464&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&en=page_view&_ee=1&tfd=8806", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("register", 
		"URL=https://www.tastynibbles.in/account/register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_16", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661494352&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=2&sid=1708661464&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Flogin%3Freturn_url%3D%252Faccount&dr="
		"https%3A%2F%2Fwww.tastynibbles.in%2F&dt=Account%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=5857&tfd=9693", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_17", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"e\":[\"0.7.20\",4,3328,2327,\"997scejv0n\",\"14owjl3\",\"g67g3k\",2,1,1],\"a\":[[1914,12,564,1045,156],[1937,12,562,984,181],[1951,12,562,964,189],[1983,12,403,920,205],[2032,12,403,884,219],[2062,12,403,873,225],[2096,12,194,844,243],[2154,12,194,804,265],[2186,12,194,789,270],[2249,12,279,738,294],[2282,12,279,713,316],[2301,12,279,709,321],[2600,15,279,709,321],[2632,15,279,709,521],[3149,12,322,684,530],[3183,12,322,646,550],[3216,12,322,632,563],[3250,12,282,628,565],[3282,12,282,628,"
		"566],[3301,12,282,639,570],[3316,12,282,650,571],[3358,12,282,660,571],[3384,12,282,661,571],[3466,12,367,623,599],[3486,12,367,614,608],[3533,12,367,606,616],[3573,12,367,602,630],[3616,12,325,584,659],[3633,12,325,578,662],[3683,12,369,549,669],[3733,12,369,527,675],[3763,12,369,526,675],[3802,12,369,523,675],[3842,12,369,522,675],[3851,12,369,520,676],[3886,12,369,519,676],[4000,12,369,519,675],[4105,12,369,519,674],[4158,12,369,519,673],[4166,12,369,519,672],[4989,13,369,519,672],[5191,14,369,"
		"519,672],[5191,9,369,519,672,19606,18021,0,1,0,\"Create account\",\"https://www.tastynibbles.in/account/register\",\"1997z2shq.1997z2shq\",1],[5609,26,\"pagehide\"],[3328,4,1,1263,1457,1263,593,0,200,0,0,2848],[5655,1,4,[\"www.merchant-center-analytics.goog\",\"analytics.google.com\"]],[5655,0,2,5295,3,2,4,6,5,5,10,1,25,51],[5655,36,6,[4848,0,5193,1,5346,1]]],\"p\":[[4848,6,856,749,\"DIV\",\"id=AnnouncementSlide-0769ec4d-48e1-4566-8ea5-92d0ebc421cb\",\"class=slideshow__slide "
		"announcement-slider__slide animate-out\",\"data-index=0\",\"style=position: absolute; left: 0%;\",\"aria-hidden=true\",857,749,856,[4],\"id=AnnouncementSlide-1f3f344d-5f71-4ad8-949b-1292190c46c2\",\"class=slideshow__slide announcement-slider__slide is-selected\",\"data-index=1\",[8]],[5193,6,5,2,4,\"BODY\",\"class=template-customers-login loaded osf-theme-expanse-5-may-2022 unloading\",\"data-transitions=true\",\"data-button_style=square\",\"data-edges=\",\"data-type_header_capitalize=false\",\""
		"data-swatch_style=round\",\"data-grid-style=gridlines-thin\",\"style=--osf-float-btn-bg-color: #BA4444; --osf-float-btn-color: #ffffff; --osf-font-family: inherit; --osf-font-size: 14; --osf-inline-btn-bg-color: #BA4444; --osf-inline-btn-color: #ffffff; --osf-popup-btn-bg-color: #BA4444; --osf-popup-btn-color: #ffffff; --osf-popup-heading-color: #BA4444; --osf-popup-text-color: #000000; --osf-popup-border-radius: 4px; --osf-field-border-radius: 4px; --osf-float-button-top: 15%\"],[5346,6,856,749,"
		"\"DIV\",\"id=AnnouncementSlide-0769ec4d-48e1-4566-8ea5-92d0ebc421cb\",\"class=slideshow__slide announcement-slider__slide\",\"data-index=0\",\"style=position: absolute; left: 0%;\",\"aria-hidden=true\"]]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661500.23.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708661464.1.1.1708661500.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_11", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661500859},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661500859}}]}", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A11%3A40.864Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_12", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661500921},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661500860}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\","
		"\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4296e41-AE41-4B16-B773-561E6B2B2231\"},\"metadata\":{\"event_created_at_ms\":1708661500864}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\""
		"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account/register\\\\\",\\\\\"title\\\\\":\\\\\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/account/register\\\\\"}\"},"
		"\"metadata\":{\"event_created_at_ms\":1708661500864}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/"
		"y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account/register\\\\\",\\\\\"page_title\\\\\":\\\\\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account/register\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661500917}}]}", 
		LAST);

	web_custom_request("produce_batch_13", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661500863},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account/register\",\"search\":\"\",\"title\":\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account/register\",\"properties\":{},\"eventId\":\"sh-d4296e41-AE41-4B16-B773-561E6B2B2231\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\""
		",\"navigationType\":\"navigate\"},\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"visitToken\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"microSessionId\":\"d4296e39-8330-4637-BE8D-6062C781D71A\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\""
		"event_created_at_ms\":1708661500863}}]}", 
		LAST);

	web_custom_request("produce_batch_14", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661500920},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4296e41-AE41-4B16-B773-561E6B2B2231\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account/register\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661500917,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account/register\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d4296e39-8330-4637-BE8D-6062C781D71A\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\""
		"is_persistent_cookie\":true,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d4296eaf-6C01-49A3-C4ED-D968469391D7\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661500920}}]}", 
		LAST);

	web_custom_request("collect_18", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\x85RAn\\xDB0\\x10\\xFC\n\\xB1\\xA7\\x04\\x98J\\\\R\\xA2d\\xE7\\x94\\xFA\\x90\\x16ir\\x89\\x01\\x1F\\x08\\xA1\\x90m\\xC6a\\xACJ\\x86\\xA5Dm\\x8A\\x16\\xFDC\\x7F\\xD8\\x97\\x14k\\x05E\\x81\\x1E\n]fGC\\xCE,w\\xBFR\\xA0\\xB9'\\x9D\\x14\\x89\\xD1\\x04\\x86\\x06\\xEB\\x0C4\\x9B\\x15\\xFD&<>\\xEB\\x96@\\x9Cu\\xE3cc\t\\xB4s\\xC5\\xCE\\xEE\t\\x16\\x1A\\xBA\\x02\\xD54\\xF7\\xDE\\xA0\\x04\\x1Bg\\xC1\\x99\\xD3\\x15\\xBC\\xB5`\\x9E\\x98|"
		"f'\\xC2\\x94\\xA0\\xE7\\xD8\\xC7u\\x13\\xA8\\x82\\x17\\x0F\\x9B\\x81\\x16\\x1F\\xDF\\xDF\\x11<i\\xAA^YI\\xE0\\xE9\\xA6{\\x89MS\\xA7y\\xA2\\xD5\\xD9*\\xB6\\xDBn\\xEC\\xD5\\xEDR\\xB1N\\xF4\\x85Z\\xC5\\xD6e\\x17\\xEA\\xB3\\xCB\\xCE\\xD5\\xE5\\xE1\\xD0\\x84UX_\\xC7!\\xCDm\\x91X\\xA7\\xCE\\xAE\\xDF-o>@5q\\x1F\\xD4U\\xD8\\xEC\\xBBs\\xB5x8v\\x9FB\\xCA\\x86\\x13-\\x9F\\xBA\\xAB\\xEF\\xEBc|=B\\x15\\x18\\x9E\\x1E\\x86\\xE1\\xD0\\xCF\\xD3t\\x1C\\xC7d\\xA8\\xFB\\xE1K\\x1B\\xD7\\xEB&"
		"\\xF4Il\\xD3z\\xB3\\xE9\\x9E\\xDA!=\\x86]\\xEC\\x87p\\xA4\n\\xE6?G\\xA8\\x82\\x85\\xA7\\xC51\\xD4CP\\x97\\xD3\\x05\\xEA\\xD7\\x8F\\x9Fj)Ju;I\\xA9\\xC2\\x0C\\x9EB\\xFB\\xE6\\xEA\\xAD\\x04\\xC9\\xE1\\xA9\\xB4/l\\xB6R\\xB9\\xD3/A\\x05<5\\x83\\x18\\xB3\\xE8\\xC7\\xB0\\xEE\\xE3 \\xAFi\\xF4?.\\xC2J\\xBC\\xD7\\xA7\\x93R\\xA2\\xF0\\xA9w\\xA92xzj\\xB7\\xE1>\\xB6a\\xFB}6#\\xFCU\\xB2a\\xD1\\x88\\xF5\t\\x88s\\xB6\\x13T\n\\x95s&XB\\x98?s\\xD3\\xB29\\x85.\\x9D\\xE3\\\\3\\xE7|\\x9A\\xA4\\x85\\xD58\\x8D"
		":\\x87\\x81\\x83e\\x14`p\\x066\\xA5\\x96^\\x0B\\xA3\\xA5I\\x93\\xC1\\xE4\"r\\xD0b\\xA8E\\xCA\\xB0F\\x90\\x9D\\xAE(as\\xD9\\xBAi{\\x1C\\x1C\\xBC-atUU\\xDF~\\x03^o\\xF5\\x08\\xC8\\x02\\x00\\x00", 
		LAST);

	web_custom_request("track_5", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9yZWdpc3RlciIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCVjhuS25rY0x0OEwiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiYWJmZWYzZDItNWY2Mi00Nm"
		"MwLWJmMzEtYzY0NjBmYTQ1ZDYwIn0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY2MTUwMTQxNCwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFs"
		"IjpmYWxzZX0sInByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		LAST);

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

	web_url("public_3", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=canary&build=d43430ddaebbedea49f590c6812d6bc41f57f7bd&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_19", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=", 
		body_variable_2, 
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

	web_custom_request("collect_20", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xADSM\\x8F\\xDB6\\x10\\xFD+\\x04\\x81\\xEEid\\x93\\xD4\\xD7J\\x86P\\xA4i\\x8B\\xE6\\xD0K\\x91\\xB4\\x07A0(rlq-S\\x04I{\\xA3\r\\xFA\\xDF\\x0B\\xC9q\\x9A4A/-\\x08\\x10\\x9C\\x0F\\xCE\\xBC\\xF78\\xFC@\\x91\\xD6-e\\x9Br#\\x18\\x85\\x14x\\x9A?\\x82\\x10,\\x05ZUeP\\xF8te\\x96\\x02\\xE5\\xD9\\xF4\\xFC4\\xA6\\x14\\xE8\\xB1(\\x8F\\xE9i\\xC9e\\xC0:\\xA0\\x92\\xD6m\\xCB\\xAB\\x92\\x03g \\x80\\x01g\\xAC\\x83V\\xB0\"\\xBB{\\xC4\\xEAYKg\\xC0\\x81\\x8B"
		"\"\\x05\\x9E\\x15\\xECv\\xCA\\xAB\\xB5\\xD4\\xBAx\\x9A\\xA7\\x1D\\xB4i^p\\xE0\\x90AK\\xA3\\x0Cq\\xB6\\xA6\\xEFG\\x0C\\x9B\\xF3\\x1C\\x86\\xC9\\x99\\xC3\\xBCQ\\xD3\\x99\\x02U\\x1B5Jo\\xE2\\xBC9\\x07\nT:\\xB3\\xF1\\xF2e\\xF2N\\xDE2\\xBA{\\xAD\\x05G&X^-\\x14!\\x83\\x12r\\xC8\\xA0\\x02\\x01\"\\x07\\xCE\\xEEii\\x01\\x05\\xB4<\\xCF\\x8B\\x05KU\\xAE\\xE0\\x85X\\x88v\\x1DP\\xB7R]\\xA2\\x05\\xF0*[\\xB7t\\xD9r\\xA0o~\\xFE\\xED\\xD5\\xAF?Q\\xA0!\\xCE#6\\x93\\x93\\xCA\\xC4\\xB9&|G\\x064\\xC7"
		"!\\xD6\\x843\\xF6\\xDD\\x8E\\xB8)\\x98h&[\\x13\\x8F\\xA3\\x8C\\xE6\\x8A;\\xD2Ku:\\xFA\\xE9buM\\xECdqG\\xB4\tn\\x94sM\\xFAqR\\xA7\\x1D\\xE9'\\xAF\\xD1\\xD7\\x84\\xADq\\x12\\xBD\\xB4\\xC1I\\x8F6\\xEE\\xC8Y\\xFA\\xA3\\xB15a\\xEE\\xFD\\x8E8\\xA9\\xB5\\xB1\\xC7\\x8F\\xD6Kb\\xAC\\xC6\\xF75\\x11\\xBBE\\x9Fq\\x9C\\x9E\\xFF\\xBE\\xAA\\xE6&\\xFA\\x0BR\\xA0\\x07/\\xCFxk\\xD10\n\\xF4\\xD9\\xE884\\x0B^\n\\xF4\\x06\\xFFn\\x05\\xAF\\x9A!F\\x17\\xEA\\xED\\xF6\\x9Fzo\\xAF|"
		"\\xAB\\x06T\\xA7\\xE9\\x12\\xB7\\xEE\\xD2\\x8FF}\\x1F\\xBD<\\x1C\\x8C\\xDA\\xA3\\xBD6JZ\\xE9\\xE7\\x87\\xFEbF\\xDD\\xE8,\\xCDR\\xA6\\xB5\\xC4\\xBEG\\x8D2\\xAB\\x0Ey\\xC5T\\xF1\\xC8\\x85.z\\x95\\xF1C^\\x1E\\xCA^?\\x9C'\\x8D\\xDE6\\xFC\\xE1b\\xCD\\xC1\\xA0\\xDE\\x8F&b\\xC3\\x1F\\xCE\\xF2h\\xD4>(o\\\\\\\\L\\xF4j\\x906\\xEEO87\\xFE\\xC5\\xEDGs\\xC5\\xFD;\\xF3\\xF6\\xDD\\xEBW\\xAF\\xED\\xDB1<\\xE9\\x1F\\xEEwnC\\xF4\\xEF\\x99\\x93\\xC6f\t,c6\\xCA\\x10\\x9A;"
		"\\xD3\\xE4N1Ye\\xBB\\xEB\\xDAL\\xD1%\\xCA\\xA3F\\x1B\\x8D\\x1C\\x03]F~\\x19\\xA1\\x02D\\xF1\\x08\"c \\x8A\\x12\\xE8\\x8Fo~\\xFFT2\\x98\\x88\\xC9\\x80R\\xA3\\xDF\\xEFq\\xC43\\xDAH\\xBE\\xE5L\\x92p\\xE9\\x89\t\\xC9\\xFAz\\xEB\\xFC\\x18{\\xA4@\\xB5\\x8C2\\x89\\xB3\\xC3\\xC6\\xCA+\\x05Q\\xB2\\x8F\\x9D*hs(\\xBA\\xCF3\\x02J\\xAF\\x06\n\\x82q\\xE0y\\xB5|Kh\\xF3\\x0E\\xA8\\xD1\\xCD/k\\xBF?\\xBCt\\x0E\\xFD'|7\\x14\\xC9\\xF3\\xCDM\\xBE4\\x93\\xC4X\\x13\\xBFr\\xAA\\xE9\\xEC<\\x86\\x80zQ`\\xFD="
		"\\xC5\\x17\\xB8\\xFE\\x83\\x02\\xF4\\x1Bt>k\\xF2\\xFF\\xC8\\xFC\\x95\\xAA]\\xF7\\xE7_\\x02Le\\x92(\\x05\\x00\\x00", 
		LAST);

	web_custom_request("collect_21", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661500861&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=1&dp=%2Faccount%2Fregister&dt=Create%20Account%20%E2%80%93%20Tasty%20Nibbles&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Fregister&sid=1708661464&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&en=page_view&_ee=1&tfd=5924", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_22", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xED\\x95m\\x8B\\xDC\\xBA\\x15\\xC7\\xBF\\xCA\"\\xB0)\\xE5xV\\xCF\\xB2'\\x88\\xB2\\x9Bd{\\x03\\xCD\\xA6\\xDC\\xE6\\xF6R\\x96a\\xD1\\xD8\\x1A\\x8F\\x12?\\x0C\\xB6\\xBC\\x93\\xBD\\xA5\\xD0\\xCF\\xD2\\x8F\\xD6OR$\\xCF\\xD3&\\xBDPJ\\xA1o23/<?IG\\xFF\\xF3\\xD79\\xF2_\\x91E\\xCB\\x07\\x84\\x17jA1\\x02\\x0ELH\\x02\\x8CP\\x0E\\xA8(\\xD4X\\xDAOO\\xB8C\\x80\\x08\\xEF\\xF7\\x9F\\x1A\\x86\\x00\\xD5R\\xD5\\xEC3\\x02\\x06\\x18\\xF0\n"
		"\\x90A\\xCB\\x87\\x07\"\\x94\\x00B\\x81r\\x01\\x82a\\xE0B\\xAD\\xE0\\x81H\"OTH\\xE0\\x98E\\xCAi\\xA0DR\\x10J\\x01\\x938R\\xA9N4\\xA7\\xC0x\\x11\\xA8\\xC2\\xF8L90\\xCE\\x03-D\\x01D|E)f\\xF2\\x92\\x8A\\x99r\\xC9\\xA3\\x86\\x9CA\\x10)\\xB8\\x88\\xB4 '*$\\x08A\\x03\\x15T\\x9D(+@\\xC4,\\xA8\\x98\\xF5\\xCE4?Q)\\xCET\\x1C\\xA9\\xCC\\xD9\\x89R\\x01B\\x92@\\x15\\xC1g\\xCAO\\xF4\".\\xA5\\xC7\\x08J\\x89\\x17\\x94\\x05\\x1Fh\\xFEU\\x04\\x1As\\xCB9{Ic\\xDC<\\xB8sp=P\"#-\\x0Eq\t\\x08\\x9A\\x03/\"-\\xA8"
		"<\\xD1pny\\xD0\\xC00&/\\xA9\\x88\\x94\\xBE<c5\\xD3\\x8B\\xDD\\x02\\x8D\\xB91|\\xF0\\xF7T\\x0FA/#|\\xA6\\xAA8\\xD00W\\x10L\\x80\\xAAH\\xD1?\\xFF\\xFE\\x8F\\xCB\\x1F\n\\xE3\\xEA\\xA2\\xB6h\\x01\\\\\\x04G\\xC4\\xD1\\x91H%p\\xA5\"=\\x9C\\xE0!w\\x9E\\xD3HE~\\xCA\\x87\\x14\\xC0\\x8B\\x18\\xA1\\xC0g\\x8DD\\x81 qn\\xC1\\xD8\\x99\\xCA\\x83{\\xA28F` Hp\\x9BE\\xAA\\xCE\\xF5B(\\x08\\x1A4H|qV\\x04\\x83`,\\xD2\\x8B\\x088\\x07\\xC1d\\xA4\\x05}"
		"I\\xF3@\\xC9E\\x1DF\\x1A\\xF4J\\xFA\\x15\\xE5$\\xD2\\x83\\xFF'\\x1A\\xB2\\x90\\xBC\\x90@\\xD8\\xB7\\xB4\\x00>\\xFB\\x8F\\xBC\\xFD\\xE2\\xD1\\xB7\\x86\\x03\n\\x9E\\xC7k\\x80C\\xF0G2 \\\\\\xE2\\xF9I\\x14\\xA1\\xED)\\xC6\\xA1\\xF9\\x81R\\x1AZW\\xCA\\\\@\\x98\\xFE\\x80\\xF6\\xFB\\xFD\\xA2\\xB5C\\xB95\\x9D\\xCFJ\\xDBy;d\\xA63\\xCD\\xB3w\\xE5\\xB8\\xA8\\xFB\\xBEF\\x80^\\x82\\xC6.\\xCA\\xBE\r\\x17\\xCB\\xF9\\xCF\\xEA\\x18\\x15\\x03\\x05E)0\\x10\\xC0!\\x07\\x01\n\\x08\\x06\\xCE 4\\x17=Nc\\x12$"
		"<\\x08*\\xC3\n\\xA1r\n\\x18d8m\\x0CR\\x84\\xEA*@JN\\x00\\xAFV+@\\xBBpc\\xC5\\xC9\\x12D\\xE8\\xA0\\x822@o\\xDE\\xFD\\x19\\x01r\\x95\\xBE\\xE9\\xBA~\\xEAJ\\xDB\\xDA\\xCE\\xFF\\xA9q\\x95\\xCD\\xB0\\x92\\x85-y\\x95\\xF1\\xDC\\x92\\x8C\\x0B)\\xB3\\xDC\\x1A\\x91\\x15\\xB4\\xC2v]rJ\\xCA5\\x02T6f\\x1C\\xF5\\x18\\x96\\x8C\\xDB~\\xFF\\xF8\\x18\\x1F\\xAF\\xCCE\\xBC,\\xA2\\xE1<\\xE4Z\\xE3m\\xD6O\\xE1(*\\xE3M\\xE6\\xBA\\xCA~\\xD1\\x18\\x01\\x1A\\xFDsc\\xF5\\xAE\\x1F\\x9Dw}\\xB7\\xBC2\\xEB\\xB1o&o_]"
		"5v\\xE3\\x97W8y\\x15\\xCC\\x1C\\x9C\\xC9\\xB6\\xAE\\xAAl\\xA7\\xFD0Y\\x14\\xEE\\xBD9\\xA5\\x90\\xDB\\x03_\\xFDJRd\\xC36\\x8C\\xF3*\\x13\\x1BE2n\\xAA<+x\\xB1\\xCE\\x08-()p\\xC9eI\\xFF\\xAB\\xA4\\xDC\\x98\\x8D\\xB6\\xB1\\xA5\\xB7\\xD5\\xCB\\xA4\\x08\\x82\\x87|\\x15;:\\xA7\\xFFo\\xEF\\xFFg~\\x87\\x1A\\x0C5&\\xE3\\x95A\\xB1\\x04t\\xF7\\xE1\\xC7\\xF7\\x08Pk\\xFD\\xB6\\xAFB\\xC4p\\xBA\\xA6\\x0Ca\\xF5\\xB5)\\xCB~"
		"\\xEA\\xFC\\x9Co9X\\xE3\\xEDc9\\x8D\\xBEo\\xED\\x10\\xA7\\x95v\\xE7\\xB3rk\\x86\\xD1z\\xFD\\xD3\\xC7\\xBB,?jm\\xFA\\xDAu\\xD9\\xDE\\xF9m6n\\xFB]6\\xBA\\xBA\\xCB\\xA6\\xDD\\xE1\\xDC\\xE79\\xB5o\\xB3M?\\xB4\\x99\\x0B\\xCDgJ\\x9F\\xB9*\\xA4\\x17z>\nT9\\xA0w\\xF7\\x7F\\xFC\\xE9#\\x02\\xE4\\x9FwV\\x1F.\\x82\\xCE\\xB4V\\x1F\\x85<l\\xDC0\\xFA\\xC7\\xC0V\\xB3\\xD2\\xBB\\x00\\xEEMkOf\\xBBn7\\xF9l35M\\x90=\\xF9\\xBE4;\\xE7M\\xE3~\\xB1z\\xDF\\x0F\\xD5x\\xC0\\x9B\\xBE\\x9CF\\xFD\\xEB\\xFA6\\xCE6UP9_?"
		"O\\xA6\\x99\\xAC\\xFE7\\xEF\\x01\\x19^\\x1928\\x8CA\\x00)8\\x03\\xF4\\xEE\\xEE\\xC7\\x9B\\xF7o\\xC3FM\\xD3\\xEF\\xF5\\xA7\\xDEu\\x99\\xA9\\xE6\\xD8v\\xF4Y=\\xF4\\xD3\\xEE\\xB8\\xB57u\\xED\\xBA:lu\\xF3s\\xC6T\\x9E\\xE7\\x94`rv\\xD7T\\x99w\\xAD\\xD5D\\xE1\\\\J\"\\xB0\\x92J @[\\xEB\\xEA\\xAD\\x8FE\\xB2w\\x95\\xDF^\\x94K\\xE5\\xC6]c\\x9E\\x97W]\\xDF\\xD9WWOntk\\xD78\\xFF\\xBC\\xBC\\x9A\\x8B$\\xD4\\xCC8\\x94z\\xEB\\xFDn\\\\^_\\xFBjQ\\xF5\\xD3\\xBA\\xB1e\\xE3\\xCA\\xCF\\x8B\\xCE\\xFAk_]\\x0FSs}"
		"\\x12\\xF4\\xBB\\xC1tU\\xDF^\\xCA\\x10EZ>iB\\xD2\\xCD\\xE8\\xBF\\xE2\\x9B\\xD6k\\x96\\xAEk\\xBD\\x89\\x9F\\xB4\\x9E\\\\\\xA5?\\xDC\\xA7f|\\xEEJM\\xD2\\xDA\\xB7\\x9A\\x8B\\xB5\\xE5\\xB4\\xC1\\xBF\\x18\\x8AqZ\\x97\\x95&\\xAC\\x99\\xBF$\\xADZ\\xA3q:=\\xEE5\\xA1yx\\xD8jEq:\r\\xCD,:a7\t\\xBDK\\xE8]\\xB8\\xDC\\xBD\\x19\\xFDs\\xE7\\xD6\\xEB\\xC6\\x8E\\x0B\\xD7%\\xF4\\xEEP\\xCF\t\\xBD\\x1Bl\\xEDFo\\x87t\\xB0\\x9B\\xFFhi\\xBA\\xEDt\\x18\\x99o~S\\x8Dvxr\\xA5\\x1D\\xC3; "
		"\\xDD\\x0C\\xAD\\xC6\\xA9wk\\xA3_\\xC7.I(\\xBE9\\xEE\\x85\\x93\\xB74\\xC9qR\\xB0\\x84\\xE2\\x8F!pB\\xF1\\xFD\\x1C;\\xEDv!\\xA1\\xDDXV\\x8D\\xEEz\\xB3s\\xA9\t\\x9E\\x10\\xCE\\x15\\xA3Rr\\xBC88\\xC8\\xA5H'c\\xF4\\x97\\\\\\xA6\\x93Yk\\xC9\\xD3\\xC9l\\x9E\\x1A}\\xDF\\xFB\\x84\n\\x8Ao~s\\x1B\\xCE\"a\\xB7E\\xB1\\xC0\\xE1\\x9B\\xA8\\xD7\\xBF\\x8Fj\\xE3\\xF8\\xEB\\xED\\xD0\\xB76a\\xB7\\x84\\x92\\x05^H\"\\xD5\\x82\\xE4\"Q\\xAF\\xE3\\x88\\x9B\\xDAo\\xC6\\xD2\\xC9\\xB4\\xEB\\xE0\\xB7\\xD9\\xE9\\x9F]"
		"W\\xF5\\xFB1<?i\\x12\\xE3\\xA7\\x93\\xD9k\\x9Cn\\x1A[\\xD5V\\x934T\\xA6\\xB6O\\xB6\\xF3\t{\\x13\\xFA\\xE6q\\xF4f\\x08\\xFD\\xFA\\xDB\\x0F\\x87\\xBE\\xA7X\\x92\\xB9+\\x90\\xDB\\x0C\\xA6\\xB5\\xCB\\x1F>\\xBE\\xFFC\\xE4t\\x1ED?\\xBC\\xBDy\\x13\\x96\\xDCj\\xB3\\xEE'\\xBF\\xBC\\xBE^7\\xA6\\xFB\\x1C\\xE7\\xB0S\\x00\n\\xE8\\xF6\\xC3\\x9B\\xBF\\xC4^\\x0Bo\\xCB\\xEF\\xBD\\xF6\\xBD\\xD7\\xBE\\xF7\\x9AG\\xAB\\xD5\\xDF\\xFE\\x05\\x94\\xC4Z\\x00(\\x0F\\x00\\x00", 
		LAST);

	web_custom_request("collect_23", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\x9D\\xD4\\xCD\\x8A\\xE3F\\x10\\x07\\xF0W\\x19\\x1Ar\\xFB\\xCBT\\x7FTu\\xD7,>\\x04r\\xC99\\x90\\x8B\\x10\\x8B,if\\xB5\\xAB\\xB1\\x96\\x91\\x9CI\\x08\\x81<K\\x1E-O\\x12\\xD4=\\xD6xw\\x93K\\xC0\\x18\\xF1sw\\xB9\\xAB\\xAAK\\xBF\\x9B\\xC1\\xDC\\xD7\\x86\\x0E\\xF1\\xE0\\xC8\\x80!\\x92\\x18\\x81<\\xC3\\xA8\\xC6\\xA5\\x1B>\\xFEBg\\x03c\\xC3\\xFC\\xF2q\\xF2\\x06\\xE6Q\\xE2\\xA3\\xFFd\\xE0A\\xA0\\x06\\xA65\\xF7u-\\xEC-\\xAC\\x83K\\x1EL\t"
		"\\x1C\\\\\\x83Z\"\\x05\\xD8\\xF0o\\xAA\\xB7\\x08\\x0EJ\\xB0\\x12%lAA8_\\xA6\\xA9|\\x99\\xF4i>=\\xB3\\xB0\\x1C\\xF6'\\x03\\xDB\\xA0\\x8E>(\\\\\\xCC\\x81\\xCC\\xDF\\x7F\\xFEu\\xFB1\r\\xEA\\x94B\\x80%8\\x10<Q\\x96\\xB8K(\\xA2$W\\xE1\"le\\xCF\\xC4\\x06p\\xF0Y\\x1D\\xEF\\xEA\\xB6\\x03sVN\\xBBr\\x00\\xB3fU\\x97508Fp\\xCC\\x11\\xC4\\x85]S\\x02\\xA7\\xAC\\xC9ZX\\xFEFYo5\\xBE\\xAA\\x86[MY\\xD5\\xA5Ry\\xF5`\tH\\xBAe\\xA1\\x9EtS+"
		".\\x178i\\xCC\\xEAdW\\xCFH\\xAAY%\\xED\\xEA\\x12\\x94J\\x84\\x92EQ\\xB9j\\x08\\xF6M\\xF9\\xAA,\\xEEV_\\xE3^\\xEB\\xB0\\x9D\\xCC\t\\x92\\xE6\\xF3\n\\xA5]=]\\xB3\\x10\\xCEk\\xBD\\x8B`\\x1F\\x91\\xB8hL\\xBB\\x86\\x80\\xE4\\xB6\\xAAk\\xA4\\xB8W2$$\\xCA\\xB9E\\x97ve\\x8BX\\xCE\\x10c\\xE9\\x9BZ0G\\xC4\\x98\\xCF\\x1B\\xD5\\xBFiB\\x94\\xED^jrqW!\\xC4\\xDCcM\\x91J\\x8F\\x15\\x1C\t\\xD1\\xE6\\xB5J7=fD*j\\xBFR\\x9B\\xB5\\xD4\\xAC\\xA8\\xBC\\xAA%\\xB2_1\\x15f\\xBD\\xBD="
		"W\\xB66\\xDC\\xB2\\xE4\\x86\\x96i\\xC5\\x16G<l\\x10*O\\xAC\\xDBt:\\xA2}\\xC2DB\\xF9\\xD7\\xE8\\x08\\x16\\x01\\xB5yyy9<\\xCE\\xF3\\xE34\\x1C\\xBA\\xF90nS\\xFE\\x05=\\x99f\\xDF\\xB1M\\x88ek\\xE1\\xF3f\\x01\\xC3\\xC11\\xF2p\\x94%^ \\xA8E}\\x02\\xC1\\xD2v-\\xA9i\\x1A\\x98\\xCF\\xDB\\x0B\\xA2\\x80\\xE46Zu~\\x9B+\\x98\\x1F~\\xFC\\xD9\\xC0\\x8C\\xFD\\xF1\\xFB\\xF3y\\xBE\\x9C\\xBB\\xE1i8\\xAF?Mc?T\\xF6\\xC1?"
		"\\xF8\\x10\\xFA\\x8A\\x1F\\xA2\\xADB\\xDB\\xA7J\\x83\\x9E*\\xEB\\xD4Y\\xA5.H\\xE7\\x0CL7\\xB5\\xCBr\\\\\\xB6-\\xCB\\x87\\xF9\\xE5\\xFD\\xFB\\xFCx\\xD7\\xDE\\xC4\\xAB2=\\xBF\\xFD4>\\xB5\\xEBP\\xCD\\x97\\xD5\\xC0\\xF4\\xED\\xDAV\\xE3\\xB9\\x1F~=Z\\x03\\xB3\\xAC\\xBFM\\xC3\\xF1\\xF3\\xBC\\x8C\\xEB8\\x9F\\xEF\\xEF\\xDA\\xD32O\\x97uxw7\r\\x0F\\xEB\\xFD\\x1D}\\xF7\\xCE\\xC0\\xB4\\xCFc[}\\x18\\xFB~"
		"8\\x1F\\xD7\\xE7\\xCB`\\xB6\\xF7\\xC15\\xAD\\x80\\x9A\\x9B\\xFFHJ\\x03\\x93x\\xE5\\xAAk\\x95\\xAA\\xC0N\\xAAS\\xD7\\x9D*\\x17z\\xAB)H\\xDF\\xF5\\xA7\\xFF\\x95\\xD4\\xB8T\\xCB0\r\\xDD:\\xF4_&\\xE5\\x0Cjm\\x9A\\xE6\\x8F\\x7F\\x00\\xDC\\x10\\x84h\\xEA\\x05\\x00\\x00", 
		LAST);

	lr_think_time(4);

	web_custom_request("collect_24", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\x9D\\x93\\xDB\\x8E\\xDB6\\x10\\x86_\\xC5\\x18\\xA0w\\xC3\\x05\\xCF\\x87\rtQ\\xA07\\x01\\x82\\xA0@\\x0F7\\x86\\xB0\\xA0Ez\\xA3T\\x96\\x1C\\x8B\\xCA&-\n\\xF4Y\\xFAh}\\x92\\x80\\xA4\\xD7km\\x92^,`H\\xC4\\xE7\\xD1O\\xFE\\xF3s\\xFE\\x82\\x08\\xB7[\\xA07\\xE6\\x86S@\\x8D\\x8C\\x1ANQQc\\x10\\x9C3s\\x17\\xDF\\x7F\\xA4# 09=\\xBC\\x1F\\x04 \\xDCks/\\xFE\\x00\\x14H\\x91\\xB6\\x08\\x1En\\xB7"
		"[F\\xAD\\xE1\\xC88r\\xA9P\\x19\\x89\\xDA\\xD9\\x163v\\xEC\\x82u\\xC6\\xAE`'\\xEC\\x05+\\x8E\\x86\\xF2\\x8A\\xDD\\x93\\x88t\\x8F\\x98Q\\xED\\xD6\\x98\\x15\\xCC\\xE8\\x15\\xB6O\\xD8\\xDA5\\xAE\"\\xDC}\\xB3ZH~\\x8D\\xCF\\x07dB\\xB956\\x05KJ\\xD7\\xB8jK\\xAE\\x9E\\xECP\\xD4\\xF6\\\\-\\xD9\\x1A\\x8B\\x8A\\xDD3\\\\E\\xD4\\x95\\x9D\\x82\\xEB\\x01\\x8D\\x16kL+\\xBEjU\\xC6\\xA6ni\\xCFv\\xAC)\\xAD\\xD2\\xBA\\xDA\\xB1\\x9A\\xAD\\xB1\\xAD\\xD8\\x895\\xAE\""
		"\\xEEl\\xFE\\x82u\\xC5\\xCF\\xABU\\xC6\\x9C\\x9E\\xCD\\x17lQkV\\xB1\\xB2kL+6r\\x85U9 g\\x8C\\xADq\\xD5f\\\\\\xAF\\xB1\\xAC\\xD8\\xD1'lP\\xAB\\xD2X.\\x8CF&\\xBE\\x81-\\xCA\\\\-\\x10R\\xFC\\x94\\x00\\xE1\\xBF\\x7F\\xFE\\xBD\\xFE\\x01\\x02\\x94R\\x95\\x85\\xE5W\n\\x19\\xBBk\\x8A\\xD6I\\x89L\\x1B-\\xF3\\x18 \\xC5q\\x19\\x86\\xFA\\x80y`\\x1F\\xBA\\x87\\x14n\\x1E\\x17\\x80\\xA5%e\\xB6$f\\xA39S\\xA9i])\\x97gIQ\\x8A\\xCA\\x98|\\xD5\\x90Q^\\xD3W\\xC6\\x19\\xA4\\x98'\\xC4\\xA2@\\x8E\\x125*\\xD4\\xC8\\x15\n"
		"{\\xA9\\x10\\x1Au\\xD9\\xC0\\xB2,\\xCF\\xB8eH\\x911\\xA7]~sa\\xCA[qg\\x91\\xB6m\\x8Bp\\xACS\\x9B?\\xD0\\xA8\\xB2\\x17\\xC7\\x05*)\\x10~z\\xFD; \\xF4\\xA1\\xF9q\\x1C\\xA7e\\xEC\\xE2!\\x8E\\xE9\\x97\\xA1\\x0F\\x91\\xB0\\xBD\\xD8\\x0B)\\x03Q{\\xC3\\x88\\xF4\\xC1\\x12'\\xDD\\x8E0\\xEEr&\\x9D\\xD4\\x1D\\x07\\x84n\\xF0\\xF3\\xDC\\xCC\\xF9\\x93\\xF9\\xDD\\xF4pwW\\x96\\x1B\\x7F\\xA5G\n:\\x9D\\xFF\\x02\\x84\\xE0\\x93'\\xFD\\x18\\xE2\\xA7\\x86\\x01\\xC2\\x9C>\\x0F\\xB19Ns\\x9F\\xFAi\\xBC\\xDD\\xF8\\xDD<\r"
		"K\\x8A\\xAF6C\\xDC\\xA7\\xDB\r\\xFD\\xE1\\x15 \\xF8S\\xEF\\xC9\\xBB>\\x8486\\xE9\\xB4D8\\xE7\\xEDr\\x87\\xAC(\\xD3\\xC1-Gx\\xFD\\xF6\\xE7\\xDF~\\x05\\x84\\xF4\\xF9\\x18\\x9B\\xF3\\x1D\\x18\\xFD!6\\xDD2\\xA7\\xE9\\x10O\\xDB\\xC1\\xCF\\xE9.\\xA3\\xB6\\x9A\\x7F\\xE3\\xE7\\xF4\\xD6\\x1F\\xE2\\xC5N?\\x1E\\x97D\\xF6\\xCB0\\xE4\\x8D\\x974u\\xFE\\xD8'?\\xF4\\x7F\\xC6\\xE6a:\\x85\\xF9\\xD1\\xC4}:\\x90\\xFDt:\\x90~L\\xF1\\xE4\\xBBD\\xF6}\\x1C\\x02\\xE9CS\\xAF\\xDAG?,\\xB1y~"
		"\\x05K\\x989\\xA0\\x9C\\x87z\\xCCC\\xFEo\\x1EN*\\xAA\\x85S\\xA4\\xF3\\x8E\\x12\\xA9\\xB8&\\xBB\\xAE\\xDB\\x11.\\x03sV\\xEA\\xD0\\x85\\xDDK\\xF2\\xD8\\xF8\\xB1?\\xF8\\x14\\xC9\\xB4\\xA4u6\\xFC\\xE5\\xD9\\x94\\xDBUlmU\\xFB\\x1DC\\xD4h\\x17;\\x19\\x88\\xB4\\x91\\x11\\xA9\\xB4&6zE\\x1C\\x0F4\\xEE:\\xC9Y\\xF72C\\xFDL\\xE68\\xC4.\\xC5\\xB06D\\x01\\xB7\\xAEm\\xDB\\xBF\\xBF\\x000f\\x07\\xE4\\x0C\\x07\\x00\\x00", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:AGJB034UAwMyKvG2AI4r669W7KBYXWDpj6sSFR73wB0&cup2hreq=242a8f51f1c4108e72adf99a43f9e1ac1c234961f4562054e4e0c05744055704", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{72e913f4-056d-4f6b-8b6d-e5884581db49}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{4ec31663-34b4-4813-ad8e-9934a33afd03}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\""
		":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{4f6fa678-e3dd-4e41-9dc5-bb9ce9d909bc}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{6971cd55-f940-4a05-befd-3da0ddca2c28}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.04dfbee1ec2fd167512805dedf3fa2a823dc28fe9fa2c97a74e664b38486110f\"}]},\"ping\""
		":{\"ping_freshness\":\"{3e32b8f0-f10c-41c6-81ca-33575929b917}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"434\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{8aec1456-00fb-437e-8470-959c414b8010}\",\"rd\":6261},\"updatecheck\":{},"
		"\"version\":\"9.49.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.630414f6b053d4455bba45e07513742a8bfc72e591f3a010f0e636a83df4eed7\"}]},\"ping\":{\"ping_freshness\":\"{29e2c3ef-0a00-47c0-8b3b-1f8911b7ae38}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.21.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{0b271ce5-812f-4bc3-b0ee-0b0e66321eab}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.93bad6a3d7ac28485190495b33735420f459ac0a31f8a958f46f52cdfe1dbd7a\"}]},\"ping\":{\"ping_freshness\":\"{ae0c7e53-dbed-43dc-b7e2-5a575f493956}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"8562\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{d015a02c-6658-49c7-9fb9-2220d2dd8221}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{3a2c8d58-92b3-4cf4-ae67-79ec58e88066}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{a59890b6-b48c-478d-8398-3b80a4cd5825}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{f40e9e3a-7588-4665-a39c-8aebd8e18e96}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\""
		":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\"ping_freshness\":\"{12125028-c59d-4aa4-8e64-aa78d1d1dc7a}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{663d5597-522c-491f-b110-be3daae226aa}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\""
		"ping_freshness\":\"{a220bf4d-797c-429a-8e69-e70f50c06f90}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{6a56eda3-0bb5-46c6-aabc-65f245215cde}\",\"rd\":6261},\"updatecheck\":{},\""
		"version\":\"3\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{3a6766ff-079f-4d0f-9326-91a40599f2b9}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{b53d3b3c-64e4-4a06-81bd-46978ec0f6c7}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6259,\""
		"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.94b8a51eb078298283bcc90c1930d2207f263431522df89385d05d4271dc11fa\"}]},\"ping\":{\"ping_freshness\":\"{5e15f9cb-f140-4062-ae00-41ea600d71e6}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.20.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{7767b1d3-4d68-439c-9454-29b14afc8650}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:28tx@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\"}]},\""
		"ping\":{\"ping_freshness\":\"{4197457a-43f0-4de1-b37a-113825d9f838}\",\"rd\":6261},\"updatecheck\":{},\"version\":\"2024.2.14.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\","
		"\"requestid\":\"{4c4bbddd-9595-4df5-9bac-5d21a2690ff3}\",\"sessionid\":\"{9b9bbfe8-6710-4ee3-86c7-59de73cb685d}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("collect_25", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xC5\\x94\\xDB\\xAA\\xDC6\\x14\\x86_eX\\xD0\\xBB\\xA5\\x8D\\x0EK\\xA7\\x1D|\\x11H/rS\n=\\xDC\\x0C&h,y\\xC7\\xD9\\x1E{\\x18\\xCBI\\xD3R\\xE8\\xB3\\xF4\\xD1\\xFA$E\\xF2${69@6\\x85\\x82\\xB1\\xE4\\xCF\\xF2Z\\xFE\\xF5\\xFF\\xF6\\x1F\\x90\\xE0v\\x0F\\xFC\\xC6\\xDEH\\x0EhQh\\xEB-\\x1A.=\\x82\\xF7v\\xE9\\xD2\\x9B\\xB7|\\x02\\x04A\\xF3\\xBB7\\xA3\\x02\\x84;c\\xEF\\xD4=\\xA0B\\x8E\\xBCE\\x08p\\xBB\\xDF\\x0B'\\x8D@iQ:\\x8B\\xF0\\xCF_\\x7F_\\x1F\\xBB"
		"/^@\\x8B{\\xE1\\xB9V(d}T\\x93A\\xA3\\xDD\\x05\\xBB\\x07Lh\\x8C\\xDD\\xB0\\x17\\x15\\x93FM\\x02\\x8D\\xF3\\x15\\x0B\\xB1a\\xE7Q+\\x87\\x96\\xD3\\x86\\xE9au\\xC1Jo\\xD8R\\xC5^\\xA0&\\x89\\x96.E\\xBC\\x7F\\x84\\xB5\\xA8X^\\x8ATLh\\xB5\\xD9\\xB0W\\x0FX\\xA35[\\x11%\\xF5#l\\xB7\"\\xEA\\xBAe\\xC1\\xB2b\\x92\\xF4\\xB9\\xD5t\\xDD\\xB2`\\xBEa\\xAF?\\xD7\\xD2r\\x8FB}\\x8A\\x85@\\xDAv\\x10\\xD21\\x0C#|\\x8B7\\x08\\xEA~T\\xF7\\x9BG^:\\x14\\xF4I\\x87\\x82\\xFD5Eg\\x8DE)\\x942%\\x1F\\xC8qZ\\xC7q;"
		"\\x81\\\\c\\x7F\\x10G\\xE1n>\\xCE\\x00\\xAB\\xDE\\x1A;\\xC2\\xA2\\xD9(\\x14d\\xF86\\xD3\\xBE\\xC4Ls\\x8E\\x9A,\\x9A\\x12\\x14-}\\xC9\\x87,\\x91C\\x8E\\x12\\xAD\\xF5\\xA8P!\\xA1C\\x8D\\xC2\\xA0\\xD4(\\xCD\\xC7%\\xCA\\xA0)\\x1D\\x9C(\\xA5\\x84QB\\xD6\\xD1\\x1B_Fo\\xEB\\xB5\\xE4J\\x88::*\\xEF!\\x85\"B\\xDE\\xB6-\\xC2\\xA9&\\xBC\\x160U\\xA7\\xF0R\\xD5$\\xC0\\x8B\\x97\\xBF\\x02\\xC2\\x10\\x9B\\xE7\\xD34\\xAFS\\x97\\x8Ei\\xCA?\\x8DCL\\xCC\\x93\\xE6Fy\\xCD\\xBA\\xE09#-\r;t\\xDD\\x81I\\x8A\\xC2;"
		"2\\xB1\\x8B\\x07@\\xE8\\xC6\\xB0,\\xCDR\\x1EY^\\xCF\\xEF^\\xBD\\xAA\\xD3]\\xB8\\xAA\\xC7*:_n\\x01B\\x0C9\\xB0a\\x8A\\xE9\\xB7F\\x02\\xC2\\x92\\xDF\\x8F\\xA99\\xCD\\xCB\\x90\\x87y\\xBA\\xDD\\x85\\xC32\\x8FkN\\xCFvc\\xEA\\xF3\\xED\\x8E\\x7F\\xF7\\x0C\\x10\\xC2y\\x08\\xEC\\xF5\\x10c\\x9A\\x9A|^\\x13\\\\\"\"\\xD1\\xD4\\x84\\x94OD:\\x83\\xF0\\xF2\\x87\\x1F\\x7F\\xF9\\x19\\x10\\xF2\\xFBSj>\\xC4f\n\\xC7\\xD4t\\xEB\\x92\\xE7c:\\xEF+"
		"m7\\xE5\\xDF_VlB\\x86\\xE9\\xB4f\\xD6\\xAFcAa\\xCDs7\\x9F\\xCF\\xA9\\xCB\\xCD\\xDC\\xF7\\x1FH8\r9\\x8C\\xC3\\xEF\\xE9\\x02\\xAB\\x9C\\xBB|d\\xFD|>\\xB2a\\xCA\\xE9\\x1C\\xBA\\xCC\\xFA!\\x8D\\x91\r\\xB1\\xD9\\xC2\\xF86\\x8Ckj\\xBE\\xE9\\xD7\\xB2\\x99Z<S\\x9Bg_\\xF3\\x8B[\\xE3SG\\x91\\x91K\\x82\\x916\\x86\\xB9\\x144\\xF32\\xF2t\\xE8H\\x8A\\xEEI~\\xED\\xC24\\x1CCNl^\\xF3c\\xEF\\xF8\\xD3\\xBD\\xAB\\xE9\\xBB\\xC4P\\xE1\\x9E\\xDA/\\x88\\x12\\xBD\\xEA\\x15Qd\\xBA\\xB7\\x82Q\\x88\\x8Ey\\xF2\\x07&"
		"\\xA4\\x97\\xC2\\xF3\\x8EL'\\x9F$jX\\xD8\\x92\\xC6\\xD4\\xE5\\x14\\x1F\\x8B\\x12\\x80{\\xD7\\xD6\\xCD/_\\xD2\\xFF\\xBC\\xF9\\xFF\\xD9\\x86\\xB7\\xED\\x9F\\xFF\\x02\\xC9\\x12x\\x97-\\x07\\x00\\x00", 
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

	web_custom_request("collect_26", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661500861&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=2&sid=1708661464&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Fregister&dr=https%3A%2F%2Fwww.tastynibbles.in%2F"
		"&dt=Create%20Account%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=31099&tfd=32030", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("produce_batch_16", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661532242},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"false\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"sh-d4296eaf-6C01-49A3-C4ED-D968469391D7\",\"page_duration\":31406},\"metadata\":{\""
		"event_created_at_ms\":1708661532242}}]}", 
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

	web_custom_request("collect_27", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xCD\\x94\\xDD\\x8A\\xDD6\\x10\\xC7_e\\x19\\xE8\\xDDh\\x91F\\xA3\\xAF\r\\xBE\\x08\\xE9MnJ\\xA0\\x1F7\\xC6\\x04\\x1FKg\\xE3\\x8D\\x8F}8\\x96\\xB3\r\\xA5\\xD0g\\xE9\\xA3\\xF5I\\x8A\\xAD\\xEC\\xD9\\xDD$\\x9B\\x8B6\\x81`\\x83\\xC4o\\xE4\\xB1\\xFE\\xA3\\xFF\\xE8\\x0FHpU\\x83\\xBCt\\x97$\\x01=\\x92\\xF2d\\xD1\\x07\\x19\\x10Bps\\x97n\\xDE\\xC9\\x11\\x10\\x14O\\xB77\\x83\\x06\\x84k\\xEB\\xAE\\xF5[@\\x8D\\x12e\\x83\\xD0\\xC2U]\\x1392H\\x0E)"
		"(\\x84\\x7F\\xFE\\xFA\\xFB\\xFCB\\x835\\x19\\xE3\\xEC\\xD3Q\\xABY\\xA2\\xA2-j\\x8CD\\xE7t\\xC1&\\xDCc\\x87\\xCE\\xAB\\x82\\x83\\xDA0\\x1B4\\xD6\\xA3\\x0Be5\\x13\\x9F\\xB1#\\xF4\\xB2\\xACf\\xE3\\xCE\\xD8K\\xF4J\\x16\\x1C\\xB6_jrh\\x82AOa\\xC3\\x86\\xCC\\x1D\\xB6\\xD2\\xA2\\xE7\\x92\\xC4\\x94\\x9D\\x14\\xEC\\xD0s\\xF9\\xA5q\\x0F\\xB0?c[v\\xB2a%\\xD13\\x17\\xCC\\xF216+v\\xCAZT\\xFA38 \\x17\\xF1pl\\xE7\\xF9v:E\\xF8\\xA8x\\x08[\\xFD\\x9C\\xF6\\x1A\\x15\\x7F\\x92b\\xC5\\xE1"
		"!E\\xC5\\x864\\xAA`\\xAD\\xC4\\xF2\\xC0\\x8BSjs\\x02\\x1C\\x97a@\\xF0\\xFD\\xCE\\xBC\\x1D\\xC7._\\xBA\\x03\\xF7\\xC7A\\xF9\\x1B@U\\xB2\\x05\\x8D:\\xAC\\x85l\\xB0V!\\x90G\"\\x0C\\x08\\xB4\\xC4\\xFDN\\x1D\\x94\\xBF<\\xCF\\x00\r\\x1Bt6\\x14\\x8F\\xD4\\xC5V\\x8C\\xEB\\xC1\\xD9u\\xAFV\\x96\\x99\t\\xAB\\x8D\\x8C\\x94\\xE7\\x0FH\\x96zi\\xE9\\xB4A\\x89\\x84\\x8E\rj\\xD4\\xC8\\xE8q\\x95\\x80\\xAB\\xD3\\xECy\\x89\\xB6h\\xB1&\\x92r\\xD5CF+\\xDAF\\xCF\\xBC\\x8EV\\xBB-\\x8D\\xFB\\x10\\xDF\n"
		"\\xBB\\x8E\\xACV\\xAE\\xA5V\\x1Ae\\xD34\\x08\\xC7\\xCD\\xC9[\\x02\\x8B\\x86\\x19U \\x8D\\x865\\xC2\\x8F/\\x7F\\x03\\x84>V\\xCF\\xC7qZ\\xC6.\\x1D\\xD2\\x98\\x7F\\x1E\\xFA\\x98\\x84\\xDA\\xEB\\xBDf\\x8E\\xC2\\xEC\\x9D\\x12\\xDCF/\\x02\\x87\\x9DP\\x14H\\x05\\xD9\\xB1\\xED\\x08\\x10\\xBA\\xA1\\x9D\\xE7j^?\\x99\\xDFL\\xB7\\xAF_o\\xD3\\x8B\\xF6A>\\xB1\\xA1\\xD3}\\xA8?\\xB49\\x89i\\xC9\\x80\\x10\\xDB\\xDC\\x8A~\\x8C\\xE9\\xF7J\\x01\\xC2\\x9C\\xDF\\x0F\\xA9:Ns\\x9F\\xFBi\\xBC\\xBAhw\\xF34,9="
		"\\xBB\\x18\\xD2>_]\\xC8\\x1F\\x9E\\x01B{\\xEA[\\xF1\\xA6\\x8F1\\x8DU>-\\xA9\\x9C\\xCB\\x07Y\\x8C\\xB5i\\x9E\\x10\\x15\\xD8H\\xAB\\x83\\x11]\\x1B\\xA4`CV\\xEC\\xBAn'\\x88\\xA3\n\\x9Em\\xEC\\xE2\\xEE?\\x89\\xEAg1\\xA7!u9\\xC5\\xC7\\xA2\\x08\\xB0\\x0E\\xCDvY\\xAC'\\xF7\\x1D\\x1C\\xC0W+\\xFA\\xB9\\x9F\\xED\\xD6\\xCE\\xEBUDA\"\\xBC\\xFC\\xE9\\xD5\\xAF\\xBF\\x00B~\\x7FL\\xD5\\x83\\x1E\\x1F\\xDBC\\xAA\\xBAe\\xCE\\xD3!\\x9D\\xEA\\xBB@S\\xF4\\x97~}u\\xBF\\xBA\\xE8\\xEA\\xC7\\xE3\\x92\\xC5~"
		"\\x19\\x86\\xBBm_\\xE7\\x83\\xD8O\\xA7\\x83\\xE8\\xC7\\x9CNm\\x97\\xC5\\xBEOC\\x14}\\xAC\\xCA\\xDD\\xF1\\xAE\\x1D\\x96T}|\\x1B\\x97\\x86\\xB0\\x8F\\x8D\\xF2\\xA5\\xF2\\x7F3\\xAB<\\xE9\\x7F\\xFA_\\xFE\\xD7E\\xD6\\xD3\\xDE\\x97\\xCE\\x86\\xD4q\\x14\\xEC\\x93\\x12l\\xAC\\x15>\\xB5F\\x04\\x8A2\\xED:&\\xD5}e\\xEF\\xCB\\xE2\\xFD\\xE6\\xCF\\x7F\\x01\\xF3\\x08~\\xEF\\x90\\x07\\x00\\x00", 
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

	web_custom_request("collect_28", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"e\":[\"0.7.20\",9,30735,365,\"997scejv0n\",\"14owjl3\",\"g67g3k\",3,1,1],\"a\":[[31084,26,\"pagehide\"],[30735,4,1,1263,1460,1263,593,0,500,610,845,30313],[31100,0,2,764,3,1,4,2,5,8,25,5],[31100,36,6,[30813,1]]],\"p\":[[30813,6,545,1923,544,\"DIV\",\"id=AnnouncementSlide-94506395-ca90-4526-bccb-24d19846dcdb\",\"class=slideshow__slide announcement-slider__slide\",\"data-index=2\",\"style=position: absolute; left: 0%;\",\"aria-hidden=true\"]]}", 
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

	web_custom_request("collect_29", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xADRMO\\xDC0\\x14\\xFC+\\xD6;\\x814$\\xFE\\x88\\x9D\\x04N\\xED\\xAA\\xA5\\x15\\x85CY\\x89\\x83\\x15U\\xD9\\x8DY\\x0C\\xC1AI\\x96-T\\xEDo\\xAF\\xDE.\\xAAz\\xEB\\xA5\\xF2\\xE5\\xBD\\xE7\\x19\\xBD\\xF1x~P\\xA0SO2+3-\t\n\\x12ZYP]\\x97\\xD3:\\xDC?\\xCBD U\\x0C\\xBB\\xFB\\xDE\\x10h\\xE3\\xCA\\x8Dy \\x14\\x90\\x90\r\\xA8\\xA5S\\xEF\\xB5C\\x05\\xA5\\x9DA-]\\xDD\\xC0\\xDB\nJ\\x1D&\\xB66\\x87\\x81\\xAE@\\xCFq\\x8A\\xAB>P\\x03\\xCFKL\\x01Z|\\xFB|"
		"M\\xF0$\\xA9y\\x9B\\xB2\\x04O\\x97\\xC3k\\xEC\\xFB6\\xB7\\x99\\x14G71u\\xC3n\\x12WK\\xA1d&\\xCF\\xC4ML\\xAE8\\x13\\xDF]q,\\xDE==\\xF5\\xE1&\\xAC.\\xE2\\x9C[Sf\\xC6\\x89\\xA3\\x8BO\\xCB\\xCB/\\x10}|\\x08\\xE2<\\xAC\\x1F\\x86c\\xB1\\xB8\\x1B\\x87\\xC7\\x90+\\xAD2\\xC9G\\\\\\xB7\\xB7\\xED\\x18\\xDF(\\xD4@\\xC1\\xD3\\xDD<?M\\xA7y\\xBE\\xDB\\xED\\xB2\\xB9\\x9D\\xE6\\x97\\x14W\\xAB>LYL95\\xD0\\xFF\\x80\\xB4\\xEB\\xF5\\xB0Ms>\\x86M\\x9C\\xE60R\\x03\\x03OK\\x86\\x89\\xAB\\x03N\\x9C\\x88\\xAF\\xA1\\xED^"
		"\\xC4<\\x88\\x0F\\xED\\x0C\\xB1hS\n\\x9DXnS\\x0B\\xF11Nwb\\xB1\\x1D\\xC7\\x18&\\xD1\\xA6N<\\x0E#\\xFBU\\xC3SH'\\xE7\\xEFY\\xA8\\x85\\xA7\\xCA\\xBC*\\xDDq\\xE7\\xF6W\\\\\\x95\\xF0\\xD4\\xCF\\xBCU1~\\x17VS\\x9C\\x99\\xAD\\xE5\\xFFQ\\xA1\\xD9\\x80\\xB7\\xCF\\xE0\\x96\\x1F\\xA7\\xF6nrW\\xC0\\xD36u\\xE16\\xA6\\xD0\\xFD\\xAAk\\xC2_\\xAD\\xD2\\x8A1,v_\\xB0\\xD6b\\xC3U\\xC5#\\xAB\n\\xAEY\\xB6\\xFE\\x93\\x04\t\tU\\xCA\\xCA9e\\x8D\\xB1V\\xEE\\xB3a`4\n"
		"\\xD8\\x1A\\x16\\x1A\\x0E\\xC6\\xA0\\x84\\x82*\\xA0t%\\xD9\\x9DRK\\xB6E\\x17\\xD0\\x96A\\x8EC]2UA1[2\\xA9\\xE0\\xFCU0\\x96\\x83|\\xC8\\xA3\\x83\\x83\\xAF+\\x94\\xA6i\\x9A\\x9F\\xBF\\x01\\xB5\\xDA\\xE4\\xB0\\x1B\\x03\\x00\\x00", 
		LAST);

	web_custom_request("track_7", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJWaUNqZkNTTTd5TyIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiJhYmZlZjNkMi01ZjYyLTQ2YzAtYmYzMS1jNjQ2MGZhND"
		"VkNjAifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjYxNTMzODY2LCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVj"
		"dENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
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

	web_custom_request("collect_30", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=", 
		body_variable_3, 
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

	web_custom_request("collect_31", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xEDU\\x8Dn\\xDB6\\x10~\\x15\\x8E\\xC0\\x82\\xB68\\xC5\\xFA\\xB7-A[\\x93&E\\x0B4\\xEB\\xB0\\xBA\\x03\n\\xC3\\x08(\\xF2d3\\xA6I\\x81\\xA2\\xED8A\\xDE}\\x90d;I[d/P\\x08\\x02D\\xDD\\x1Dy\\xF7\\xFDH\\xF7\\x14i6\\xA5\\xFE\\xE9\\xF04\\xF4)D0J\\x12\\x08\\x13?\\x04:\\x1E\\x0F\\x1B\\x8E7\\x1B_S\\xA0Al\\xB67*\\xA2@\\xE7\\xE9p\\x1E-)\\xC4\\xE0\\x83?\\x03\\xCAh6\\x9D\\xB6U1\\x04\\x10\\x84i\\x04c?\\x1D\\xF7O\\xC98j\\xB3\\xBA+"
		"\\x1D\\x8Dg0\\x8D\\xA2d\\x08>\\x84\\x90\\x8E\\xA38\\x85\\x08\\xC6m]\\x00\tD\\x10&\\x90\\x1CR\\xA2\\x14R\\x98\\x06Q\\x98B0\\x82 \\x19%\\xE0\\xCFf3\\xA0u{\\\\\\x10\\xC51\\xA4\\x90\\x84\\xD1\\x10\\x12HB?\\x01z\\xF1\\xF1_\n\\x94+\\xD64\\x85ew\\xC6\\xD6l\\xE7q\\xA3\\x1D\\x93\\x1A-\\x05\\xDA\\xB8\\x9D\\xC2\\xE2\\xCE\\x93Z\\xE0mF\\xC2 \\x1E\\xC6\\xA3(\\x8D\\x879\\xA9M#\\x9D4:#\\x95\\xBCE\\x91\\x13g\\xEA\\x8C\\xF8\\xF5mN\\x84lj\\xC5v\\x19\\xD1FcN\\x14Vn\\x1FY\\xA0\\x9C/\\\\F\\x02\\xDF\\xFF='[)"
		"\\xDC\\xE2\\xB0(\\x19_V\\x8C\\xA3\\xB7\\x91\\x8D,\\xA5\\x92n\\x97\\x91\\x85\\x14\\x02uN\\xCC\\x06m\\xA5\\xCC\\xD6\\xDBe\\xA4\\x8B+\\xCCi;\\xCB\\xA8\\x1F\\x88~\\x99|\\xFBtI\\x81\\xBE]\\xE2\\xAE\\xB2l\\x85\r\\xB1w\\xB5g\\x8D\\xBBw\\xE6\\xDEY\\xA6\\x9B\\xCA\\xD8UF\\xACq\\xCC\\xE1\\xAB(\\xF5\\x05\\xCE_\\xE7\\x0F\\x0Fo\\xBD-\\x96K\\xE9\\xBC\\x9FV\\x1E\\x82/\\xED@N\\x7F\\xC4\\x8E\\xFCAd\\xB7\\x1B\\xB9_I\\xED=\\x9D\\xFB7\\xB9\\xAA\\x8DuL\\xBB\\xFC\\xA1\\x9Ba\\xBC'\\xA5\\x9Df\\x9A\\xCC~ "
		"\\xA4EFXS\\x1F\\xF9\\xF8~\\xC7\\x9Ct\\xED\\xED\\xE9`J\\x11\\xFF4j\\x08\\xB2\\x06=\\xB3v\\xC4o^\\xA4\\xEB\t?\\xCF\\x18yvD\\xDBi\\xEC\\x1F;\\x1D\\x03\\xFD\\xF8\\xFE\\x9F\\xB3\\xAB\\xCBcS\\xA6f\\xBC\\xE3,\\xF8\\x9E\\xE6\\xC7\\xA3-*\\xE6\\xE4\\x06{\\xB6\\xE7\\xD6\\xAC\\xB58\\xA8\\xE4(\\x9AR\\x19\\xBE\\xCCIi\\xAC@\\x9B\\x11\\xBF\\x8B\\xF7\\x13\\xD6\\xCC\\xA2v9Y1;\\x97z\\xDFs\\xCD\\x84\\x90z\\xBE_=j5\\xA7@\\x99Rf\\xFBX\\xCAw\\x85\\xB3k\\xA4@;n\\xFA#\n\\x9F\\x02\\xED\\x06/\\xDA~)"
		"\\xD0\\xBE\\xFD\\xC3\\xAA\\xB1\\xBCX8W7\\xD9`\\xC0jy$\\xFB\\x94\\x9B\\xD5`\\x13\\x0C\\xF8\\x02\\xF9\\xD2\\xAC\\xDD\\xA0^\\x97J\\xF2?\\x9DeU%\\xF95\\xEAM\\xC1\\x99fvwR\\xAE\\xA5\\x12\\x85\\x88\\xA38\\xF2\\x85`X\\x96(\\x90\\xC5\\xE3*\\x19\\xFB<\\x1D\\x05\\xA1HK\\x1E\\x07U2\\xAC\\x86\\xA58Y\\x19\\x81V\\x17\\xC1\\xC9Z\\xCBJ\\xA2\\xB8V\\xD2a\\x11\\x9C\\xAC\\xD8\\\\\\xF2\\xEB\\x86[Y\\xBBv\\x89\\x96/\\x98v\\xD7K\\xDC\\x15\\xF6\\xAE\\xBEVr\\x83\\xD7_\\xE5\\xE4\\xEB\\xBB\\xB3wz\\xA2\\x9A\\x1Bq~"
		"\\xA8Y\\x98ZV\\xBB\\x973\\x8D\\xC0\\xA2\r\\xFC\\xE4\\x93\\xB0\\x1F\\xD1\\xEB`;\\xE0Z\\x18W{\\xDC\\xA2@\\xED$S\r\\x05\\xFA\\xE6\\xF3\\x1E\\xE0$\\x8C\\x83\\xBDN\\xBE\\xFC}\\xF6\\xD7Q%\\x0Eo\\x9D'\\x90\\x1B\\xCBzI\\xF4\\xE4?\\x95\\x83\\x9D\\x97\\xAF\\xC2 \\x06\\x92\\x8E\\xDA\\xFB\\xF5\\xA3\\x14\\x82\\xFA\\x96\\x08\\xD6,P\\x90\\xEDB:|\\xC2}\\xD4r\\x7F\\x94\\xA0\\xBFw\\xC43\\xC3\\xC6I\\xE7\\xD7g^\\xD9W<\\xF1\\x8B\\xD4\\x9D]*\\xA3\\x9DW\\xB1\\x95T\\xBB\\x8C(\\xE6\\x0C\\x90u\\xB9\\xD6n\r"
		"d\\x81j\\x83Nr\\x06\\xA4a\\xBA\\xF1\\x1A\\xB4\\xB2\\xCA\t7\\xCA\\xD8\\xEC\\xD8\\xD8Q\\xF3\\xACl\\x8CZ\\xB7\\xEF\\xF6\\xE6\n\\xFDN\\xA8\\x1D\\x12L\\xC9\\xB9\\xCE\\x08G\\xED\\xD0\\xE6\\xC4\\xF6\\xB6\\xF1\\x92>\\xA3uh\\xF7\\xD8\\xE1\\x19\\xF6\\xA0\\xD27\\x13\nt\\x82\\x8D#WF\\xF4PG\\xBD9i\\xFF\\xC9\\xC9>L\\xAE>u\\xEF\\xE3>H?\\\\\\x9E]\\xB4\\xEC\\x9C\\x17\\xAC4k\\x97\r\\x06\\xA5bz\\xD9\\xE5$\\xC7\rb\\xA0\\xE7\\x9F/\\xBE\\xD1\\x19L\\xBB\\x9FG\\xFA\\xCB\\xF2\\xBF,\\xFF?"
		"\\x96\\x9F\\xCD\\x1E\\xFE\\x03\\x83\\x11Y\\xEF\\x0F\t\\x00\\x00", 
		LAST);

	web_custom_request("collect_32", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661532683&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=1&dp=%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2F&sid=1708661464&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Fregister&en=page_view&_ee=1&tfd=9915", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_33", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xD5X\\xFF\\x8E\\xE3\\xB6\\x11~\\x15UA\\x80\\xB6\\x18\\xED\\x91\\x1C\\xFE\\xF4b\\xFFH\\x90\\x1Ez\\xC5\\x01\\x05\\x9A\\xB4@\\xE0\\x1A\\x0BY\\xA2\\xBD\\xCAy%\\xD7\\x92ow/\\xC8k\\xE4!\\xDA\\xB7\\xCA\\x93\\x14C\\xDA\\x12-_\\x0FA\\xD0\\xA0\\xA8\\xEF\\xB0\\x90\\xBF\\xEF\\xF3\\xF0\\x1BrH\\x8D\\xF4}\\xEE\\xF3\\xC52g7\\xE6F\\xB0\\x1C$ *\\x03\\xA8\\xD1A\\xEE\\x9C\\xE9+\\xFF\\xDD{\\xD6\\xE6\\x90s\\xD9=}\\xB7\\xC3\\x1C\\xF2\\xAD6[|GZ\\x06l\\x05y\\x99/"
		"\\x96K4F\\x00\\x17\\x80JI\\xD0R\\x03\n\\xBE\\x82%Z&G\\xD8\\x08\\x05\\xC2\\x98\\x00c\\x02[\tBa\\x80\\xB5\\x1Aa+\\x1C\\x08)\\x03\\xEC,\\xC1\\xDA\t\\xB0Z\\x80\\x90\\x8CP\\xE7\\xF8\\x88:\rB\\xB8\\x15,%\\x13\\xE6\\x8C:\\xCEA\\x08\\x0C\\xA8\\x16#\\x8A\\x1A\\x04W\\x84r6FpF\\x83`<\\xA0\\xDC\\x8D\\xA8\\xE5 \\x18\\x0B\\xA8\\x9C\\xE2Z\\x05\\xDC\\x85\\xD1\\xB8\\xB1\\x13j\\xCE\\xA8\\xE0lB\\xED\\x88\\x9A\\xC9\\x03%\\xE4h&$\\xB2\\x11\\xE5\\x8C9\\xE0.\\x18F\\x0C3\\xC1Q\\x1B\\xE0\\x0C\\x11\\xB8\\xD1\\x01\\xD7"
		":\\xC1\\x95\\x05\\xAE\\x83=\\x19S9\\xE1\\x86\\x03\\x97!E\\x19m\\xA3\\x96\\x04k\\xE0h\\x03lB\\x18m\\xCD\\x19\\x0Ef\\x94Las\\x865\\xF2\\x04\\xB6\\xC01L\\x94\\xD6,\\x81i\\xD2\\xC2\\x90\\xDA!\\xC1\\xC2H\\x07\\x9CY\\xCA+\\xE0\\x86\\x85\\xB9B\\xA9x\\xC4]\\x84%O\\xE5\\x1AB\\x85Hcd\n[0\\x82`+T\n;0\\xC1\\x8ASn\\xA6\\x8E\\xB0\\xBD\\x80M\\x84\\xD5\\xA9F\\x92!1\\xC0\\xEA\"\\xB6\\x02#\\x03l/\\x9CH0\\xE4"
		"[q\\xBC\\xF0\\xCD\\xA3ou\\xAA\\x93\\x04\\xB6\\x01v2M\\x9E\\x81\\xA1\\x9AP\\xA7J\\x99`\\xCB\\x02\\xAC\\xF8\\x0C\\x0E\\xBE\\x85N\\x83\\x18w\\x82Q\\xA4\\x13k,\\xD8\\x90\\x0E^\\xAA-\\xD8\\xE0[b\\x1A\\xDBh\\xB0TXJ13\\x83)\\x1D-9\\x15\\xC7G`\\x03\\\\~\\x14v\\x17(pi\\xA9.\\xA5\\xD2\\x08\\x0C80\\xC8\\xBF\\xA8\\xAA\\xEE\\xD8\\x0E9\\xE4\\x0F\\xC3\\xB0\\xEF\\x17\\xAF^===\\xDD\\x0Ce?\\xBC\\xB4\\xCDz\\xBD\\xF3\\xFDM\\xD3\\xBE*G\\x95|\\x91\\xDE\\x96[\\xF1t\\x83\\xD5^4\\xB86\\x0F9\\x84\\xD3\\x85\\xCE*\t"
		"\\x94\\x8FFpL\\xBBx\\xA5\\x1C\\x8D\\x15\\xFFq\\x15\\xD2\\xD6\\xCEi`\\x107$\\x92w\t\\x82\\x83\\xA2+\\xA1@\\x8D\\x1A\\xD4\\xA0\\xE9p\\xB1\\x0E\\x18H\\x1A\\xC0)\\x90\\x86\t\\xD0\\x1C\\x94`\\x1C\\x9C\\x04Ee\\xC8@\\xA3\\xD0\\xE0\\x0Ch)\\x0C\\xB0\\xD5j\\x05\\xF9>\\x1C\\x86\\xF4k\rJH\r\\xF9Wo\\xFE\\x96C\\xDE\\x0F/;\\x7F\\xB7\\xEF\\xFAfh\\xBAv\\x91\\x95\\xEB\\xBE\\xDB\\x1D\\x07\\x7F\\x9B\\xED\\xFCfXd\\x05\\xA7\\xCF\\xFE\\xF96{j\\xEA\\xE1a\\x91iF_\\x1E\\xCB\\xC3\\xB6i\\x8B\\xA1\\xDB/"
		"\\xB2\\xC0\\xEE\\xCB\\xBAn\\xDA\\xED\"\\x0B\\xF4\\xBA;\\xD4\\xFE\\x10\\xBF\\xE44\\x9E\\x89\\x83.q\\xF5\\xA9!\\xEB\\xA6\\xDF\\xEF\\xCA\\x97E\\xB6\\xDEu\\xD5;\n\\xF3\\\\\\xF4\\xCD\\x87\\x107\\x86,\\xD6\\xDD\\xF3m\\xD6\\xBD\\xF7\\x87\\xCD\\xAE{Zd}u\\xE8v\\xBB\\xB3\\x9FEV\\x1E\\x87n\\x1A\\xFE\\xD2\\xD9e\\x16\\x9F\\xDFf\\xD1\\xFD\\xE7\\xB7\\xD9\\xA1\\xD9>\\x0C\\x11\\x0Cn-\\x08\\xA9\\xE9V!e\\xB4\\\\\\xED\\xCA\\xBE\\xBF\\xDB\\xF8w}\\xD1m6d\\xA3\\xAC\\xB7>\\x9B\\x03EH\\xAD\\xE0h%\\xBB&"
		"\\xCF\\x19\\xD3\\xAC\\xBD\\xF5\\x9B\\xE1Z1\\xBC\\xEC}q\\xF0\\xD5P\\xB6\\xDB\\xDD)\\xFC\\xF0\\xE0\\x1F}_T\\xC7~\\xE8\\x1E\\x9B\\x0F%E\\x18\\xD7\\xEDC\\xD1\\xB4\\xB5\\x7F^\\x84\\xB4s\\xC8\\x93\\x88\\xC7cS\\xDF\\x05'!%\\x17\\xF3\\xCA\\x7F\\xFFM\\x0E\\xF9\\xDF\\xDBl\\xF6!\\x8DbQ\\x13\\xD4\\x9FH\\xBB\\xA8\\xBAv\\xF0\\xB4\\x03\\xC2y\\x10~\\xB8\\xE4t\\xE3X\\xD1\\x17q\\x0E\\xA5\\xF8'\\xA3\\x0C\\xFE\\x996Q]\\x0Ee\\x92\\xFE\\xDD\\x98\\xFE\\x98\\xE4\\xA6k\\x07*\\x03\\xBF\\xC8\\xB8\\xDE?"
		"g\\xBFi\\x1E\\xF7\\xDDa(\\xDB\\xE1v\\xD7\\xB4\\xBEx\\xF0q\\xF9\\xD8%\\x17\\xECat\\xB4\\xE4v\\x05\\xF9\\x97\\x7F\\xFC\\xEB_\\xFE\\xF4&\\xE0\\x92V\\xD8\\xD0\n\\x1BX\"\\x9D$\\\\\\x02\\xDD|\\x95P*\n\\x92\\x94tD\\x02\\xB7D\\x102\\xA0&R\\x89\\xCE\\x8E\\xE2\\x10\\x15\\x05 \\x1DQ\\x81sQ@j\\xBA\\xD5)\\xA1\\x19\\x08\\xE98\\xA0\\xD0j\\xEE!li\\x9DN\\xAB\\x16\\x11\t\\xDC\\xE8\\x81\\xCE\\x14\\xA2\\x12\\x9D\\x1C\\xC58\\xF7\\xA0U\\x14$\\x1E4y\\x10\\xE4\\xC1^y0Q\\x90\\xC4\\xB6\\x11\t"
		"\\xDC\\xE4\\xC1Ej\\xD2\\x196\\x8A\\xDD\\xDC\\x83\\xE1Q0y0\\xD48q\\xDAmL\\xCC=\\x18\\x8C\\x82$\\xB6\\x8CH\\xE0F\\x0FFE*\\xD1\\xE9Q\\xAC\\xAE<\\x98(H<\\xD0\\x8E\\xE7T\\x0F\\xECj-\\x8C\\x8B\\x82)\\xB6e\\x11\t\\xDC\\xE8\\xC1\\xF2H%:q\\x16[>\\xF7`1\n&\\x0F\\xD4mJI\\xF5 p\\xEE\\xC1\\xAA(Hb\\xEB\\x88\\x04n\\xF2`\"\\x95\\xE8\\xEC(\\xBE\\xAAI\\xEB\\xA2`\\xF2\\xE0\\xA8&%\\xD5\\x83\\xD0s\\x0F\\x8EG\\xC1\\x14\\xDB\\x89\\x88\\x04n\\xF4\\xE00R\\x89N\\x8E\\xE2\\xAB\\x9At*\n"
		"\\x12\\x0F\\xD42\\xD3\\xE9K7\\xEA\\xB9\\x07\\x13\\x05Il\\x1B\\x91\\xC0M\\x1E\\\\\\xA4F\\x1D26\\x8A\\xE75\\x89\\x8CG\\xC1\\xE8\\x81z_AE\\x8E,\\xAEp\\xE2\\x01\\x19FA\\x12[F$pg\\x0F\\xC8T\\xA4\\x12\\x9D\\x1E\\xC5\\xF3\\x9ADf\\xA2 \\xF1`A\\xA8\\xB0/\\xAC\\xFE\\xA5w!\\xF9\\xEB\\xDE\\x85\\x96\\\\\\xAE>~\\xD3\\x919e\\xE0b\\x1A\\xD3\\x0Cp\\x16\\x91\\xC0\\x8D3\\xC5y\\xA4\\x12\\x9D8\\x8B\\xF9|\\xE7 \\xC7(\\x88g\\xFAO?\\xFE\\xF3\\xA7\\x1F\\xFF\\x95\\xFC="
		"\\xFD\\xA7\\xF1C\\x0B\\x15v\\xB5\\x8D\\xA3\\xA1\\x08m\\xD5)\\x8E\\x8A\\x92dT\\x1D\\x91\\xC0M\\xEEL\\xA4\\x12\\x9D\\x1D\\xC5\\xF3=\\x85\\xDCE\\x01\\xA9\\x85\\x12\\x04\tF\\xCF\\x80\\x1C\\x90\\x9DJ\\xF4\\xC2\\x065{$\\x99\\xC2\\x0B\\x11\\x91\\xC0\\x8D6\\x04F*\\xD1\\xC9Q<\\xDFVH\\xAD#\tR\\x1B\\xE1QT\\x00r*\\xF5+\\x1B&J\\x92\\xF06\"\\x81\\x9Bl\\xB8HM:d\\xA3\\xF8jg!\\x8F\\x82\\xC4\\x06\n\\x104y\\xC8\\xF9\\xFC\\x96\\x83\\x88Q\\x90\\x04\\x97\\x11\t\\xDCh\\x02U\\xA4\\x12\\x9D\\x1E\\xC5W[\\x0BM\\x14L"
		"[\\x0B-y0\\x80<\\xCE\\xF0\\x85\\x07\\x17\\x05Sl\\xC9\"\\x12\\xB8\\xD1\\x83\\xE4\\x91Jt\\xE2,\\x96WE+1\n&\\x0F\\x92\\xA6\\x9E\\x8E9\\xAE\\xD9\\xDC\\x83TQ\\x90\\xC4\\xD6\\x11\t\\xDC\\xE4\\xC1D*\\xD1\\xD9Q|U\\x9A\\xD4\\x03\\x92`\\xF2\\xA0\\x18y\\xA0y\\xD0\\xF3[\\x0ERg\\x87ig\\x87\\xD4\\xD9\\x11\\x12\\xB8\\xD1\\x03\\xB5X\\xA8\\xD25\\xA3N\\xE9$\\xBE\\xAAKj\\xAEP\\xC9\\xD4\\x83\\xA6\\x12\\xE4\\x80\\x1C\\xAF\\x8EZj\\xB10m\\xB1\\x90Z,B\\x027yp\\x91\\x9At\\x9A\\x8D\\xE2\\xAB\\xA2\\xA4\\xE6\n"
		"uz\\xDC\\xD3\\xBB\\x1BZ\\x1D\\xE4r\\xDE\\x82 \\xB5X\\x98\\xB6X\\xF4\\xF8\\x1A\\x90\\xC0\\x8D\\x1E\\xA8\\xB9B\\x9D\\xAE\\x19uJ'\\xF1UMRs\\x85:\\xADI\\xEA\\x97@\t4\\x90\\x7F\\xFD\\xCD\\xB7o\\xFF\\x90C~\\xF3\\xC9\\xE7\\x8B\\xEF\\xD3.\\xBE(\\xAAn\\xD7\\x1D\\x16\\xD9g\\xAF\\xC3'm\\x84/u\\xEB\\xB2z\\xB7=t\\xC7\\xB6^d\\xC7\\xB6\\xF7\\xC3\\xCF\\x91\\x16\\xCDc\\xB9\\xF5\\x8B\\x8C\\xFA\\xED\\xF2Pl\\x0Fe\\xDD\\xF8v\\xF8\\xADf\\xB5\\xDFB\\xF6\\xD9k+"
		"\\x98`t\\xF1\\xE5\\xEB\\xD7\\x8C\\xFD\\xEE\\xE31\\x7F\\x98.\\xA7\\xABO%)\\xFF\\x1F\\x93\\xCC\\xC3\\xEB0e@\\x03gB\\x9F\\xDE\\xA0\t\\x05\\xF9\\xDB7\\xF9\\xF9&\\xDE7\\x83/\\xDA\\xF2\\xFD\\xFD}3\\xF8\\xC7l\\xFA\\xEA\\x9F\\xF7e[\\xFB\\xBA\\xB8\\xC0\\x8B\\xE2\\xA1\\xEC\\x8B\\xFA\\xD0\\xED\\xEB\\xEE\\xA9\\xCD\\x9A\\xBE\\xD8t\\xD5\\xB1\\xF7u\\x0EyyhJ\\xA2\\xF7\\xDD\\xFE\\xB8\\xBF\\x1B\\x0EG\\x1F\\x1CH%~=\\x07\\xFFq\\xD8\\xD0\\xD0i@z\\x99#\\x0Cw\\xE7\\xD7\\x0CM}"
		"\\xF7E\\xDBv\\xC7\\xB6\\xF2\\x8F\\xBE\\x1D\\xBE\\xDE5\\xB5/\\x98\\xD1\\xCEW\\xB2.\\xA4\\xF5\\xBC\\x90J\\xEB\\xC2\\xFAR\\x15N\\xD4\\xCC\\xAF+)x\\xB5\\x9E\\xFC\\xD2O\\xFA\\x87\\xEE\\xE9\\xFE>\\\\fe\\x12\\xAF\\x08\\xD0a\\xA2\\x9A\\xC7r\\xF0Ew\\x1C\\x9F0\\xC3s\\xF2\\x1D\\xFB\\x19o<\\xC2K\\x80SzM]\\xFB6&G9\\x89\\x98S\\xC8nI\\xAD\\xCFG\\xD3\\xE2\\x1B\\xDC\\xA0\\x94u\\xA16\\x86\\x17\\xB2\\xACm\\xE1\\xA4[\\x17\\\\8\\xC1\\x1D\\xAB\\xA4\\xAE\\xC4/J\\xAB\\xE9\\x8B\\xDE\\xEF|5\\x84uO\\xD2\\xE29,"
		"\\xED\\x8A\\xA6\\x9F\\xDE\\xFF\\xFC\\xAF\\xA7\\xFF\\xBF6\\xE5\\xE1\\xCD\\x9D@zc\\x05\\x02$\\xE4_\\xFE\\xF9\\xABoGG\\x83\\x7F\\xDC\\xEFh\\x95\\xC38\\xD9\\xAE+k_g\\xC7\\x96.\\x9Av{v1\\x1C\\xCA6\\x8E\\xDB\\x9F\\x16\\xF2\\xF4\\xCA\\xE18\\x0C]{\\x1F\\xAD\\xF5\\xFF8\\x96\\x87\\x91\\xF2\\xF5\\xD6\\xF7wc\\x80\\x97\\xBD\\xBF\\x7F\\xF0%%X\\x95\\xFBf(w\\xCD\\x07\\x7F\\xB7)"
		"w\\xFD\\xF8\\x8B\\xFE\\xA9\\x1C\\xAA\\x87S\\xB0p\\x98\\x9C\\x99\\xED\\xA1\\xA9\\xE3\\x89vG\\x97t\\xB6P7\\xDD\\xB4\\xF9j\\xF5\\xC3\\xBF\\x013\\x14\\xDA6\\xE5\\x18\\x00\\x00", 
		LAST);

	web_url("account_3", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_34", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661532683&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=2&sid=1708661464&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount%2Fregister"
		"&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&en=user_engagement&_et=7317&tfd=12239", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_35", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"e\":[\"0.7.20\",5,6996,278,\"997scejv0n\",\"14owjl3\",\"g67g3k\",4,1,1],\"a\":[[7260,26,\"pagehide\"],[6996,4,1,1263,9069,1263,593,0,0,1076,87,6423],[7274,0,2,2151,3,1,4,2,5,2,25,5],[7274,36,6,[7013,0,7249,0]]],\"p\":[[7249,6,1053,704,\"DIV\",\"class=slideshow__slide slideshow__slide--bcaa589c-adfc-4c3f-a7de-879ca7d512b2 animate-out\",\"data-index=0\",\"data-id=bcaa589c-adfc-4c3f-a7de-879ca7d512b2\",\"style=position: absolute; left: -50%;\",\"aria-hidden=true\",1054,704,1053,[4],\"class="
		"slideshow__slide slideshow__slide--5b0941e2-aa18-4211-a67c-c43607c903c0 is-selected\",\"data-index=1\",\"data-id=5b0941e2-aa18-4211-a67c-c43607c903c0\",[8]]]}", 
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

	web_custom_request("collect_36", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\x85R\\xCBn\\xDB0\\x10\\xFC\\x15bO\t0\\x95\\xB8$EI\\xCE)\\xCD!-\\xD2\\xE4\\x12\\x03>\\x10B\\xE1\\x07\\xE3(V%\\xC3R\\xA26E\\x8B\\xFEC\\xFF\\xB0_R\\xACe\\xB4\\xBD\\x15\\xBC\\xCC,g9\\xDC\\xC7W\\x8A4\\x0B\\xA4\\x93<1\\x9A\\xC0\\xD0`mAe\\x99\\xF7\\xEB\\xF8\\xF4\\xA2[\\x02\\xB1\\xEB\\xC6\\xA7\\xC6\\x12h\\xEB\\xF3\\xAD\\xDD\\x112h\\xE8\n\\xB4\\xA4Y\\x08\\x06\\x05\\xD8x\\x0BvY^!X\\x0B\\xE6)\\x92\\x95v\n\\x98\\x02\\xF4R\\xF7\\xF5\\xAA\\x89T"
		"!\\x88\\x87u\\xA0\\xAB\\x8F\\xEF\\xEF\t\\x814U\\xA7\\xA8\\xFC \\xD0m\\xF7Z7\\xCD2\\xCD\\x12\\xAD\\xCE\\x16u\\xBB\\xE9\\xC6^\\xDD\\xCD\\x15\\xEBD_\\xA8E\\xDDzw\\xA1>{w\\xAE.\\xF7\\xFB&.\\xE2\\xEA\\xA6\\x1E\\xD2\\xCC\\xE6\\x89\\xF5\\xEA\\xEC\\xE6\\xDD\\xFC\\xF6\\x03TS\\xEF\\xA2\\xBA\\x8E\\xEB]w\\xAE\\xAE\\x1E\\x0F\\xDD\\xA7\\x98\\xB2\\xE1D\\xCBQ\\xF7\\xCB\\x87\\xE5\\xA1>\\xA5P\\x05F\\xA0\\xC7a\\xD8\\xF7\\xB34\\x1D\\xC71\\x19\\x96\\xFD\\xF0\\xA5\\xADW\\xAB&\\xF6I\\xDD\\xA6\\xCB\\xF5\\xBA"
		"{n\\x07\\xAA`\\xFE\\xA3\\xA4\n\\x16\\x81.\\xA7\\x04\\xF5\\xEB\\xC7O5\\x17\\x89\\xBA\\x9B4T\\xA1D\\xA0\\xD8\\xBE\\xB9~+\\xC6\\x19\\x02\\x15\\xF6\\x95\\xCDF\\x98?^\t\\xCA\\x11\\xA8\\x19\\x0E\\x02E?\\xC6U_\\x0F\\xD2=\\xA3\\xFF>/T>t\\xEA\\x91P1\\xE7c\\x91\\xC2\\x1C\\x02=\\xB7\\x9B\\xF8P\\xB7q\\xF3\\xBD,\t\\xFFP6,\\x1A\\xF1<\\x02\\xB1t[A\\x85\\x842v\\x82\\xC5\\xDD\\xFC\\x19\\x90\\x96\\x15\\xC9u\\xE1="
		"g\\x8Emf\\x8E#\\xB3\\xB0\\x1ANf\\x9A\\xC1\\xC0\\xC32r0\\xD8\\x81M\\xA1\\xA5\\xC8\\xDCh\\xA9\\xCE8\\x98LD\\x1EZ\\x0C\\xB5H\\x19\\xD6\\x08\\xB2\\xD3\\x13\\x05l&\\xEB5\\xAD\\x89\\x87Gp\\x0C\\xCFUU}\\xFB\r\\xB4\\xC4]\\xB2\\xB1\\x02\\x00\\x00", 
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

	web_custom_request("collect_37", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=", 
		body_variable_4, 
		LAST);

	web_custom_request("collect_38", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661541151&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=1&dp=%2Faccount&dt=Account%20%E2%80%93%20Tasty%20Nibbles&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&sid=1708661464&sct=1&"
		"seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&en=page_view&_ee=1&tfd=9498", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=", 
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

	web_custom_request("collect_39", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xED[\\xFD\\x8E\\xE36\\x92\\x7F\\x15\\xAE\\x82\r6\\x0B\\x89\\xCD\\xE27{\\xE0\\xCB\\xCEx2Ip=\\x9B`'\\xB9\\xC5no\\xA3!Kt\\xB72\\xB6dHr\\x7F$\\xC8?\\xF7\\x10\\xF7\\x12\\xF7\\x04\\xF7:\\xF7$\\x87\\xA2dZv\\xBB;{\\x87\\x05\\x82\\x03\\xD6\\x83A\\xBB\\x8Ad\\xA9>~,\\x96H\\xFA\\xA7\\xC4'\\xE7\\x97\t\\xA3\\x86r\\x96\\xA4\"\\xB5L\\xA7NX\\x9B&\\xCE\\x99\\xAE\\xF0?\\xDC\\xB1:I\\x13\\x90\\xCD\\xFD\\x0F+"
		"\\x91\\xA4\\xC9\\x8D67\\xE2c\\x92\\xAA\\x94\\xA5\\xEC*M\\xF2\\xE4\\xFC\\xF2\\xD2\\x82\\x94)\\xF0\\x94[\\x91\\x02\\xB32\\x15\\xC6^\\xA5\\x97Rp\\x97\\x82JAC*8\\xA4B\\xA9\\xAB\\xF4RYnw\\\\it*\\xB4\\xB8J/5\\x13\\xEC)\\xD7r\\xA6Q0r\\x9Ds\\xA9\\x106pQ\\xC2\\xC8\\xB5\\xC8\\x1D\\xFAj\\x16\\x94\\x90\\xC85\\xA9\\x10\\xFC*\\xBDt\\x9C\\xED\\xB9\\x92\\xA5\\x02\\\\\\xE0\\x8A\\xC8\\xB5F\\xA5\\x82\\x99\\xC05\"r\\x01R\\xEE\\x86\\xBE\\x16v\\\\c]\\xCA]\\xE8+D\\xECk\\xB4\\x8D\\\\\\xA9\\xF6\\\\3r\\xD1\\xA92E!Z\\xA4 "
		"\\x95\\x19\\xBE)'\\xD0\\x89\\xA9a8\\xC0\\xA4\\xD2\\xA0\\x19\\xC0\\xC0ag\\x99^&\\xC5\\xAD/>6\\xDB\\x9E\\xB6\\xF9\\x8FM\\xBB\\xC9\\x1Fi\\xD1\\xAC\\x934\\xB9\\xBF\\xBF\\xA7k\\xDF\\x16\\xB7y\\xDDg\\x85\\xAF{\\xDFfy\\x9D\\xAF\\x1E\\xFB\\xAA\\xE8\\xE8M\\xD3\\xDC$iR\\xD0b\\x95\\xB7U\\xFFH\\xD7]\\x92&\\xF9\\xA6:\\x16s8d\\xE5\\x03\\xFB*\\xEA\\xC0R\\x9E\n\\xA3\\xD0i)\\xA0\\x05\\\\\\xA6\\x18\\xA0\\xD4\\xA4\\x90\\xDA\\x94k\\xADS\\xAER\\xEERnS#\\x82\\xA9\\xC3H\\xA1S\\x9D^\\x02W6e)\\x08\\xB4\\xDA\\xA5\\x16,"
		"\\x0F\\x7F\\xA5e8\\xC2\\x1A\\x80T\\xDB\\xD4q\\xE0)K\\x9D\\x15&\\xD5puu\\x95&\\x1B\\x04U\\x18\\xA7Sp\\xCA\\xE2c\\x9Dti\\xF2\\xE1\\xDB\\xD7\\x7FL\\x90\\xE5\\x06\\xFE\\xA5\\xBAJ\\x93\\xAA\\x9C\\xDD\\xDF\\xE6}\\xF7z\\xB3\\xF9sU\\xDE\\xF8\\xFE\\xC3&\\xAF\\xB1\\x17\\xE2\\x01{\\x85\\xFE\\xC9\\xEF\\xBFK\\xD2\\xE4o5!\\xA1\tvM\\x9A\\xA5\\xC9\\x87\\xEF\\xFEr\\xF1E\\x92&\\x9F<\\x95C\\xBAM^"
		"\\xA78\\x8C\\x90S\\xCD\\x9B\\x17\\xDA\\xF2\\x17\\xDA\\xAA\\xF5\\xCD\\x0B\\xAD\\x8B\\x17\\xDA\\xCA\\xEA\\xEE\\x85\\xD6U\\xBE\\xF0\\xAB\\x17\\xDA{\\xFF\\xD0\\xE7\\xAD\\x7FI\\xB5M\\xEB_Rm\\xDB\\xF7\\xCDK\\x1E\\xE9\\xEE^\\xB2l\\x93\\xF7\\xB7/4\\x17U[\\xAC<\\xF9i\\xE8\\xF1\\xB7\\xFE\\xD6W7\\xB7\\xFD9\\xD9\\xD6\\x9D\\xEF_\\xED\\xB8\\xF7U\\xD9\\xDF\\x1E3\\xD7\\xF9C\\xF6l\\xC3i9\\x8B\\xA6-}{\\xC8%d\\x9D\\xB77U}\\xCC\\xDD\\xE4eY\\xD57\\xC7\\xEC\\xA2Y5O$,\\xF2\\xE2\\xE3M\\xDBl\\xEB2;\\xDD\\xDE<d]"
		"\\xF5c\\x107\\xE8\\x90-\\x9A\\x87\\xD8\\xBCl\\xEA>[\\xE6\\xEBj\\xF5xN\\xBA\\xBC\\xEE\\xB2\\xCE\\xB7\\xD5rl\\xFF9\\xE0\\x97G\\xFCBz\t\\x98V\\xAE\\x90\\x10\\x03\\xD8/A\\\\\r`\\x1F\\xE1.w\\x93F\\x8B4y\\xFB\\xF5\\xBF\\x05\\xA6\\x8AL9\\x95\\xA1#[\\xA5\\x97\\x02N\\xCD\\xB0\\xAF\\x8B\\x06\\x97\\x85\\xAE\\x7F\\\\\\xF9\\xD9\\xA6\\xE9\\xAA\\xBEj\\xEAs\\xB2\\xAC\\x1E|9\\xAA9\\x86\\xC2\\xE8\\xCD\\xCE\\xB0]\\x0C&"
		"\\xACE\\xD3\\xF7\\xCD\\xFA\\x9C\\x80\\x8A\\xAC\\x95_\\xF6\\x07\\x0CDl\\x96\\xAF\\xAA\\x9B\\xFA\\x9C\\xB4(a\\xE4\\x17\\xDB\\xB6C\\xD7n\\x9A\n\\x13\\xE0\\xC8\\xFD1\\xAB\\xEA\\xD2?\\x9C\\x13`\\xECU\\xB0\\xD2Ds\\xF4\\xD4J\\x1B\\xED\\x8E\\x9E\\x1A>a\\x90\\xDB9M\\xDB\\xBD\\x0F6\\xCDf\\xBBy\\xD3<D\\xCB\\xCB\\xAA\\xDB\\xAC\\xF2\\xC7sR7\\xB5\\x7F5\\x02'\\xDB\\x19e7\\x0FA\\x03\\xC3\\xA20w\\xF4\\xBC\\xD0\\x0C{\\xDD\\xB8A\\xDD\\x0C\\xDF\\x85\\xC1@\\x9A|\\xFD\\xFEK|`[\\xCCn\\xFB~"
		"\\xD3\\x9D\\x9F\\x9D-\\xDA\\xBCF,f\\xAD\\xEF\\x9Am[\\xF8\\x8Ev\\x82\\xE6\\x9B\\xACk\\xB6\\xFDm\\x064_\\xE7?6u~\\xDFaF?[4\\xFD\\xF5\\xB2Z\\xF9\\xEEl\\xD36\\xE5Y\\x88d\\xBE\\xD9\\\\WES\\xD3M\\x8Dk\\x05\\x068\\x9F\\x86\\x16\\x1C.\\x85\\xA3\\x12|\\xAA\\xDB\\xDE\\x8ET\\xBA\\xC0Q;\\x87\\x19\\x19\\x13r\\xD16]\\xF7\\xA6\\xDF\\x83d\\xF4\\xCD\\x18]\\xCB6{\\xB8?\\x1F\\xCCq\\xE6\\x9D\\xC4\\xD7n&\r\\xBE\\xE6Z\\x1DI|\\x82\\xA3\\xE1\\xF3\\x04\\x1FFG\\xF5\\xD5\\xD4*\\x13\\xD9z2\\x0B\\xF2o\\x8F10\\x15"
		">E9\\xE8c\\x1BOg\\x86O\\x96\\xE1\\xF3\\xB4'\\xE6\\x88\\xDB\\xBCl\\xEE\\xCF\t\\xDB<\\x84\\xFF\\\\n\\x1EH{\\xB3\\xC8\\x7F\\xA7eJ\\xB4H\\x89\\xD6)a\\x14\\xF8g'\\xC6\\x87\\xBC\\xD2\\xE6e\\xB5\\xED\\x02\\x18\\xC3\\x7F6\\xFC}\\xD2=\\xA67\\xD0\\xBB\\x07\\xED\\x9E\\xF8\\xA4o\\x84\\xFDr\\xE5\\x9F\\xB6\"3+\\xAB\\xD6\\x17C\\xD0\\x8Af\\xB5]\\xD7O\\xBA\\x85\\x19\\x9DU\\xBD_w\\xE7d\\xA8aN\\xFB`\\xCC\\x93U]\\xF5U\\xBEz\\xD2g\\x9A\\x1E0\\xE6O-{\\x01>d\\x02!w\\x0C\\x15\\xF2"
		"<\\x8A\\xC81\\x92\\x0E\\x1B\\x03\\xAEl\\x04\\x90y\\x92eB\\x87=\\xE6\\x8E2\\xD0\\xD0n\\xD9nr\\x19\\x97&\\xDD\\xDD\\xCDyw\\x87s5$\\xD6\\x99\\xE1I\\x9A\\x0CX\\x9B)\\xFC~W\\xF9\\xFB7\\xCD\\xC3\\x8C\\x11F\\x04'\\x81\\xB7\\xACV\\xAB\\x19\\xE6\\xA6$M\\x1E\\xD6\\xAB\\xBA\\x0B)\\xE4\\xFC\\xEC\\x0C\\x0B\\xC8{A\\x9B\\xF6\\xE6\\x8C3\\xC6\\xCE\\x82dpX\\xE8\\x0E\\x8F\\xB4l2\\x17B\\xDD6X\\x91\\x02\\x83\\xC0\\x12\\xBB9b\\xF9\\xA9\\xE9\\xF1\\x95\\xCF\\x11NA\\xA8\\x8C]"
		"\\xC5\\x81\\xB1'LV\\xB1\\xABL\\x93o\\x93#\\xA1o\\x9A\\xF2\\xF1\\xD9y7.\\x9B]\\xF5\\xA3?'\\xC0O\\x04\\x8C\\x90UU\\xFBl?AO\\xF6\\xD9MK\\xC9\\xC4R\\xF2\\x13\\x1D\\xC6\\x85\r\\x8C;9~'^\\x9E\\x9Ae\\xFB\\xE2b2\\x17\\xC9\\xA9D\\xF1KU\\xC0\\x91\\xE3tt\\x9C:\\x08\\x93\\x89|\\x9D&\\xAF\\x07\\x87v}\\xDE\\xF6Cn\\xBEm\\xFD2.+\\xF79]\\xFB3\\x07\\x8E3c\\x18c`?\\xC7\\xC95\\xFB\\xAAJ\\xD2\\xA4\\xCF\\xDB\\x1B\\xDF\\xCF\\xAE\\x17\\xAB\\xBC\\xFE\\xF8B\\x10\\xFEN\\xEF\\xF0\\xD3\\xDE9\\x91\\x1E\\xA5,"
		"\\xB4\\x92\\xA7\\xFA>Ip\\xCFv\\x1A\\x17\\xE8\\xE7\\xA2\\x11Wl\\xF1B\\xC8\\xB2\\xBE\\xD9\\x9C\\x93S\\x89`\\x8F\\x99gR\\xF9\\xCB\\xCB\\xDB\\xF0\\x89\\xF9\\x17\\xD3\\xEFo\\xAA\\xF5\\xA6i\\xFB\\xBC~\\x9A\\xCD\\xFEQ0\\xFF{\\xD1u\\x98`\\x9F\\xC9\\xD3c\\xA7\\xD2\\x17M\\x9B\\x0F\\xB9\\xF6\\x19\\x87\\x87~}\\x9B\\xD7\\xDD\\xB2i\\xD7\\xE7d\\xBB\\xD9\\xF8\\xB6\\xC8\\xBB\\xA7}\\x03\\xACm\\x84\\xEFa\\xF6q\\x91?\\x96g\\xE0\\x1C\\x8B\\xBCiu\\xE2 f\\xB3'Yvx\\x88\\xE3\\xBBd\\xEB`\\xC8\\xB37C\\xEA\\xEC};"
		"\\xDB\\xB6\\xAB\\xDF}2|g\\xD7\\xE5\\xB5\\x15 \\xAE\\x81\\x0B\\x05\\x9F\\x85\\xA1\"\\x0E\\x1Dj$\\xD0\\x83.2\\xF2\\xC5 \\xB2\\xF4\\xCB.\\x8CP\\xB1EN-r:\\xE6\\xC7(\\xC4\\xEC\\xF2\\xAC\\xD3i\\xF2&\\xCE\\xB9i\\xFCqu~.\\x94\\xE1q6\\xCA0\\x07\\xB2]\\xE4\\x0F/\\xD1\\xB8\nD\\x96\\xDBk\\xC6\\x19\\x83\\x98UN8\\xF0\\xCB\\xD6\\xFB\\xBE\\xAAo:\\xB2lZ\\xD2\\xDFzR\\xE6\\x8F\\xBF!\\x7F\\xF6$o=\\xB9\\xF5\\xAD'}Cn\\xFDjC\\x1E\\x9B-%\\xF3\\xA6\\xEE\\xF3\\xA2'\\xDBa@^?\\x1EK\\xEC\\xB6\\x1B\\xC4>=^\\x1D8c"
		"<\\x02\\xE1\\x84&\\x1F0\\xAB\\x91\\xF9m\\xDE\\x9F\\x18)\\xF6\\xB0\\x08\\x1E\\xE0\\x8C\\xC9\\x81\\x15\\x1AwUk(\\xAC\\x87\\xDD\\x83\\x13\\xCEf/8\\xFB\\xD5\\xF1\\xBAqT$\\x91\\x9B|sNp\\xBA\\x1E\\xA4\\x13\\x19^\\x118c*j#\\x0F\\x9C\\xAF#\\xB6N\\x98<\\x1Ag\\x86>\\xA1w\\x00\\x1B\\x96^\\xB8\\xE2\\xCF\\xB8L\\xD2\\xE4q\\xF83\\x94\r\\xE1\\xEBX6\\x84\\xEF\\xED\\xC3\\x0Cb\\xA9p\\x7F[\\xF5"
		">\\xC8\\xB4Q\\xE6\\x80\\x1B\\xCEE\\xD0\\xC7E\\xBE\\x1D\\x9E\\x85\\xEF\\xF3I\\x9A\\x94\\xB3\\xF7\\x12\\xEB\\x8E\\x0B\\xC1\\x89d\\xC1}m\\xF3\\xD1\\xCF\\xD0\\x1D\\xEF$\\x8F\\x8C\\xE1\r}\\x06T\\xEFY\\x98\\xAE\\x8A|3\\x0By\\xFF\\x90\\xFDCS\\xD5;>g\\xC0\\xE2\\xD3\\xDDT+\\x80\\x1D\\x1FXz\\xC9%V#\\xE5\\xEC\\xBD\\xE0\\xA8\\x90dA\\xA1K.E\\xCA%nb\\xA9\\x94K\\x1D\\xC6\\xF18\\x0E\\xA6\\xD8\\x00\\xB1\\x9F\\x9F\\xBBG\\xC8\\x81\\x15\\x1A\\x83\\xE1CR\\x18V\\xD4S\t\""
		"\\x04\\x80\\x05\\xFF\\xE3\\xE3\\x81\\xE9\\xAB\\xE8y\\xC3c\\x86\\xF9\\xBE\\xAE\\xFAn\\xB6\\xED|\\xFBa\\x93\\x17\\xFE\\x9B\\xFA\\xFB\\x0E\\xAB\\xB5\\x80\\xA6,,\\x16\\x9Bf\\x15rj6\\x0C\\xE8f\\xDD\\x9F\\xBE|\\x13\\xDC\\xA1\\xA2N\\xF2@}\\x1D\\xE7\\xFBU\\x9A|U\\xA5\\xA1\\xB3\\xD9\\xCDl\\x86`\\x1F\\xC3\\xA0\\xF7h\\x08\\xDF\\xA7E$h\\x82\\xBCK\\xC0\\xA0\\x03\\x0B\\x92\\xED $\\x88\\x9B>1\"w*\\x9C\\xED\\x85\\xBBc\\xD9\\x8C\\x00\\x1C\\xCA\\xE6l\\x90\\x11\\xA4=\\x87\\xF7\\x00x\\x0E\\xBB\\x9E\\x9C\r"
		"\\xD9\\x9F3\\xCE\\xA3\\x1BN\\x0F\\x1CF\\x8A\\xA1W\\xE8?D\\xD1\\xBF[5\r\\xA2n\\x89\\x7F\\xB3f\\x93\\x17U\\x1FB\\x96\\xB4\\xBE\\xDB\\xAE\\xFA\\xD9\\x9BX\\x93|\\xBD\\xCEo\\xFC\\xBB\\xEA!\\x88\\x92Q\\xD4\\x90\\xB5\\x05\\x04\\xA0\\xE0\\x86\\xE8\\xC8\\x97\\xBBG\\xCC1\\x98\\xEF\\xF3\\xBE\\xC5\\xA1IU\\xCF>\\x84\\xB7\\xF6\\xD7\\xAB\\xCDm\\x8E\\xA5\\xD5\\xE3\\x06\\xDF\\x8F\\xC7\\xE6\\xBB|\\xB5\\xF5]\\xF0\\xD2/\\xFD\\x03n\\xC8D\\xD1\\xDB\\xBC-G\\x99\\x9Cq\\x1D\\xF5P\\x07\\xFA\\x99\\xC8\\xD7;\\xFD\\xBEY.;"
		"\\xDF\\x87Q6\\xB6\\x9A\\x83Q.\\xF2\\xEDn\\xD4\\x97\\xF9\\xB6\\xEB\\xAA\\xBC~\\xB3\\xDA\\xB6a\\xD6\\x96o\\xFD]\\x15\\xA0\\x1AR\n\\xC7\\x1D\\xFD\\xDD(7\\x95&`\\xC7\\x17l\\xEF\\xA3uxQ\\xF3\\xC1C|jL\\xD2l|\\x9B\\xF7M;k\\xB6AK\\xC1\\xE3x8\\x90\\x1B\\xC3+\\xF0\\xA5\\x84\\x9BTpw\\xF5\\xD4\\xA5\\x94+\\xE6,\\x99\\xD0\\xD20\\xE5\\xA6\\x0Ce-\\x97\\x91\\x04\\x8E~\\xE6L\\xC4\\xA0\\x8B\\x83\\xA0\\x8B\\x18t\\x11\\x83\\xFEf\\xE5C6[7\\xA5\\x9F\\xD5M\\xBB\\xCEW\\xA3i\\xA7\\x00\\xB5\\x8B\\xA1_.}"
		"\\xD1\\xC3u\\xD96\\x9B\\x0F\\xE1\\xED\\xFF \\xA5p&b\\\\\\xC5A\\\\E\\x8C\\xAB\\xC0\\xFD\n<\\xD30\\x98q\"\\xDA\\xBEl\\xF3\\xCDmU\\x8C:\\xFC\\xC2sv\\xEAt\\xB7\\xF9&,\\x08\"\\x02C\\x1C,\\x08b\\x92\\x0CFM$\\x1BX\\xA1q\\x9F\\x8D9\\x05\\xCD\\xAD!\\x922\\x05J\\xCD9U\\x16@\\x12A\\x8Dr\\x1C\\x88\\xA0\\x1C@+\"\\xA8\\x05\\xC5-\\x11TY\\xC3\\x89\\xA4\\xC0\\x95\\x84\\x0BAAii\\x88\\xA0\\xD29\\x81\\xC3-s\\x16\\xBB3\\xA6\\x08\\xA7N\\x08\\xE7\\x08\\xA7\\xD20@\\xAE\\xE4\\xD6 \r\\\\0;"
		"\\x17\\xD4q\\xA1\\x1C\\x01j\\x8C\\x11\\x92(*\\xB8\\xD2\\x86pj\\x98\\xB6\\xE6\\x98\\x9EK\\xEA\\x8Cr\\x82p\\xCA\\x99\\xD1\\x9C(\\xCA$\\x08I\\x80*#\\xAD%\\x8A*\\xC9\\x82<\\xCE\\xA5\\x99k\\xCA\\x84\\xB3\\x920j\\x8D\\xB2R\\x13M\r\\xB7\\x1A\\x19\\xCEi)\\x80\\x18\\xCA\\x8C\\x15\\x96\\x00\\x95N+s\\x01@\rHG,eRK\\x814pI@Pc\\x94\\xB8\\xD0\\x14\\x1C\\x97\\x9A\\x00Pg\\xB4\\xBD\\x00j\\x1D\\xE0S\\x9D\\x031\\x07\\xAA\\x84\\x05\\xB4\\x829m\\x0C\\x01\\xAA5c\\x9AH*\\x99p\\x9A\\x1C\\xB9\\xFA\\xAF\\xBB\\xE5\\xFD\\x93/"
		"\\xDE9-\\x15\\xC6S\\xC2.H\\x92\\x1D\\x04\\x8FG>L\\x82\\x07\\x14\\x17J4C;i\\xDD\\xFC\\x88&\\x8Cj\\xA7\\x14sDS\\xA7\\x19j$\\x05\\x03I4\\x95\\xCAH\\x8C\\x16ha\\x1DQ\\xD4)\t\\x18\\x17\\xADMh\\xD7\\xD68yL_(\\xCA\\x98\\xD0\\x8A\\x00\\xA3\\xCC)5W\\x94Y\t\\x968\\xEA40\\x94\\x03\\x86sG\\x1C\\xB5\\xDCJ\\xA4\\xB9a\\x9A\\x13G\\xB53\\xDA\\\\p\\xCA\\xB81\\x82H\\xEA\\xB4cr~Dc\\x1C\\xB9\\x94\\x96H\\xCA\\x85\naVV#\\xB8\\x8C\\xE0\\xA1\\xBBs\\\\\\x06L\\x06\\x18"
		"!\\xE8\\x94\\xD6DP\\xA7\\xB9\\x12\\xC7\\xF4\\x85\\xA6J*\\x8B\\xD1\\x94x\\xFC9\\xD7T+'4\\xB1T\\x80\\xE5\\x16\\xE1`T\\x886\\xE7\\x8A\\xA3\\x97\\xACS\\x804\\x08\\xC9\\xCC\\x85\\xA0B9\\x86\\x81sF\\xAB\\xF9!I8\\xB5JY@-%7\\x08\\xEE\\x01\\xC9\\xC2\\xA9\\xB9\\xA4\\x82\\x0B\\x83\\x06q\\xA1\\xB9$\\x92Z\\x8E\\xEEw\\xDA9wH]X*\\xB4\\x00N\\x0C\\x05\\xAE\\xB5\\x99[*\\x9D`\n\\xB1)\r\\xE3\\xC4R\\xCDAc\\x10\\x9C\\xB1L\\x11K\\x8Db\\x1A\\xB5wL1{\\xA1\\xA8\\x94h\\x05\\xA7\\xCC*.\\xE6G4:Wr\\x041\\x15\n"
		"BP\\xB4Q\\x0E\\xC1a\\xA5\\xE5B\\xCD5\\x95\\xCC\\x19A\\x18\\x15R:\\x0B(\\x19\\xB8\\xC3Y\\xC1\\x8C5\\xE2\\x98\\xBE\\x00F%3\\x86h\nF\t\\x89\\xB4\\x13\\x01d\\x8AI=\\xB7\\xD4\\x08\\x9C\\xCD\\x96J\\xCD\\xB4!\\x96*nL\\x985\\x82\\x05\\xB4\\x18\\x8B\\xB3\\x1A\\x04\\xC5\\xC3\\xC49\\xA2I\\x18@Z1\\x9C\\xCD(^r\\xA4\\xB9\\xE2G\\xE4\\xDCR\\xEB\\xA4\\x04\\x94\\xC6\\xA4C\\xAC\t\\xA5\\x04\\x06M\\x19%\r\\xF2\\x952\\xC1}Z\\x19\\x08\\xCA1+B\\x02\\xD3\\xCA\\xCD\\x8Fh\\x14\\xAF\\xB5\\xB2\\x18U\\xCD\\xA4\r\\xE39`x\r"
		"Z7\\x07N\\x05j\\x8F9L1N\\x80S\\xCD\\x19\\x86[\\x08\\x00qL_\\x80\\xA0\\xC20\\x81YA\\x19#\\xE6 p\\x12)\\x9Cs\\x92\\xA9\\x90K\\x9C\\x15\\x8E\\x18*\\xB0H!\\x80\\xE9\\x81#(Aq\\x01sPT\\xE1\\xDC\\x01F\\x15\\x03\\x83\\xED\\xD6\\xD8\\xE0-\\xC9\\xB1\\xF8\\xE3TK\\xA7\\x90\\xEF\\x14\\x0B\\xF6p\\xC0l\\xA3\\xA9\\x06\\xCB\\x03\\x88\\x05\\xFAGQ\\x87\\xC9O!\\xB8\\xB5\r\\xDE\\xD5\\xE8\\x8F\\xC3\\x1C\\xB1\\xCFB\\xEF\\xDE\\xBD\\x9D\\xAB\\xB7!\\x0B\\x89\\x98m\\xF8A\\x16\\x92\\x91/&YHQ"
		"!\\x9C\\xD6\\xA8\\x11\\x17\\x96\\xCF\\x05U\na4\\xD28'4\\xD6D\\xC0\\xA9\\x14\\xCE\\xECi\\x86\\xF3\\xD1\\xCE'\\xB4\\x04\\x81\\xED\\xCA\\x02\\x0BY\\x86\\x03F\\x84\n\\x81\\x91\\x1E\\xE99Pf\\xAD\\x13\\xB1\\x1D\\xD3;\\x08\\xCC\\xE2\\xA3\\x80)#<a\\xCF\\x10T\\xF0\\x90\\x8A\\xB5v\\xD6\\xA2\\x93\\x80[L\\xE1\\xA3\t\\x03=\\xC7\\x18(#&\\xED\\xC6J\\x1D\\x82\\xE5P\\xB5\t\\xAD\\xB5\\xC4D\\x18i\t\\xC1\\xE9\\xE3\\xF8\\xD1\\x05G.\\xDA;]\\xBD}"
		"\\xFD\\xF6\\x8Byp\\xBA\\x8A\\xCE\\x95\\x07N\\xD7\\x91\\xAF\\xA6oQ\\x14@\\x1A\\x154d\\x0ES\\xBF1\\xB8\\xF0\\x8E4\\xFA\\xC0:\\xC7\\x03~8\\x9F\\x90\\x9CZ\\xAB`>eh1,\\x15\\xC0\\xB8\rQ\\x92\\x0C\\x08\\xA3RJ\\xA7\\xE5\\x8E1g\\x14\\xF7u0\\x0E\\xBB\\x1Eq\\xEC^\\xEA\\xE0\\x115\\xC4\\xCC\\xBA\\x01\\x85\\x0ESuT\\x17i\\xCC\\xA5\\x9AY\\x98\\xB4+\\xE5L\\xA0-\\x83)\\xA9\\x94t\\xF3\t-\\x98\\xC5*$\\x0E\\x0F\\xD6\\x1Ey\\xE3\\xAF\\xEF1\\xF2\\xC6\\xC1\\x00\\x05\\xE6$N\\x13)"
		"\\x84\\x8A\\x8C\\x80\\x1E\\x81i\\x852\\xC3\\xE4\\x94\\x16\\xA0\\x99\\x9E\\xEFi\\xA5A\\x0F\\xE0B\\x01\\x01\\xAD,\\xA4\\xA5\\xF0\\x84\\x91\\xC6<!\\x87\\x05`h\\x0E\\x91\\x0E\\x9A*\\x1B),h\\x18&\\x85H+\\xADE\\x98\\xCCr\\xC0\\x89\\xD1J\\xBB\\xE0E\\xACKF\\x1A\\xFB;\\xEE\\xE4\\xBE=\\xE0r2>\\xD2\\xA3\\xFC\\x91\\xE6\\xD4j\\x13R\\xA7\\x18\\xEA\\x81\\xBD\\xF1\\x07\\xEE\\xF9k\\x92^J\\xCE\\x03\\xDEL\\xC4\\x9B>\\xC0\\xA1\\x8D|3-A8u\\x0C1\\x80\\x0E\\xD0\\xCA\\x8A\\x01\r\\xE8\n"
		"F\\xC12\\xAD\\xD4\\x9E\\x96\\\\s\\xA3\\xE6\\x91\\xD6\\x06\\xAC\\x0B\\xED\\xC3\\xC8\t&\\x07\\xA1##\\xFAk\\xDFCQ\\x00\\x86\\xDE\\xB7\\xC6\\xB9=-\\xB0\\xF6\\xC2\\xE8EZ\\xC8\\x10=\\xF4\\x8C\\xC1RB\\xC9\\x10\\x1EE\\x95\\x11\\x91\\xC6\\xFE\\x16\\x9C\\xDD\\xB7\\xEB\\xFDP\\xBD\\x97\\xAA\\x11\\x1E\\xD6\\x0E3;D\\x88\\xED\\x95\\x9D:\\xD1Eg\\xD9i]\\xAEX|\\x91\\xDE\\xF9U\\xC1\\xEEM]MwI\\x1C\\x05i4\\x16\\x8B\\xC6r\\xAE\\xE6\\x8E\\x02\\x13\\xA1\\x98\\xD4\\x9A\\x1BK,u\\xD6\\x1A,"
		"\\x95\\x94\\x15B\\x10K\\xAD\\x86\\xD0\\x1E\\xE8\\xAF\\xB0\\x14\\x03i/\\x0C\\xE5\\xCEi\\x13\\xA6\\xB3RsC\\x85\\xD6\\xC1\\xF7\\x02\\x14\\x8E3T\\x08\\xCE4\\x06Ki\\x08\\xEB\\x12\\x07\\xAC\\xBD\\x19\\xAE\\x9F\\xDAI97\\x144p\\xEC\\xC28 \\x07\\xD7V'\\x05\\xBE\\x88\\x99\\xB1\\x82cs\\\\\\xFD\\xB5\\xC2\\xF0k\\xCC\\x05\\xD8J\\x19WL)\\xAC\\xBB-\\xB7\\x98\\x84\\x98\\x91\\\\]\\x04\\x1D9\\xA2\\x93\\x81\\xB8`\\x14\\x98r\\x06\\xC1k\\x8D\\xB3\\x98h\\x18\\xC3\\x92\\x85k,"
		"L\\xB5\\xE0\\x9CdA\\x96\\x04\\xACM\\x983.\\xA8\\x87'\"\\x0C9\\x1C\\x8C\\x948L\\x0B\\x0B\\x80K\\xA0\\x10\\xDA\\xE1\\xF3\\xC0\\x18c\\xB1\\x80\\x91\\xA0\\x83\\x13\\x04S\\x8A\\xE9\\x1D\\xE3+A\\x1D.\\xA2X\\xC8km\\x87EWI\\x85\\xD9\\xD497, \\x16\\x8B\nj\\x85T\\x80\\xB4\\x95\\x02g\\xB9\\x93.\\xACXNH\\x81u,S\"4;|\\x1E\\xA7\\xCCp\\\\\\xDB\\xB1:\\x04a\\xAD$\\x00sN906r\\xB9\\x05.\\x86\\x01\\xA1V\\x13\\xC2\\x8AA W&z\\x08\\xA3l.\\x1Ce\\x1A_kpR3p\\x88\\x05,\\xDF\\xF1ECh\\x83\\x05\\x158\\x04\\xAF\\xA4\\x8Eq&"
		"\\xC8\\x11v\\xA6K\\xFC\\xEB\\xB9\\x10\\xB8\\xDA(\\x1EQ\\x07\\x07\\x00\\x15\\xC3N\\xCE\\xB0a\\xF3ms\\xEF[_\\x92\\xC5c\\xD8\\xA7Qr\\xB7\\xCD\\xA3\\xF0=;@\\xF5\\xF0\\xA8\\xEA\\xFE\\x9E\\xFA\\xFA&\\xEF\\xABp\\xC3\\xC1\\x17\\xCD\\x1A\\xEF\\xC3\\xF9\\xAC\\xB8\\xCD\\xFBE\\xD3w\\x9Fo\\xFB\\xF5\\xF5p9b\\xD6\\xDD6\\x9Bj\\xF9\\xF8)\\xB2\\xD6\\xBE\\xAC\\xB6\\xEB\\xD9\\xBD_\\\\\\xDF\\x87\\xEB\\x0E\\x81[\\xE4\\xEBM^\\xDD\\xD4\\xBB\\xAEc\\x1BnPIy\\x85o\\xC3x\\x8C\\xDAl|\\xED"
		"[R7\\xAD_\\xFA\\xB6\\xF5m\\xDC%\\x1E\\xF7~\\xDB\\x9B\\xC5\\xE4`\\xFE\\xB3\\xB0\\xB3\\xAB\\xD4`\\xCF`\\xE7\\x17Q\\xE7\\x04/\\xCB\t\\xE3R\\\\u\\x95NM\\xBC\\x98\\x93\\x14\\xAB\\xBC\\xEBfE\\xDE\\xF6\\xD7\\xD7e\\xD5\\x15\\xCD\\xB6\\xEE\\xBB\\xE1\\xE4$\\xDC\\x7F!\\xB7U\\x19^\\xCA\\x95\\x19\\xC6N\\xAF\\xB6q\\xA6\\xEC\\xC0\r\\xED\\x9728\\xDBE\\x96M/m\\xD8!\\xC3\\xAE\\x9A\\x1D\\xB0\\xC8x(\\x9B\\xA4\\x12d*\\x94H%\\x88 b\\xD4\t\\xF7g\\xB2[\\x9F\\x97\\xBE\\xBD\\xBE.\\xDB\\xFC>\\xDC;\\xAC\\xD6y\\xEFI\\xD5e~"
		"\\xBD\\xE9\\x1F\\x83\\\\H\\x01\\xAF\\x84\\x06\\xB9\\xFF\\xFD\\x1F\\xFF\\x99\\xA4 \\xF8@r\\xA6yj\\x14\\x9F\\x8A\\x1DL\rW\\x01p+9\\xEF\\xF3,\\x18\\x1Dv\\xE1\\x062o\\xFB\\xAC\\xDB.\\xFA\\xA6\\xCFW\\x13v\\xB8\\xC7\\x82\\x1B\\xC5\\xD7\\xF7m\\x8EGI\\xB3\\xF0x1<&\\x9A5Z+S\\x08\\xFB\\xD9A\\xAB\\x7F\\xFF/\\x124\\xE3\\x0C\\xEFA!?\\xF4H>|\\xFFm`\\xEA\\xA1eg\\xC2`\\x05\\xD8\\xC0\t\\xB1\\xB3"
		"<\\xC4N\\x9B4\\\\\\xBA2ir\\xF1\\xF5\\x1F\\xFF5\\x19\\xD0\\xB2A\\x8C\\xF4\\x05n\\x8D\\x87\\xBF\\x9B\\xB6j\\xF0.\\xE6l\\xD5\\xDC\\xE3\\xCD\\xCBn\\x16\\x90s|\\x04[\\x945\\x1D1\\x18\\x80=~/V\\xCD\\xB6<\\xDB\\xDD\\x06\\xCD\\xEE\\xFD\\xE2,\\xEF:\\xDFwg\\x8Es\\xBA\\xCA{\\xDF\\xF5\\xD4\\xD7\\xD4,\\x99\\x11\\xCB\\xA2d\\xC29c\\xB8\\xB5\"\\x97\\xB4\\xE8\\xD0\\xAB\\xE1BN\\xD3V7U=C\\xEC\\x85\\xDB\\x98A\\xFF\\xE1v\\xA5\\xB2\\x87\\xF0\\xDB]\\x15\\xCD\n<\\xB1\\xA9\\xEA\t\\xDA\\xE3\\xC5\\x07\\x0E\\xD2H+"
		"\\xB44\\xAF\\x9E\\xDC\\xB2 \\xE1|#\\x1C\\x99\\x1C\\xDD\\x92\\x1A\\xAET\\x84\\x96xF\\xC9\\xD8o_\\xC5\\xA3\\xE3@\\xE0I\\xF02/|vWu\\xD5\\xA2ZU\\xFD\\xE39\\x02\\xBF\\xF4\\xF5+\\xD2\\xDC\\xF9v\\xB9j\\xEE\\xB3\\xC7s\\x12\\xDAW>L6\\xED\\x06\\x83\\xE2\\x85\\xCE?|\\xF4\\x8F\\xCB6_\\xFB\\x8E\\xB4?n\\xB2\\xB6\\xE9\\x7F\\xEA\\x9B\\x9F&\\xE7\\x8Fm\\xD3\\xE7\\xBD\\xFF\\x9D\\xD0\\xAC\\xF47\\x9F\\xBD\\xFA\\xF9\\xE7?\\xA0w?V}vr\\xE4\\xAE\\xF1%\t\\x84>\\xF5\\x1D\\xF9\\x17R\\x05i\\xE4\\xA7uUgS\\xBB'g\\xBD?\\xA3\r"
		"\\x86\r6\\x04k\\xC2\\xC1\\xD4Q@\\xD03\\xB8m\\xB7\\xBFZu$\\xF1\\x15\t\\xEA\\x8D\\xE1\\xC8W+\\\\\\x8E:\\xE2\\xF3\\xCEg\\xCD\\xB6'\\xAC{1\\\\\\x93\\xF8\\x1CD\\xE4\\xE0\\x11AS\\xD8ijX\\x9A|\\xFD\\xEEO\\xAF\\xDF\\x7F\\x11\\x95\\x1A7\\xD2\\xCF\t\\x1C\\x87y\\xFF\\xE8\\xD6\\xE3\\xC9\\xC6\\x9D\\x7F59\\xF7\\xDF\\xA1$\\x82f\\xB1j\\x8A\\x8F\\xAF\\xE2A>\\x0B\\xED\\x83\\x85\\x9B\\xBC\\xF5u\\xFF*\\xDE\\xA9\\x08:\\xC7\\x83\\xF4@\\xED\\xB1\\xFA\n"
		"\\xA7\\xDDj\\xD5\\xDC\\xEF\\x87\\x16\\x8F\\xB3\\xBE\\xDD\\xE2$\\x0C\\xB1\\x19\\x1E\\x11\\xB2\\xCB\\xEE\\x04\\x83\\xFDvr@2P\\xD3\\x8Bx\\xC7w\\xAA\\xCF\\xEE \\xCE\\xD2\\xB3\\xCDv\\xB1\\xAA\\x8A\\xCF\\xFB6_.\\xAB\\xE2\\xDA\\xD7w\\xB3\"\\xAF\\xF3\\xF6\\xF1\\xD3\\xC5\\xB6Z\\x95\\xB3R\n)XY\\xE6~\\xB1\\xF0\\xA5\\xCF\\xA5[*\\xC7\nm\\x81\\x97zQHX*\\xB34\\x8B\\xF2S\\xDCAn\\xEB\\x19|\\xBA\\xAD\\xABe\\xE5\\xCB\\xEBU\\xD5\\xFB\\x19|\\xBA\\xCEo\\xAA\\xE2\\xBA+\\xDAj\\xD3#9^"
		"\\x08\\xBF\\xFE\\xE8\\x1Fg\\xED\\x8F\\x98\\x17\\xEF\\xFC\\xF5\\xF7\\xD5w\\xDF\\xCF_\\xCF\\xEB\\xEFV\\xDD\\x0F\\xE5\\x9B\\xDD\\x98q\\x99{\\xB1'\\xEE[c\\xC3\\x89\\x94\\xB0KD\\xC1m;\\xBF\\xCE\\x9A~\\x93\\x15\\xAD/}\\x8D\\x17\\xB50\\xE9\\xFC\\xFE\\x9B\\xD1\\xC1\\x9C\\x19>\\xE2d\\xB8\\xC2=\\xA2\\xE4\\xF4\\xB5\\x81\\x038\\xE0\\xA2\\xCA\\x01WU\\x8B\\xFF?\\xDBC\\x016\\x0F\\xA4\\xCC\\xBB[_\\x92pp9\\x89=^\\xE4 \\x11\\x82l\\x9C\\x11\\x07\\x13V\\xAA0_\\x0F\\xE6\\xCA8b2_\\xAA:L\\x97\\x83S\\xDFU\\xDE7)"
		"\\xD9.\\xB6u\\xBFM\\xF1l\\xFB\\xCE\\xF7U\\x91\\xA7\\xA7\\x8E\\x83w\\x8AE\\xCC\\xE7\\x8B\\xAEYm\\x917N.\\xCE\\x02PO\\xDC\\xB2\\x18n\\xBB\\x9E\\x93L\r=\\xC2\\xFD\\x136\\x9E\\x18\\x1B18uX\\xFB\\xBF\\xF3]O\\xDE7CY`\\xE409\\x93!\\xE5\\x9C\\x7F\\xF5\\xDD\\xFB\\x8B\\xC0WCc\\xF2\\xD5\\x17\\xAF\\xDFbt\\xDE\\xCC\\xF2E\\xB3\\xED\\xF1F\\xE9p\\xAB\\x077\\xBB\\xA3\\x00\\x95&o\\xBEy\\xFB\\x97d\\xF8\\x19\\x06\\xA4:U\\x12\\x0FL%\\xDF\\xAD\\x14U9{]\\xD7\\xCD\\xB6.\\xFC\\xDA\\xD7\\xFD\\x87UU\\xFA\\x8C\\x19\\xED|"
		"!\\xCBLZ\\x0F\\x99TZg\\xD6\\xE7*s\\xBCd~QH\\x0E\\xC5\"B\\xAA\\xC3!\\xDDms\\x7F}\\x1D\\xBE\\x92|\"/\\x0B\\xACv\\xDF\\x14\n\\x8D,\\x1C\\x02\r\\xEB\\x7F\\x98\\xDB3v\\xE2&\\xF2\\xDE\\xCDc:\\xFBm\\x98\\xFFm\\x95g\\xC3\"2\\x02SI1\\x98\\x84\\xB6\\x85\\x92\\xE4\\xA4Q\\xB0\\x14K!e\\x99\\xA9\\xA5\\x81L\\xE6\\xA5\\xCD\\x9Ct\\x8B\\x0C\\xB8\\xE3\\xE0X!u\\xC1\\xFFOFU\\x08\\x98\\x95/z_\\x1E\\x1A\\x85\\xA7\\xA3\\xA1\\xD0\\x08?"
		"\\x97\\x08Q\\xC1B#\\xD4\\x1B\\xBFF\\xA1\\x91o6\\x93BCy\\xC5K\\xE7\\x0B\\xC6\\x98\\xD7eQ\\xF2\\xA2\\xD4\\xCF\\x15\\x1A\\x8A\\x89A\\x7F\\x1B\\xF47\\xBF\\x8E\\xFE\\x1C&\\xEA;c%\\x80Pf\\xC1\\xAC\\x07\\xB5\\xE4\\xB9\\xF2\\xCF\\xAB\\xAF\\x06\\xF5\\xDD\\xA0\\xBE\\xFDu\\xD4\\xD7v\\xA2\\xBFV\\x9C\\xE5\\x008\\xA3\\xB8)\\x96\\x00\\x92\\xC1\\xF3\\xFA\\xDB\\xA0\\xBFe\\x83\\xFE\\xEE\\x7F\\xA9\\x7F\\x85g\\x94\\xBF\\xA8\\xFF\\xD9p\\xC1\\x1C\\xCE\\x98R\\xEE\\x0COS\\xCE\\xF0Dgd\\xBF\\xC1"
		"{5\\xD7\\xAB\\xE6\\xA6\\xB9\\xFE.\\xEF\\xFA\\xC7\\xEB\\xBAZ,V\\xBE\\xCB\\x18\\\\+\\xA3\\xFCR\\x97\\x90\\x81V\"\\x93\\x0BQd\\x0B\\xBB\\xF4\\x99\\x17\\xCB\\x05SK\\xA3}\t\\xD7\\x0F\\x823\\xBC\\xAA\\xFE\\xF9\\xDD\\x0C\\xB4\\xE2B*+\\xE0\\x94\\xB5\\xE17E\\xBFn\\xA2\\xFA\\x87%\\xA7`\\xCF\\xF8\\x86\\xF8\\xCFZ\\xEB\\x9F\\xB5\\xD6K\\xB5\\x16\\xFE\\xF60\\xFC\\x80\\x0Eg:\\xA4\\xEA\\xE8=\\x88.\\xFD\\xC7.k\\x96K\\xFC\\xA5Q^\\xDE\\xF8, "
		"'\\x03a%\\xDB\\xFD\\xDAj\\xF8d\\xF1\\xE6\\xED\\xBB\\xF0y\\xEE2j\\x96M\\x81\\x14~\\xDF\\xF4\\xF7t\\xCDB>9\\x0FwT\\xF36\\xBB\\xC1\\xEB\\xBB\\xBE\\xEE\\x7F\\x17^\\x9FR\\xF2\\xC9;\\x1B\\xAE\\xF5\\x90O\\xDE\\xBDy\\xF7\\x8E\\xB1\\xCFN\\xCB\\xFCy\\xFFu\\xFF\\xED%#\\xE5\\xFFG#\\x93\\xAB\\xAB\\x9F\\xFF\\x07\\xED\\x8B\\xEF\\x92\\xA2;\\x00\\x00", 
		LAST);

	lr_think_time(4);

	web_custom_request("collect_40", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xDDUM\\x8B\\xDC8\\x10\\xFD+\\x8D \\xB7\\xA7\\xA0\\xD2\\xA75\\xA1\\x0F\\x81=l`o\\x0B\\xD9Cc\\x1A\\xB5\\xA5\\x9Ev\\xD2c\\x1B\\xCB=\\x93\\x10\\xF6\\xBF\\x07\\xD9\\x93\\xEEi&{Yf \\xE4$\\xF9\\xA9\\xAA\\xDE\\xABr\\x95\\xF4\\x8D%v\\xB3a\\xE2\\xAD{+\\x05\\x83\\x06\t\\xF2\\x1A\\xDA\\x91\\x03\\xF3\\xDE\\xE5&}\\xBA\\x17\\x1D\\x03#\\xDD?|:*\\x06vk\\xDD\\xAD\\xFA\\xCC`  j\\xB0\\xC0n6\\x1B\""
		"i\\x1DHBj\\x82\\xB3\\x06J\\xA8\\x1A\\x05\\xF63L\\x96\\xE0\\x8C\\x84R\\x0B\\xAC\\x948\\xC3Z@\\x99j\\x81\\xB5>\\xC3\\xCAC\\xD9G\\xEB'A\\x94\\x85\\xB2n\\x86\\xABBi\\x9E\\xC1^\\x08\\x90\\x80DYD\\x81\\x94,\\xDE\\x0B4\\x03K\\x96 \\x90\\xB4\n\\xA4\\x8D[v\\xC6\\xABb\\x02g\\x1D\\x8Ar_\\xA99\\xA6\\xF6D(\\xFE\\xC6\\x9A\n\n\\xBE8\\x1B\\x18\\x90\\x83\\x87\\x814\\x90t6T\\x16v\\x11R\\x9CH\\x12\\xF9\\xB2*I\\xA2\\xB8(\\xADf\\\\9\\xAD\\xE7\\xD5\\xDBY\\xAB&\\xAA`%HK\\xA7\\xA1\\x08\\xA4\\xB5v\\xF3I\\xE5=D]"
		"\\xD7`\\xC3R\\xED\\x12\\xDAB:\t\\xA9*HG`\\x7F|\\xF8\\xC8\\xC0\\x9Ac\\xC8y\\x9D\\xDB)\\xF1C\n1\\x8D\\xDBm:\\xA6\\xBB\\xD4M\\xAB\\x9F\\x81\\x9C\\xE7\\xD3n\\xD5f>\\x8D\\xA1\\xCB\\xED\\xD4\\xF6]\\xDB\\xDD2\\xB0\\x18\\xA6\\xC0\\xA7\\xAFCZw\\xE1\\x9E\\xA1(Z\\x98\\x146\\x06\\xB6~j\\x91S\\x18\\x9B\\x03\\x83,\\x857\\x15\\xC8{lL\r\\xD6\\xC6\\xF5\\x9F3\\xDF?c\\x18\\x864\\x9E\\xF5-*\\xF8\\xC3\\x02\\xAF\\xAE?"
		"9o\\xBBvz\\x066\\xFD\\xDD0\\xA6\\x9CSd\\xA5\\xD2sU_\\xAC\\x04\\xCF2\\xBE\\xA2\\xB8\\xE4\\xFER\\x14\\x8F%{lN\\x01\\x0B\\xA3\\x15\\xC8k\t\\xA3\\xE5\\x0F\\x9A6\\xAE\\xDFw]\\x7F\\xEA\\x9A9\\xCC\\xDF\\xC76&N{\\xB5WZGn\\xF6\\x8E\\xB8\\x0E\\xB1\\xE2^\\xFB\\x1D'\\xE9%y\\xD1h\\xDB\\xC8\\x8B\\xC4\\xE2\\x92\\x0F\\xFD\\xC3v;oW\\xE1I<>C\\xE3\\xE5\\xA8\\xBD\\x0BS\\xE2\\xFDi\\xFA\\xA1\\xB5\\xEDb\\xFA\\xB2&\\x06\\x96\\xA7\\xAF\\xC7\\xB4\\x1E\\xFA\\xA5GnVa\\x97\\xFB\\xE3iJ\\xEFV\\xC7\\xB4\\x9FnV\\xE2\\xCD;"
		"\\x06\\x16\\xC66\\xF0C\\x1Bc\\xEA\\xD6\\xD3xJ\\x0C\\xA6L\\xF4\\x92\\x96:7\\xC5\\xF3\\xA4\\xBC6\\xC2*ox\\x13\\xBC\\xE0\\xDAH\\xCBwM\\xB3\\xE3RG\\xF2\\x95\\xB6\\xB1\\x89\\xBB\\xFF\\x95T\\x9ByN\\xC7\\xD4L)^'%\\x196\\xBE~\\xFC\\x01\\xE67\\x1F\\xA6\\xA5\\xD1\\xCA\\xBD\\xF3\\xBA\\x13s\\xA6x\\xDD\\x89)\\x17\\xE7/01/6%sR\\xE5\\x15\\xB0(O\\x9D\\xD2\\x15\\x94\\xB7`\\x7F}\\xB8\\xAE\\\\\\x17\\xEE\\xB7\\xDBvJw\\xAB\\xCBg\\xFA2\\x84.\\xA6\\xC8\\xAFp\\xCE\\x0F"
		"!\\xF38\\xF6C\\xEC\\x1F\\xBA\\xD2\\x93\\xFB\\xBE9\\xE5y\\x08\\x16\\xFA\\x90\\x87~8\r\\x17\\x01\\xCB\\xF3\\xF3:\\x02\\xFE\\x83\\xB5\\xFE\\xF7;|t\\xFA\\x02\\x81\\x08\\x00\\x00", 
		LAST);

	web_custom_request("collect_41", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xCD\\xD3M\\x8F\\xD48\\x10\\x06\\xE0\\xBF2\\xB2\\xB4\\xB77\\xA8\\xAA\\\\\\xFE\\x1A\\xD4\\x07$.\\x9C\\x91\\xB8\\xB4\"\\x94N\\x0C\\x04\\x9An4\\xC9\\xC0\\xAE\\x10\\xFF}e\\xBB\\xE9\\xCC\\xB0\\xEC\\x05q\\xE0f=\\xB6\\xCBUe\\xFB\\xAB\\xC9\\xE6vo\\xE8Ix\"d\\xE0\\xC0\\x9A\\x98\\xA1$\\x02\\x93RX\\xC6\\xFC\\xFE3\\x9D\\x0C\\x0C\\xEB\\xF9\\xCB\\xFB\\xA350o}xk?\\x94\\xC5\\x04\\xEAa\\x06s\\xBB\\xDF\\xB3xV\\xB0@\""
		"#\\xA8\\x87z\\xD7\\xA3\\xB2\\xBB\\xB2W\\xA8\\x0B\\x8D%^9\\x12T/\\xEC}e\\x8D\\x88\\xE2\\xA1\\xC2\\x8DS\\xE3h\\x11U\\xA1d+\\x07I\\x1BG\\xD8\\xE4\\x1B\\xFB\\xB8\\xB1\\x83M-\\x93\\x10\\xD25\\xB6\\x12l\\xD2\\xCA\\xF1{&\\x84\\xE0\\x13\\x94Z\\x90\\xB2\\xF3;;\\x8225\\x8E|e\\xEB\\xA1\\\\3\\xB1\\x1C\"\\xD8\\xFD\\x97K\\xDE\\x1B\\xDB\\x0B\\x8B\\x84\\x9F\\xB1\\xFD9\\x07\\x95\\x967#\\xB8\\x08I\\x17\\x8E\\xB5\\xDF\\xEC\\x19Q\\xCBt\\xCD\\xDBF\\xA9\tZ\\x8DHd!B\\x8D\\xFD\\xC6\\xA5=)6N\\xEE\\xCA\\xD1\\x81/"
		"\\xB1\\x93\\xAD\\xAD\\xD2$\\xE0\\xF2\\x148\\xB4()\\xD2\\x03O\\xE0v\\xC9J\\x1C7\\xB7\\x0C\\xF6\\xB6\\xB9<t\\x05{i\\x1E\\xC2\\xE6\\x8E\\xCB\\xAB\\xAB\\xCEtI\\xC7\\x82)\\x94\\xB2\\xA9\\xB9\\xD4\\xF5\\x81=\\x98J\\x0E\\x14\\x9A\\xFB\\xDA\\x9A\\xC8\tL\\x89\\x90ZxnU]X\\x10[ta~\\xCC\\xB1\\xB1\\xD3\\xC7\\xDC\\xCE\\xB4D\\xDB\\x99\\x89\\xE0\\xDB\\x91\\xB6\\xBD\\x8B\\x8D}"
		"\\xE3\\x10\\x1Fsk\\x8C\\xCA\\x0FA\\xEA\\x9Bk\\x7F\\x0C%\\x1Bo\\xC1\\xEAB\\x1B\\xB9d\\xCB\\x9Fj\\xB7\\xEF\\x03X\\x99k\\x8E1\\xD92#\\x08\\xE4aQ6\\x0B\\x1C\\x1C\\xC4A\\xE9\\xBA\\xC2z\\xF82\\x16\\x11\\x108\\xD6\\x97\\xD3\\xF7=\\xCC\\xA7\\xFAG\\xEB\\x84\\x87S\\x05'\\x158\\xB50\\xCF_\\xBC20\\xF3\\xB4{v:\\x9D\\xEFOc\\xFE\\x98O\\xEB\\xCB\\xE3<\\xE5.\\xA9#o\\x93\\xEB\\xC6!Q\\xA7N|w\\x18\\xC7C':q\\x8A\\xEA\\xA7q:\\x18\\x98\\xF18,\\xCBn)[\\x96w\\xE7/\\xAF_\\xD7\\xE1\\xCD\\xF0 ^W\\xE9n\\x9B\\x9A?"
		"\\x0Ek\\xEE\\xCE\\xF7\\xAB\\x81\\x99\\x86u\\xE8\\xE6\\xD3\\x94\\xFF\\xDE\\x89\\x81Y\\xD6\\x7F\\x8Ey\\xF7\\xE9\\xBC\\xCC\\xEB|>\\xDD\\xDE\\x0C\\x87\\xE5|\\xBC_\\xF3\\xD3\\x9Bc~\\xB3\\xDE\\xDE\\xD0_O\r\\xCCp7\\x0F\\xDD\\xBBy\\x9A\\xF2i\\xB7\\xDE\\xDDg\\x03W\\xAA-e\\xED]\\xFF?\\x05Q\\xF0)\\x8F:u\\x1A3w\\xEA\\xBC\\xEFb\\x1E\\\\\\x97d\\xA2|\\x18Ux\\xFC\\xB5\\x82\\xE6\\xA5[\\xF21\\x8Fk\\x9E\\x1E\\x17D\\x06\\xFB\\xD4\\xD7\\x1B*\\xB7\\xF1\\x074\\xFF\\xB75\\xBC\\xEF\\xBF\\xFD\\x0B\\x9EA\\x90\"?"
		"\\x06\\x00\\x00", 
		LAST);

	/* Search */

	lr_think_time(9);

	web_custom_request("collect_42", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x1F\\x8B\\x08\\x00\\x00\\x00\\x00\\x00\\x00\n\\xC5\\x94M\\x8B\\xE46\\x10\\x86\\xFF\\xCA \\xC8\\xAD4Q}\\xE8k\\x16\\x1F\\x02!\\xB0\\x87%\\x90@.\\x8DY\\xDC\\xB6z\\xDA\\xBB\\xEE\\xF6\\xD0v\\xCFd\t\\xF9\\xEFAVw\\xCFt\\xC8\\xECa?\\xC8\\xC5\\xB2\\x1F\\x95Jo\\xBD*\\xF9/\\x95\\xD4\\xDDJ\\x99[\\x7FKF\\x81\\x03\\x0C\\x91\\x19\"\\xA3\\x01\\x15\\xA3\\x9F\\xDA\\xF4\\xE1\\xD1\\xEC\\x15(\\x94\\xF1\\xE9\\xC3\\xC0\n"
		"\\xD4\\xBD\\xF3\\xF7\\xFCQ\\x81\\x05\\x03\\xA6\\x06\\xD5\\xA8\\xBB\\xD5\\x8A\\x18%\\x02\\x12xt\\x80\\x86\\x1D r\r+\\x12t6s\\x16\\x064y\\x92p\\xE1d\\xDC\\x99G+\\x80\\xEC\\x0B\\xA6%\ry\\x84\\x10\\x1D\\xA0\\x9C\\xA2]\\xB8`6\\x80b\n\\xF6\\xFE\\x8C}\\xCCI\\xE2\\x82\\x99\\xFC9\\xB7\\xF3\\x0CH\\xA1`\\x87glC\\xDEF\n\\xF6\\x97h\\xEB\\x08\\x90\\x8Ap)J2\\x96h\\x00\\xC9\\x15,r\\xC1!\\xE3\\xA2\\xDB\\xF33&"
		"\\x0B\\xC8%\\x89\\xB7\\x97-\\x05\\x11\\x90m\\xC1\\x81\\xCE\\xBA\\xD9\\x19@.\\x02\\x03\\xD39\\x9A\\xB3\\x85\\\\\\xAA\\x0C\\xCF\\xBA9\\x8B\\xC2S\\xB4\\x0F\\xD7\\xB8X\\x15q\\xD1m}N\\x82\\x10\\x8B\\xECXd_\\xE8)\\xB6\\x94^(AX\\xEC\\xB3\\xC6\\xC4+\\x1A\n\\x15{E\\xB9\\xD0\\xE8\\xAE(-\\x14_\\xE6\\xC53%\\xB4W\\xB4d\\x10\\xCA\\xBE\\xFC\\x9B:\\xF6\\x80\\xF2_4\\xBE\\x80\\xF9\\x0C1{\\xE6\\x83\\xCF\\xED\\x08\\x06\\xF6\\xC7a(\\x0FEOc\\xDB\\xDA\\xF6\\xE1\\x16\\x1F7\\xC9\\x1C>q\\xA7 \\xD7]\\x9A\\\\ "
		"\\xBB\\xEA\\x18P\\xAC/o6\\xF2\\x92\\x03M4\\xE0\\x040xY\\xA4\\x07\\x92<C\\xE0\\xB2\\xD9\\x10\\xF2b\\x06\\x0B\\x18\\x00\rX \\x0B\\xE5d\\x97@v\\xE0`\\x85\\x91|^\\x841\\xC4\\x90\\x173\\xDA\\xDC\\xA6@\\xECsS\\x02\t\\x06\\x03Q\\x80$r\\xDE6{\\x11\\x97\\xD1\t\\xE5\\xD1\\x13\\xBA<\\x06\\xCA\\xDFu]\\x83z(\\xB7\\x8D\\xD8\\x80\\x03+\\x04\\x18\\x85@\\xFD\\xFC\\xF6\\x0F\\x05\\xAA\\xEF\\xAA\\x9F\\xF6\\xFB\\xF1\\xB8o\\xD3.\\xED\\xE7\\xDF\\x87\\xBEK\\xDAx\\x17S+\\x9D\\x96\\x90P\\x8BuN\\x87\\xD4X\\x1D\\xA93i\\xDD\n"
		"a\\xBBV\\xA0\\xDA\\xA1\\x99\\xA6j\\xCAK\\xA6\\xED\\xF8\\xF4\\xFE\\xFD\\xF2z\\xD3\\xBC\\xC8\\xA7\\x17tx\\x9E\\xEAw\\xCD\\x9C\\xF4x\\x9C\\x15\\xA8\\xAE\\x99\\x1B\\xDD\\xEF\\xBB\\xF4ge\\x14\\xA8i\\xFE4\\xA4\\xEAa\\x9C\\xFA\\xB9\\x1F\\xF7w7\\xCDz\\x1A\\x87\\xE3\\x9C\\xDE\\xDC\\x0Ci3\\xDF\\xDD\\x98\\x1F\\xDE(P\\xCD\\xA1o\\xF4\\xB6\\xEF\\xBA\\xB4\\xAF\\xE6\\xC31)\\xB0\\xF9?\\x91K\\xCA\\xB5\\xAD\\xA4~\\xA5(\\xDC\\xF0\\x86E:m7\\x1E\\xB54]\\xD0Q\\xE2Z#E\\xC2hZq-}"
		"QQ\\xFD\\xA4\\xA74\\xA4vN\\xDDuQ\\xA8`\\x15\\xEA|\\xC6\\xCB\\xF1\\xFD\\xCF\\xE6\\x7F3\\xC3OW0\\x82\\x03q\\x02\\x1C\\x18\\xD4/\\xBF\\xFE\\xF6.\\xC7\\xB69S\\xF5\\xE3\\x94\\x9AC\\xBBU\\xA0vi\\xDE\\x8E]u\\x9F\\xF2y\\x1F\\xC6!U\\x97\\xA9S\\x01\\xFD\\x9C\\xF465E\\xE72\\xA77\\xE3a\\x97]\\xCD\\xD9\\x1E/\\xBA\\xBB\\xE6\\xF0\\xB1\\xDA4\\xC3\\x94Is\\x9C\\xC7v\\xDC=\\x0CiN\\xD5\\xB8\\xD9\\xA8\\xD3M\\xA2\\xC5\\xE5\\x17\\xFD\\xF09\\xA7\\xBF"
		"[G\\xBC\\xDA\\xE6\\xF8Um.\\xE7\\xB2\\x18V\\xF6\\xB56\\x8Fb\\x8D\\xE3hu\\xDBD\\xA3\\xC5\\x92\\xD3\\xEB\\xB6]k\\x92\\x0Ec\\x10\\xD7\\xB5\\xDD\\x97\\xDD\\xDDW\\xDB\\x9C\\x14\\xACb]\\xD7\\x7F\\xFF\\x03m|\\x0F\\xD4\\x1B\\x08\\x00\\x00", 
		LAST);

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

	web_custom_request("collect_43", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661541151&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=2&sid=1708661464&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&dt="
		"Account%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=23468&tfd=33044", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_44", 
		"URL=https://u.clarity.ms/collect", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"e\":[\"0.7.20\",7,28243,3504,\"997scejv0n\",\"14owjl3\",\"g67g3k\",5,1,1],\"a\":[[29053,27,573,\"\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2 \\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\"],[30654,42,573,\"search\",\"\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2 \\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\",\"9hka7\"],[30654,9,575,566,88,16383,16783,0,0,0,\""
		".\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA-\\xE2\\x96\\xAB{\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA:\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA;\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA\\xE2\\x96\\xAA:#\",null,\"3xrnkhz4z.w2mha6fn\",1],[30663,39,464],[31686,26,\"pagehide\"],[28243,4,1,1263,1457,1263,593,0,0,331,83,28242],[31747,1,4,[\"google.com\",\"www.google.com\",\"www.google.co.in\"]],[31747,0,2,809,3,12,4,13,5,18,25,19"
		"],[31747,36,6,[28774,1,29306,0,29930,0,30110,16,30338,93,30656,60,30848,0]]],\"p\":[[28774,6,543,1942,542,\"DIV\",\"id=AnnouncementSlide-1f3f344d-5f71-4ad8-949b-1292190c46c2\",\"class=slideshow__slide announcement-slider__slide\",\"data-index=1\",\"style=position: absolute; left: 0%;\",\"aria-hidden=true\"],[30110,6,318,276,\"DIV\",\"id=PredictiveWrapper\",\"class=\",\"data-image-size=square\",2082,420,\"*T\",\"\\\\n          \",2083,420,2082,[4],\"data-type-products=\",2084,2083,[10],\"\\\\n     "
		"       \",2085,2083,2084,[4],\"class=new-grid product-grid\",\"data-view=small\",2086,2083,2085,[10,11],2087,2085,[10],\"\\\\n              \\\\n        \",2088,2085,2087,[4],\"class=grid-item grid-product\",2089,2085,2088,[10],\"\\\\n      \\\\n        \",2090,2085,2089,[4,39],2091,2085,2090,[10,44],2092,2085,2091,[4,39],2093,2085,2092,[10,44],2094,2085,2093,[4,39],2095,2085,2094,[10],\"\\\\n      \\\\n            \",2096,2088,[10,11],2097,2088,2096,[4],\"class=grid-item__content\",2098,2088,2097"
		",[10],\"\\\\n        \",2099,2090,[10,11],2100,2090,2099,[4,77],2101,2090,2100,[10,82],2102,2092,[10,11],2103,2092,2102,[4,77],2104,2092,2103,[10,82],2105,2094,[10,11],2106,2094,2105,[4,77],2107,2094,2106,[10,82],2108,2097,[10,20],2109,2097,2108,\"A\",\"href=/products/kerala-fish-curry-with-coconut-milk-200g-pouch?_pos=1&_psq=coconut&_ss=e&_v=1.0\",\"class=grid-item__link\",2110,2097,2109,[10,11],2111,2100,[10,20],2112,2100,2111,[122],\"href=/products/ready-to-eat-soya-coconut-fry-200g?_pos=2&_psq"
		"=coconut&_ss=e&_v=1.0\",[124],2113,2100,2112,[10,11],2114,2103,[10,20],2115,2103,2114,[122],\"href=/products/kerala-fish-curry-with-coconut-milk-185g?_pos=3&_psq=coconut&_ss=e&_v=1.0\",[124],2116,2103,2115,[10,11],2117,2106,[10,20],2118,2106,2117,[122],\"href=/products/roasted-coconut-paste-200g?_pos=4&_psq=coconut&_ss=e&_v=1.0\",[124],2119,2106,2118,[10,11],2120,2109,[10],\"\\\\n              \",2121,2109,2120,[4],\"class=grid-product__image-wrap\",2122,2109,2121,[10,171],2123,2109,2122,[4],\""
		"class=grid-item__meta\",2124,2109,2123,[10,20],2125,2112,[10,171],2126,2112,2125,[4,176],2127,2112,2126,[10,171],2128,2112,2127,[4,185],2129,2112,2128,[10,20],2130,2115,[10,171],2131,2115,2130,[4,176],2132,2115,2131,[10,171],2133,2115,2132,[4,185],2134,2115,2133,[10,20],2135,2118,[10,171],2136,2118,2135,[4,176],2137,2118,2136,[10,171],2138,2118,2137,[4,185],2139,2118,2138,[10,20],2140,2121,[10],\"\\\\n                \\\\n        \",2141,2121,2140,[4],\"class=grid__image-ratio "
		"grid__image-ratio--square\",2142,2121,2141,[10],\"\\\\n      \\\\n              \",2143,2123,[10],\"\\\\n                \",2144,2123,2143,[4],\"class=grid-product__title\",2145,2123,2144,[10,171],2146,2126,[10,250],2147,2126,2146,[4,255],2148,2126,2147,[10,260],2149,2128,[10,264],2150,2128,2149,[4,269],2151,2128,2150,[10,171],2152,2131,[10,250],2153,2131,2152,[4,255],2154,2131,2153,[10,260],2155,2133,[10,264],2156,2133,2155,[4,269],2157,2133,2156,[10,171],2158,2136,[10,250],2159,2136,2158,[4,255]"
		",2160,2136,2159,[10,260],2161,2138,[10,264],2162,2138,2161,[4,269],2163,2138,2162,[10,171],2164,2141,[10,11],2165,2141,2164,\"IMG\",\"class=lazyload\",\"data-src=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_{width}x.jpg?v=1689068036\",\"data-widths=[360, 540, 720, 900, 1080]\",\"data-aspectratio=undefined\",\"data-sizes=auto\",2166,2141,2165,[10,82],2167,2144,[10],\"Kerala Fish Curry With Coconut Milk \\xE2\\x96\\xAB\\xE2\\x96\\xAB\\xE2\\x96\\xAB\\xE2\\x96\\xAA\","
		"2168,2147,[10,11],2169,2147,2168,[346,347],\"data-src=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_{width}x.jpg?v=1682743153\",[349,350,351],2170,2147,2169,[10,82],2171,2150,[10],\"Soya Coconut Fry \\xE2\\x96\\xAB\\xE2\\x96\\xAB\\xE2\\x96\\xAB\\xE2\\x96\\xAA\",2172,2153,[10,11],2173,2153,2172,[346,347],\"data-src=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_{width}x.jpg?v=1647932325\",[349,"
		"350,351],2174,2153,2173,[10,82],2175,2156,[10,359],2176,2159,[10,11],2177,2159,2176,[346,347],\"data-src=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_{width}x.jpg?v=1693655397\",[349,350,351],2178,2159,2177,[10,82],2179,2162,[10],\"Roasted Coconut Paste \\xE2\\x96\\xAB\\xE2\\x96\\xAB\\xE2\\x96\\xAB\\xE2\\x96\\xAA\",2180,420,2083,[10,82],276,238,275,[4],\"id=SearchResultsWrapper\",\"class=site-header__search-results\"],[30124,6,2165,2141,2164,\"IMG\",\"class=lazyload\""
		",\"data-widths=[360, 540, 720, 900, 1080]\",\"data-aspectratio=undefined\",\"data-sizes=auto\",\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_360x.jpg?v=1689068036 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_540x.jpg?v=1689068036 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_720x.jpg?v=1689068036 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/"
		"Kfccoconutmilkfrontside_900x.jpg?v=1689068036 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_1080x.jpg?v=1689068036 1080w\",2169,2147,2168,[5,6,7,8,9],\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_360x.jpg?v=1682743153 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_540x.jpg?v=1682743153 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_720x.jpg?v=1682743153 720w, https"
		"://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_900x.jpg?v=1682743153 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_1080x.jpg?v=1682743153 1080w\",2173,2153,2172,[5,6,7,8,9],\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_360x.jpg?v=1647932325 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/"
		"tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_540x.jpg?v=1647932325 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_720x.jpg?v=1647932325 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_900x.jpg?v=1647932325 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/"
		"tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_1080x.jpg?v=1647932325 1080w\",2177,2159,2176,[5,6,7,8,9],\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_360x.jpg?v=1693655397 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_540x.jpg?v=1693655397 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_720x.jpg?v=1693655397 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/"
		"files/Roastedcoconutpaste_900x.jpg?v=1693655397 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_1080x.jpg?v=1693655397 1080w\"],[30126,6,2165,2141,2164,\"IMG\",\"class= lazyautosizes lazyloading\",\"data-widths=[360, 540, 720, 900, 1080]\",\"data-aspectratio=undefined\",\"data-sizes=auto\",\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_360x.jpg?v=1689068036 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/"
		"Kfccoconutmilkfrontside_540x.jpg?v=1689068036 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_720x.jpg?v=1689068036 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_900x.jpg?v=1689068036 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_1080x.jpg?v=1689068036 1080w\",\"sizes=258px\",\"srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_360x.jpg?v=1689068036 "
		"360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_540x.jpg?v=1689068036 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_720x.jpg?v=1689068036 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_900x.jpg?v=1689068036 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_1080x.jpg?v=1689068036 1080w\",2169,2147,2168,[5,6,7,8,9],\"data-srcset=https://cdn.shopify.com/"
		"s/files/1/0559/2586/6671/products/Frontside_2_360x.jpg?v=1682743153 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_540x.jpg?v=1682743153 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_720x.jpg?v=1682743153 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_900x.jpg?v=1682743153 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_1080x.jpg?v=1682743153 1080w\",[11],\"srcset=https://"
		"cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_360x.jpg?v=1682743153 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_540x.jpg?v=1682743153 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_720x.jpg?v=1682743153 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_900x.jpg?v=1682743153 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_1080x.jpg?v=1682743153 1080w\",2173,2153,2172,[5"
		",6,7,8,9],\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_360x.jpg?v=1647932325 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_540x.jpg?v=1647932325 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_720x.jpg?v=1647932325 720w, https:/"
		"/cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_900x.jpg?v=1647932325 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_1080x.jpg?v=1647932325 1080w\",[11],\"srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_360x.jpg?v=1647932325 360w, https://"
		"cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_540x.jpg?v=1647932325 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_720x.jpg?v=1647932325 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_900x.jpg?v=1647932325 900w, https://cdn.shopify.com/s/files/1/0559/"
		"2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_1080x.jpg?v=1647932325 1080w\",2177,2159,2176,[5,6,7,8,9],\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_360x.jpg?v=1693655397 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_540x.jpg?v=1693655397 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_720x.jpg?v=1693655397 720w, https://cdn.shopify.com/s/files"
		"/1/0559/2586/6671/files/Roastedcoconutpaste_900x.jpg?v=1693655397 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_1080x.jpg?v=1693655397 1080w\",[11],\"srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_360x.jpg?v=1693655397 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_540x.jpg?v=1693655397 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_720x.jpg?v=1693655397 720w, "
		"https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_900x.jpg?v=1693655397 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_1080x.jpg?v=1693655397 1080w\"],[30338,6,2173,2153,2172,\"IMG\",\"class=lazyautosizes lazyloaded\",\"data-widths=[360, 540, 720, 900, 1080]\",\"data-aspectratio=undefined\",\"data-sizes=auto\",\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/"
		"tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_360x.jpg?v=1647932325 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_540x.jpg?v=1647932325 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_720x.jpg?v=1647932325 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/"
		"tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_900x.jpg?v=1647932325 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_1080x.jpg?v=1647932325 1080w\",\"sizes=258px\",\"srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_360x.jpg?v=1647932325 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/"
		"tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_540x.jpg?v=1647932325 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_720x.jpg?v=1647932325 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_900x.jpg?v=1647932325 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/"
		"tinmockups-kfishcurrywihcoconut-2_86579043-1e07-4ef4-b659-1705dcb2e39a_1080x.jpg?v=1647932325 1080w\"],[30401,6,2165,2141,2164,\"IMG\",\"class=lazyautosizes lazyloaded\",\"data-widths=[360, 540, 720, 900, 1080]\",\"data-aspectratio=undefined\",\"data-sizes=auto\",\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_360x.jpg?v=1689068036 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_540x.jpg?v=1689068036 540w, https://"
		"cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_720x.jpg?v=1689068036 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_900x.jpg?v=1689068036 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_1080x.jpg?v=1689068036 1080w\",\"sizes=258px\",\"srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_360x.jpg?v=1689068036 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files"
		"/Kfccoconutmilkfrontside_540x.jpg?v=1689068036 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_720x.jpg?v=1689068036 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_900x.jpg?v=1689068036 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Kfccoconutmilkfrontside_1080x.jpg?v=1689068036 1080w\",2177,2159,2176,[5,6,7,8,9],\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_360x.jpg?"
		"v=1693655397 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_540x.jpg?v=1693655397 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_720x.jpg?v=1693655397 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_900x.jpg?v=1693655397 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_1080x.jpg?v=1693655397 1080w\",[11],\"srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/files"
		"/Roastedcoconutpaste_360x.jpg?v=1693655397 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_540x.jpg?v=1693655397 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_720x.jpg?v=1693655397 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_900x.jpg?v=1693655397 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/files/Roastedcoconutpaste_1080x.jpg?v=1693655397 1080w\"],[30431,6,2169,2147,2168,\"IMG\",\""
		"class=lazyautosizes lazyloaded\",\"data-widths=[360, 540, 720, 900, 1080]\",\"data-aspectratio=undefined\",\"data-sizes=auto\",\"data-srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_360x.jpg?v=1682743153 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_540x.jpg?v=1682743153 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_720x.jpg?v=1682743153 720w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/"
		"Frontside_2_900x.jpg?v=1682743153 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_1080x.jpg?v=1682743153 1080w\",\"sizes=258px\",\"srcset=https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_360x.jpg?v=1682743153 360w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_540x.jpg?v=1682743153 540w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_720x.jpg?v=1682743153 720w, https://cdn.shopify.com/s/files/1/0559/"
		"2586/6671/products/Frontside_2_900x.jpg?v=1682743153 900w, https://cdn.shopify.com/s/files/1/0559/2586/6671/products/Frontside_2_1080x.jpg?v=1682743153 1080w\"],[30656,6,464,383,\"FORM\",\"action=/search\",\"method=get\",\"role=search\",\"class=site-header__search-form is-active\",\"data-dark=false\",\"autocomplete=off\",\"data-gtm-form-interact-id=0\",573,464,572,\"INPUT\",\"type=search\",\"name=q\",\"value=\",\"placeholder="
		"\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\\xE2\\x80\\xA2\",\"class=site-header__search-input\",\"aria-label=Search...\",\"data-gtm-form-interact-field-id=\\xE2\\x80\\xA2\"],[30716,6,2181,5,2068,\"IFRAME\",\"allow=join-ad-interest-group\",\"data-tagging-id=AW-378882101\",\"data-load-time=1708661572048\",\"height=0\",\"width=0\",\"style=display: none; visibility: hidden;\",\"src=https://td.doubleclick.net/td/rul/378882101"
		"?random=1708661572022&cv=11&fst=1708661572022&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45be42l0za200&gcd=13l3l3l3l1&dma=0&u_w=1280&u_h=720&url=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&ref=https%3A%2F%2Fwww.tastynibbles.in%2F&hn=www.googleadservices.com&frm=0&tiba=Account%20%E2%80%93%20Tasty%20Nibbles&npa=0&pscdl=noapi&auid=1447326640.1708661465&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uap=Windows&uapv=10.0.0&uaw=0&fledge="
		"1&data=event%3Dform_start\",\"*O=true\",2182,2181,\"iframe:HTML\",2183,2182,\"HEAD\",\"*B=about://blank\",2184,2182,2183,\"BODY\"],[30848,6,2181,5,2068,\"IFRAME\",\"allow=join-ad-interest-group\",\"data-tagging-id=AW-378882101\",\"data-load-time=1708661572048\",\"height=0\",\"width=0\",\"style=display: none; visibility: hidden;\",\"src=https://td.doubleclick.net/td/rul/378882101?random=1708661572022&cv=11&fst=1708661572022&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45be42l0za200&gcd=13l3l3l3l1&dma=0&u_w="
		"1280&u_h=720&url=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&ref=https%3A%2F%2Fwww.tastynibbles.in%2F&hn=www.googleadservices.com&frm=0&tiba=Account%20%E2%80%93%20Tasty%20Nibbles&npa=0&pscdl=noapi&auid=1447326640.1708661465&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uap=Windows&uapv=10.0.0&uaw=0&fledge=1&data=event%3Dform_start\"]]}", 
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

	web_custom_request("v3_3", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=KTqE00CftVTqF0IwuQVSOl26pOFV%2FcaBPrWRoQHXBKd6QfFWJkZI6gxdwgkv10W0XprolG2eB4XswLEHaGgCQ4iJPGjAllmlufF0QdXfV9stjMF%2BdJmQmGyNk%2F3f", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v3_4", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=j55ibMQEGX3Mg9OHYF6%2BG4YBbAqt3I9d%2FtkO5mJHPVWcSLErQhzw1LRcJGbO7ym5pNEfWcQHeHfwGdegqFHVh86Q7Vx0WMdYWQq7%2F0Ix0%2FYQZFTTPxduZATOPswKwMUs3a2xC%2FE%3D", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_45", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661574360&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=1&dp=%2Fsearch&dt=Search%3A%2056%20results%20found%20for%20%22Coconut*%22%20%E2%80%93%20Tasty%20Nibbles&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2Fsearch%3Fq%3Dcoconut*%26type%3Dproduct%252carticle&sid=1708661464&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&en=page_view&_ee=1&tfd=7831", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=", 
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

	web_custom_request("collect_46", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661574360&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=2&sid=1708661464&sct=1&seg=1&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2Fsearch%3Ftype%3Dproduct%252Carticle%26options%5Bprefix%5D%3Dlast%26q%3DCoconut*&dr=https%3A%2F%2Fwww.tastynibbles.in%2Faccount&dt=Search%3A%2056%20results%20found%20for%20%22Coconut*%22%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=22897&tfd=40869", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=", 
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

	web_custom_request("collect_47", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661613123&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&dt=Soya%20Coconut%20Fry%20200g%20%E2%80%93%20Tasty%20Nibbles&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2Fproducts%2Fready-to-eat-soya-coconut-fry-200g%3F_pos%3D1%26_sid%3D19c5d7ae0%26_ss%3Dr&sid=1708661464&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2Fsearch%3Ftype%3Dproduct%252Carticle%26options%5Bprefix%5D%3Dlast%26q%3DCoconut*&_s=1&tfd=6307", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=page_view&_ee=1&dp=%2Fproducts%2Fready-to-eat-soya-coconut-fry-200g\r\nen=view_item&_ee=1&pr1=idshopify_IN_7465768911023_42333547233455~nmSoya%20Coconut%20Fry%20200g%20-%20Pack%206~brTasty%20Nibbles~caReady%20to%20Eat%20Veg~pr873.00~vaPack%206&ep.ecomm_prodid=shopify_IN_7465768911023_42333547233455&ep.ecomm_totalvalue=NaN&ep.ecomm_pagetype=product&_et=3", 
		LAST);

	lr_think_time(4);

	web_url("c1a778d0cb1e42f1_6", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
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

	web_custom_request("v3_5", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=kg6h3ofkizk2NaG3qKTS5pfLpSJ82vz0LGBVrFRdE2ZSFa8W%2FSTC%2FaQjQVL6sSFZ3o%2F3KrODgVcPbl8Iu65CMUaJg2DyNhZ5MkYOjY7Ob2Lx3lbKM5Xntn4sNOOY", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v3_6", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=AdUq1L0KBHOJKsd2prTDr4RXOPB6IRdiSVxxaLtN0xEE%2B3IT%2B%2FRUJEJbgjij7YaX75Jd9y2gcne3AXz9EoKuvIQfSjIbP6O9f71gxTKHj8H05CRRt%2BCw9lTiMIOdtJ2ql3dF2tM%3D", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1447326640.1708661465.349608742.1708661529.1708661638; DOMAIN=www.tastynibbles.in");

	web_add_cookie("cart_currency=INR; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708661463.1.1.1708661639.33.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_42", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661639185},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42bf14a-F08F-4FDB-B053-256ECFAED65A\",\"products\":[\"{\\\"variant_id\\\":42333547233455,\\\"product_id\\\":7465768911023,\\\"name\\\":\\\"Soya Coconut Fry 200g - Pack 6\\\",\\\"price\\\":873,\\\"sku\\\":\\\"CPDFG31705\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":\\\"Pack 6\\\",\\\"category\\\":\\\"Ready to Eat Veg\\\",\\\"quantity\\\""
		":1}\"],\"total_value\":873,\"currency\":\"INR\",\"cart_token\":\"Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMzJEUktOTktYV0RDMzkwUzYxOEo4\",\"event_name\":\"product_added_to_cart\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661639184,\"event_source_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\""
		"d42b2599-4B02-40DD-EED6-755641006312\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\""
		"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\"sh-d42b259f-815F-4528-D26B-E726DE8FE876\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661639185}}]}", 
		LAST);

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
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661641605},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42c0439-0E79-4247-A2EC-82F99AAF91F8\",\"products\":[\"{\\\"variant_id\\\":42727349354671,\\\"product_id\\\":7601499078831,\\\"name\\\":\\\"Vegetable Fish Curry 200g\\\",\\\"price\\\":150,\\\"sku\\\":\\\"CPDFG31859\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":null,\\\"category\\\":\\\"\\\",\\\"quantity\\\":1}\"],\"total_value\":150,\""
		"currency\":\"INR\",\"cart_token\":\"Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMzJEUktOTktYV0RDMzkwUzYxOEo4\",\"event_name\":\"product_added_to_cart\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661641604,\"event_source_url\":\"https://www.tastynibbles.in/products/ready-to-eat-soya-coconut-fry-200g?_pos=1&_sid=19c5d7ae0&_ss=r\",\"unique_token\":\"b3641be2-7e1b-42c3-9050-d6d80c90fd35\",\"page_id\":\"d42b2599-4B02-40DD-EED6-755641006312\",\""
		"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36\",\"is_persistent_cookie\":true,\"customer_id\":7180378964143,\"deprecated_visit_token\":\"abfef3d2-5f62-46c0-bf31-c6460fa45d60\",\"session_id\":\""
		"sh-d42b259f-815F-4528-D26B-E726DE8FE876\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661641605}}]}", 
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

	web_custom_request("collect_48", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661613123&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=2&sid=1708661464&sct=1&seg=1&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2Fproducts%2Fready-to-eat-soya-coconut-fry-200g%3F_pos%3D1%26_sid%3D19c5d7ae0%26_ss%3Dr&dr=https%3A%2F%2Fwww.tastynibbles.in%2Fsearch%3Ftype%3Dproduct%252Carticle%26options%5Bprefix%5D%3Dlast%26q%3DCoconut*&dt=Soya%20Coconut%20Fry%20200g%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=13951&tfd=32635", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"EncType=", 
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

	web_custom_request("collect_50", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708661645159&gcd=13l3l3l3l1&npa=0&dma=0&cid=1031507396.1708661463&ul=en-gb&sr=1280x720&uaa=x86&uab=64&uafvl=Not%2520A(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.185%7CChromium%3B121.0.6167.185&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&are=1&pscdl=noapi&_s=2&sid=1708661464&sct=1&seg=1&dl="
		"https%3A%2F%2Fwww.tastynibbles.in%2Fproducts%2Fready-to-eat-soya-coconut-fry-200g%3F_pos%3D1%26_sid%3D19c5d7ae0%26_ss%3Dr&dr=https%3A%2F%2Fwww.tastynibbles.in%2Fproducts%2Fready-to-eat-soya-coconut-fry-200g%3F_pos%3D1%26_sid%3D19c5d7ae0%26_ss%3Dr&dt=Soya%20Coconut%20Fry%20200g%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=9386&tfd=26970", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		"EncType=", 
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