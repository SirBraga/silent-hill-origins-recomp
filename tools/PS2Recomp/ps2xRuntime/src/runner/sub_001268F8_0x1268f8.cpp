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

// Function: sub_001268F8
// Address: 0x1268f8 - 0x1269c0
void sub_001268F8_0x1268f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001268F8_0x1268f8");
#endif

    switch (ctx->pc) {
        case 0x126980u: goto label_126980;
        case 0x1269b4u: goto label_1269b4;
        default: break;
    }

    ctx->pc = 0x1268f8u;

    // 0x1268f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1268f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1268fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1268fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126900: 0x8c820f64  lw          $v0, 0xF64($a0)
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3940)));
    // 0x126904: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x126904u;
    {
        const bool branch_taken_0x126904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126904u;
        // 0x126908: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126904) {
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x12690Cu;
    // 0x12690c: 0xc4810bdc  lwc1        $f1, 0xBDC($a0)
    ctx->pc = 0x12690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126910: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x126910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x126914: 0x0  nop
    ctx->pc = 0x126914u;
    // NOP
    // 0x126918: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x126918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12691c: 0x0  nop
    ctx->pc = 0x12691cu;
    // NOP
    // 0x126920: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x126920u;
    {
        const bool branch_taken_0x126920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126920) {
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x126928u;
    // 0x126928: 0xc4800f60  lwc1        $f0, 0xF60($a0)
    ctx->pc = 0x126928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12692c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x12692cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x126930: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x126930u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x126934: 0xe4800be0  swc1        $f0, 0xBE0($a0)
    ctx->pc = 0x126934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3040), bits); }
    // 0x126938: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x126938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12693c: 0x0  nop
    ctx->pc = 0x12693cu;
    // NOP
    // 0x126940: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x126940u;
    {
        const bool branch_taken_0x126940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x126944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126940u;
        // 0x126944: 0xe4810bdc  swc1        $f1, 0xBDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126940) {
            ctx->pc = 0x126988u;
            goto label_126988;
        }
    }
    ctx->pc = 0x126948u;
    // 0x126948: 0x84820bf6  lh          $v0, 0xBF6($a0)
    ctx->pc = 0x126948u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 3062)));
    // 0x12694c: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12694Cu;
    {
        const bool branch_taken_0x12694c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x126950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12694Cu;
        // 0x126950: 0xe4820bdc  swc1        $f2, 0xBDC($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12694c) {
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x126954u;
    // 0x126954: 0x8c850bf0  lw          $a1, 0xBF0($a0)
    ctx->pc = 0x126954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3056)));
    // 0x126958: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x126958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x12695c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x12695cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x126960: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x126960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x126964: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x126964u;
    {
        const bool branch_taken_0x126964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x126968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126964u;
        // 0x126968: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126964) {
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x12696Cu;
    // 0x12696c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12696cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126970: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x126970u;
    {
        const bool branch_taken_0x126970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126970) {
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x126978u;
    // 0x126978: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x126978u;
    SET_GPR_U32(ctx, 31, 0x126980u);
    ctx->pc = 0x12697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126978u;
    // 0x12697c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x126978u, 0x126980u)) {
        return;
    }
    ctx->pc = 0x126980u;
label_126980:
    // 0x126980: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x126980u;
    {
        const bool branch_taken_0x126980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126980u;
        // 0x126984: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126980) {
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x126988u;
label_126988:
    // 0x126988: 0x8c820c98  lw          $v0, 0xC98($a0)
    ctx->pc = 0x126988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3224)));
    // 0x12698c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12698Cu;
    {
        const bool branch_taken_0x12698c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12698Cu;
        // 0x126990: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12698c) {
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x126994u;
    // 0x126994: 0x8c840f6c  lw          $a0, 0xF6C($a0)
    ctx->pc = 0x126994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3948)));
    // 0x126998: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x126998u;
    {
        const bool branch_taken_0x126998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126998) {
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x1269A0u;
    // 0x1269a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1269a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1269a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1269a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1269a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1269a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1269ac: 0xc0503fe  jal         func_140FF8
    ctx->pc = 0x1269ACu;
    SET_GPR_U32(ctx, 31, 0x1269B4u);
    ctx->pc = 0x140FF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140FF8u, 0x1269ACu, 0x1269B4u)) {
        return;
    }
    ctx->pc = 0x1269B4u;
label_1269b4:
    // 0x1269b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1269b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1269b8:
    // 0x1269b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1269B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1269BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269B8u;
        // 0x1269bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1269C0u;
}
