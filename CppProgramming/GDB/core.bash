#!/bin/bash
sudo chmod 755 core.bash
echo "if ! grep -qi 'kernel.core_pattern' /etc/sysctl.conf; then
  sudo sh -c 'echo "kernel.core_pattern=core.%p.%u.%s.%e.%t" >> /etc/sysctl.conf'
  sudo sysctl -p
fi
ulimit -c unlimited" >> run.bash
sudo chmod 755 run.bash
./run.bash
if echo $? == 0; then echo "success"
else
	echo "failure"
fi

