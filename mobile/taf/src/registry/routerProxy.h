// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.5.7
// Generated from `routerProxy.jce'
// **********************************************************************

#ifndef __ROUTERPROXY_H_
#define __ROUTERPROXY_H_

#include <map>
#include <string>
#include <vector>
#include "jce/Jce.h"
using namespace std;
#include "servant/ServantProxy.h"
#include "servant/Servant.h"


namespace routerProxy
{
    struct ServerInfo : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "routerProxy.ServerInfo";
        }
        static string MD5()
        {
            return "581c3040f5cd47bb0e01225201b70434";
        }
        ServerInfo(const std::string &host,taf::Int32 port,taf::Bool isTCP)
            :host(host),port(port),isTCP(isTCP)
        {
        }
        ServerInfo()
        :host(""),port(0),isTCP(true)
        {
        }
        void resetDefautlt()
        {
            host = "";
            port = 0;
            isTCP = true;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(host, 0);
            _os.write(port, 1);
            _os.write(isTCP, 2);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(host, 0, true);
            _is.read(port, 1, true);
            _is.read(isTCP, 2, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(host,"host");
            _ds.display(port,"port");
            _ds.display(isTCP,"isTCP");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(host, true);
            _ds.displaySimple(port, true);
            _ds.displaySimple(isTCP, false);
            return _os;
        }
    public:
        std::string host;
        taf::Int32 port;
        taf::Bool isTCP;
    };
    inline bool operator==(const ServerInfo&l, const ServerInfo&r)
    {
        return l.host == r.host && l.port == r.port && l.isTCP == r.isTCP;
    }
    inline bool operator!=(const ServerInfo&l, const ServerInfo&r)
    {
        return !(l == r);
    }


    /* callback of async proxy for client */
    class RouterProxyServicePrxCallback: public taf::ServantProxyCallback
    {
    public:
        virtual ~RouterProxyServicePrxCallback(){}
        virtual void callback_getServerList(taf::Int32 ret, const vector<routerProxy::ServerInfo>& result)
        { throw std::runtime_error("callback_getServerList() overloading incorrect."); }
        virtual void callback_getServerList_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_getServerList_exception() overloading incorrect."); }

    public:
        int onDispatch(taf::ReqMessagePtr msg);
    };
    typedef taf::TC_AutoPtr<RouterProxyServicePrxCallback> RouterProxyServicePrxCallbackPtr;

    /* proxy for client */
    class RouterProxyServiceProxy : public taf::ServantProxy
    {
    public:
        typedef map<string, string> TAF_CONTEXT;

        taf::Int32 getServerList(const std::string & name,vector<routerProxy::ServerInfo> &result,const map<string, string> &context = TAF_CONTEXT());
        void async_getServerList(RouterProxyServicePrxCallbackPtr callback,const std::string & name,const map<string, string> &context = TAF_CONTEXT());

        RouterProxyServiceProxy* taf_hash(int64_t key);
    };
    typedef taf::TC_AutoPtr<RouterProxyServiceProxy> RouterProxyServicePrx;

    /* servant for server */
    class RouterProxyService : public taf::Servant
    {
    public:
        virtual ~RouterProxyService(){}
        virtual taf::Int32 getServerList(const std::string & name,vector<routerProxy::ServerInfo> &result,taf::JceCurrentPtr current) = 0;
        static void async_response_getServerList(taf::JceCurrentPtr current, taf::Int32 _ret, const vector<routerProxy::ServerInfo> &result);

    public:
        int onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer);
    };


}

#define routerProxy_ServerInfo_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.host,b.host);jce_copy_struct(a.port,b.port);jce_copy_struct(a.isTCP,b.isTCP);



#endif