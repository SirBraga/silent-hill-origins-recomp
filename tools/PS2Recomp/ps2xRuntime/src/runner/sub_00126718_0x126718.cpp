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

// Function: sub_00126718
// Address: 0x126718 - 0x126770
void sub_00126718_0x126718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126718_0x126718");
#endif

    ctx->pc = 0x126718u;

    // 0x126718: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x126718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12671c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x12671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126720: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x126720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x126724: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x126724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126728: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x126728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12672c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x12672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126730: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x126730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x126734: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x126734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126738: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x126738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x12673c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x12673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126740: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x126740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x126744: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x126744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x126748: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x126748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12674c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12674cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x126750: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x126750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126754: 0x0  nop
    ctx->pc = 0x126754u;
    // NOP
    // 0x126758: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x126758u;
    {
        const bool branch_taken_0x126758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126758u;
        // 0x12675c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126758) {
            ctx->pc = 0x126764u;
            goto label_126764;
        }
    }
    ctx->pc = 0x126760u;
    // 0x126760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126764:
    // 0x126764: 0x3e00008  jr          $ra
    ctx->pc = 0x126764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12676Cu;
    // 0x12676c: 0x0  nop
    ctx->pc = 0x12676cu;
    // NOP
    ctx->pc = 0x126770u;
}
