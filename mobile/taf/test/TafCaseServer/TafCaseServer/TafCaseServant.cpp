// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.7 by WSRD Tencent.
// Generated from `TafCaseServant.jce'
// **********************************************************************

#include "TafCaseServant.h"
#include "jce/wup.h"
#include "servant/BaseF.h"

using namespace wup;

namespace Test
{

    taf::Int32 TafCaseServantProxy::getUser(const Test::UserInfo &inUser, Test::UserInfo &outUser, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(inUser, 1);
        _os.write(outUser, 2);
        taf::ResponsePacket rep;
        std::map<string, string> status;
        taf_invoke(taf::JCENORMAL,"getUser", _os.getByteBuffer(), context, status, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(outUser, 2, true);
        return _ret;
    }

    void TafCaseServant::async_response_getUser(taf::JceCurrentPtr current, taf::Int32 _ret, const Test::UserInfo &outUser)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("outUser", outUser);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(outUser, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void TafCaseServantProxy::async_getUser(TafCaseServantPrxCallbackPtr callback,const Test::UserInfo &inUser,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(inUser, 1);
        std::map<string, string> status;
        taf_invoke_async(taf::JCENORMAL,"getUser", _os.getByteBuffer(), context, status, callback);
    }

    taf::Int32 TafCaseServantProxy::test(const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        taf::ResponsePacket rep;
        std::map<string, string> status;
        taf_invoke(taf::JCENORMAL,"test", _os.getByteBuffer(), context, status, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void TafCaseServant::async_response_test(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void TafCaseServantProxy::async_test(TafCaseServantPrxCallbackPtr callback,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        std::map<string, string> status;
        taf_invoke_async(taf::JCENORMAL,"test", _os.getByteBuffer(), context, status, callback);
    }

    taf::Int32 TafCaseServantProxy::testUnsigned(taf::UInt8 ubInUin, taf::UInt16 usInUin, taf::UInt32 uiInUin, taf::UInt8 &ubOutUin, taf::UInt16 &usOutUin, taf::UInt32 &uiOutUin, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(ubInUin, 1);
        _os.write(usInUin, 2);
        _os.write(uiInUin, 3);
        _os.write(ubOutUin, 4);
        _os.write(usOutUin, 5);
        _os.write(uiOutUin, 6);
        taf::ResponsePacket rep;
        std::map<string, string> status;
        taf_invoke(taf::JCENORMAL,"testUnsigned", _os.getByteBuffer(), context, status, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(ubOutUin, 4, true);
        _is.read(usOutUin, 5, true);
        _is.read(uiOutUin, 6, true);
        return _ret;
    }

    void TafCaseServant::async_response_testUnsigned(taf::JceCurrentPtr current, taf::Int32 _ret, taf::UInt8 ubOutUin, taf::UInt16 usOutUin, taf::UInt32 uiOutUin)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("ubOutUin", ubOutUin);
            tafAttr.put("usOutUin", usOutUin);
            tafAttr.put("uiOutUin", uiOutUin);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(ubOutUin, 4);

            _os.write(usOutUin, 5);

            _os.write(uiOutUin, 6);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void TafCaseServantProxy::async_testUnsigned(TafCaseServantPrxCallbackPtr callback,taf::UInt8 ubInUin,taf::UInt16 usInUin,taf::UInt32 uiInUin,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(ubInUin, 1);
        _os.write(usInUin, 2);
        _os.write(uiInUin, 3);
        std::map<string, string> status;
        taf_invoke_async(taf::JCENORMAL,"testUnsigned", _os.getByteBuffer(), context, status, callback);
    }

    TafCaseServantProxy* TafCaseServantProxy::taf_hash(int64_t key)
    {
        return (TafCaseServantProxy*)ServantProxy::taf_hash(key);
    }

    static ::std::string __Test__TafCaseServant_all[]=
    {
        "getUser",
        "test",
        "testUnsigned"
    };

    int TafCaseServantPrxCallback::onDispatch(taf::ReqMessagePtr msg)
    {
        pair<string*, string*> r = equal_range(__Test__TafCaseServant_all, __Test__TafCaseServant_all+3, msg->request.sFuncName);
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __Test__TafCaseServant_all)
        {
            case 0:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_getUser_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                Test::UserInfo outUser;
                _is.read(outUser, 2, true);
                callback_getUser(_ret, outUser);
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_test_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_test(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_testUnsigned_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                taf::UInt8 ubOutUin;
                _is.read(ubOutUin, 4, true);
                taf::UInt16 usOutUin;
                _is.read(usOutUin, 5, true);
                taf::UInt32 uiOutUin;
                _is.read(uiOutUin, 6, true);
                callback_testUnsigned(_ret, ubOutUin, usOutUin, uiOutUin);
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }

    int TafCaseServant::onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer)
    {
        pair<string*, string*> r = equal_range(__Test__TafCaseServant_all, __Test__TafCaseServant_all+3, _current->getFuncName());
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __Test__TafCaseServant_all)
        {
            case 0:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                Test::UserInfo inUser;
                Test::UserInfo outUser;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("inUser", inUser);
                    tafAttr.getByDefault("outUser", outUser, outUser);
                }
                else
                {
                    _is.read(inUser, 1, true);
                    _is.read(outUser, 2, false);
                }
                taf::Int32 _ret = getUser(inUser,outUser, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("outUser", outUser);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(outUser, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                }
                else
                {
                }
                taf::Int32 _ret = test(_current);                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                taf::UInt8 ubInUin;
                taf::UInt16 usInUin;
                taf::UInt32 uiInUin;
                taf::UInt8 ubOutUin;
                taf::UInt16 usOutUin;
                taf::UInt32 uiOutUin;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("ubInUin", ubInUin);
                    tafAttr.get("usInUin", usInUin);
                    tafAttr.get("uiInUin", uiInUin);
                    tafAttr.getByDefault("ubOutUin", ubOutUin, ubOutUin);
                    tafAttr.getByDefault("usOutUin", usOutUin, usOutUin);
                    tafAttr.getByDefault("uiOutUin", uiOutUin, uiOutUin);
                }
                else
                {
                    _is.read(ubInUin, 1, true);
                    _is.read(usInUin, 2, true);
                    _is.read(uiInUin, 3, true);
                    _is.read(ubOutUin, 4, false);
                    _is.read(usOutUin, 5, false);
                    _is.read(uiOutUin, 6, false);
                }
                taf::Int32 _ret = testUnsigned(ubInUin,usInUin,uiInUin,ubOutUin,usOutUin,uiOutUin, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("ubOutUin", ubOutUin);
                        tafAttr.put("usOutUin", usOutUin);
                        tafAttr.put("uiOutUin", uiOutUin);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(ubOutUin, 4);
                        _os.write(usOutUin, 5);
                        _os.write(uiOutUin, 6);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }


}
