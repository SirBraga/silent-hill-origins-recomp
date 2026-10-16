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

// Function: sub_0019DF38
// Address: 0x19df38 - 0x19dfc0
void sub_0019DF38_0x19df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DF38_0x19df38");
#endif

    switch (ctx->pc) {
        case 0x19df58u: goto label_19df58;
        case 0x19df64u: goto label_19df64;
        case 0x19df78u: goto label_19df78;
        case 0x19df9cu: goto label_19df9c;
        default: break;
    }

    ctx->pc = 0x19df38u;

    // 0x19df38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19df3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19df40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19df44: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19df44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19df48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19df4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19df50: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19DF50u;
    SET_GPR_U32(ctx, 31, 0x19DF58u);
    ctx->pc = 0x19DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF50u;
    // 0x19df54: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19DF50u, 0x19DF58u)) {
        return;
    }
    ctx->pc = 0x19DF58u;
label_19df58:
    // 0x19df58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19df58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df5c: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19DF5Cu;
    SET_GPR_U32(ctx, 31, 0x19DF64u);
    ctx->pc = 0x19DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF5Cu;
    // 0x19df60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19DF5Cu, 0x19DF64u)) {
        return;
    }
    ctx->pc = 0x19DF64u;
label_19df64:
    // 0x19df64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19df64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19df68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19df68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df6c: 0x2463ab58  addiu       $v1, $v1, -0x54A8
    ctx->pc = 0x19df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945624));
    // 0x19df70: 0xc09d478  jal         func_2751E0
    ctx->pc = 0x19DF70u;
    SET_GPR_U32(ctx, 31, 0x19DF78u);
    ctx->pc = 0x19DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF70u;
    // 0x19df74: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2751E0u, 0x19DF70u, 0x19DF78u)) {
        return;
    }
    ctx->pc = 0x19DF78u;
label_19df78:
    // 0x19df78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19df78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19df80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19df80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19df84: 0x2442eeff  addiu       $v0, $v0, -0x1101
    ctx->pc = 0x19df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962943));
    // 0x19df88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19df88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19df8c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DF8Cu;
    {
        const bool branch_taken_0x19df8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19df8c) {
            ctx->pc = 0x19DF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DF8Cu;
            // 0x19df90: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DFA0u;
            goto label_19dfa0;
        }
    }
    ctx->pc = 0x19DF94u;
    // 0x19df94: 0xc078ab2  jal         func_1E2AC8
    ctx->pc = 0x19DF94u;
    SET_GPR_U32(ctx, 31, 0x19DF9Cu);
    ctx->pc = 0x19DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF94u;
    // 0x19df98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E2AC8u, 0x19DF94u, 0x19DF9Cu)) {
        return;
    }
    ctx->pc = 0x19DF9Cu;
label_19df9c:
    // 0x19df9c: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x19df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_19dfa0:
    // 0x19dfa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19dfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19dfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19DFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFB0u;
        // 0x19dfb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DFB8u;
    // 0x19dfb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19dfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19dfbc: 0x0  nop
    ctx->pc = 0x19dfbcu;
    // NOP
    ctx->pc = 0x19dfc0u;
}
