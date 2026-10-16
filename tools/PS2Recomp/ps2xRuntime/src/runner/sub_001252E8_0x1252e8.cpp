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

// Function: sub_001252E8
// Address: 0x1252e8 - 0x125360
void sub_001252E8_0x1252e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001252E8_0x1252e8");
#endif

    switch (ctx->pc) {
        case 0x125304u: goto label_125304;
        case 0x12531cu: goto label_12531c;
        case 0x125334u: goto label_125334;
        default: break;
    }

    ctx->pc = 0x1252e8u;

    // 0x1252e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1252e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1252ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1252ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1252f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1252f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1252f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1252f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1252f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1252fc: 0xc04f0d0  jal         func_13C340
    ctx->pc = 0x1252FCu;
    SET_GPR_U32(ctx, 31, 0x125304u);
    ctx->pc = 0x125300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252FCu;
    // 0x125300: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C340u, 0x1252FCu, 0x125304u)) {
        return;
    }
    ctx->pc = 0x125304u;
label_125304:
    // 0x125304: 0xc6000ef0  lwc1        $f0, 0xEF0($s0)
    ctx->pc = 0x125304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12530c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125310: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125314: 0xc04f0d0  jal         func_13C340
    ctx->pc = 0x125314u;
    SET_GPR_U32(ctx, 31, 0x12531Cu);
    ctx->pc = 0x125318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125314u;
    // 0x125318: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C340u, 0x125314u, 0x12531Cu)) {
        return;
    }
    ctx->pc = 0x12531Cu;
label_12531c:
    // 0x12531c: 0xc6000ef4  lwc1        $f0, 0xEF4($s0)
    ctx->pc = 0x12531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125324: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x125324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125328: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12532c: 0xc04f0d0  jal         func_13C340
    ctx->pc = 0x12532Cu;
    SET_GPR_U32(ctx, 31, 0x125334u);
    ctx->pc = 0x125330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12532Cu;
    // 0x125330: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C340u, 0x12532Cu, 0x125334u)) {
        return;
    }
    ctx->pc = 0x125334u;
label_125334:
    // 0x125334: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x125334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125338: 0xc6010ef8  lwc1        $f1, 0xEF8($s0)
    ctx->pc = 0x125338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12533c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12533cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x125340: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x125340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x125344: 0xc6010efc  lwc1        $f1, 0xEFC($s0)
    ctx->pc = 0x125344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125348: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x125348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x12534c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12534cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125358: 0x3e00008  jr          $ra
    ctx->pc = 0x125358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125358u;
        // 0x12535c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125360u;
}
