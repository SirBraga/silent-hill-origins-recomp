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

// Function: sub_002F21E0
// Address: 0x2f21e0 - 0x2f2240
void sub_002F21E0_0x2f21e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F21E0_0x2f21e0");
#endif

    switch (ctx->pc) {
        case 0x2f2200u: goto label_2f2200;
        default: break;
    }

    ctx->pc = 0x2f21e0u;

    // 0x2f21e0: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f21e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f21e8: 0x2442b748  addiu       $v0, $v0, -0x48B8
    ctx->pc = 0x2f21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948680));
    // 0x2f21ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f21ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f21f0: 0x24420808  addiu       $v0, $v0, 0x808
    ctx->pc = 0x2f21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2056));
    // 0x2f21f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f21f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f21f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f21fc: 0x0  nop
    ctx->pc = 0x2f21fcu;
    // NOP
label_2f2200:
    // 0x2f2200: 0xac44fff8  sw          $a0, -0x8($v0)
    ctx->pc = 0x2f2200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 4));
    // 0x2f2204: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f2204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f2208: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x2f2208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
    // 0x2f220c: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x2f220cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x2f2210: 0xac460080  sw          $a2, 0x80($v0)
    ctx->pc = 0x2f2210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 6));
    // 0x2f2214: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x2f2214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x2f2218: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x2f2218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x2f221c: 0x24aa0158  addiu       $t2, $a1, 0x158
    ctx->pc = 0x2f221cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 344));
    // 0x2f2220: 0x81470000  lb          $a3, 0x0($t2)
    ctx->pc = 0x2f2220u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2f2224: 0x81480001  lb          $t0, 0x1($t2)
    ctx->pc = 0x2f2224u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x2f2228: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x2f2228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f222c: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x2f222cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f2230: 0x461fff3  bgez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F2230u;
    {
        const bool branch_taken_0x2f2230 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2F2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2230u;
        // 0x2f2234: 0x24420898  addiu       $v0, $v0, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2230) {
            ctx->pc = 0x2F2200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2200;
        }
    }
    ctx->pc = 0x2F2238u;
    // 0x2f2238: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2238u;
        // 0x2f223c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2240u;
}
