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

// Function: sub_001B3748
// Address: 0x1b3748 - 0x1b37c0
void sub_001B3748_0x1b3748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3748_0x1b3748");
#endif

    switch (ctx->pc) {
        case 0x1b3764u: goto label_1b3764;
        default: break;
    }

    ctx->pc = 0x1b3748u;

    // 0x1b3748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b374c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b3750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b375c: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B375Cu;
    SET_GPR_U32(ctx, 31, 0x1B3764u);
    ctx->pc = 0x1B3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B375Cu;
    // 0x1b3760: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B375Cu, 0x1B3764u)) {
        return;
    }
    ctx->pc = 0x1B3764u;
label_1b3764:
    // 0x1b3764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3764u;
    {
        const bool branch_taken_0x1b3764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3764u;
        // 0x1b3768: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3764) {
            ctx->pc = 0x1B3780u;
            goto label_1b3780;
        }
    }
    ctx->pc = 0x1B376Cu;
    // 0x1b376c: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1b376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x1b3770: 0x34210901  ori         $at, $at, 0x901
    ctx->pc = 0x1b3770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2305);
    // 0x1b3774: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3778: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3778u;
    {
        const bool branch_taken_0x1b3778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3778u;
        // 0x1b377c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3778) {
            ctx->pc = 0x1B3794u;
            goto label_1b3794;
        }
    }
    ctx->pc = 0x1B3780u;
label_1b3780:
    // 0x1b3780: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b3780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1b3784: 0x3421300c  ori         $at, $at, 0x300C
    ctx->pc = 0x1b3784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12300);
    // 0x1b3788: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b378c: 0x0  nop
    ctx->pc = 0x1b378cu;
    // NOP
    // 0x1b3790: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b3794:
    // 0x1b3794: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b3794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b3798: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b3798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b379c: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1b379cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1b37a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b37a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b37a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b37a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b37a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b37a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b37ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b37acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b37b0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b37b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b37b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b37b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b37b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B37B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37B8u;
        // 0x1b37bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B37C0u;
}
