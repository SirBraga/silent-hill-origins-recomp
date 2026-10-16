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

// Function: sub_0011D8C8
// Address: 0x11d8c8 - 0x11d950
void sub_0011D8C8_0x11d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D8C8_0x11d8c8");
#endif

    switch (ctx->pc) {
        case 0x11d928u: goto label_11d928;
        default: break;
    }

    ctx->pc = 0x11d8c8u;

    // 0x11d8c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11d8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11d8cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11d8d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11d8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11d8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11d8dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11d8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d8e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11d8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8e8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x11d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11d8ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x11d8f0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x11d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d8f4: 0xc6000148  lwc1        $f0, 0x148($s0)
    ctx->pc = 0x11d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d8f8: 0xc602014c  lwc1        $f2, 0x14C($s0)
    ctx->pc = 0x11d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d8fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11d8fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11d900: 0xc6030150  lwc1        $f3, 0x150($s0)
    ctx->pc = 0x11d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d904: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x11d904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11d908: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x11d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d90c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11d90cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11d910: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11d910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11d914: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x11d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d918: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11d918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11d91c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11d91cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11d920: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x11D920u;
    SET_GPR_U32(ctx, 31, 0x11D928u);
    ctx->pc = 0x11D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D920u;
    // 0x11d924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x11D920u, 0x11D928u)) {
        return;
    }
    ctx->pc = 0x11D928u;
label_11d928:
    // 0x11d928: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x11d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x11d92c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11d92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d930: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x11d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d934: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11d934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d938: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x11d938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x11d93c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11d93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d944: 0x3e00008  jr          $ra
    ctx->pc = 0x11D944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D944u;
        // 0x11d948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D94Cu;
    // 0x11d94c: 0x0  nop
    ctx->pc = 0x11d94cu;
    // NOP
    ctx->pc = 0x11d950u;
}
