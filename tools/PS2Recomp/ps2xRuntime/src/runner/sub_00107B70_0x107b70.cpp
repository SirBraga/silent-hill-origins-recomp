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

// Function: sub_00107B70
// Address: 0x107b70 - 0x107c30
void sub_00107B70_0x107b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107B70_0x107b70");
#endif

    switch (ctx->pc) {
        case 0x107bacu: goto label_107bac;
        case 0x107bb4u: goto label_107bb4;
        case 0x107bbcu: goto label_107bbc;
        case 0x107bd0u: goto label_107bd0;
        case 0x107be8u: goto label_107be8;
        case 0x107c00u: goto label_107c00;
        case 0x107c14u: goto label_107c14;
        default: break;
    }

    ctx->pc = 0x107b70u;

    // 0x107b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107b74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x107b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x107b78: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x107b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x107b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107b84: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x107b84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x107b88: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x107b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x107b8c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x107b90: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x107B90u;
    {
        const bool branch_taken_0x107b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b90) {
            ctx->pc = 0x107B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107B90u;
            // 0x107b94: 0xc6000028  lwc1        $f0, 0x28($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107C18u;
            goto label_107c18;
        }
    }
    ctx->pc = 0x107B98u;
    // 0x107b98: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x107b9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107B9Cu;
    {
        const bool branch_taken_0x107b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b9c) {
            ctx->pc = 0x107BB4u;
            goto label_107bb4;
        }
    }
    ctx->pc = 0x107BA4u;
    // 0x107ba4: 0xc09d926  jal         func_276498
    ctx->pc = 0x107BA4u;
    SET_GPR_U32(ctx, 31, 0x107BACu);
    ctx->pc = 0x107BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BA4u;
    // 0x107ba8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x107BA4u, 0x107BACu)) {
        return;
    }
    ctx->pc = 0x107BACu;
label_107bac:
    // 0x107bac: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x107BACu;
    SET_GPR_U32(ctx, 31, 0x107BB4u);
    ctx->pc = 0x107BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BACu;
    // 0x107bb0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x107BACu, 0x107BB4u)) {
        return;
    }
    ctx->pc = 0x107BB4u;
label_107bb4:
    // 0x107bb4: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x107BB4u;
    SET_GPR_U32(ctx, 31, 0x107BBCu);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x107BB4u, 0x107BBCu)) {
        return;
    }
    ctx->pc = 0x107BBCu;
label_107bbc:
    // 0x107bbc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x107bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x107bc0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x107bc4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x107bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x107bc8: 0xc077b78  jal         func_1DEDE0
    ctx->pc = 0x107BC8u;
    SET_GPR_U32(ctx, 31, 0x107BD0u);
    ctx->pc = 0x107BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BC8u;
    // 0x107bcc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x107BC8u, 0x107BD0u)) {
        return;
    }
    ctx->pc = 0x107BD0u;
label_107bd0:
    // 0x107bd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107bd4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x107BD4u;
    {
        const bool branch_taken_0x107bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107bd4) {
            ctx->pc = 0x107BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107BD4u;
            // 0x107bd8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107BECu;
            goto label_107bec;
        }
    }
    ctx->pc = 0x107BDCu;
    // 0x107bdc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x107be0: 0xc076e48  jal         func_1DB920
    ctx->pc = 0x107BE0u;
    SET_GPR_U32(ctx, 31, 0x107BE8u);
    ctx->pc = 0x107BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BE0u;
    // 0x107be4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB920u, 0x107BE0u, 0x107BE8u)) {
        return;
    }
    ctx->pc = 0x107BE8u;
label_107be8:
    // 0x107be8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107bec:
    // 0x107bec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x107BECu;
    {
        const bool branch_taken_0x107bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107bec) {
            ctx->pc = 0x107BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107BECu;
            // 0x107bf0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107C04u;
            goto label_107c04;
        }
    }
    ctx->pc = 0x107BF4u;
    // 0x107bf4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x107bf8: 0xc076e86  jal         func_1DBA18
    ctx->pc = 0x107BF8u;
    SET_GPR_U32(ctx, 31, 0x107C00u);
    ctx->pc = 0x107BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BF8u;
    // 0x107bfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBA18u, 0x107BF8u, 0x107C00u)) {
        return;
    }
    ctx->pc = 0x107C00u;
label_107c00:
    // 0x107c00: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x107c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107c04:
    // 0x107c04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x107C04u;
    {
        const bool branch_taken_0x107c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107c04) {
            ctx->pc = 0x107C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107C04u;
            // 0x107c08: 0xc6000028  lwc1        $f0, 0x28($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107C18u;
            goto label_107c18;
        }
    }
    ctx->pc = 0x107C0Cu;
    // 0x107c0c: 0xc07b656  jal         func_1ED958
    ctx->pc = 0x107C0Cu;
    SET_GPR_U32(ctx, 31, 0x107C14u);
    ctx->pc = 0x107C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C0Cu;
    // 0x107c10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED958u, 0x107C0Cu, 0x107C14u)) {
        return;
    }
    ctx->pc = 0x107C14u;
label_107c14:
    // 0x107c14: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x107c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107c18:
    // 0x107c18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x107c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c20: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x107c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107c24: 0x3e00008  jr          $ra
    ctx->pc = 0x107C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C24u;
        // 0x107c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107C2Cu;
    // 0x107c2c: 0x0  nop
    ctx->pc = 0x107c2cu;
    // NOP
    ctx->pc = 0x107c30u;
}
