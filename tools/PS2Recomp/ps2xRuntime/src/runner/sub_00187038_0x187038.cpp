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

// Function: sub_00187038
// Address: 0x187038 - 0x1870d8
void sub_00187038_0x187038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187038_0x187038");
#endif

    switch (ctx->pc) {
        case 0x187080u: goto label_187080;
        case 0x1870a8u: goto label_1870a8;
        case 0x1870b8u: goto label_1870b8;
        case 0x1870c8u: goto label_1870c8;
        default: break;
    }

    ctx->pc = 0x187038u;

    // 0x187038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18703c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x187040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187048: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x187048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18704c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18704Cu;
    {
        const bool branch_taken_0x18704c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18704Cu;
        // 0x187050: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18704c) {
            ctx->pc = 0x1870C8u;
            goto label_1870c8;
        }
    }
    ctx->pc = 0x187054u;
    // 0x187054: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x187054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x187058: 0x8c45bdd8  lw          $a1, -0x4228($v0)
    ctx->pc = 0x187058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950360)));
    // 0x18705c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x18705cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x187060: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x187060u;
    {
        const bool branch_taken_0x187060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x187060) {
            ctx->pc = 0x187064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187060u;
            // 0x187064: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187084u;
            goto label_187084;
        }
    }
    ctx->pc = 0x187068u;
    // 0x187068: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x187068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18706c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18706Cu;
    {
        const bool branch_taken_0x18706c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18706Cu;
        // 0x187070: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18706c) {
            ctx->pc = 0x187080u;
            goto label_187080;
        }
    }
    ctx->pc = 0x187074u;
    // 0x187074: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x187074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x187078: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x187078u;
    SET_GPR_U32(ctx, 31, 0x187080u);
    ctx->pc = 0x18707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187078u;
    // 0x18707c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x187078u, 0x187080u)) {
        return;
    }
    ctx->pc = 0x187080u;
label_187080:
    // 0x187080: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x187080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_187084:
    // 0x187084: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x187084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x187088: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x187088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x18708c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x18708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x187090: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x187090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x187094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187098: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x187098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x18709c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x18709cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1870a0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1870A0u;
    SET_GPR_U32(ctx, 31, 0x1870A8u);
    ctx->pc = 0x1870A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870A0u;
    // 0x1870a4: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1870A0u, 0x1870A8u)) {
        return;
    }
    ctx->pc = 0x1870A8u;
label_1870a8:
    // 0x1870a8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1870a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1870ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1870acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870b0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1870B0u;
    SET_GPR_U32(ctx, 31, 0x1870B8u);
    ctx->pc = 0x1870B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870B0u;
    // 0x1870b4: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1870B0u, 0x1870B8u)) {
        return;
    }
    ctx->pc = 0x1870B8u;
label_1870b8:
    // 0x1870b8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1870b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1870bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1870bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870c0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1870C0u;
    SET_GPR_U32(ctx, 31, 0x1870C8u);
    ctx->pc = 0x1870C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870C0u;
    // 0x1870c4: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1870C0u, 0x1870C8u)) {
        return;
    }
    ctx->pc = 0x1870C8u;
label_1870c8:
    // 0x1870c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1870c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1870cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1870ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1870d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1870D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1870D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870D0u;
        // 0x1870d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1870D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1870D8u;
}
