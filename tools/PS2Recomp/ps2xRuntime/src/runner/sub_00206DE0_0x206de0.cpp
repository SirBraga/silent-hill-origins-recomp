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

// Function: sub_00206DE0
// Address: 0x206de0 - 0x206e68
void sub_00206DE0_0x206de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206DE0_0x206de0");
#endif

    switch (ctx->pc) {
        case 0x206de0u: goto label_206de0;
        case 0x206de4u: goto label_206de4;
        case 0x206de8u: goto label_206de8;
        case 0x206decu: goto label_206dec;
        case 0x206df0u: goto label_206df0;
        case 0x206df4u: goto label_206df4;
        case 0x206df8u: goto label_206df8;
        case 0x206dfcu: goto label_206dfc;
        case 0x206e00u: goto label_206e00;
        case 0x206e04u: goto label_206e04;
        case 0x206e08u: goto label_206e08;
        case 0x206e0cu: goto label_206e0c;
        case 0x206e10u: goto label_206e10;
        case 0x206e14u: goto label_206e14;
        case 0x206e18u: goto label_206e18;
        case 0x206e1cu: goto label_206e1c;
        case 0x206e20u: goto label_206e20;
        case 0x206e24u: goto label_206e24;
        case 0x206e28u: goto label_206e28;
        case 0x206e2cu: goto label_206e2c;
        case 0x206e30u: goto label_206e30;
        case 0x206e34u: goto label_206e34;
        case 0x206e38u: goto label_206e38;
        case 0x206e3cu: goto label_206e3c;
        case 0x206e40u: goto label_206e40;
        case 0x206e44u: goto label_206e44;
        case 0x206e48u: goto label_206e48;
        case 0x206e4cu: goto label_206e4c;
        case 0x206e50u: goto label_206e50;
        case 0x206e54u: goto label_206e54;
        case 0x206e58u: goto label_206e58;
        case 0x206e5cu: goto label_206e5c;
        case 0x206e60u: goto label_206e60;
        case 0x206e64u: goto label_206e64;
        default: break;
    }

    ctx->pc = 0x206de0u;

label_206de0:
    // 0x206de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x206de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_206de4:
    // 0x206de4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x206de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_206de8:
    // 0x206de8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x206de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_206dec:
    // 0x206dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206df0:
    // 0x206df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x206df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_206df4:
    // 0x206df4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x206df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206df8:
    // 0x206df8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x206df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_206dfc:
    // 0x206dfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x206dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206e00:
    // 0x206e00: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_206e04:
    if (ctx->pc == 0x206E04u) {
        ctx->pc = 0x206E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E00u;
        // 0x206e04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E08u;
        goto label_206e08;
    }
    ctx->pc = 0x206E00u;
    {
        const bool branch_taken_0x206e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E00u;
        // 0x206e04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e00) {
            ctx->pc = 0x206E48u;
            goto label_206e48;
        }
    }
    ctx->pc = 0x206E08u;
label_206e08:
    // 0x206e08: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x206e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_206e0c:
    // 0x206e0c: 0x2453108c  addiu       $s3, $v0, 0x108C
    ctx->pc = 0x206e0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_206e10:
    // 0x206e10: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_206e14:
    // 0x206e14: 0x40f809  jalr        $v0
label_206e18:
    if (ctx->pc == 0x206E18u) {
        ctx->pc = 0x206E1Cu;
        goto label_206e1c;
    }
    ctx->pc = 0x206E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206E1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E14u, 0x206E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206E1Cu;
label_206e1c:
    // 0x206e1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x206e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_206e20:
    // 0x206e20: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_206e24:
    if (ctx->pc == 0x206E24u) {
        ctx->pc = 0x206E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E20u;
        // 0x206e24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E28u;
        goto label_206e28;
    }
    ctx->pc = 0x206E20u;
    {
        const bool branch_taken_0x206e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206e20) {
            ctx->pc = 0x206E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206E20u;
            // 0x206e24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206E4Cu;
            goto label_206e4c;
        }
    }
    ctx->pc = 0x206E28u;
label_206e28:
    // 0x206e28: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x206e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_206e2c:
    // 0x206e2c: 0xc080924  jal         func_202490
label_206e30:
    if (ctx->pc == 0x206E30u) {
        ctx->pc = 0x206E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E2Cu;
        // 0x206e30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E34u;
        goto label_206e34;
    }
    ctx->pc = 0x206E2Cu;
    SET_GPR_U32(ctx, 31, 0x206E34u);
    ctx->pc = 0x206E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E2Cu;
    // 0x206e30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x206E2Cu, 0x206E34u)) {
        return;
    }
    ctx->pc = 0x206E34u;
label_206e34:
    // 0x206e34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206e38:
    // 0x206e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206e3c:
    // 0x206e3c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x206e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_206e40:
    // 0x206e40: 0x40f809  jalr        $v0
label_206e44:
    if (ctx->pc == 0x206E44u) {
        ctx->pc = 0x206E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E40u;
        // 0x206e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E48u;
        goto label_206e48;
    }
    ctx->pc = 0x206E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206E48u);
        ctx->pc = 0x206E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E40u;
        // 0x206e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E40u, 0x206E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206E48u;
label_206e48:
    // 0x206e48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x206e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206e4c:
    // 0x206e4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x206e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_206e50:
    // 0x206e50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x206e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_206e54:
    // 0x206e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x206e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_206e58:
    // 0x206e58: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x206e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206e5c:
    // 0x206e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206e60:
    // 0x206e60: 0x3e00008  jr          $ra
label_206e64:
    if (ctx->pc == 0x206E64u) {
        ctx->pc = 0x206E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E60u;
        // 0x206e64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E68u;
        goto label_fallthrough_0x206e60;
    }
    ctx->pc = 0x206E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E60u;
        // 0x206e64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206e60:
    ctx->pc = 0x206E68u;
}
