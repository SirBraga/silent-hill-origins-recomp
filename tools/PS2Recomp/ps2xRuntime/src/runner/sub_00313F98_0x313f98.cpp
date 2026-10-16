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

// Function: sub_00313F98
// Address: 0x313f98 - 0x314030
void sub_00313F98_0x313f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313F98_0x313f98");
#endif

    switch (ctx->pc) {
        case 0x313fe8u: goto label_313fe8;
        case 0x314020u: goto label_314020;
        default: break;
    }

    ctx->pc = 0x313f98u;

    // 0x313f98: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x313f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x313f9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x313f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313fa0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x313fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x313fa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x313fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313fa8: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x313fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x313fac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x313facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313fb0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x313fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x313fb4: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x313fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x313fb8: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x313fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x313fbc: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x313fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x313fc0: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x313fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x313fc4: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x313fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x313fc8: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x313fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x313fcc: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x313fccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x313fd0: 0xe7ae00b4  swc1        $f14, 0xB4($sp)
    ctx->pc = 0x313fd0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x313fd4: 0xe7b000b8  swc1        $f16, 0xB8($sp)
    ctx->pc = 0x313fd4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x313fd8: 0xe7b200bc  swc1        $f18, 0xBC($sp)
    ctx->pc = 0x313fd8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x313fdc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x313fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x313fe0: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x313FE0u;
    SET_GPR_U32(ctx, 31, 0x313FE8u);
    ctx->pc = 0x313FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FE0u;
    // 0x313fe4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x313FE0u, 0x313FE8u)) {
        return;
    }
    ctx->pc = 0x313FE8u;
label_313fe8:
    // 0x313fe8: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x313fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x313fec: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x313fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x313ff0: 0x8c866ccc  lw          $a2, 0x6CCC($a0)
    ctx->pc = 0x313ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x686CCCu));
    // 0x313ff4: 0x24633f90  addiu       $v1, $v1, 0x3F90
    ctx->pc = 0x313ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16272));
    // 0x313ff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x313ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ffc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x313ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x314000: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x314000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x314004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x314004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314008: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x314008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x31400c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x31400cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x314010: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x314010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x314014: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x314014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x314018: 0xc0c5068  jal         func_3141A0
    ctx->pc = 0x314018u;
    SET_GPR_U32(ctx, 31, 0x314020u);
    ctx->pc = 0x31401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314018u;
    // 0x31401c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3141A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3141A0u, 0x314018u, 0x314020u)) {
        return;
    }
    ctx->pc = 0x314020u;
label_314020:
    // 0x314020: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x314020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314024: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x314024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314028: 0x3e00008  jr          $ra
    ctx->pc = 0x314028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314028u;
        // 0x31402c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314030u;
}
