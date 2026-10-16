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

// Function: sub_001DF8F8
// Address: 0x1df8f8 - 0x1df9a8
void sub_001DF8F8_0x1df8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF8F8_0x1df8f8");
#endif

    switch (ctx->pc) {
        case 0x1df948u: goto label_1df948;
        case 0x1df95cu: goto label_1df95c;
        case 0x1df970u: goto label_1df970;
        case 0x1df984u: goto label_1df984;
        default: break;
    }

    ctx->pc = 0x1df8f8u;

    // 0x1df8f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1df8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1df8fc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1df8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1df900: 0x8c47e6c8  lw          $a3, -0x1938($v0)
    ctx->pc = 0x1df900u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x33E6C8u));
    // 0x1df904: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1df904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df908: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1df908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1df90c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1df90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1df910: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1df910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1df914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1df918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df91c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x1df91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1df920: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1df920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df924: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1df924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1df928: 0x6862000b  ldl         $v0, 0xB($v1)
    ctx->pc = 0x1df928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1df92c: 0x6c620004  ldr         $v0, 0x4($v1)
    ctx->pc = 0x1df92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1df930: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x1df930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1df934: 0xb3a2000b  sdl         $v0, 0xB($sp)
    ctx->pc = 0x1df934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df938: 0xb7a20004  sdr         $v0, 0x4($sp)
    ctx->pc = 0x1df938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df93c: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1df93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1df940: 0xc092782  jal         func_249E08
    ctx->pc = 0x1DF940u;
    SET_GPR_U32(ctx, 31, 0x1DF948u);
    ctx->pc = 0x1DF944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF940u;
    // 0x1df944: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1DF940u, 0x1DF948u)) {
        return;
    }
    ctx->pc = 0x1DF948u;
label_1df948:
    // 0x1df948: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF948u;
    {
        const bool branch_taken_0x1df948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF948u;
        // 0x1df94c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df948) {
            ctx->pc = 0x1DF98Cu;
            goto label_1df98c;
        }
    }
    ctx->pc = 0x1DF950u;
    // 0x1df950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df954: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1DF954u;
    SET_GPR_U32(ctx, 31, 0x1DF95Cu);
    ctx->pc = 0x1DF958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF954u;
    // 0x1df958: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1DF954u, 0x1DF95Cu)) {
        return;
    }
    ctx->pc = 0x1DF95Cu;
label_1df95c:
    // 0x1df95c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF95Cu;
    {
        const bool branch_taken_0x1df95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF95Cu;
        // 0x1df960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df95c) {
            ctx->pc = 0x1DF98Cu;
            goto label_1df98c;
        }
    }
    ctx->pc = 0x1DF964u;
    // 0x1df964: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1df964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1df968: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1DF968u;
    SET_GPR_U32(ctx, 31, 0x1DF970u);
    ctx->pc = 0x1DF96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF968u;
    // 0x1df96c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1DF968u, 0x1DF970u)) {
        return;
    }
    ctx->pc = 0x1DF970u;
label_1df970:
    // 0x1df970: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF970u;
    {
        const bool branch_taken_0x1df970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF970u;
        // 0x1df974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df970) {
            ctx->pc = 0x1DF98Cu;
            goto label_1df98c;
        }
    }
    ctx->pc = 0x1DF978u;
    // 0x1df978: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x1df978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x1df97c: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1DF97Cu;
    SET_GPR_U32(ctx, 31, 0x1DF984u);
    ctx->pc = 0x1DF980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF97Cu;
    // 0x1df980: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1DF97Cu, 0x1DF984u)) {
        return;
    }
    ctx->pc = 0x1DF984u;
label_1df984:
    // 0x1df984: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF984u;
    {
        const bool branch_taken_0x1df984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF984u;
        // 0x1df988: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df984) {
            ctx->pc = 0x1DF990u;
            goto label_1df990;
        }
    }
    ctx->pc = 0x1DF98Cu;
label_1df98c:
    // 0x1df98c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df990:
    // 0x1df990: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1df990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df994: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1df994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df99c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF99Cu;
        // 0x1df9a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF9A4u;
    // 0x1df9a4: 0x0  nop
    ctx->pc = 0x1df9a4u;
    // NOP
    ctx->pc = 0x1df9a8u;
}
