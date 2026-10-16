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

// Function: sub_001738B0
// Address: 0x1738b0 - 0x173940
void sub_001738B0_0x1738b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001738B0_0x1738b0");
#endif

    switch (ctx->pc) {
        case 0x1738dcu: goto label_1738dc;
        case 0x17392cu: goto label_17392c;
        default: break;
    }

    ctx->pc = 0x1738b0u;

    // 0x1738b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1738b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1738b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1738b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1738b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1738b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1738bc: 0x2482005c  addiu       $v0, $a0, 0x5C
    ctx->pc = 0x1738bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x1738c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1738c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1738c4: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x1738c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1738c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1738c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1738cc: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1738CCu;
    {
        const bool branch_taken_0x1738cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1738cc) {
            ctx->pc = 0x1738D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1738CCu;
            // 0x1738d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173930u;
            goto label_173930;
        }
    }
    ctx->pc = 0x1738D4u;
    // 0x1738d4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1738D4u;
    SET_GPR_U32(ctx, 31, 0x1738DCu);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1738D4u, 0x1738DCu)) {
        return;
    }
    ctx->pc = 0x1738DCu;
label_1738dc:
    // 0x1738dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1738dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1738e0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1738e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1738e4: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x1738e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x1738e8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1738e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1738ec: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1738ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1738f0: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x1738f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x1738f4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1738f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1738f8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1738f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1738fc: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x173900: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x173900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173904: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x173904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173908: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x173908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x17390c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x17390cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x173910: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173910u;
    {
        const bool branch_taken_0x173910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x173914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173910u;
        // 0x173914: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173910) {
            ctx->pc = 0x17392Cu;
            goto label_17392c;
        }
    }
    ctx->pc = 0x173918u;
    // 0x173918: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x173918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17391c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17391Cu;
    {
        const bool branch_taken_0x17391c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17391Cu;
        // 0x173920: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17391c) {
            ctx->pc = 0x173930u;
            goto label_173930;
        }
    }
    ctx->pc = 0x173924u;
    // 0x173924: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x173924u;
    SET_GPR_U32(ctx, 31, 0x17392Cu);
    ctx->pc = 0x173928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173924u;
    // 0x173928: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x173924u, 0x17392Cu)) {
        return;
    }
    ctx->pc = 0x17392Cu;
label_17392c:
    // 0x17392c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17392cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173930:
    // 0x173930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173934: 0x3e00008  jr          $ra
    ctx->pc = 0x173934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173934u;
        // 0x173938: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17393Cu;
    // 0x17393c: 0x0  nop
    ctx->pc = 0x17393cu;
    // NOP
    ctx->pc = 0x173940u;
}
