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

// Function: sub_002E3FA0
// Address: 0x2e3fa0 - 0x2e4018
void sub_002E3FA0_0x2e3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3FA0_0x2e3fa0");
#endif

    switch (ctx->pc) {
        case 0x2e3fa0u: goto label_2e3fa0;
        case 0x2e3fa4u: goto label_2e3fa4;
        case 0x2e3fa8u: goto label_2e3fa8;
        case 0x2e3facu: goto label_2e3fac;
        case 0x2e3fb0u: goto label_2e3fb0;
        case 0x2e3fb4u: goto label_2e3fb4;
        case 0x2e3fb8u: goto label_2e3fb8;
        case 0x2e3fbcu: goto label_2e3fbc;
        case 0x2e3fc0u: goto label_2e3fc0;
        case 0x2e3fc4u: goto label_2e3fc4;
        case 0x2e3fc8u: goto label_2e3fc8;
        case 0x2e3fccu: goto label_2e3fcc;
        case 0x2e3fd0u: goto label_2e3fd0;
        case 0x2e3fd4u: goto label_2e3fd4;
        case 0x2e3fd8u: goto label_2e3fd8;
        case 0x2e3fdcu: goto label_2e3fdc;
        case 0x2e3fe0u: goto label_2e3fe0;
        case 0x2e3fe4u: goto label_2e3fe4;
        case 0x2e3fe8u: goto label_2e3fe8;
        case 0x2e3fecu: goto label_2e3fec;
        case 0x2e3ff0u: goto label_2e3ff0;
        case 0x2e3ff4u: goto label_2e3ff4;
        case 0x2e3ff8u: goto label_2e3ff8;
        case 0x2e3ffcu: goto label_2e3ffc;
        case 0x2e4000u: goto label_2e4000;
        case 0x2e4004u: goto label_2e4004;
        case 0x2e4008u: goto label_2e4008;
        case 0x2e400cu: goto label_2e400c;
        case 0x2e4010u: goto label_2e4010;
        case 0x2e4014u: goto label_2e4014;
        default: break;
    }

    ctx->pc = 0x2e3fa0u;

label_2e3fa0:
    // 0x2e3fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e3fa4:
    // 0x2e3fa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e3fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e3fa8:
    // 0x2e3fa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e3fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2e3fac:
    // 0x2e3fac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e3facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3fb0:
    // 0x2e3fb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e3fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2e3fb4:
    // 0x2e3fb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e3fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e3fb8:
    // 0x2e3fb8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2e3fbc:
    if (ctx->pc == 0x2E3FBCu) {
        ctx->pc = 0x2E3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FB8u;
        // 0x2e3fbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3FC0u;
        goto label_2e3fc0;
    }
    ctx->pc = 0x2E3FB8u;
    {
        const bool branch_taken_0x2e3fb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FB8u;
        // 0x2e3fbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fb8) {
            ctx->pc = 0x2E3FF0u;
            goto label_2e3ff0;
        }
    }
    ctx->pc = 0x2E3FC0u;
label_2e3fc0:
    // 0x2e3fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e3fc4:
    // 0x2e3fc4: 0x0  nop
    ctx->pc = 0x2e3fc4u;
    // NOP
label_2e3fc8:
    // 0x2e3fc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e3fcc:
    // 0x2e3fcc: 0x40f809  jalr        $v0
label_2e3fd0:
    if (ctx->pc == 0x2E3FD0u) {
        ctx->pc = 0x2E3FD4u;
        goto label_2e3fd4;
    }
    ctx->pc = 0x2E3FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E3FD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3FCCu, 0x2E3FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3FD4u;
label_2e3fd4:
    // 0x2e3fd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e3fd8:
    if (ctx->pc == 0x2E3FD8u) {
        ctx->pc = 0x2E3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FD4u;
        // 0x2e3fd8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3FDCu;
        goto label_2e3fdc;
    }
    ctx->pc = 0x2E3FD4u;
    {
        const bool branch_taken_0x2e3fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FD4u;
        // 0x2e3fd8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fd4) {
            ctx->pc = 0x2E3FE4u;
            goto label_2e3fe4;
        }
    }
    ctx->pc = 0x2E3FDCu;
label_2e3fdc:
    // 0x2e3fdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e3fe0:
    if (ctx->pc == 0x2E3FE0u) {
        ctx->pc = 0x2E3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FDCu;
        // 0x2e3fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3FE4u;
        goto label_2e3fe4;
    }
    ctx->pc = 0x2E3FDCu;
    {
        const bool branch_taken_0x2e3fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FDCu;
        // 0x2e3fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fdc) {
            ctx->pc = 0x2E3FF4u;
            goto label_2e3ff4;
        }
    }
    ctx->pc = 0x2E3FE4u;
label_2e3fe4:
    // 0x2e3fe4: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2e3fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2e3fe8:
    // 0x2e3fe8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2e3fec:
    if (ctx->pc == 0x2E3FECu) {
        ctx->pc = 0x2E3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FE8u;
        // 0x2e3fec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3FF0u;
        goto label_2e3ff0;
    }
    ctx->pc = 0x2E3FE8u;
    {
        const bool branch_taken_0x2e3fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FE8u;
        // 0x2e3fec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fe8) {
            ctx->pc = 0x2E3FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3fc8;
        }
    }
    ctx->pc = 0x2E3FF0u;
label_2e3ff0:
    // 0x2e3ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3ff4:
    // 0x2e3ff4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e3ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e3ff8:
    // 0x2e3ff8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e3ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e3ffc:
    // 0x2e3ffc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e3ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4000:
    // 0x2e4000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4004:
    // 0x2e4004: 0x3e00008  jr          $ra
label_2e4008:
    if (ctx->pc == 0x2E4008u) {
        ctx->pc = 0x2E4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4004u;
        // 0x2e4008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E400Cu;
        goto label_2e400c;
    }
    ctx->pc = 0x2E4004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4004u;
        // 0x2e4008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E400Cu;
label_2e400c:
    // 0x2e400c: 0x0  nop
    ctx->pc = 0x2e400cu;
    // NOP
label_2e4010:
    // 0x2e4010: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e4010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e4014:
    // 0x2e4014: 0x0  nop
    ctx->pc = 0x2e4014u;
    // NOP
    ctx->pc = 0x2e4018u;
}
