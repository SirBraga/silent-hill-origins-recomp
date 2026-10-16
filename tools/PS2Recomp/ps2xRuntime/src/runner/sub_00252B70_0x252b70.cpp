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

// Function: sub_00252B70
// Address: 0x252b70 - 0x252bd0
void sub_00252B70_0x252b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252B70_0x252b70");
#endif

    ctx->pc = 0x252b70u;

    // 0x252b70: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x252b74: 0x24425618  addiu       $v0, $v0, 0x5618
    ctx->pc = 0x252b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22040));
    // 0x252b78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x252b78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x735620u));
    // 0x252b7c: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x252b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x735648u));
    // 0x252b80: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x252b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252b84: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x252b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252b88: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x252b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x252b8c: 0x510c3  sra         $v0, $a1, 3
    ctx->pc = 0x252b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 3));
    // 0x252b90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252b94: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x252b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x252b98: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x252b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252b9c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x252b9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x252ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x252BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BA0u;
        // 0x252ba4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252BA8u;
    // 0x252ba8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x252ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252bac: 0x0  nop
    ctx->pc = 0x252bacu;
    // NOP
    // 0x252bb0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x252bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252bb4: 0x0  nop
    ctx->pc = 0x252bb4u;
    // NOP
    // 0x252bb8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x252bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252bbc: 0x0  nop
    ctx->pc = 0x252bbcu;
    // NOP
    // 0x252bc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x252bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x252bc4: 0x0  nop
    ctx->pc = 0x252bc4u;
    // NOP
    // 0x252bc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x252bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252bcc: 0x0  nop
    ctx->pc = 0x252bccu;
    // NOP
    ctx->pc = 0x252bd0u;
}
