import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/st/ywfBot_ws_v1.3.1/install/py_action_client'
