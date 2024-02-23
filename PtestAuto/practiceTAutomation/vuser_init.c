/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("practice-test-login", 
		"URL=https://practicetestautomation.com/practice-test-login/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../wp-includes/js/mediaelement/mediaelementplayer-legacy.min.css?ver=4.2.17", ENDITEM, 
		"Url=../wp-includes/css/dist/block-library/style.min.css?ver=6.4.3", ENDITEM, 
		"Url=../wp-includes/js/mediaelement/wp-mediaelement.min.css?ver=6.4.3", ENDITEM, 
		"Url=../wp-content/themes/modern-store-modified/assets/font-awesome/css/all.min.css?ver=6.4.3", ENDITEM, 
		"Url=../wp-content/plugins/bluehost-wordpress-plugin/vendor/newfold-labs/wp-module-patterns/assets/build/utilities.css?ver=0.1.13", ENDITEM, 
		"Url=../wp-content/plugins/bluehost-wordpress-plugin/vendor/newfold-labs/wp-module-patterns/assets/build/utilities.js?ver=0.1.13", ENDITEM, 
		"Url=../wp-includes/js/jquery/jquery.min.js?ver=3.7.1", ENDITEM, 
		"Url=../wp-content/themes/modern-store-modified/style.css?ver=6.4.3", ENDITEM, 
		"Url=../wp-includes/js/jquery/jquery-migrate.min.js?ver=3.4.1", ENDITEM, 
		"Url=../wp-content/plugins/jetpack/css/jetpack.css?ver=13.1.3", ENDITEM, 
		"Url=https://i0.wp.com/practicetestautomation.com/wp-content/uploads/2019/10/Logo-1.png?w=305&ssl=1", "Referer=https://practicetestautomation.com/", ENDITEM, 
		"Url=https://fonts.googleapis.com/css?family=Lato%3A400%2C400i%2C900&ver=6.4.3", "Referer=https://practicetestautomation.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/lato/v24/S6uyw4BMUTPHjx4wXg.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/lato/v24/S6u9w4BMUTPHh50XSwiPGQ.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		"Url=../wp-includes/js/wp-emoji-release.min.js?ver=6.4.3", ENDITEM, 
		"Url=https://i0.wp.com/practicetestautomation.com/wp-content/uploads/2019/10/cropped-5.png?fit=32%2C32&ssl=1", "Referer=https://practicetestautomation.com/", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xODUSIAna4ms2kUmHHhIFDeeNQA4SBQ3OQUx6If65cGe-1Ni9?alt=proto", "Referer=", ENDITEM, 
		LAST);

	/* Login */

	return 0;
}
