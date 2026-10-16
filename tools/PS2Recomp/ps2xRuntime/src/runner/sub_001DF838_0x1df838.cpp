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

// Function: sub_001DF838
// Address: 0x1df838 - 0x1df8f8
void sub_001DF838_0x1df838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF838_0x1df838");
#endif

    switch (ctx->pc) {
        case 0x1df85cu: goto label_1df85c;
        case 0x1df870u: goto label_1df870;
        case 0x1df884u: goto label_1df884;
        case 0x1df898u: goto label_1df898;
        default: break;
    }

    ctx->pc = 0x1df838u;

    // 0x1df838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1df838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1df83c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1df83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1df840: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1df840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df844: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1df844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1df848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df84c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1df84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df850: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1df854: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1DF854u;
    SET_GPR_U32(ctx, 31, 0x1DF85Cu);
    ctx->pc = 0x1DF858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF854u;
    // 0x1df858: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1DF854u, 0x1DF85Cu)) {
        return;
    }
    ctx->pc = 0x1DF85Cu;
label_1df85c:
    // 0x1df85c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF85Cu;
    {
        const bool branch_taken_0x1df85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF85Cu;
        // 0x1df860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df85c) {
            ctx->pc = 0x1DF8A0u;
            goto label_1df8a0;
        }
    }
    ctx->pc = 0x1DF864u;
    // 0x1df864: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1df864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1df868: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1DF868u;
    SET_GPR_U32(ctx, 31, 0x1DF870u);
    ctx->pc = 0x1DF86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF868u;
    // 0x1df86c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1DF868u, 0x1DF870u)) {
        return;
    }
    ctx->pc = 0x1DF870u;
label_1df870:
    // 0x1df870: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF870u;
    {
        const bool branch_taken_0x1df870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF870u;
        // 0x1df874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df870) {
            ctx->pc = 0x1DF8A0u;
            goto label_1df8a0;
        }
    }
    ctx->pc = 0x1DF878u;
    // 0x1df878: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1df878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1df87c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1DF87Cu;
    SET_GPR_U32(ctx, 31, 0x1DF884u);
    ctx->pc = 0x1DF880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF87Cu;
    // 0x1df880: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1DF87Cu, 0x1DF884u)) {
        return;
    }
    ctx->pc = 0x1DF884u;
label_1df884:
    // 0x1df884: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF884u;
    {
        const bool branch_taken_0x1df884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF884u;
        // 0x1df888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df884) {
            ctx->pc = 0x1DF8A0u;
            goto label_1df8a0;
        }
    }
    ctx->pc = 0x1DF88Cu;
    // 0x1df88c: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x1df88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x1df890: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1DF890u;
    SET_GPR_U32(ctx, 31, 0x1DF898u);
    ctx->pc = 0x1DF894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF890u;
    // 0x1df894: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1DF890u, 0x1DF898u)) {
        return;
    }
    ctx->pc = 0x1DF898u;
label_1df898:
    // 0x1df898: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF898u;
    {
        const bool branch_taken_0x1df898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF898u;
        // 0x1df89c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df898) {
            ctx->pc = 0x1DF8A8u;
            goto label_1df8a8;
        }
    }
    ctx->pc = 0x1DF8A0u;
label_1df8a0:
    // 0x1df8a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF8A0u;
    {
        const bool branch_taken_0x1df8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8A0u;
        // 0x1df8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8a0) {
            ctx->pc = 0x1DF8E4u;
            goto label_1df8e4;
        }
    }
    ctx->pc = 0x1DF8A8u;
label_1df8a8:
    // 0x1df8a8: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x1df8a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1df8ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8ACu;
    {
        const bool branch_taken_0x1df8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ACu;
        // 0x1df8b0: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ac) {
            ctx->pc = 0x1DF8C0u;
            goto label_1df8c0;
        }
    }
    ctx->pc = 0x1DF8B4u;
    // 0x1df8b4: 0x8c82e6c8  lw          $v0, -0x1938($a0)
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960840)));
    // 0x1df8b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1df8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1df8bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1df8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1df8c0:
    // 0x1df8c0: 0x8c83e6c8  lw          $v1, -0x1938($a0)
    ctx->pc = 0x1df8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960840)));
    // 0x1df8c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8c8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1df8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1df8cc: 0x6ba4000b  ldl         $a0, 0xB($sp)
    ctx->pc = 0x1df8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1df8d0: 0x6fa40004  ldr         $a0, 0x4($sp)
    ctx->pc = 0x1df8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1df8d4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1df8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1df8d8: 0xb064000b  sdl         $a0, 0xB($v1)
    ctx->pc = 0x1df8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df8dc: 0xb4640004  sdr         $a0, 0x4($v1)
    ctx->pc = 0x1df8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df8e0: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1df8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_1df8e4:
    // 0x1df8e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1df8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df8e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1df8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df8ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8F0u;
        // 0x1df8f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF8F8u;
}
