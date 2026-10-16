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

// Function: sub_001DB948
// Address: 0x1db948 - 0x1db9e8
void sub_001DB948_0x1db948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB948_0x1db948");
#endif

    switch (ctx->pc) {
        case 0x1db96cu: goto label_1db96c;
        case 0x1db990u: goto label_1db990;
        case 0x1db9b8u: goto label_1db9b8;
        default: break;
    }

    ctx->pc = 0x1db948u;

    // 0x1db948: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1db948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1db94c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1db94cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1db950: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1db950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1db954: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1db954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1db958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db95c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1db95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1db960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db964: 0xc07730e  jal         func_1DCC38
    ctx->pc = 0x1DB964u;
    SET_GPR_U32(ctx, 31, 0x1DB96Cu);
    ctx->pc = 0x1DB968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB964u;
    // 0x1db968: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC38u, 0x1DB964u, 0x1DB96Cu)) {
        return;
    }
    ctx->pc = 0x1DB96Cu;
label_1db96c:
    // 0x1db96c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db970: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DB970u;
    {
        const bool branch_taken_0x1db970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB970u;
        // 0x1db974: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db970) {
            ctx->pc = 0x1DB9CCu;
            goto label_1db9cc;
        }
    }
    ctx->pc = 0x1DB978u;
    // 0x1db978: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1db978u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1db97c: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DB97Cu;
    {
        const bool branch_taken_0x1db97c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB97Cu;
        // 0x1db980: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db97c) {
            ctx->pc = 0x1DB9C8u;
            goto label_1db9c8;
        }
    }
    ctx->pc = 0x1DB984u;
    // 0x1db984: 0x26330018  addiu       $s3, $s1, 0x18
    ctx->pc = 0x1db984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1db988: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1db988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1db98c: 0x0  nop
    ctx->pc = 0x1db98cu;
    // NOP
label_1db990:
    // 0x1db990: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1db990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1db994: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db998: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1db998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db99c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1db99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db9a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1db9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1db9a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1db9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db9a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB9A8u;
    {
        const bool branch_taken_0x1db9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db9a8) {
            ctx->pc = 0x1DB9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB9A8u;
            // 0x1db9ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB9BCu;
            goto label_1db9bc;
        }
    }
    ctx->pc = 0x1DB9B0u;
    // 0x1db9b0: 0xc09d926  jal         func_276498
    ctx->pc = 0x1DB9B0u;
    SET_GPR_U32(ctx, 31, 0x1DB9B8u);
    ctx->pc = 0x1DB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB9B0u;
    // 0x1db9b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x1DB9B0u, 0x1DB9B8u)) {
        return;
    }
    ctx->pc = 0x1DB9B8u;
label_1db9b8:
    // 0x1db9b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1db9bc:
    // 0x1db9bc: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1db9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1db9c0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DB9C0u;
    {
        const bool branch_taken_0x1db9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db9c0) {
            ctx->pc = 0x1DB9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB9C0u;
            // 0x1db9c4: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db990;
        }
    }
    ctx->pc = 0x1DB9C8u;
label_1db9c8:
    // 0x1db9c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1db9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1db9cc:
    // 0x1db9cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1db9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db9d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db9d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db9d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1db9d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db9dc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1db9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9E0u;
        // 0x1db9e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB9E8u;
}
