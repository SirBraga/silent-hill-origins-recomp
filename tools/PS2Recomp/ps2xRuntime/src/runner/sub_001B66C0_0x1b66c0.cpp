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

// Function: sub_001B66C0
// Address: 0x1b66c0 - 0x1b6788
void sub_001B66C0_0x1b66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B66C0_0x1b66c0");
#endif

    switch (ctx->pc) {
        case 0x1b66e4u: goto label_1b66e4;
        case 0x1b66f4u: goto label_1b66f4;
        case 0x1b670cu: goto label_1b670c;
        case 0x1b672cu: goto label_1b672c;
        case 0x1b674cu: goto label_1b674c;
        case 0x1b676cu: goto label_1b676c;
        default: break;
    }

    ctx->pc = 0x1b66c0u;

    // 0x1b66c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b66c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b66c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b66c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b66c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b66c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66cc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b66ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b66d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b66d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b66d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b66d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b66d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b66dc: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1B66DCu;
    SET_GPR_U32(ctx, 31, 0x1B66E4u);
    ctx->pc = 0x1B66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66DCu;
    // 0x1b66e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1B66DCu, 0x1B66E4u)) {
        return;
    }
    ctx->pc = 0x1B66E4u;
label_1b66e4:
    // 0x1b66e4: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1b66e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1b66e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b66e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66ec: 0xc06d898  jal         func_1B6260
    ctx->pc = 0x1B66ECu;
    SET_GPR_U32(ctx, 31, 0x1B66F4u);
    ctx->pc = 0x1B66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66ECu;
    // 0x1b66f0: 0xe614029c  swc1        $f20, 0x29C($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6260u, 0x1B66ECu, 0x1B66F4u)) {
        return;
    }
    ctx->pc = 0x1B66F4u;
label_1b66f4:
    // 0x1b66f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b66f8: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1b66f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1b66fc: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1b66fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1b6700: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b6700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b6704: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1B6704u;
    SET_GPR_U32(ctx, 31, 0x1B670Cu);
    ctx->pc = 0x1B6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6704u;
    // 0x1b6708: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1B6704u, 0x1B670Cu)) {
        return;
    }
    ctx->pc = 0x1B670Cu;
label_1b670c:
    // 0x1b670c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b670cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6710: 0x0  nop
    ctx->pc = 0x1b6710u;
    // NOP
    // 0x1b6714: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6714u;
    {
        const bool branch_taken_0x1b6714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6714u;
        // 0x1b6718: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6714) {
            ctx->pc = 0x1B6724u;
            goto label_1b6724;
        }
    }
    ctx->pc = 0x1B671Cu;
    // 0x1b671c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B671Cu;
    {
        const bool branch_taken_0x1b671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B671Cu;
        // 0x1b6720: 0x2451c9e8  addiu       $s1, $v0, -0x3618 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b671c) {
            ctx->pc = 0x1B6760u;
            goto label_1b6760;
        }
    }
    ctx->pc = 0x1B6724u;
label_1b6724:
    // 0x1b6724: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1B6724u;
    SET_GPR_U32(ctx, 31, 0x1B672Cu);
    ctx->pc = 0x1B6728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6724u;
    // 0x1b6728: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1B6724u, 0x1B672Cu)) {
        return;
    }
    ctx->pc = 0x1B672Cu;
label_1b672c:
    // 0x1b672c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b672cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6730: 0x0  nop
    ctx->pc = 0x1b6730u;
    // NOP
    // 0x1b6734: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6734u;
    {
        const bool branch_taken_0x1b6734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6734u;
        // 0x1b6738: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6734) {
            ctx->pc = 0x1B6744u;
            goto label_1b6744;
        }
    }
    ctx->pc = 0x1B673Cu;
    // 0x1b673c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B673Cu;
    {
        const bool branch_taken_0x1b673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B673Cu;
        // 0x1b6740: 0x2451c9f0  addiu       $s1, $v0, -0x3610 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b673c) {
            ctx->pc = 0x1B6760u;
            goto label_1b6760;
        }
    }
    ctx->pc = 0x1B6744u;
label_1b6744:
    // 0x1b6744: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1B6744u;
    SET_GPR_U32(ctx, 31, 0x1B674Cu);
    ctx->pc = 0x1B6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6744u;
    // 0x1b6748: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1B6744u, 0x1B674Cu)) {
        return;
    }
    ctx->pc = 0x1B674Cu;
label_1b674c:
    // 0x1b674c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b674cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6750: 0x0  nop
    ctx->pc = 0x1b6750u;
    // NOP
    // 0x1b6754: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6754u;
    {
        const bool branch_taken_0x1b6754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6754u;
        // 0x1b6758: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6754) {
            ctx->pc = 0x1B6760u;
            goto label_1b6760;
        }
    }
    ctx->pc = 0x1B675Cu;
    // 0x1b675c: 0x2451c9f8  addiu       $s1, $v0, -0x3608
    ctx->pc = 0x1b675cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953464));
label_1b6760:
    // 0x1b6760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6764: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x1B6764u;
    SET_GPR_U32(ctx, 31, 0x1B676Cu);
    ctx->pc = 0x1B6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6764u;
    // 0x1b6768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x1B6764u, 0x1B676Cu)) {
        return;
    }
    ctx->pc = 0x1B676Cu;
label_1b676c:
    // 0x1b676c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b676cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6778: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b6778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b677c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B677Cu;
        // 0x1b6780: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6784u;
    // 0x1b6784: 0x0  nop
    ctx->pc = 0x1b6784u;
    // NOP
    ctx->pc = 0x1b6788u;
}
