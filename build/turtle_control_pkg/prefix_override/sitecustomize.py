import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/omar-magdy/Autonomous_repo/install/turtle_control_pkg'
