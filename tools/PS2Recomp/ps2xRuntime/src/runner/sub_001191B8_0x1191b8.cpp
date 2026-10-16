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

// Function: sub_001191B8
// Address: 0x1191b8 - 0x119248
void sub_001191B8_0x1191b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001191B8_0x1191b8");
#endif

    switch (ctx->pc) {
        case 0x119218u: goto label_119218;
        default: break;
    }

    ctx->pc = 0x1191b8u;

    // 0x1191b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1191b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1191bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1191bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1191c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1191c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1191c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1191c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1191c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1191cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1191ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1191d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1191d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1191d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191d8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1191d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1191dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1191dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1191e0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1191e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1191e4: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x1191e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1191e8: 0xc6020214  lwc1        $f2, 0x214($s0)
    ctx->pc = 0x1191e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1191ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1191ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1191f0: 0xc6030218  lwc1        $f3, 0x218($s0)
    ctx->pc = 0x1191f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1191f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1191f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1191f8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1191f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1191fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1191fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x119200: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x119200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x119204: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x119204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119208: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x119208u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11920c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11920cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x119210: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x119210u;
    SET_GPR_U32(ctx, 31, 0x119218u);
    ctx->pc = 0x119214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119210u;
    // 0x119214: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x119210u, 0x119218u)) {
        return;
    }
    ctx->pc = 0x119218u;
label_119218:
    // 0x119218: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x119218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x11921c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11921cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119220: 0xc6010228  lwc1        $f1, 0x228($s0)
    ctx->pc = 0x119220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119224: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x119224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119228: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x119228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11922c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11922cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119234: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x119234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x119238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11923c: 0x3e00008  jr          $ra
    ctx->pc = 0x11923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11923Cu;
        // 0x119240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11923Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119244u;
    // 0x119244: 0x0  nop
    ctx->pc = 0x119244u;
    // NOP
    ctx->pc = 0x119248u;
}
