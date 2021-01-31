// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2017 The Mgpcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"
#include "bignum.h"
#include "random.h"
#include "util.h"
#include "utilstrencodings.h"

#include <assert.h>

#include <boost/assign/list_of.hpp>

using namespace std;
using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress>& vSeedsOut, const SeedSpec6* data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7 * 24 * 60 * 60;
    for (unsigned int i = 0; i < count; i++) {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

//   What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions
static Checkpoints::MapCheckpoints mapCheckpoints =
    boost::assign::map_list_of
    (0, uint256("0x000009b718dd8b3296d64d46de0b36d282b7e311983a48cdfc5806c3d5a72f18"));

static const Checkpoints::CCheckpointData data = {
    &mapCheckpoints,
    1611807840, // * UNIX timestamp of last checkpoint block
    0,          // * total number of transactions between genesis and last checkpoint
                //   (the tx=... number in the SetBestChain debug.log lines)
    1        // * estimated number of transactions per day after checkpoint
};

static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of(0, uint256("0x0000009767b34b9aea2a4e31e1e66041de6b39cfc88b179f6955dfb7c0e937d6"));

static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1611811440,
    0,
    1};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of(0, uint256("0x135dc1a294a413c50b64150db028270711a3c67ab2d46265fa6cf062424209e1"));

