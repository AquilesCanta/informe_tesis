if (extension()->currentlyPlaying->isRelocated){
	_url = std::string("udp://@") + extension()->currentlyPlaying->multicastGroup + std::string(":") +
	   boost::lexical_cast<std::string>(extension()->currentlyPlaying->multicastPort);
}else{
	util::Url url;
	extension()->makeURL( "srvdtv", &url );
	_url = url.id();
}