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

// Function: sub_001D9598
// Address: 0x1d9598 - 0x1d9638
void sub_001D9598_0x1d9598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9598_0x1d9598");
#endif

    ctx->pc = 0x1d9598u;

    // 0x1d9598: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d9598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d959c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1d959cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x1d95a0: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1d95a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x1d95a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d95a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d95a8: 0x8c438a64  lw          $v1, -0x759C($v0)
    ctx->pc = 0x1d95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8A64u));
    // 0x1d95ac: 0xc46006a0  lwc1        $f0, 0x6A0($v1)
    ctx->pc = 0x1d95acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d95b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d95b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d95b4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1d95b4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1d95b8: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1d95b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d95bc: 0x0  nop
    ctx->pc = 0x1d95bcu;
    // NOP
    // 0x1d95c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D95C0u;
    {
        const bool branch_taken_0x1d95c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95C0u;
        // 0x1d95c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95c0) {
            ctx->pc = 0x1D95DCu;
            goto label_1d95dc;
        }
    }
    ctx->pc = 0x1D95C8u;
    // 0x1d95c8: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x1d95c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1d95cc: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1d95ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d95d0: 0x0  nop
    ctx->pc = 0x1d95d0u;
    // NOP
    // 0x1d95d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D95D4u;
    {
        const bool branch_taken_0x1d95d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d95d4) {
            ctx->pc = 0x1D95D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D95D4u;
            // 0x1d95d8: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D95DCu;
            goto label_1d95dc;
        }
    }
    ctx->pc = 0x1D95DCu;
label_1d95dc:
    // 0x1d95dc: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1d95dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d95e0: 0x0  nop
    ctx->pc = 0x1d95e0u;
    // NOP
    // 0x1d95e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D95E4u;
    {
        const bool branch_taken_0x1d95e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d95e4) {
            ctx->pc = 0x1D9600u;
            goto label_1d9600;
        }
    }
    ctx->pc = 0x1D95ECu;
    // 0x1d95ec: 0x460d0840  add.s       $f1, $f1, $f13
    ctx->pc = 0x1d95ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x1d95f0: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d95f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d95f4: 0x0  nop
    ctx->pc = 0x1d95f4u;
    // NOP
    // 0x1d95f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D95F8u;
    {
        const bool branch_taken_0x1d95f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d95f8) {
            ctx->pc = 0x1D95FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D95F8u;
            // 0x1d95fc: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9600u;
            goto label_1d9600;
        }
    }
    ctx->pc = 0x1D9600u;
label_1d9600:
    // 0x1d9600: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x1d9604: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1d9604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x1d9608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d9608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d960c: 0x460c0832  c.eq.s      $f1, $f12
    ctx->pc = 0x1d960cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9610: 0x8c828a64  lw          $v0, -0x759C($a0)
    ctx->pc = 0x1d9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937188)));
    // 0x1d9614: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d9614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d9618: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d9618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d961c: 0xe44106a0  swc1        $f1, 0x6A0($v0)
    ctx->pc = 0x1d961cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1696), bits); }
    // 0x1d9620: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9620u;
    {
        const bool branch_taken_0x1d9620 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9620u;
        // 0x1d9624: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9620) {
            ctx->pc = 0x1D962Cu;
            goto label_1d962c;
        }
    }
    ctx->pc = 0x1D9628u;
    // 0x1d9628: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d9628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d962c:
    // 0x1d962c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D962Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D962Cu;
        // 0x1d9630: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D962Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9634u;
    // 0x1d9634: 0x0  nop
    ctx->pc = 0x1d9634u;
    // NOP
    ctx->pc = 0x1d9638u;
}