static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1611815040,
    0,
    1};

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
        strNetworkID = "main";
        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0x4d; // M
        pchMessageStart[1] = 0x4d; // M
        pchMessageStart[2] = 0x47; // G
        pchMessageStart[3] = 0x50; // P
        vAlertPubKey = ParseHex("04c1bea3ac5c3406692150399fc9337b7f7451cbc0b27d54b2b80a199dabd875c7971dd197b0e893e4c49604f08af69bb77a2e0a855def60e6811296f75eba1fc0");
        nDefaultPort = 12121;
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        nSubsidyHalvingInterval = 1050000;
        nMaxReorganizationDepth = 100;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 0;
        nTargetTimespan = 24 * 60 * 60; // Mgpcoin: 1 day
        nTargetSpacing = 1 * 60;  // Mgpcoin: 1 minutes
        nMaturity = 10;
        nMasternodeCountDrift = 20;
        nMaxMoneyOut = 300000000 * COIN;
        
         

        /** Height or Time Based Activations **/
        nLastPOWBlock = 1000;
        nModifierUpdateBlock = 1; // since block 1

        const char* pszTimestamp = "Blockstream Buys $25M Worth of Bitcoin Mining Machines From MicroBT";
        CMutableTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 0 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("04cb1cbdfa11417a746e6f85087a747cbf4b84ec164e30e92101bb3a7ef953f29d4cef42ed31fcd5113d7c56e3a5dd5da37839d6ee4d471112fa0cf0d1af0736d5") << OP_CHECKSIG;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime = 1611807840;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 307500;    

        
        hashGenesisBlock = genesis.GetHash();     
        assert(hashGenesisBlock == uint256("0x000009b718dd8b3296d64d46de0b36d282b7e311983a48cdfc5806c3d5a72f18"));
        assert(genesis.hashMerkleRoot == uint256("0xe3d726060ec06a3fa70fdd425aa680e5b5ab62c1d8038ee9ceacfdb95282f9c7"));
        
        // DNS Seeding
        vSeeds.push_back(CDNSSeedData("207.180.193.227", "207.180.193.227"));
        vSeeds.push_back(CDNSSeedData("207.180.194.138", "207.180.194.138"));
        vSeeds.push_back(CDNSSeedData("207.180.194.170", "207.180.194.170"));
        vSeeds.push_back(CDNSSeedData("207.180.195.235", "207.180.195.235"));
        vSeeds.push_back(CDNSSeedData("207.180.196.91", "207.180.196.91"));
 

        // Mgpcoin addresses start with 'F'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 50);
        // Mgpcoin script addresses start with 'b'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 105);
        // Mgpcoin private keys start with 'K'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 65);
        // Mgpcoin BIP32 pubkeys start with 'xpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x08)(0x89)(0xCA)(0xFD).convert_to_container<std::vector<unsigned char> >();
        // Mgpcoin BIP32 prvkeys start with 'xprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x08)(0x89)(0xAC)(0xDF).convert_to_container<std::vector<unsigned char> >();
        // Mgpcoin BIP44 coin type is '119' (0x80000077)
        // BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x77).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = false;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = false;
        fTestnetToBeDeprecatedFieldRPC = false;
        fHeadersFirstSyncingActive = false;

        nPoolMaxTransactions = 3;
        strSporkKey = "0431246c8ec51b76adf4b19c359030722909d0b5fe16c2c1383b5a88b57dd0e1df4afaa9516f488c9507e8ab006487dc2f2f674bca7620a4cdf2c8d15d8b7c0a1d";
        strMasternodePoolDummyAddress = "MSmn3sZjqPSVgCnc9SvR26X9jaBz9tfSfq";
        nStartMasternodePayments = genesis.nTime + 86400; // Time in Seconds (24 hours after genesis creation)

        nBudget_Fee_Confirmations = 6; // Number of confirmations for the finalization fee
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";
        pchMessageStart[0] = 0x74; // t
        pchMessageStart[1] = 0x6d; // m
        pchMessageStart[2] = 0x67; // g
        pchMessageStart[3] = 0x70; // p
        vAlertPubKey = ParseHex("0403b678d38466f0b9f05b09abc3d7328ad8ce87289cbe0b075dba4a0032121c4c2d1ca1d93ee37fb95acbaef8e79f57988195e44af0745b534d5de0cb28dced40");
        nDefaultPort = 13121;
        nEnforceBlockUpgradeMajority = 51;
        nRejectBlockOutdatedMajority = 75;
        nToCheckBlockUpgradeMajority = 100;
        nMinerThreads = 0;
        nTargetTimespan = 24 * 60 * 60; // Mgpcoin: 1 day
        nTargetSpacing = 2 * 60;  // Mgpcoin: 1 minute
        nLastPOWBlock = 1000;
        nMaturity = 10;
        nMasternodeCountDrift = 4;
        nModifierUpdateBlock = 1;
        nMaxMoneyOut = 300000000 * COIN;

        //! Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1611811440;
        genesis.nNonce = 454245;        

        hashGenesisBlock = genesis.GetHash();

        assert(hashGenesisBlock == uint256("0x0000009767b34b9aea2a4e31e1e66041de6b39cfc88b179f6955dfb7c0e937d6"));
        assert(genesis.hashMerkleRoot == uint256("0xe3d726060ec06a3fa70fdd425aa680e5b5ab62c1d8038ee9ceacfdb95282f9c7"));

        vFixedSeeds.clear();
        vSeeds.clear();        
                
        // Testnet Mgpcoin addresses start with 'T'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 110);
        // Testnet Mgpcoin script addresses start with 't'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 121);
        // Testnet private keys start with 'k'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 115);
        // Testnet Mgpcoin BIP32 pubkeys start with 'tpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x06)(0x42)(0x76)(0xCB).convert_to_container<std::vector<unsigned char> >();
        // Testnet Mgpcoin BIP32 prvkeys start with 'tprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x06)(0x39)(0x23)(0x64).convert_to_container<std::vector<unsigned char> >();
        // Testnet Mgpcoin BIP44 coin type is '119' (0x80000077)
        // Testnet BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x77).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = false;
        fDefaultConsistencyChecks = false;
        fRequireStandard = false;
        fMineBlocksOnDemand = false;
        fTestnetToBeDeprecatedFieldRPC = true;

        nPoolMaxTransactions = 2;
        strSporkKey = "043a6f4b9dcdce89c88483461d23930b3cc52219d86675a40b6705b2cfe3542e172d38cef7b5cb38e1b4dc6f435435e729fbed589c949583bb75be7621d072536d";
        strMasternodePoolDummyAddress = "TQdFkLXeMwvwwQCt83YF7zeyxbnGrxqejR";
        nStartMasternodePayments = genesis.nTime + 86400; // 24 hours after genesis
        nBudget_Fee_Confirmations = 3; // Number of confirmations for the finalization fee. We have to make this very short
                                       // here because we only have a 8 block finalization window on testnet
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";
        pchMessageStart[0] = 0x72; // r
        pchMessageStart[1] = 0x65; // e
        pchMessageStart[2] = 0x67; // g
        pchMessageStart[3] = 0x74; // t
        nDefaultPort = 20203;
        nSubsidyHalvingInterval = 150;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 1;
        nTargetTimespan = 24 * 60 * 60; // Mgpcoin: 1 day
        nTargetSpacing = 1 * 60;        // Mgpcoin: 1 minutes
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        genesis.nTime = 1611815040;
        genesis.nBits = 0x207fffff;
        genesis.nNonce = 2;      


        hashGenesisBlock = genesis.GetHash();  

       assert(hashGenesisBlock == uint256("0x135dc1a294a413c50b64150db028270711a3c67ab2d46265fa6cf062424209e1"));
       assert(genesis.hashMerkleRoot == uint256("0xe3d726060ec06a3fa70fdd425aa680e5b5ab62c1d8038ee9ceacfdb95282f9c7"));

        vFixedSeeds.clear(); //! Regtest mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Regtest mode doesn't have any DNS seeds.

        // Testnet Mgpcoin addresses start with 'R'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 60);
        // Testnet Mgpcoin script addresses start with 'r'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 122);
        // Testnet private keys start with 'k'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 85);
        // Testnet Mgpcoin BIP32 pubkeys start with 'tpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x02)(0x37)(0x85)(0xD2).convert_to_container<std::vector<unsigned char> >();
        // Testnet Mgpcoin BIP32 prvkeys start with 'tprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x02)(0x33)(0x85)(0x96).convert_to_container<std::vector<unsigned char> >();
        // Testnet Mgpcoin BIP44 coin type is '119' (0x80000077)
        // Testnet BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x77).convert_to_container<std::vector<unsigned char> >();

        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fTestnetToBeDeprecatedFieldRPC = false;
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};
static CRegTestParams regTestParams;

