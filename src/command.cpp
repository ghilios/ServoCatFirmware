#include "command.h"
#include "io.h"

/*
std::array<CommandTrieNodeBase*, 256> g_EmptyChildrenArray;

std::array<CommandTrieNodeBase*, 256>& CommandTrieNodeBase::getChildren() {
    return g_EmptyChildrenArray;
}

void CommandTrieNodeBase::invoke() const {
    DebugOutput.println("invoke not implemented");
}

void CommandTrieNodeBase::paramInvoke(const SafeString& cmd, int paramIndex) const {
    DebugOutput.println("paramInvoke not implemented");
}

void CommandTrieCommand::invoke() const {

}

void CommandTrieParamCommand::paramInvoke(const SafeString& cmd, int paramIndex) const {
    
}

*/