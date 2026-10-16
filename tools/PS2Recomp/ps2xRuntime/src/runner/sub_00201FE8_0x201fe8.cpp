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

// Function: sub_00201FE8
// Address: 0x201fe8 - 0x2020b8
void sub_00201FE8_0x201fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201FE8_0x201fe8");
#endif

    switch (ctx->pc) {
        case 0x202038u: goto label_202038;
        case 0x202044u: goto label_202044;
        case 0x202054u: goto label_202054;
        case 0x202070u: goto label_202070;
        case 0x20207cu: goto label_20207c;
        case 0x20208cu: goto label_20208c;
        default: break;
    }

    ctx->pc = 0x201fe8u;

    // 0x201fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201fec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x201fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x201ff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x201ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x201ff4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x201ff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ff8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x201ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x201ffc: 0x3c12005c  lui         $s2, 0x5C
    ctx->pc = 0x201ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
    // 0x202000: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x202000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x202004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202008: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x202008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x20200c: 0x8e42027c  lw          $v0, 0x27C($s2)
    ctx->pc = 0x20200cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C027Cu));
    // 0x202010: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x202010u;
    {
        const bool branch_taken_0x202010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202010u;
        // 0x202014: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202010) {
            ctx->pc = 0x202098u;
            goto label_202098;
        }
    }
    ctx->pc = 0x202018u;
    // 0x202018: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x202018u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x20201c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202020: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x202020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0270u));
    // 0x202024: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x202024u;
    {
        const bool branch_taken_0x202024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202024u;
        // 0x202028: 0xae42027c  sw          $v0, 0x27C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202024) {
            ctx->pc = 0x202058u;
            goto label_202058;
        }
    }
    ctx->pc = 0x20202Cu;
    // 0x20202c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202030: 0xc0807d6  jal         func_201F58
    ctx->pc = 0x202030u;
    SET_GPR_U32(ctx, 31, 0x202038u);
    ctx->pc = 0x202034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202030u;
    // 0x202034: 0x3c04000c  lui         $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F58u, 0x202030u, 0x202038u)) {
        return;
    }
    ctx->pc = 0x202038u;
label_202038:
    // 0x202038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20203c: 0xc080858  jal         func_202160
    ctx->pc = 0x20203Cu;
    SET_GPR_U32(ctx, 31, 0x202044u);
    ctx->pc = 0x202040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20203Cu;
    // 0x202040: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x20203Cu, 0x202044u)) {
        return;
    }
    ctx->pc = 0x202044u;
label_202044:
    // 0x202044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20204c: 0xc0809ee  jal         func_2027B8
    ctx->pc = 0x20204Cu;
    SET_GPR_U32(ctx, 31, 0x202054u);
    ctx->pc = 0x202050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20204Cu;
    // 0x202050: 0x3c06000c  lui         $a2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2027B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2027B8u, 0x20204Cu, 0x202054u)) {
        return;
    }
    ctx->pc = 0x202054u;
label_202054:
    // 0x202054: 0xae220270  sw          $v0, 0x270($s1)
    ctx->pc = 0x202054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 2));
label_202058:
    // 0x202058: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x202058u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x20205c: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x20205cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C0274u));
    // 0x202060: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x202060u;
    {
        const bool branch_taken_0x202060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202060) {
            ctx->pc = 0x202064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202060u;
            // 0x202064: 0xae40027c  sw          $zero, 0x27C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202094u;
            goto label_202094;
        }
    }
    ctx->pc = 0x202068u;
    // 0x202068: 0xc07d7c6  jal         func_1F5F18
    ctx->pc = 0x202068u;
    SET_GPR_U32(ctx, 31, 0x202070u);
    ctx->pc = 0x1F5F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5F18u, 0x202068u, 0x202070u)) {
        return;
    }
    ctx->pc = 0x202070u;
label_202070:
    // 0x202070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202074: 0xc080858  jal         func_202160
    ctx->pc = 0x202074u;
    SET_GPR_U32(ctx, 31, 0x20207Cu);
    ctx->pc = 0x202078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202074u;
    // 0x202078: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x202074u, 0x20207Cu)) {
        return;
    }
    ctx->pc = 0x20207Cu;
label_20207c:
    // 0x20207c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202084: 0xc080bf8  jal         func_202FE0
    ctx->pc = 0x202084u;
    SET_GPR_U32(ctx, 31, 0x20208Cu);
    ctx->pc = 0x202088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202084u;
    // 0x202088: 0x3c060028  lui         $a2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202FE0u, 0x202084u, 0x20208Cu)) {
        return;
    }
    ctx->pc = 0x20208Cu;
label_20208c:
    // 0x20208c: 0xae220274  sw          $v0, 0x274($s1)
    ctx->pc = 0x20208cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
    // 0x202090: 0xae40027c  sw          $zero, 0x27C($s2)
    ctx->pc = 0x202090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
label_202094:
    // 0x202094: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x202094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_202098:
    // 0x202098: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x202098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20209c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20209cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2020a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2020a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2020a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2020a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2020a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2020a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2020ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2020ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020ACu;
        // 0x2020b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2020B4u;
    // 0x2020b4: 0x0  nop
    ctx->pc = 0x2020b4u;
    // NOP
    ctx->pc = 0x2020b8u;
}
