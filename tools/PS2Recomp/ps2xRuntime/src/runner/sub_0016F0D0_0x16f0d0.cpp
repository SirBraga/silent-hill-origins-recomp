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

// Function: sub_0016F0D0
// Address: 0x16f0d0 - 0x16f170
void sub_0016F0D0_0x16f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F0D0_0x16f0d0");
#endif

    switch (ctx->pc) {
        case 0x16f0ecu: goto label_16f0ec;
        case 0x16f104u: goto label_16f104;
        case 0x16f11cu: goto label_16f11c;
        case 0x16f15cu: goto label_16f15c;
        default: break;
    }

    ctx->pc = 0x16f0d0u;

    // 0x16f0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f0d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16f0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16f0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f0e4: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16F0E4u;
    SET_GPR_U32(ctx, 31, 0x16F0ECu);
    ctx->pc = 0x16F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F0E4u;
    // 0x16f0e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16F0E4u, 0x16F0ECu)) {
        return;
    }
    ctx->pc = 0x16F0ECu;
label_16f0ec:
    // 0x16f0ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16f0f0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x16f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16f0f4: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F0F4u;
    {
        const bool branch_taken_0x16f0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f0f4) {
            ctx->pc = 0x16F0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F0F4u;
            // 0x16f0f8: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F10Cu;
            goto label_16f10c;
        }
    }
    ctx->pc = 0x16F0FCu;
    // 0x16f0fc: 0xc05bc5c  jal         func_16F170
    ctx->pc = 0x16F0FCu;
    SET_GPR_U32(ctx, 31, 0x16F104u);
    ctx->pc = 0x16F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F0FCu;
    // 0x16f100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16F170u, 0x16F0FCu, 0x16F104u)) {
        return;
    }
    ctx->pc = 0x16F104u;
label_16f104:
    // 0x16f104: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16F104u;
    {
        const bool branch_taken_0x16f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F104u;
        // 0x16f108: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f104) {
            ctx->pc = 0x16F160u;
            goto label_16f160;
        }
    }
    ctx->pc = 0x16F10Cu;
label_16f10c:
    // 0x16f10c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F10Cu;
    {
        const bool branch_taken_0x16f10c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F10Cu;
        // 0x16f110: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f10c) {
            ctx->pc = 0x16F124u;
            goto label_16f124;
        }
    }
    ctx->pc = 0x16F114u;
    // 0x16f114: 0xc05bc74  jal         func_16F1D0
    ctx->pc = 0x16F114u;
    SET_GPR_U32(ctx, 31, 0x16F11Cu);
    ctx->pc = 0x16F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F114u;
    // 0x16f118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16F1D0u, 0x16F114u, 0x16F11Cu)) {
        return;
    }
    ctx->pc = 0x16F11Cu;
label_16f11c:
    // 0x16f11c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16F11Cu;
    {
        const bool branch_taken_0x16f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F11Cu;
        // 0x16f120: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f11c) {
            ctx->pc = 0x16F160u;
            goto label_16f160;
        }
    }
    ctx->pc = 0x16F124u;
label_16f124:
    // 0x16f124: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x16f128: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16F128u;
    {
        const bool branch_taken_0x16f128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f128) {
            ctx->pc = 0x16F12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F128u;
            // 0x16f12c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F160u;
            goto label_16f160;
        }
    }
    ctx->pc = 0x16F130u;
    // 0x16f130: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16f134: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x16f134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f138: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x16f138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f13c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16f13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16f140: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f144: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16f144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f148: 0x0  nop
    ctx->pc = 0x16f148u;
    // NOP
    // 0x16f14c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F14Cu;
    {
        const bool branch_taken_0x16f14c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F14Cu;
        // 0x16f150: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f14c) {
            ctx->pc = 0x16F15Cu;
            goto label_16f15c;
        }
    }
    ctx->pc = 0x16F154u;
    // 0x16f154: 0xc05bc74  jal         func_16F1D0
    ctx->pc = 0x16F154u;
    SET_GPR_U32(ctx, 31, 0x16F15Cu);
    ctx->pc = 0x16F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F154u;
    // 0x16f158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16F1D0u, 0x16F154u, 0x16F15Cu)) {
        return;
    }
    ctx->pc = 0x16F15Cu;
label_16f15c:
    // 0x16f15c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16f15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16f160:
    // 0x16f160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f168: 0x3e00008  jr          $ra
    ctx->pc = 0x16F168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F168u;
        // 0x16f16c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F170u;
}
