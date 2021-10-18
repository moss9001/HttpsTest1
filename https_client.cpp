//#pragma comment(lib, "libboost_system-vc141-mt-gd-x32-1_67.lib")
//#pragma comment(lib, "libboost_thread-vc141-mt-gd-x32-1_67.lib")

#include <iostream>
#include "https_call.h"


int main() {

	using namespace peerplays::net;

	HttpRequest request;

	request.method = "POST";
	request.path = "/";
	request.headers = "";
	request.body = "{\"jsonrpc\":\"2.0\", \"method\":\"condenser_api.get_witness_by_account\", \"params\":[\"hiveio\"], \"id\":1}";
	request.contentType = "application/json";

	HttpResponse response;

	HttpsCall call("api.hive.blog");

	call.exec(request, &response);

	std::cout << response.statusCode << " " << response.body;


	return 0;
}
