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

// Function: sub_0030F978
// Address: 0x30f978 - 0x30fa28
void sub_0030F978_0x30f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F978_0x30f978");
#endif

    switch (ctx->pc) {
        case 0x30f9c0u: goto label_30f9c0;
        default: break;
    }

    ctx->pc = 0x30f978u;

    // 0x30f978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f97c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30f97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f980: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30f980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30f984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30f988: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x30f988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f98c: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x30f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f990: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x30f990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30f994: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30f994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30f998: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30f998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30f99c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30f99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30f9a0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x30f9a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x30f9a4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x30f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x30f9a8: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x30f9a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x30f9ac: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F9ACu;
    {
        const bool branch_taken_0x30f9ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9ACu;
        // 0x30f9b0: 0x7e030010  sq          $v1, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f9ac) {
            ctx->pc = 0x30F9C0u;
            goto label_30f9c0;
        }
    }
    ctx->pc = 0x30F9B4u;
    // 0x30f9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f9b8: 0xc0acd9e  jal         func_2B3678
    ctx->pc = 0x30F9B8u;
    SET_GPR_U32(ctx, 31, 0x30F9C0u);
    ctx->pc = 0x30F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F9B8u;
    // 0x30f9bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3678u, 0x30F9B8u, 0x30F9C0u)) {
        return;
    }
    ctx->pc = 0x30F9C0u;
label_30f9c0:
    // 0x30f9c0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x30f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f9c4: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x30f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f9c8: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x30f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30f9cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f9d0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f9d4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x30f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f9d8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30f9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30f9dc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x30f9dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x30f9e0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x30f9e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x30f9e4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x30f9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x30f9e8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x30f9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30f9ec: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x30f9ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x30f9f0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x30f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f9f4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x30f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f9f8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x30f9f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x30f9fc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x30f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fa00: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x30fa00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x30fa04: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x30fa04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x30fa08: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x30fa08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x30fa0c: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x30fa0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x30fa10: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x30fa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x30fa14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30fa14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30fa18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fa1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30fa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fa20: 0x3e00008  jr          $ra
    ctx->pc = 0x30FA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA20u;
        // 0x30fa24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FA28u;
}
