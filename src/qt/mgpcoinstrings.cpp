

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *mgpcoin_strings[] = {
QT_TRANSLATE_NOOP("mgpcoin", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Cannot obtain a lock on data directory %s. Mgpcoin is probably already "
"running."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Disable all Mgpcoin specific functionality (Masternodes, SwiftTX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Enable SwiftTX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Fees (in MGP/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Fees (in MGP/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"SwiftTX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"To use mgpcoind, or the -server option to mgpcoin-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=mgpcoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Mgpcoin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Unable to bind to %s on this computer. Mgpcoin is probably already running."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"MGP."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Mgpcoin will not work properly."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("mgpcoin", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("mgpcoin", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("mgpcoin", "(62311 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("mgpcoin", "(default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "(default: 1)"),
QT_TRANSLATE_NOOP("mgpcoin", "(must be 62311 for mainnet)"),
QT_TRANSLATE_NOOP("mgpcoin", "<category> can be:"),
QT_TRANSLATE_NOOP("mgpcoin", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("mgpcoin", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("mgpcoin", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("mgpcoin", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("mgpcoin", "Already have that input."),
QT_TRANSLATE_NOOP("mgpcoin", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("mgpcoin", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("mgpcoin", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", "Block creation options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("mgpcoin", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("mgpcoin", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Cannot write default address"),
QT_TRANSLATE_NOOP("mgpcoin", "Collateral not valid."),
QT_TRANSLATE_NOOP("mgpcoin", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("mgpcoin", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("mgpcoin", "Connection options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Copyright (C) 2009-%i  "),
QT_TRANSLATE_NOOP("mgpcoin", "Copyright (C) 2014-%i  "),
QT_TRANSLATE_NOOP("mgpcoin", "Copyright (C) 2015-%i  "),
QT_TRANSLATE_NOOP("mgpcoin", "Copyright (C) 2017-%i The Mgpcoin Developers"),
QT_TRANSLATE_NOOP("mgpcoin", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("mgpcoin", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("mgpcoin", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("mgpcoin", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("mgpcoin", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("mgpcoin", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("mgpcoin", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("mgpcoin", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("mgpcoin", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("mgpcoin", "Done loading"),
QT_TRANSLATE_NOOP("mgpcoin", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("mgpcoin", "Enable publish hash transaction (locked via SwiftTX) in <address>"),
QT_TRANSLATE_NOOP("mgpcoin", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("mgpcoin", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("mgpcoin", "Enable publish raw transaction (locked via SwiftTX) in <address>"),
QT_TRANSLATE_NOOP("mgpcoin", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("mgpcoin", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Entries are full."),
QT_TRANSLATE_NOOP("mgpcoin", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("mgpcoin", "Error initializing block database"),
QT_TRANSLATE_NOOP("mgpcoin", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("mgpcoin", "Error loading block database"),
QT_TRANSLATE_NOOP("mgpcoin", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("mgpcoin", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("mgpcoin", "Error loading wallet.dat: Wallet requires newer version of Mgpcoin"),
QT_TRANSLATE_NOOP("mgpcoin", "Error opening block database"),
QT_TRANSLATE_NOOP("mgpcoin", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("mgpcoin", "Error recovering public key."),
QT_TRANSLATE_NOOP("mgpcoin", "Error"),
QT_TRANSLATE_NOOP("mgpcoin", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("mgpcoin", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("mgpcoin", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("mgpcoin", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("mgpcoin", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("mgpcoin", "Failed to read block index"),
QT_TRANSLATE_NOOP("mgpcoin", "Failed to read block"),
QT_TRANSLATE_NOOP("mgpcoin", "Failed to write block index"),
QT_TRANSLATE_NOOP("mgpcoin", "Fee (in MGP/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Finalizing transaction."),
QT_TRANSLATE_NOOP("mgpcoin", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("mgpcoin", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("mgpcoin", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("mgpcoin", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("mgpcoin", "Importing..."),
QT_TRANSLATE_NOOP("mgpcoin", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("mgpcoin", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Incompatible mode."),
QT_TRANSLATE_NOOP("mgpcoin", "Incompatible version."),
QT_TRANSLATE_NOOP("mgpcoin", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("mgpcoin", "Information"),
QT_TRANSLATE_NOOP("mgpcoin", "Initialization sanity check failed. Mgpcoin is shutting down."),
QT_TRANSLATE_NOOP("mgpcoin", "Input is not valid."),
QT_TRANSLATE_NOOP("mgpcoin", "Insufficient funds"),
QT_TRANSLATE_NOOP("mgpcoin", "Insufficient funds."),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid amount"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid private key."),
QT_TRANSLATE_NOOP("mgpcoin", "Invalid script detected."),
QT_TRANSLATE_NOOP("mgpcoin", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Line: %d"),
QT_TRANSLATE_NOOP("mgpcoin", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Loading addresses..."),
QT_TRANSLATE_NOOP("mgpcoin", "Loading block index..."),
QT_TRANSLATE_NOOP("mgpcoin", "Loading budget cache..."),
QT_TRANSLATE_NOOP("mgpcoin", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("mgpcoin", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("mgpcoin", "Loading sporks..."),
QT_TRANSLATE_NOOP("mgpcoin", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("mgpcoin", "Loading wallet..."),
QT_TRANSLATE_NOOP("mgpcoin", "Lock is already in place."),
QT_TRANSLATE_NOOP("mgpcoin", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Masternode options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Masternode queue is full."),
QT_TRANSLATE_NOOP("mgpcoin", "Masternode:"),
QT_TRANSLATE_NOOP("mgpcoin", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Missing input transaction information."),
QT_TRANSLATE_NOOP("mgpcoin", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "No Masternodes detected."),
QT_TRANSLATE_NOOP("mgpcoin", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("mgpcoin", "Node relay options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("mgpcoin", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("mgpcoin", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("mgpcoin", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("mgpcoin", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("mgpcoin", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("mgpcoin", "Options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("mgpcoin", "Preparing for resync..."),
QT_TRANSLATE_NOOP("mgpcoin", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Print version and exit"),
QT_TRANSLATE_NOOP("mgpcoin", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("mgpcoin", "RPC server options:"),
QT_TRANSLATE_NOOP("mgpcoin", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("mgpcoin", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("mgpcoin", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("mgpcoin", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("mgpcoin", "Rescanning..."),
QT_TRANSLATE_NOOP("mgpcoin", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("mgpcoin", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Session not complete!"),
QT_TRANSLATE_NOOP("mgpcoin", "Session timed out."),
QT_TRANSLATE_NOOP("mgpcoin", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Set the masternode private key"),
QT_TRANSLATE_NOOP("mgpcoin", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("mgpcoin", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("mgpcoin", "Signing failed."),
QT_TRANSLATE_NOOP("mgpcoin", "Signing timed out."),
QT_TRANSLATE_NOOP("mgpcoin", "Signing transaction failed"),
QT_TRANSLATE_NOOP("mgpcoin", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("mgpcoin", "Specify data directory"),
QT_TRANSLATE_NOOP("mgpcoin", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("mgpcoin", "Specify your own public address"),
QT_TRANSLATE_NOOP("mgpcoin", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Staking options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("mgpcoin", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("mgpcoin", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("mgpcoin", "SwiftTX options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Synchronization failed"),
QT_TRANSLATE_NOOP("mgpcoin", "Synchronization finished"),
QT_TRANSLATE_NOOP("mgpcoin", "Synchronization pending..."),
QT_TRANSLATE_NOOP("mgpcoin", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("mgpcoin", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("mgpcoin", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("mgpcoin", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("mgpcoin", "This help message"),
QT_TRANSLATE_NOOP("mgpcoin", " "),
QT_TRANSLATE_NOOP("mgpcoin", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("mgpcoin", "This is not a Masternode."),
QT_TRANSLATE_NOOP("mgpcoin", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("mgpcoin", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Transaction amount too small"),
QT_TRANSLATE_NOOP("mgpcoin", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("mgpcoin", "Transaction created successfully."),
QT_TRANSLATE_NOOP("mgpcoin", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("mgpcoin", "Transaction not valid."),
QT_TRANSLATE_NOOP("mgpcoin", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("mgpcoin", "Transaction too large"),
QT_TRANSLATE_NOOP("mgpcoin", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("mgpcoin", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("mgpcoin", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("mgpcoin", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("mgpcoin", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("mgpcoin", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("mgpcoin", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("mgpcoin", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("mgpcoin", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("mgpcoin", "Use the test network"),
QT_TRANSLATE_NOOP("mgpcoin", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("mgpcoin", "Verifying blocks..."),
QT_TRANSLATE_NOOP("mgpcoin", "Verifying wallet..."),
QT_TRANSLATE_NOOP("mgpcoin", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("mgpcoin", "Wallet is locked."),
QT_TRANSLATE_NOOP("mgpcoin", "Wallet needed to be rewritten: restart Mgpcoin to complete"),
QT_TRANSLATE_NOOP("mgpcoin", "Wallet options:"),
QT_TRANSLATE_NOOP("mgpcoin", "Wallet window title"),
QT_TRANSLATE_NOOP("mgpcoin", "Warning"),
QT_TRANSLATE_NOOP("mgpcoin", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("mgpcoin", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("mgpcoin", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("mgpcoin", "Will retry..."),
QT_TRANSLATE_NOOP("mgpcoin", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("mgpcoin", "Your entries added successfully."),
QT_TRANSLATE_NOOP("mgpcoin", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("mgpcoin", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("mgpcoin", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("mgpcoin", "on startup"),
QT_TRANSLATE_NOOP("mgpcoin", "wallet.dat corrupt, salvage failed"),
};
