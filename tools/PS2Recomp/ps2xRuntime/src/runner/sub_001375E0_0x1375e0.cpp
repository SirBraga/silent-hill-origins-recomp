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

// Function: sub_001375E0
// Address: 0x1375e0 - 0x137650
void sub_001375E0_0x1375e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001375E0_0x1375e0");
#endif

    switch (ctx->pc) {
        case 0x13761cu: goto label_13761c;
        case 0x137640u: goto label_137640;
        default: break;
    }

    ctx->pc = 0x1375e0u;

    // 0x1375e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1375e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1375e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1375e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1375e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1375e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1375ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1375ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375f0: 0x8e021b70  lw          $v0, 0x1B70($s0)
    ctx->pc = 0x1375f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7024)));
    // 0x1375f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1375F4u;
    {
        const bool branch_taken_0x1375f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1375f4) {
            ctx->pc = 0x1375F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1375F4u;
            // 0x1375f8: 0x8e021980  lw          $v0, 0x1980($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13760Cu;
            goto label_13760c;
        }
    }
    ctx->pc = 0x1375FCu;
    // 0x1375fc: 0xc6001b7c  lwc1        $f0, 0x1B7C($s0)
    ctx->pc = 0x1375fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137600: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x137600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x137604: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x137604u;
    {
        const bool branch_taken_0x137604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137604u;
        // 0x137608: 0xe6001b7c  swc1        $f0, 0x1B7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137604) {
            ctx->pc = 0x137640u;
            goto label_137640;
        }
    }
    ctx->pc = 0x13760Cu;
label_13760c:
    // 0x13760c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13760Cu;
    {
        const bool branch_taken_0x13760c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13760c) {
            ctx->pc = 0x137610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13760Cu;
            // 0x137610: 0xae000f64  sw          $zero, 0xF64($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3940), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137614u;
            goto label_137614;
        }
    }
    ctx->pc = 0x137614u;
label_137614:
    // 0x137614: 0xc049a3e  jal         func_1268F8
    ctx->pc = 0x137614u;
    SET_GPR_U32(ctx, 31, 0x13761Cu);
    ctx->pc = 0x137618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137614u;
    // 0x137618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1268F8u, 0x137614u, 0x13761Cu)) {
        return;
    }
    ctx->pc = 0x13761Cu;
label_13761c:
    // 0x13761c: 0xc6010bdc  lwc1        $f1, 0xBDC($s0)
    ctx->pc = 0x13761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137624: 0x0  nop
    ctx->pc = 0x137624u;
    // NOP
    // 0x137628: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x137628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13762c: 0x0  nop
    ctx->pc = 0x13762cu;
    // NOP
    // 0x137630: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x137630u;
    {
        const bool branch_taken_0x137630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137630) {
            ctx->pc = 0x137634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137630u;
            // 0x137634: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137644u;
            goto label_137644;
        }
    }
    ctx->pc = 0x137638u;
    // 0x137638: 0xc049a70  jal         func_1269C0
    ctx->pc = 0x137638u;
    SET_GPR_U32(ctx, 31, 0x137640u);
    ctx->pc = 0x13763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137638u;
    // 0x13763c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1269C0u, 0x137638u, 0x137640u)) {
        return;
    }
    ctx->pc = 0x137640u;
label_137640:
    // 0x137640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_137644:
    // 0x137644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137648: 0x3e00008  jr          $ra
    ctx->pc = 0x137648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137648u;
        // 0x13764c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137650u;
}
