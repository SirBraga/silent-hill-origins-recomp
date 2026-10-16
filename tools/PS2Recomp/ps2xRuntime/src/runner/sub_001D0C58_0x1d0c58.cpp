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

// Function: sub_001D0C58
// Address: 0x1d0c58 - 0x1d0d30
void sub_001D0C58_0x1d0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0C58_0x1d0c58");
#endif

    switch (ctx->pc) {
        case 0x1d0c84u: goto label_1d0c84;
        case 0x1d0ca0u: goto label_1d0ca0;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cbcu: goto label_1d0cbc;
        case 0x1d0cccu: goto label_1d0ccc;
        case 0x1d0ce8u: goto label_1d0ce8;
        case 0x1d0cf0u: goto label_1d0cf0;
        case 0x1d0d04u: goto label_1d0d04;
        default: break;
    }

    ctx->pc = 0x1d0c58u;

    // 0x1d0c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d0c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d0c5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d0c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d0c60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d0c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d0c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d0c6c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d0c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0c70: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D0C70u;
    {
        const bool branch_taken_0x1d0c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C70u;
        // 0x1d0c74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c70) {
            ctx->pc = 0x1D0D0Cu;
            goto label_1d0d0c;
        }
    }
    ctx->pc = 0x1D0C78u;
    // 0x1d0c78: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0c7c: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C84u);
    ctx->pc = 0x1D0C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C7Cu;
    // 0x1d0c80: 0x24a50af0  addiu       $a1, $a1, 0xAF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0C7Cu, 0x1D0C84u)) {
        return;
    }
    ctx->pc = 0x1D0C84u;
label_1d0c84:
    // 0x1d0c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c88: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0C88u;
    {
        const bool branch_taken_0x1d0c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C88u;
        // 0x1d0c8c: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c88) {
            ctx->pc = 0x1D0CBCu;
            goto label_1d0cbc;
        }
    }
    ctx->pc = 0x1D0C90u;
    // 0x1d0c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c94: 0x24c60d30  addiu       $a2, $a2, 0xD30
    ctx->pc = 0x1d0c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3376));
    // 0x1d0c98: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0C98u;
    SET_GPR_U32(ctx, 31, 0x1D0CA0u);
    ctx->pc = 0x1D0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C98u;
    // 0x1d0c9c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0C98u, 0x1D0CA0u)) {
        return;
    }
    ctx->pc = 0x1D0CA0u;
label_1d0ca0:
    // 0x1d0ca0: 0xc06ce26  jal         func_1B3898
    ctx->pc = 0x1D0CA0u;
    SET_GPR_U32(ctx, 31, 0x1D0CA8u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1D0CA0u, 0x1D0CA8u)) {
        return;
    }
    ctx->pc = 0x1D0CA8u;
label_1d0ca8:
    // 0x1d0ca8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d0ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d0cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d0cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb4: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0CB4u;
    SET_GPR_U32(ctx, 31, 0x1D0CBCu);
    ctx->pc = 0x1D0CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CB4u;
    // 0x1d0cb8: 0x24c60d88  addiu       $a2, $a2, 0xD88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0CB4u, 0x1D0CBCu)) {
        return;
    }
    ctx->pc = 0x1D0CBCu;
label_1d0cbc:
    // 0x1d0cbc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cc4: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0CC4u;
    SET_GPR_U32(ctx, 31, 0x1D0CCCu);
    ctx->pc = 0x1D0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CC4u;
    // 0x1d0cc8: 0x24a50b08  addiu       $a1, $a1, 0xB08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0CC4u, 0x1D0CCCu)) {
        return;
    }
    ctx->pc = 0x1D0CCCu;
label_1d0ccc:
    // 0x1d0ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cd0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D0CD0u;
    {
        const bool branch_taken_0x1d0cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CD0u;
        // 0x1d0cd4: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cd0) {
            ctx->pc = 0x1D0D10u;
            goto label_1d0d10;
        }
    }
    ctx->pc = 0x1D0CD8u;
    // 0x1d0cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cdc: 0x24c60e08  addiu       $a2, $a2, 0xE08
    ctx->pc = 0x1d0cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3592));
    // 0x1d0ce0: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0CE0u;
    SET_GPR_U32(ctx, 31, 0x1D0CE8u);
    ctx->pc = 0x1D0CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CE0u;
    // 0x1d0ce4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0CE0u, 0x1D0CE8u)) {
        return;
    }
    ctx->pc = 0x1D0CE8u;
label_1d0ce8:
    // 0x1d0ce8: 0xc06ce26  jal         func_1B3898
    ctx->pc = 0x1D0CE8u;
    SET_GPR_U32(ctx, 31, 0x1D0CF0u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1D0CE8u, 0x1D0CF0u)) {
        return;
    }
    ctx->pc = 0x1D0CF0u;
label_1d0cf0:
    // 0x1d0cf0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d0cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d0cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d0cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cfc: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0CFCu;
    SET_GPR_U32(ctx, 31, 0x1D0D04u);
    ctx->pc = 0x1D0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CFCu;
    // 0x1d0d00: 0x24c60e60  addiu       $a2, $a2, 0xE60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0CFCu, 0x1D0D04u)) {
        return;
    }
    ctx->pc = 0x1D0D04u;
label_1d0d04:
    // 0x1d0d04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0D04u;
    {
        const bool branch_taken_0x1d0d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D04u;
        // 0x1d0d08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d04) {
            ctx->pc = 0x1D0D14u;
            goto label_1d0d14;
        }
    }
    ctx->pc = 0x1D0D0Cu;
label_1d0d0c:
    // 0x1d0d0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d0d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d10:
    // 0x1d0d10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d0d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d14:
    // 0x1d0d14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d0d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0d18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d0d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0d1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d0d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D24u;
        // 0x1d0d28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D2Cu;
    // 0x1d0d2c: 0x0  nop
    ctx->pc = 0x1d0d2cu;
    // NOP
    ctx->pc = 0x1d0d30u;
}
