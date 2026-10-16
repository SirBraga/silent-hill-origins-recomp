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

// Function: sub_001725C8
// Address: 0x1725c8 - 0x172668
void sub_001725C8_0x1725c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001725C8_0x1725c8");
#endif

    switch (ctx->pc) {
        case 0x1725e0u: goto label_1725e0;
        default: break;
    }

    ctx->pc = 0x1725c8u;

    // 0x1725c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1725c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1725cc: 0x24870090  addiu       $a3, $a0, 0x90
    ctx->pc = 0x1725ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x1725d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1725d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1725d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1725d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725d8: 0xc093afa  jal         func_24EBE8
    ctx->pc = 0x1725D8u;
    SET_GPR_U32(ctx, 31, 0x1725E0u);
    ctx->pc = 0x1725DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725D8u;
    // 0x1725dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x1725D8u, 0x1725E0u)) {
        return;
    }
    ctx->pc = 0x1725E0u;
label_1725e0:
    // 0x1725e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1725e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1725e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1725e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1725e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1725e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1725ec: 0x0  nop
    ctx->pc = 0x1725ecu;
    // NOP
    // 0x1725f0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1725f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1725f4: 0x0  nop
    ctx->pc = 0x1725f4u;
    // NOP
    // 0x1725f8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1725F8u;
    {
        const bool branch_taken_0x1725f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1725FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725F8u;
        // 0x1725fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725f8) {
            ctx->pc = 0x17265Cu;
            goto label_17265c;
        }
    }
    ctx->pc = 0x172600u;
    // 0x172600: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x172600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x172604: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172608: 0x0  nop
    ctx->pc = 0x172608u;
    // NOP
    // 0x17260c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17260cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172610: 0x0  nop
    ctx->pc = 0x172610u;
    // NOP
    // 0x172614: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x172614u;
    {
        const bool branch_taken_0x172614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172614u;
        // 0x172618: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172614) {
            ctx->pc = 0x17265Cu;
            goto label_17265c;
        }
    }
    ctx->pc = 0x17261Cu;
    // 0x17261c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17261cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172620: 0x0  nop
    ctx->pc = 0x172620u;
    // NOP
    // 0x172624: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x172624u;
    {
        const bool branch_taken_0x172624 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172624u;
        // 0x172628: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172624) {
            ctx->pc = 0x172660u;
            goto label_172660;
        }
    }
    ctx->pc = 0x17262Cu;
    // 0x17262c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17262cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172630: 0x0  nop
    ctx->pc = 0x172630u;
    // NOP
    // 0x172634: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x172634u;
    {
        const bool branch_taken_0x172634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172634u;
        // 0x172638: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172634) {
            ctx->pc = 0x172660u;
            goto label_172660;
        }
    }
    ctx->pc = 0x17263Cu;
    // 0x17263c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17263cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172640: 0x0  nop
    ctx->pc = 0x172640u;
    // NOP
    // 0x172644: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x172644u;
    {
        const bool branch_taken_0x172644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172644) {
            ctx->pc = 0x172660u;
            goto label_172660;
        }
    }
    ctx->pc = 0x17264Cu;
    // 0x17264c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17264cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172650: 0x0  nop
    ctx->pc = 0x172650u;
    // NOP
    // 0x172654: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x172654u;
    {
        const bool branch_taken_0x172654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172654) {
            ctx->pc = 0x172658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172654u;
            // 0x172658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172660u;
            goto label_172660;
        }
    }
    ctx->pc = 0x17265Cu;
label_17265c:
    // 0x17265c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17265cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172660:
    // 0x172660: 0x3e00008  jr          $ra
    ctx->pc = 0x172660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172660u;
        // 0x172664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172668u;
}
