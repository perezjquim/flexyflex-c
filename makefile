main: update repackage

update:
	@echo "@Updating files...@"
	@cp -R flexyflex-c/* flexyflex-deb/opt/flexyflex-c/
	@echo "@Files updated!@"

repackage:
	@echo "@Repackaging...@"
	@dpkg-deb --build flexyflex-deb flexyflex-install.deb > /dev/null
	@echo "@Repackaged!@"
