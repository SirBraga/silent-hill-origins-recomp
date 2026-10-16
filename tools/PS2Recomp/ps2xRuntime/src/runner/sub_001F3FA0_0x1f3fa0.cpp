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

// Function: sub_001F3FA0
// Address: 0x1f3fa0 - 0x1f4058
void sub_001F3FA0_0x1f3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3FA0_0x1f3fa0");
#endif

    switch (ctx->pc) {
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fa4u: goto label_1f3fa4;
        case 0x1f3fa8u: goto label_1f3fa8;
        case 0x1f3facu: goto label_1f3fac;
        case 0x1f3fb0u: goto label_1f3fb0;
        case 0x1f3fb4u: goto label_1f3fb4;
        case 0x1f3fb8u: goto label_1f3fb8;
        case 0x1f3fbcu: goto label_1f3fbc;
        case 0x1f3fc0u: goto label_1f3fc0;
        case 0x1f3fc4u: goto label_1f3fc4;
        case 0x1f3fc8u: goto label_1f3fc8;
        case 0x1f3fccu: goto label_1f3fcc;
        case 0x1f3fd0u: goto label_1f3fd0;
        case 0x1f3fd4u: goto label_1f3fd4;
        case 0x1f3fd8u: goto label_1f3fd8;
        case 0x1f3fdcu: goto label_1f3fdc;
        case 0x1f3fe0u: goto label_1f3fe0;
        case 0x1f3fe4u: goto label_1f3fe4;
        case 0x1f3fe8u: goto label_1f3fe8;
        case 0x1f3fecu: goto label_1f3fec;
        case 0x1f3ff0u: goto label_1f3ff0;
        case 0x1f3ff4u: goto label_1f3ff4;
        case 0x1f3ff8u: goto label_1f3ff8;
        case 0x1f3ffcu: goto label_1f3ffc;
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4004u: goto label_1f4004;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f400cu: goto label_1f400c;
        case 0x1f4010u: goto label_1f4010;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f4018u: goto label_1f4018;
        case 0x1f401cu: goto label_1f401c;
        case 0x1f4020u: goto label_1f4020;
        case 0x1f4024u: goto label_1f4024;
        case 0x1f4028u: goto label_1f4028;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4030u: goto label_1f4030;
        case 0x1f4034u: goto label_1f4034;
        case 0x1f4038u: goto label_1f4038;
        case 0x1f403cu: goto label_1f403c;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4044u: goto label_1f4044;
        case 0x1f4048u: goto label_1f4048;
        case 0x1f404cu: goto label_1f404c;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f4054u: goto label_1f4054;
        default: break;
    }

    ctx->pc = 0x1f3fa0u;

label_1f3fa0:
    // 0x1f3fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f3fa4:
    // 0x1f3fa4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1f3fa8:
    // 0x1f3fa8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f3fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1f3fac:
    // 0x1f3fac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f3facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1f3fb0:
    // 0x1f3fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fb4:
    // 0x1f3fb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f3fb8:
    // 0x1f3fb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f3fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fbc:
    // 0x1f3fbc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1f3fc0:
    // 0x1f3fc0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f3fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fc4:
    // 0x1f3fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f3fc8:
    // 0x1f3fc8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f3fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fcc:
    // 0x1f3fcc: 0x8c6210b8  lw          $v0, 0x10B8($v1)
    ctx->pc = 0x1f3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4280)));
label_1f3fd0:
    // 0x1f3fd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fd4:
    // 0x1f3fd4: 0x40f809  jalr        $v0
label_1f3fd8:
    if (ctx->pc == 0x1F3FD8u) {
        ctx->pc = 0x1F3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FD4u;
        // 0x1f3fd8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FDCu;
        goto label_1f3fdc;
    }
    ctx->pc = 0x1F3FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3FDCu);
        ctx->pc = 0x1F3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FD4u;
        // 0x1f3fd8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3FD4u, 0x1F3FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3FDCu;
label_1f3fdc:
    // 0x1f3fdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1f3fe0:
    if (ctx->pc == 0x1F3FE0u) {
        ctx->pc = 0x1F3FE4u;
        goto label_1f3fe4;
    }
    ctx->pc = 0x1F3FDCu;
    {
        const bool branch_taken_0x1f3fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3fdc) {
            ctx->pc = 0x1F3FF8u;
            goto label_1f3ff8;
        }
    }
    ctx->pc = 0x1F3FE4u;
