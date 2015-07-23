
bool Service::process( const desc::Descriptors &descriptors ) {
	bool changed = false;
	
	// ...
	// Se excluye la captura de otros descriptores

	{
		desc::ElementaryStreamsRelocationDescriptor d;
		if(DESC_PARSE( descriptors, elementary_streams_relocation, d)){
			isRelocated = true;
			multicastPort = d.port;
			multicastGroup = d.ipMulticast;
		}
	}
	//	Save descriptors
	_descriptors += descriptors;

	return changed;
}


