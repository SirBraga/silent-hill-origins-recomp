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

// Function: sub_00126770
// Address: 0x126770 - 0x126838
void sub_00126770_0x126770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126770_0x126770");
#endif

    ctx->pc = 0x126770u;

    // 0x126770: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x126770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x126774: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x126774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126778: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x126778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12677c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x12677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126780: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x126780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x126784: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x126784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x126788: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x126788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12678c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12678cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x126790: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x126790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126794: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x126794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x126798: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x126798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12679c: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x12679cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1267a0: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x1267a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1267a4: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1267a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1267a8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1267a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1267ac: 0xc4670008  lwc1        $f7, 0x8($v1)
    ctx->pc = 0x1267acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1267b0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1267b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1267b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1267b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1267b8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1267b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1267bc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1267bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1267c0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1267c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1267c4: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x1267c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1267c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1267c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1267cc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1267ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1267d0: 0x460000c0  add.s       $f3, $f0, $f0
    ctx->pc = 0x1267d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1267d4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x1267d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1267d8: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x1267d8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x1267dc: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1267dcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1267e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1267e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1267e4: 0x0  nop
    ctx->pc = 0x1267e4u;
    // NOP
    // 0x1267e8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1267E8u;
    {
        const bool branch_taken_0x1267e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1267e8) {
            ctx->pc = 0x126810u;
            goto label_126810;
        }
    }
    ctx->pc = 0x1267F0u;
    // 0x1267f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1267f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1267f4: 0x0  nop
    ctx->pc = 0x1267f4u;
    // NOP
    // 0x1267f8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1267f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1267fc: 0x0  nop
    ctx->pc = 0x1267fcu;
    // NOP
    // 0x126800: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x126800u;
    {
        const bool branch_taken_0x126800 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126800u;
        // 0x126804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126800) {
            ctx->pc = 0x12682Cu;
            goto label_12682c;
        }
    }
    ctx->pc = 0x126808u;
    // 0x126808: 0x3e00008  jr          $ra
    ctx->pc = 0x126808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126808u;
        // 0x12680c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126810u;
label_126810:
    // 0x126810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x126810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126814: 0x0  nop
    ctx->pc = 0x126814u;
    // NOP
    // 0x126818: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x126818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12681c: 0x0  nop
    ctx->pc = 0x12681cu;
    // NOP
    // 0x126820: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x126820u;
    {
        const bool branch_taken_0x126820 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126820u;
        // 0x126824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126820) {
            ctx->pc = 0x12682Cu;
            goto label_12682c;
        }
    }
    ctx->pc = 0x126828u;
    // 0x126828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12682c:
    // 0x12682c: 0x3e00008  jr          $ra
    ctx->pc = 0x12682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126834u;
    // 0x126834: 0x0  nop
    ctx->pc = 0x126834u;
    // NOP
    ctx->pc = 0x126838u;
}
