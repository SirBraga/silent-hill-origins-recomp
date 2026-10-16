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

// Function: sub_002B3310
// Address: 0x2b3310 - 0x2b33c0
void sub_002B3310_0x2b3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3310_0x2b3310");
#endif

    ctx->pc = 0x2b3310u;

    // 0x2b3310: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b3310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b3314: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3318: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2b3318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b331c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2b331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3320: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2b3320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b3324: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b3324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3328: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x2b3328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2b332c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b332cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b3330: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2b3330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3334: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b3334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3338: 0x460261c2  mul.s       $f7, $f12, $f2
    ctx->pc = 0x2b3338u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2b333c: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x2b333cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2b3340: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x2b3340u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2b3344: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b3344u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b3348: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x2b3348u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b334c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3350: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2b3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3354: 0x46016182  mul.s       $f6, $f12, $f1
    ctx->pc = 0x2b3354u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b3358: 0x460068c2  mul.s       $f3, $f13, $f0
    ctx->pc = 0x2b3358u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2b335c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b335cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b3360: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x2b3360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2b3364: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x2b3364u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x2b3368: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b3368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b336c: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x2b336cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b3370: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2b3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b3374: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2b3374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b3378: 0x46036802  mul.s       $f0, $f13, $f3
    ctx->pc = 0x2b3378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x2b337c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2b337cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b3380: 0x46046142  mul.s       $f5, $f12, $f4
    ctx->pc = 0x2b3380u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2b3384: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2b3384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b3388: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x2b3388u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2b338c: 0x46046b42  mul.s       $f13, $f13, $f4
    ctx->pc = 0x2b338cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x2b3390: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2b3390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2b3394: 0x460d6301  sub.s       $f12, $f12, $f13
    ctx->pc = 0x2b3394u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x2b3398: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b3398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b339c: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x2b339cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b33a0: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x2b33a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b33a4: 0xe4870000  swc1        $f7, 0x0($a0)
    ctx->pc = 0x2b33a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b33a8: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x2b33a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b33ac: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2b33acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2b33b0: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x2b33b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b33b4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2b33b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2b33b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B33B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33B8u;
        // 0x2b33bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B33B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B33C0u;
}
