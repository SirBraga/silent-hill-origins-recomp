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

// Function: sub_00161948
// Address: 0x161948 - 0x1619a8
void sub_00161948_0x161948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161948_0x161948");
#endif

    switch (ctx->pc) {
        case 0x161970u: goto label_161970;
        case 0x16197cu: goto label_16197c;
        default: break;
    }

    ctx->pc = 0x161948u;

    // 0x161948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16194c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x161950: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161954: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x161954u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x161958: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x161958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16195c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16195cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x161960: 0x8c508650  lw          $s0, -0x79B0($v0)
    ctx->pc = 0x161960u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338650u));
    // 0x161964: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x161964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x161968: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x161968u;
    {
        const bool branch_taken_0x161968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161968u;
        // 0x16196c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161968) {
            ctx->pc = 0x161988u;
            goto label_161988;
        }
    }
    ctx->pc = 0x161970u;
label_161970:
    // 0x161970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161974: 0xc0583b4  jal         func_160ED0
    ctx->pc = 0x161974u;
    SET_GPR_U32(ctx, 31, 0x16197Cu);
    ctx->pc = 0x161978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161974u;
    // 0x161978: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x160ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x160ED0u, 0x161974u, 0x16197Cu)) {
        return;
    }
    ctx->pc = 0x16197Cu;
label_16197c:
    // 0x16197c: 0x8e10006c  lw          $s0, 0x6C($s0)
    ctx->pc = 0x16197cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x161980: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x161980u;
    {
        const bool branch_taken_0x161980 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x161984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161980u;
        // 0x161984: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161980) {
            ctx->pc = 0x161970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161970;
        }
    }
    ctx->pc = 0x161988u;
label_161988:
    // 0x161988: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x161988u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x16198c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16198cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161994: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x161994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x161998: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x161998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16199c: 0x3e00008  jr          $ra
    ctx->pc = 0x16199Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1619A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16199Cu;
        // 0x1619a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16199Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1619A4u;
    // 0x1619a4: 0x0  nop
    ctx->pc = 0x1619a4u;
    // NOP
    ctx->pc = 0x1619a8u;
}
