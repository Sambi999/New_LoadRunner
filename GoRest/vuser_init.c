/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("gorest.co.in", 
		"URL=https://gorest.co.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);


	web_add_cookie("_ga=GA1.1.1408956123.1708600436; DOMAIN=gorest.co.in");

	web_add_cookie("__gads=ID=6828b95a8b238991:T=1708601064:RT=1708601064:S=ALNI_MZD-kivJoa_kGrAsMGd6gR9GY24wA; DOMAIN=gorest.co.in");

	web_add_cookie("__gpi=UID=00000d0de22224e5:T=1708601064:RT=1708601064:S=ALNI_MY7G9p93kGng_51LL48DrnfTf2NDA; DOMAIN=gorest.co.in");

	web_add_cookie("__eoi=ID=a328d2989dcbe9e4:T=1708601064:RT=1708601064:S=AA-Afjallb4U8oEduD4rorTogoJv; DOMAIN=gorest.co.in");

	web_add_cookie("_ga_7KR6VNWHWS=GS1.1.1708600435.1.0.1708600451.0.0.0; DOMAIN=gorest.co.in");

	web_add_cookie("FCNEC=%5B%5B%22AKsRol_ULQKyWGoQe8YCl9kRFcd4B0jNRu--fXUwOYUP2xBQY85elHx_IAUwsObgrQP56AVUdVBoeS9r0DJKsnmXMAPgL5-PG3oF6pgBqYe9XOYZUMXiqJVHsXoFACEO80LY5JNZzYooswHUqK3_q2FrmLy1gxS2vQ%3D%3D%22%5D%5D; DOMAIN=gorest.co.in");

	web_url("posts", 
		"URL=https://gorest.co.in/public/v2/posts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://gorest.co.in/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		LAST);


	/* get /users  */


    
    // Set up the request headers
    web_add_header("Accept", "application/json");
    web_add_header("Content-Type", "application/json");
    web_add_header("Authorization", "Bearer 1b857f5dddd9d1678c1fae1c1a9d982ffba85b0d7b68c3c19f361bc016a5ca4c");
    
    // Send the POST request
web_custom_request("Create User Request",
    "URL=https://gorest.co.in/public/v2/users",
    "Method=POST",
    "EncType=application/json",
    "Body={\"name\":\"XXX\", \"gender\":\"male\", \"email\":\"xxx@yyy.com\", \"status\":\"INactive\"}",
    LAST);

	
	web_url("users", 
		"URL=https://gorest.co.in/public/v2/users", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://gorest.co.in/", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	

	return 0;
}