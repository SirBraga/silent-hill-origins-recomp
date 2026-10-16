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

// Function: sub_0011EB10
// Address: 0x11eb10 - 0x11eba8
void sub_0011EB10_0x11eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EB10_0x11eb10");
#endif

    switch (ctx->pc) {
        case 0x11eb2cu: goto label_11eb2c;
        case 0x11eb40u: goto label_11eb40;
        case 0x11eb58u: goto label_11eb58;
        case 0x11eb84u: goto label_11eb84;
        default: break;
    }

    ctx->pc = 0x11eb10u;

    // 0x11eb10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11eb14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11eb18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11eb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11eb1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11eb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11eb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11eb24: 0xc04459c  jal         func_111670
    ctx->pc = 0x11EB24u;
    SET_GPR_U32(ctx, 31, 0x11EB2Cu);
    ctx->pc = 0x11EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB24u;
    // 0x11eb28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x11EB24u, 0x11EB2Cu)) {
        return;
    }
    ctx->pc = 0x11EB2Cu;
label_11eb2c:
    // 0x11eb2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x11eb30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11eb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb34: 0x8c4645c0  lw          $a2, 0x45C0($v0)
    ctx->pc = 0x11eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B45C0u));
    // 0x11eb38: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x11EB38u;
    SET_GPR_U32(ctx, 31, 0x11EB40u);
    ctx->pc = 0x11EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB38u;
    // 0x11eb3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11EB38u, 0x11EB40u)) {
        return;
    }
    ctx->pc = 0x11EB40u;
label_11eb40:
    // 0x11eb40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eb44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11eb48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11EB48u;
    {
        const bool branch_taken_0x11eb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB48u;
        // 0x11eb4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb48) {
            ctx->pc = 0x11EB98u;
            goto label_11eb98;
        }
    }
    ctx->pc = 0x11EB50u;
    // 0x11eb50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eb54: 0x0  nop
    ctx->pc = 0x11eb54u;
    // NOP
label_11eb58:
    // 0x11eb58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11eb5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EB5Cu;
    {
        const bool branch_taken_0x11eb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB5Cu;
        // 0x11eb60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb5c) {
            ctx->pc = 0x11EB70u;
            goto label_11eb70;
        }
    }
    ctx->pc = 0x11EB64u;
    // 0x11eb64: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x11eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eb68: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x11eb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x11eb6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11eb70:
    // 0x11eb70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11eb78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11eb7c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x11EB7Cu;
    SET_GPR_U32(ctx, 31, 0x11EB84u);
    ctx->pc = 0x11EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB7Cu;
    // 0x11eb80: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11EB7Cu, 0x11EB84u)) {
        return;
    }
    ctx->pc = 0x11EB84u;
label_11eb84:
    // 0x11eb84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eb88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11eb8c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11EB8Cu;
    {
        const bool branch_taken_0x11eb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB8Cu;
        // 0x11eb90: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb8c) {
            ctx->pc = 0x11EB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11EB94u;
    // 0x11eb94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11eb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11eb98:
    // 0x11eb98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11eb98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eb9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11eb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eba0: 0x3e00008  jr          $ra
    ctx->pc = 0x11EBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBA0u;
        // 0x11eba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EBA8u;
}
