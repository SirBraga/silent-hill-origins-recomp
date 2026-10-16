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

// Function: sub_001D9948
// Address: 0x1d9948 - 0x1d9a00
void sub_001D9948_0x1d9948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9948_0x1d9948");
#endif

    switch (ctx->pc) {
        case 0x1d998cu: goto label_1d998c;
        default: break;
    }

    ctx->pc = 0x1d9948u;

    // 0x1d9948: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d994c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d9950: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d9950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d9954: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d9954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d9958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d995c: 0x24468290  addiu       $a2, $v0, -0x7D70
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1d9960: 0x8c658cb0  lw          $a1, -0x7350($v1)
    ctx->pc = 0x1d9960u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6F8CB0u));
    // 0x1d9964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9968: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d9968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338298u));
    // 0x1d996c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1d996cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9970: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1d9970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x1d9974: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d9974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1d9978: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d9978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d997c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D997Cu;
    {
        const bool branch_taken_0x1d997c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D997Cu;
        // 0x1d9980: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d997c) {
            ctx->pc = 0x1D9994u;
            goto label_1d9994;
        }
    }
    ctx->pc = 0x1D9984u;
    // 0x1d9984: 0xc076936  jal         func_1DA4D8
    ctx->pc = 0x1D9984u;
    SET_GPR_U32(ctx, 31, 0x1D998Cu);
    ctx->pc = 0x1D9988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9984u;
    // 0x1d9988: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA4D8u, 0x1D9984u, 0x1D998Cu)) {
        return;
    }
    ctx->pc = 0x1D998Cu;
label_1d998c:
    // 0x1d998c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D998Cu;
    {
        const bool branch_taken_0x1d998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D998Cu;
        // 0x1d9990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d998c) {
            ctx->pc = 0x1D99A0u;
            goto label_1d99a0;
        }
    }
    ctx->pc = 0x1D9994u;
label_1d9994:
    // 0x1d9994: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9998: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1d9998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d999c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1d999cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1d99a0:
    // 0x1d99a0: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1d99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d99a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D99A4u;
    {
        const bool branch_taken_0x1d99a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99A4u;
        // 0x1d99a8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99a4) {
            ctx->pc = 0x1D99C8u;
            goto label_1d99c8;
        }
    }
    ctx->pc = 0x1D99ACu;
    // 0x1d99ac: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x1d99acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d99b0: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x1d99b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d99b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d99b8: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x1d99b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d99bc: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x1d99bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d99c0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1d99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1d99c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d99c8:
    // 0x1d99c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d99c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d99cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d99ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d99d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d99d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d99d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d99d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d99dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d99dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d99e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d99e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d99e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d99e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1d99ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d99f0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d99f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1d99f4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d99f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d99f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D99F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99F8u;
        // 0x1d99fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D99F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9A00u;
}
