
bool Service::process(const desc::Descriptors &descriptors) {
	bool changed = false;
	
	// ...
	// Se excluye la captura de otros descriptores

	{
		desc::ElementaryStreamsRelocationDescriptor d;
		if(DESC_PARSE(descriptors, elementary_streams_relocation, d)){
			_isRelocated = true;
			_multicastPort = d.port;
			_multicastGroup = d.ipMulticast;
		}
	}
	//	Save descriptors
	_descriptors += descriptors;

	return changed;
}