label_1f3fe4:
    // 0x1f3fe4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1f3fe8:
    if (ctx->pc == 0x1F3FE8u) {
        ctx->pc = 0x1F3FECu;
        goto label_1f3fec;
    }
    ctx->pc = 0x1F3FE4u;
    {
        const bool branch_taken_0x1f3fe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3fe4) {
            ctx->pc = 0x1F3FF8u;
            goto label_1f3ff8;
        }
    }
    ctx->pc = 0x1F3FECu;
label_1f3fec:
    // 0x1f3fec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f3ff0:
    // 0x1f3ff0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f3ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1f3ff4:
    // 0x1f3ff4: 0x202880b  movn        $s1, $s0, $v0
    ctx->pc = 0x1f3ff4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16));
label_1f3ff8:
    // 0x1f3ff8: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_1f3ffc:
    if (ctx->pc == 0x1F3FFCu) {
        ctx->pc = 0x1F3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FF8u;
        // 0x1f3ffc: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4000u;
        goto label_1f4000;
    }
    ctx->pc = 0x1F3FF8u;
    {
        const bool branch_taken_0x1f3ff8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FF8u;
        // 0x1f3ffc: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ff8) {
            ctx->pc = 0x1F4030u;
            goto label_1f4030;
        }
    }
    ctx->pc = 0x1F4000u;
label_1f4000:
    // 0x1f4000: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1f4004:
    if (ctx->pc == 0x1F4004u) {
        ctx->pc = 0x1F4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4000u;
        // 0x1f4004: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4008u;
        goto label_1f4008;
    }
    ctx->pc = 0x1F4000u;
    {
        const bool branch_taken_0x1f4000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4000u;
        // 0x1f4004: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4000) {
            ctx->pc = 0x1F4034u;
            goto label_1f4034;
        }
    }
    ctx->pc = 0x1F4008u;
label_1f4008:
    // 0x1f4008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f400c:
    // 0x1f400c: 0x0  nop
    ctx->pc = 0x1f400cu;
    // NOP
label_1f4010:
    // 0x1f4010: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4014:
    // 0x1f4014: 0xc07cfe8  jal         func_1F3FA0
label_1f4018:
    if (ctx->pc == 0x1F4018u) {
        ctx->pc = 0x1F4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4014u;
        // 0x1f4018: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F401Cu;
        goto label_1f401c;
    }
    ctx->pc = 0x1F4014u;
    SET_GPR_U32(ctx, 31, 0x1F401Cu);
    ctx->pc = 0x1F4018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4014u;
    // 0x1f4018: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3FA0u;
    goto label_1f3fa0;
    ctx->pc = 0x1F401Cu;
label_1f401c:
    // 0x1f401c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f401cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4020:
    // 0x1f4020: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1f4024:
    if (ctx->pc == 0x1F4024u) {
        ctx->pc = 0x1F4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4020u;
        // 0x1f4024: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4028u;
        goto label_1f4028;
    }
    ctx->pc = 0x1F4020u;
    {
        const bool branch_taken_0x1f4020 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4020u;
        // 0x1f4024: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4020) {
            ctx->pc = 0x1F4030u;
            goto label_1f4030;
        }
    }
    ctx->pc = 0x1F4028u;
label_1f4028:
    // 0x1f4028: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_1f402c:
    if (ctx->pc == 0x1F402Cu) {
        ctx->pc = 0x1F402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4028u;
        // 0x1f402c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4030u;
        goto label_1f4030;
    }
    ctx->pc = 0x1F4028u;
    {
        const bool branch_taken_0x1f4028 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4028u;
        // 0x1f402c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4028) {
            ctx->pc = 0x1F4010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4010;
        }
    }
    ctx->pc = 0x1F4030u;
label_1f4030:
    // 0x1f4030: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f4030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4034:
    // 0x1f4034: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f4034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4038:
    // 0x1f4038: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f4038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f403c:
    // 0x1f403c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f403cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4040:
    // 0x1f4040: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f4040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4044:
    // 0x1f4044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4048:
    // 0x1f4048: 0x3e00008  jr          $ra
label_1f404c:
    if (ctx->pc == 0x1F404Cu) {
        ctx->pc = 0x1F404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4048u;
        // 0x1f404c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4050u;
        goto label_1f4050;
    }
    ctx->pc = 0x1F4048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4048u;
        // 0x1f404c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4050u;
label_1f4050:
    // 0x1f4050: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f4050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f4054:
    // 0x1f4054: 0x0  nop
    ctx->pc = 0x1f4054u;
    // NOP
    ctx->pc = 0x1f4058u;
}