/**
 * Unit test
 */
class CUnitTestParams : public CMainParams, public CModifiableParams
{
public:
    CUnitTestParams()
    {
        networkID = CBaseChainParams::UNITTEST;
        strNetworkID = "unittest";
        nDefaultPort = 12125;
        vFixedSeeds.clear(); //! Unit test mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Unit test mode doesn't have any DNS seeds.

        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fAllowMinDifficultyBlocks = false;
        fMineBlocksOnDemand = true;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        // UnitTest share the same checkpoints as MAIN
        return data;
    }

    //! Published setters to allow changing values in unit test cases
    virtual void setSubsidyHalvingInterval(int anSubsidyHalvingInterval) { nSubsidyHalvingInterval = anSubsidyHalvingInterval; }
    virtual void setEnforceBlockUpgradeMajority(int anEnforceBlockUpgradeMajority) { nEnforceBlockUpgradeMajority = anEnforceBlockUpgradeMajority; }
    virtual void setRejectBlockOutdatedMajority(int anRejectBlockOutdatedMajority) { nRejectBlockOutdatedMajority = anRejectBlockOutdatedMajority; }
    virtual void setToCheckBlockUpgradeMajority(int anToCheckBlockUpgradeMajority) { nToCheckBlockUpgradeMajority = anToCheckBlockUpgradeMajority; }
    virtual void setDefaultConsistencyChecks(bool afDefaultConsistencyChecks) { fDefaultConsistencyChecks = afDefaultConsistencyChecks; }
    virtual void setAllowMinDifficultyBlocks(bool afAllowMinDifficultyBlocks) { fAllowMinDifficultyBlocks = afAllowMinDifficultyBlocks; }
    virtual void setSkipProofOfWorkCheck(bool afSkipProofOfWorkCheck) { fSkipProofOfWorkCheck = afSkipProofOfWorkCheck; }
};
static CUnitTestParams unitTestParams;


static CChainParams* pCurrentParams = 0;

CModifiableParams* ModifiableParams()
{
    assert(pCurrentParams);
    assert(pCurrentParams == &unitTestParams);
    return (CModifiableParams*)&unitTestParams;
}

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    case CBaseChainParams::UNITTEST:
        return unitTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}
       
