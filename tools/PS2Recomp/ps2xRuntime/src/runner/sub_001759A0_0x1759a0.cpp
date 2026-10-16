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

// Function: sub_001759A0
// Address: 0x1759a0 - 0x175a30
void sub_001759A0_0x1759a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001759A0_0x1759a0");
#endif

    switch (ctx->pc) {
        case 0x1759ccu: goto label_1759cc;
        case 0x175a1cu: goto label_175a1c;
        default: break;
    }

    ctx->pc = 0x1759a0u;

    // 0x1759a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1759a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1759a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1759a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1759a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1759ac: 0x2482005c  addiu       $v0, $a0, 0x5C
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x1759b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1759b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1759b4: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x1759b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1759b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1759b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1759bc: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1759BCu;
    {
        const bool branch_taken_0x1759bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1759bc) {
            ctx->pc = 0x1759C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1759BCu;
            // 0x1759c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175A20u;
            goto label_175a20;
        }
    }
    ctx->pc = 0x1759C4u;
    // 0x1759c4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1759C4u;
    SET_GPR_U32(ctx, 31, 0x1759CCu);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1759C4u, 0x1759CCu)) {
        return;
    }
    ctx->pc = 0x1759CCu;
label_1759cc:
    // 0x1759cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1759ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1759d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1759d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1759d4: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x1759d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x1759d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1759d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1759dc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1759e0: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x1759e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x1759e4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1759e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1759e8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1759e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1759ec: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1759ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1759f0: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x1759f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1759f4: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x1759f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1759f8: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1759f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1759fc: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1759fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x175a00: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175A00u;
    {
        const bool branch_taken_0x175a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x175A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A00u;
        // 0x175a04: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a00) {
            ctx->pc = 0x175A1Cu;
            goto label_175a1c;
        }
    }
    ctx->pc = 0x175A08u;
    // 0x175a08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x175a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175a0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175A0Cu;
    {
        const bool branch_taken_0x175a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A0Cu;
        // 0x175a10: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a0c) {
            ctx->pc = 0x175A20u;
            goto label_175a20;
        }
    }
    ctx->pc = 0x175A14u;
    // 0x175a14: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x175A14u;
    SET_GPR_U32(ctx, 31, 0x175A1Cu);
    ctx->pc = 0x175A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A14u;
    // 0x175a18: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x175A14u, 0x175A1Cu)) {
        return;
    }
    ctx->pc = 0x175A1Cu;
label_175a1c:
    // 0x175a1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175a20:
    // 0x175a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175a24: 0x3e00008  jr          $ra
    ctx->pc = 0x175A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A24u;
        // 0x175a28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A2Cu;
    // 0x175a2c: 0x0  nop
    ctx->pc = 0x175a2cu;
    // NOP
    ctx->pc = 0x175a30u;
}
