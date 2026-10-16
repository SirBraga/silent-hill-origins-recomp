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

// Function: sub_001B5FB0
// Address: 0x1b5fb0 - 0x1b6068
void sub_001B5FB0_0x1b5fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5FB0_0x1b5fb0");
#endif

    switch (ctx->pc) {
        case 0x1b5fccu: goto label_1b5fcc;
        case 0x1b6048u: goto label_1b6048;
        default: break;
    }

    ctx->pc = 0x1b5fb0u;

    // 0x1b5fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b5fb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b5fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b5fb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b5fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b5fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b5fc4: 0xc06bbf8  jal         func_1AEFE0
    ctx->pc = 0x1B5FC4u;
    SET_GPR_U32(ctx, 31, 0x1B5FCCu);
    ctx->pc = 0x1B5FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FC4u;
    // 0x1b5fc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1B5FC4u, 0x1B5FCCu)) {
        return;
    }
    ctx->pc = 0x1B5FCCu;
label_1b5fcc:
    // 0x1b5fcc: 0x8e0202b0  lw          $v0, 0x2B0($s0)
    ctx->pc = 0x1b5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1b5fd0: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B5FD0u;
    {
        const bool branch_taken_0x1b5fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fd0) {
            ctx->pc = 0x1B5FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5FD0u;
            // 0x1b5fd4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6054u;
            goto label_1b6054;
        }
    }
    ctx->pc = 0x1B5FD8u;
    // 0x1b5fd8: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x1b5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1b5fdc: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B5FDCu;
    {
        const bool branch_taken_0x1b5fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fdc) {
            ctx->pc = 0x1B5FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5FDCu;
            // 0x1b5fe0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6054u;
            goto label_1b6054;
        }
    }
    ctx->pc = 0x1B5FE4u;
    // 0x1b5fe4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1b5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1b5fe8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5fec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5ff0: 0x8a040253  lwl         $a0, 0x253($s0)
    ctx->pc = 0x1b5ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 595); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1b5ff4: 0x9a040250  lwr         $a0, 0x250($s0)
    ctx->pc = 0x1b5ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 592); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1b5ff8: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x1b5ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b5ffc: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x1b5ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b6000: 0x88480143  lwl         $t0, 0x143($v0)
    ctx->pc = 0x1b6000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 323); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1b6004: 0x98480140  lwr         $t0, 0x140($v0)
    ctx->pc = 0x1b6004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 320); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1b6008: 0xaba80013  swl         $t0, 0x13($sp)
    ctx->pc = 0x1b6008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b600c: 0xbba80010  swr         $t0, 0x10($sp)
    ctx->pc = 0x1b600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b6010: 0x260402b8  addiu       $a0, $s0, 0x2B8
    ctx->pc = 0x1b6010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    // 0x1b6014: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1b6014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1b6018: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b6018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b601c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b601cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b6020: 0x260702bc  addiu       $a3, $s0, 0x2BC
    ctx->pc = 0x1b6020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
    // 0x1b6024: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b6024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6028: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1b6028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b602c: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1b602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6030: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1b6030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b6034: 0x3c014036  lui         $at, 0x4036
    ctx->pc = 0x1b6034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16438 << 16));
    // 0x1b6038: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x1b6038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
    // 0x1b603c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b603cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b6040: 0xc06d066  jal         func_1B4198
    ctx->pc = 0x1B6040u;
    SET_GPR_U32(ctx, 31, 0x1B6048u);
    ctx->pc = 0x1B6044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6040u;
    // 0x1b6044: 0xc33024  and         $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4198u, 0x1B6040u, 0x1B6048u)) {
        return;
    }
    ctx->pc = 0x1B6048u;
label_1b6048:
    // 0x1b6048: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b6048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b604c: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x1b604cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
    // 0x1b6050: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b6050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b6054:
    // 0x1b6054: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b6054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b6058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b605c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B605Cu;
        // 0x1b6060: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6064u;
    // 0x1b6064: 0x0  nop
    ctx->pc = 0x1b6064u;
    // NOP
    ctx->pc = 0x1b6068u;
}
