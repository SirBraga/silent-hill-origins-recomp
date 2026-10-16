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

// Function: sub_00226D30
// Address: 0x226d30 - 0x226db0
void sub_00226D30_0x226d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226D30_0x226d30");
#endif

    switch (ctx->pc) {
        case 0x226d58u: goto label_226d58;
        default: break;
    }

    ctx->pc = 0x226d30u;

    // 0x226d30: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x226d30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x226d38: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x226d38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3E90u));
    // 0x226d3c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x226d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x226d40: 0x24630fd4  addiu       $v1, $v1, 0xFD4
    ctx->pc = 0x226d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4052));
    // 0x226d44: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x226d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d48: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x226d48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226d4c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x226D4Cu;
    {
        const bool branch_taken_0x226d4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D4Cu;
        // 0x226d50: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d4c) {
            ctx->pc = 0x226DA4u;
            goto label_226da4;
        }
    }
    ctx->pc = 0x226D54u;
    // 0x226d54: 0x0  nop
    ctx->pc = 0x226d54u;
    // NOP
label_226d58:
    // 0x226d58: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x226d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226d5c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x226d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d60: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x226d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x226d64: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x226d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x226d68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x226d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226d6c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x226d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x226d70: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x226d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x226d74: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x226d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x226d78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x226d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226d7c: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x226d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x226d80: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x226d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x226d84: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x226d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x226d88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x226d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226d8c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x226d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x226d90: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x226d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x226d94: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x226d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x226d98: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x226d98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x226d9c: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x226D9Cu;
    {
        const bool branch_taken_0x226d9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x226DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D9Cu;
        // 0x226da0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d9c) {
            ctx->pc = 0x226D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226d58;
        }
    }
    ctx->pc = 0x226DA4u;
label_226da4:
    // 0x226da4: 0x3e00008  jr          $ra
    ctx->pc = 0x226DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226DACu;
    // 0x226dac: 0x0  nop
    ctx->pc = 0x226dacu;
    // NOP
    ctx->pc = 0x226db0u;
}
