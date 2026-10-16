#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153808
// Address: 0x153808 - 0x153870
void sub_00153808_0x153808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153808_0x153808");
#endif

    ctx->pc = 0x153808u;

    // 0x153808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15380c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x15380cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x153810: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x153810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x153814: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x153814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x153818: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x153818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x15381c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x153820: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x153820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x153824: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x153824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153828: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x153828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x15382c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x15382cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x153830: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x153830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x153834: 0xac85009c  sw          $a1, 0x9C($a0)
    ctx->pc = 0x153834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
    // 0x153838: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x153838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x15383c: 0xacc085ec  sw          $zero, -0x7A14($a2)
    ctx->pc = 0x15383cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3385ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3385ECu, _value); } while (0);
    // 0x153840: 0xac6085f0  sw          $zero, -0x7A10($v1)
    ctx->pc = 0x153840u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3385F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3385F0u, _value); } while (0);
    // 0x153844: 0xac8200a8  sw          $v0, 0xA8($a0)
    ctx->pc = 0x153844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
    // 0x153848: 0xac8500bc  sw          $a1, 0xBC($a0)
    ctx->pc = 0x153848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 5));
    // 0x15384c: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x15384cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x153850: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x153850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x153854: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x153854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x153858: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x153858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x15385c: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x15385cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x153860: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x153860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x153864: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x153864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x153868: 0x3e00008  jr          $ra
    ctx->pc = 0x153868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153868u;
        // 0x15386c: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153870u;
}
