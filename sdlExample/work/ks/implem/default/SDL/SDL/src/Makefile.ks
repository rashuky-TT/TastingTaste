export ASN1SCC=$(shell which asn1scc)

all:
	gprbuild -p -P ks.gpr          # generate Ada code from the SDL model
	gprbuild -p -P dataview_ada.gpr  # generate Ada code from the ASN.1 model
	gprbuild -p -P code/ks_ada.gpr      # build the Ada code
clean:
	rm -rf obj code