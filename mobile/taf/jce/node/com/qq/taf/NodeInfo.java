// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `NodeDescriptor.jce'
// **********************************************************************

package com.qq.taf;

public final class NodeInfo extends com.qq.taf.jce.JceStruct implements java.lang.Cloneable
{
    public String className()
    {
        return "taf.NodeInfo";
    }

    public String fullClassName()
    {
        return "com.qq.taf.NodeInfo";
    }

    public String nodeName = "";

    public String nodeObj = "";

    public String endpointIp = "";

    public int endpointPort = 0;

    public short timeOut = 0;

    public String dataDir = "";

    public String version = "";

    public String getNodeName()
    {
        return nodeName;
    }

    public void  setNodeName(String nodeName)
    {
        this.nodeName = nodeName;
    }

    public String getNodeObj()
    {
        return nodeObj;
    }

    public void  setNodeObj(String nodeObj)
    {
        this.nodeObj = nodeObj;
    }

    public String getEndpointIp()
    {
        return endpointIp;
    }

    public void  setEndpointIp(String endpointIp)
    {
        this.endpointIp = endpointIp;
    }

    public int getEndpointPort()
    {
        return endpointPort;
    }

    public void  setEndpointPort(int endpointPort)
    {
        this.endpointPort = endpointPort;
    }

    public short getTimeOut()
    {
        return timeOut;
    }

    public void  setTimeOut(short timeOut)
    {
        this.timeOut = timeOut;
    }

    public String getDataDir()
    {
        return dataDir;
    }

    public void  setDataDir(String dataDir)
    {
        this.dataDir = dataDir;
    }

    public String getVersion()
    {
        return version;
    }

    public void  setVersion(String version)
    {
        this.version = version;
    }

    public NodeInfo()
    {
        setNodeName(nodeName);
        setNodeObj(nodeObj);
        setEndpointIp(endpointIp);
        setEndpointPort(endpointPort);
        setTimeOut(timeOut);
        setDataDir(dataDir);
        setVersion(version);
    }

    public NodeInfo(String nodeName, String nodeObj, String endpointIp, int endpointPort, short timeOut, String dataDir, String version)
    {
        setNodeName(nodeName);
        setNodeObj(nodeObj);
        setEndpointIp(endpointIp);
        setEndpointPort(endpointPort);
        setTimeOut(timeOut);
        setDataDir(dataDir);
        setVersion(version);
    }

    public boolean equals(Object o)
    {
        if(o == null)
        {
            return false;
        }

        NodeInfo t = (NodeInfo) o;
        return (
            com.qq.taf.jce.JceUtil.equals(nodeName, t.nodeName) && 
            com.qq.taf.jce.JceUtil.equals(nodeObj, t.nodeObj) && 
            com.qq.taf.jce.JceUtil.equals(endpointIp, t.endpointIp) && 
            com.qq.taf.jce.JceUtil.equals(endpointPort, t.endpointPort) && 
            com.qq.taf.jce.JceUtil.equals(timeOut, t.timeOut) && 
            com.qq.taf.jce.JceUtil.equals(dataDir, t.dataDir) && 
            com.qq.taf.jce.JceUtil.equals(version, t.version) );
    }

    public int hashCode()
    {
        try
        {
            throw new Exception("Need define key first!");
        }
        catch(Exception ex)
        {
            ex.printStackTrace();
        }
        return 0;
    }
    public java.lang.Object clone()
    {
        java.lang.Object o = null;
        try
        {
            o = super.clone();
        }
        catch(CloneNotSupportedException ex)
        {
            assert false; // impossible
        }
        return o;
    }

    public void writeTo(com.qq.taf.jce.JceOutputStream _os)
    {
        _os.write(nodeName, 0);
        _os.write(nodeObj, 1);
        _os.write(endpointIp, 2);
        _os.write(endpointPort, 3);
        _os.write(timeOut, 4);
        _os.write(dataDir, 5);
        if (null != version)
        {
            _os.write(version, 6);
        }
    }


    public void readFrom(com.qq.taf.jce.JceInputStream _is)
    {
        setNodeName( _is.readString(0, true));

        setNodeObj( _is.readString(1, true));

        setEndpointIp( _is.readString(2, true));

        setEndpointPort((int) _is.read(endpointPort, 3, true));

        setTimeOut((short) _is.read(timeOut, 4, true));

        setDataDir( _is.readString(5, true));

        setVersion( _is.readString(6, false));

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.qq.taf.jce.JceDisplayer _ds = new com.qq.taf.jce.JceDisplayer(_os, _level);
        _ds.display(nodeName, "nodeName");
        _ds.display(nodeObj, "nodeObj");
        _ds.display(endpointIp, "endpointIp");
        _ds.display(endpointPort, "endpointPort");
        _ds.display(timeOut, "timeOut");
        _ds.display(dataDir, "dataDir");
        _ds.display(version, "version");
    }

}
