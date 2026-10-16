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

// Function: sub_00111A68
// Address: 0x111a68 - 0x111b08
void sub_00111A68_0x111a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111A68_0x111a68");
#endif

    switch (ctx->pc) {
        case 0x111a98u: goto label_111a98;
        case 0x111abcu: goto label_111abc;
        case 0x111adcu: goto label_111adc;
        default: break;
    }

    ctx->pc = 0x111a68u;

    // 0x111a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111a6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x111a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x111a70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x111a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111a7c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x111a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x111a80: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x111A80u;
    {
        const bool branch_taken_0x111a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x111a80) {
            ctx->pc = 0x111A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111A80u;
            // 0x111a84: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111AC4u;
            goto label_111ac4;
        }
    }
    ctx->pc = 0x111A88u;
    // 0x111a88: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x111a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x111a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a90: 0xc044f40  jal         func_113D00
    ctx->pc = 0x111A90u;
    SET_GPR_U32(ctx, 31, 0x111A98u);
    ctx->pc = 0x111A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A90u;
    // 0x111a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113D00u, 0x111A90u, 0x111A98u)) {
        return;
    }
    ctx->pc = 0x111A98u;
label_111a98:
    // 0x111a98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x111a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x111a9c: 0x26030084  addiu       $v1, $s0, 0x84
    ctx->pc = 0x111a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x111aa0: 0x8c4646c0  lw          $a2, 0x46C0($v0)
    ctx->pc = 0x111aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B46C0u));
    // 0x111aa4: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x111aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x111aa8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x111aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x111aac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ab0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x111ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x111ab4: 0xc07fc26  jal         func_1FF098
    ctx->pc = 0x111AB4u;
    SET_GPR_U32(ctx, 31, 0x111ABCu);
    ctx->pc = 0x111AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AB4u;
    // 0x111ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF098u, 0x111AB4u, 0x111ABCu)) {
        return;
    }
    ctx->pc = 0x111ABCu;
label_111abc:
    // 0x111abc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x111ABCu;
    {
        const bool branch_taken_0x111abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111ABCu;
        // 0x111ac0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111abc) {
            ctx->pc = 0x111AFCu;
            goto label_111afc;
        }
    }
    ctx->pc = 0x111AC4u;
label_111ac4:
    // 0x111ac4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111AC4u;
    {
        const bool branch_taken_0x111ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x111ac4) {
            ctx->pc = 0x111AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111AC4u;
            // 0x111ac8: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111AE4u;
            goto label_111ae4;
        }
    }
    ctx->pc = 0x111ACCu;
    // 0x111acc: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x111accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x111ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ad4: 0xc044f40  jal         func_113D00
    ctx->pc = 0x111AD4u;
    SET_GPR_U32(ctx, 31, 0x111ADCu);
    ctx->pc = 0x111AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AD4u;
    // 0x111ad8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113D00u, 0x111AD4u, 0x111ADCu)) {
        return;
    }
    ctx->pc = 0x111ADCu;
label_111adc:
    // 0x111adc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x111ADCu;
    {
        const bool branch_taken_0x111adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111ADCu;
        // 0x111ae0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111adc) {
            ctx->pc = 0x111AFCu;
            goto label_111afc;
        }
    }
    ctx->pc = 0x111AE4u;
label_111ae4:
    // 0x111ae4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111AE4u;
    {
        const bool branch_taken_0x111ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x111ae4) {
            ctx->pc = 0x111AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111AE4u;
            // 0x111ae8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111AFCu;
            goto label_111afc;
        }
    }
    ctx->pc = 0x111AECu;
    // 0x111aec: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x111aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x111af0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x111AF0u;
    {
        const bool branch_taken_0x111af0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x111af0) {
            ctx->pc = 0x111AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111AF0u;
            // 0x111af4: 0xacb00000  sw          $s0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111AF8u;
            goto label_111af8;
        }
    }
    ctx->pc = 0x111AF8u;
label_111af8:
    // 0x111af8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x111af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_111afc:
    // 0x111afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111b00: 0x3e00008  jr          $ra
    ctx->pc = 0x111B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B00u;
        // 0x111b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111B08u;
}
