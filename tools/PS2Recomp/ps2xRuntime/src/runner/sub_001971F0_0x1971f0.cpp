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

// Function: sub_001971F0
// Address: 0x1971f0 - 0x197250
void sub_001971F0_0x1971f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001971F0_0x1971f0");
#endif

    switch (ctx->pc) {
        case 0x1971f8u: goto label_1971f8;
        case 0x1971fcu: goto label_1971fc;
        default: break;
    }

    ctx->pc = 0x1971f0u;

    // 0x1971f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1971F0u;
    {
        const bool branch_taken_0x1971f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1971f0) {
            ctx->pc = 0x197224u;
            goto label_197224;
        }
    }
    ctx->pc = 0x1971F8u;
label_1971f8:
    // 0x1971f8: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1971fc:
    // 0x1971fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1971fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x197200: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x197200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x197204: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x197208: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x197208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19720c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19720Cu;
    {
        const bool branch_taken_0x19720c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x197210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19720Cu;
        // 0x197210: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19720c) {
            ctx->pc = 0x19721Cu;
            goto label_19721c;
        }
    }
    ctx->pc = 0x197214u;
    // 0x197214: 0x3e00008  jr          $ra
    ctx->pc = 0x197214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197214u;
        // 0x197218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19721Cu;
label_19721c:
    // 0x19721c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19721cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x197220: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x197220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_197224:
    // 0x197224: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x197224u;
    {
        const bool branch_taken_0x197224 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x197224) {
            ctx->pc = 0x197244u;
            goto label_197244;
        }
    }
    ctx->pc = 0x19722Cu;
    // 0x19722c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19722cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197230: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x197230u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197234: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x197234u;
    {
        const bool branch_taken_0x197234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197234u;
        // 0x197238: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197234) {
            ctx->pc = 0x1971F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1971f8;
        }
    }
    ctx->pc = 0x19723Cu;
    // 0x19723c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19723Cu;
    {
        const bool branch_taken_0x19723c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19723Cu;
        // 0x197240: 0x2402ffdf  addiu       $v0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19723c) {
            ctx->pc = 0x1971FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1971fc;
        }
    }
    ctx->pc = 0x197244u;
label_197244:
    // 0x197244: 0x3e00008  jr          $ra
    ctx->pc = 0x197244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197244u;
        // 0x197248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19724Cu;
    // 0x19724c: 0x0  nop
    ctx->pc = 0x19724cu;
    // NOP
    ctx->pc = 0x197250u;
}
