
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages || mkdir -p $(DESTDIR)/home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages
	cp -f sipconfig.py $(DESTDIR)/home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/sipconfig.py
	cp -f /home/amankaushik/pyProjects/newsnotify/sip/sipdistutils.py $(DESTDIR)/home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
