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

// Function: sub_00287950
// Address: 0x287950 - 0x2879f8
void sub_00287950_0x287950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287950_0x287950");
#endif

    switch (ctx->pc) {
        case 0x287978u: goto label_287978;
        case 0x2879b0u: goto label_2879b0;
        default: break;
    }

    ctx->pc = 0x287950u;

    // 0x287950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x287950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x287954: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x287954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x287958: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x287958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28795c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x287960: 0x245063b0  addiu       $s0, $v0, 0x63B0
    ctx->pc = 0x287960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x287964: 0x8e030704  lw          $v1, 0x704($s0)
    ctx->pc = 0x287964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x706AB4u));
    // 0x287968: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x287968u;
    {
        const bool branch_taken_0x287968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287968) {
            ctx->pc = 0x28796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287968u;
            // 0x28796c: 0xc6000700  lwc1        $f0, 0x700($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2879E0u;
            goto label_2879e0;
        }
    }
    ctx->pc = 0x287970u;
    // 0x287970: 0xc0a1da0  jal         func_287680
    ctx->pc = 0x287970u;
    SET_GPR_U32(ctx, 31, 0x287978u);
    ctx->pc = 0x287680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287680u, 0x287970u, 0x287978u)) {
        return;
    }
    ctx->pc = 0x287978u;
label_287978:
    // 0x287978: 0xc601061c  lwc1        $f1, 0x61C($s0)
    ctx->pc = 0x287978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28797c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287980: 0xc6000614  lwc1        $f0, 0x614($s0)
    ctx->pc = 0x287980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287984: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x287984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287988: 0xc60306f8  lwc1        $f3, 0x6F8($s0)
    ctx->pc = 0x287988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28798c: 0x26060670  addiu       $a2, $s0, 0x670
    ctx->pc = 0x28798cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x287990: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x287990u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x287994: 0xc60206fc  lwc1        $f2, 0x6FC($s0)
    ctx->pc = 0x287994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287998: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x287998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28799c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28799cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2879a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2879a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2879a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2879a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2879a8: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x2879A8u;
    SET_GPR_U32(ctx, 31, 0x2879B0u);
    ctx->pc = 0x2879ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2879A8u;
    // 0x2879ac: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x2879A8u, 0x2879B0u)) {
        return;
    }
    ctx->pc = 0x2879B0u;
label_2879b0:
    // 0x2879b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2879b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2879b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2879b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2879b8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2879b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2879bc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2879bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2879c0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2879c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2879c4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2879c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2879c8: 0xae020704  sw          $v0, 0x704($s0)
    ctx->pc = 0x2879c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 2));
    // 0x2879cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2879ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2879d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2879d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2879d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2879d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2879d8: 0xe6000700  swc1        $f0, 0x700($s0)
    ctx->pc = 0x2879d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1792), bits); }
    // 0x2879dc: 0xc6000700  lwc1        $f0, 0x700($s0)
    ctx->pc = 0x2879dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2879e0:
    // 0x2879e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2879e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2879e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2879e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2879e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2879E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2879ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879E8u;
        // 0x2879ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2879E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2879F0u;
    // 0x2879f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2879f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2879f4: 0x0  nop
    ctx->pc = 0x2879f4u;
    // NOP
    ctx->pc = 0x2879f8u;
}
