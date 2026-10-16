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

// Function: sub_002AB648
// Address: 0x2ab648 - 0x2ab6d8
void sub_002AB648_0x2ab648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB648_0x2ab648");
#endif

    switch (ctx->pc) {
        case 0x2ab670u: goto label_2ab670;
        default: break;
    }

    ctx->pc = 0x2ab648u;

    // 0x2ab648: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ab648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ab64c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ab64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ab650: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ab650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab654: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ab654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ab658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ab65c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ab65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab660: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ab660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab668: 0xc0aaaba  jal         func_2AAAE8
    ctx->pc = 0x2AB668u;
    SET_GPR_U32(ctx, 31, 0x2AB670u);
    ctx->pc = 0x2AB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB668u;
    // 0x2ab66c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAAE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AAAE8u, 0x2AB668u, 0x2AB670u)) {
        return;
    }
    ctx->pc = 0x2AB670u;
label_2ab670:
    // 0x2ab670: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab678: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2ab678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab67c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2ab67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab680: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2ab680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab684: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ab684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ab688: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2ab688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab68c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2ab68cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2ab690: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2ab690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab694: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2ab694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab698: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ab698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ab69c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ab69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab6a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ab6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ab6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab6a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ab6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ab6ac: 0x46040080  add.s       $f2, $f0, $f4
    ctx->pc = 0x2ab6acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2ab6b0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2ab6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2ab6b4: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2ab6b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ab6b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab6b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab6bc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2ab6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab6c0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2ab6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2ab6c4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2ab6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2ab6c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ab6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6CCu;
        // 0x2ab6d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB6D4u;
    // 0x2ab6d4: 0x0  nop
    ctx->pc = 0x2ab6d4u;
    // NOP
    ctx->pc = 0x2ab6d8u;
}
