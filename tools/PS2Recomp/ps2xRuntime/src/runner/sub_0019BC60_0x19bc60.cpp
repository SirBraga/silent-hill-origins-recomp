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

// Function: sub_0019BC60
// Address: 0x19bc60 - 0x19bcf8
void sub_0019BC60_0x19bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BC60_0x19bc60");
#endif

    switch (ctx->pc) {
        case 0x19bca4u: goto label_19bca4;
        case 0x19bcb0u: goto label_19bcb0;
        case 0x19bcd8u: goto label_19bcd8;
        case 0x19bce4u: goto label_19bce4;
        default: break;
    }

    ctx->pc = 0x19bc60u;

    // 0x19bc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bc64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19bc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19bc68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bc6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bc70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19bc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x19bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19bc78: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19BC78u;
    {
        const bool branch_taken_0x19bc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC78u;
        // 0x19bc7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc78) {
            ctx->pc = 0x19BCE4u;
            goto label_19bce4;
        }
    }
    ctx->pc = 0x19BC80u;
    // 0x19bc80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bc84: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x19bc88: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BC88u;
    {
        const bool branch_taken_0x19bc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bc88) {
            ctx->pc = 0x19BC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BC88u;
            // 0x19bc8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BCE8u;
            goto label_19bce8;
        }
    }
    ctx->pc = 0x19BC90u;
    // 0x19bc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc94: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bc98: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x19bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19bc9c: 0xc0b87b0  jal         func_2E1EC0
    ctx->pc = 0x19BC9Cu;
    SET_GPR_U32(ctx, 31, 0x19BCA4u);
    ctx->pc = 0x19BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC9Cu;
    // 0x19bca0: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1EC0u, 0x19BC9Cu, 0x19BCA4u)) {
        return;
    }
    ctx->pc = 0x19BCA4u;
label_19bca4:
    // 0x19bca4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bca8: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x19BCA8u;
    SET_GPR_U32(ctx, 31, 0x19BCB0u);
    ctx->pc = 0x19BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCA8u;
    // 0x19bcac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x19BCA8u, 0x19BCB0u)) {
        return;
    }
    ctx->pc = 0x19BCB0u;
label_19bcb0:
    // 0x19bcb0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x19bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bcb4: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x19bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bcb8: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x19bcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x19bcbc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bcc0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19bcc4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BCC4u;
    {
        const bool branch_taken_0x19bcc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCC4u;
        // 0x19bcc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bcc4) {
            ctx->pc = 0x19BCD8u;
            goto label_19bcd8;
        }
    }
    ctx->pc = 0x19BCCCu;
    // 0x19bccc: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x19bcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19bcd0: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x19BCD0u;
    SET_GPR_U32(ctx, 31, 0x19BCD8u);
    ctx->pc = 0x19BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCD0u;
    // 0x19bcd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x19BCD0u, 0x19BCD8u)) {
        return;
    }
    ctx->pc = 0x19BCD8u;
label_19bcd8:
    // 0x19bcd8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19bcdc: 0xc06702a  jal         func_19C0A8
    ctx->pc = 0x19BCDCu;
    SET_GPR_U32(ctx, 31, 0x19BCE4u);
    ctx->pc = 0x19BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCDCu;
    // 0x19bce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C0A8u, 0x19BCDCu, 0x19BCE4u)) {
        return;
    }
    ctx->pc = 0x19BCE4u;
label_19bce4:
    // 0x19bce4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19bce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19bce8:
    // 0x19bce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bcec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x19BCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCF0u;
        // 0x19bcf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BCF8u;
}
