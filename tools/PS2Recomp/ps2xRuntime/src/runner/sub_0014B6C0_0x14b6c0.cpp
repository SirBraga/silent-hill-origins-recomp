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

// Function: sub_0014B6C0
// Address: 0x14b6c0 - 0x14b760
void sub_0014B6C0_0x14b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B6C0_0x14b6c0");
#endif

    switch (ctx->pc) {
        case 0x14b6c0u: goto label_14b6c0;
        case 0x14b6c4u: goto label_14b6c4;
        case 0x14b6c8u: goto label_14b6c8;
        case 0x14b6ccu: goto label_14b6cc;
        case 0x14b6d0u: goto label_14b6d0;
        case 0x14b6d4u: goto label_14b6d4;
        case 0x14b6d8u: goto label_14b6d8;
        case 0x14b6dcu: goto label_14b6dc;
        case 0x14b6e0u: goto label_14b6e0;
        case 0x14b6e4u: goto label_14b6e4;
        case 0x14b6e8u: goto label_14b6e8;
        case 0x14b6ecu: goto label_14b6ec;
        case 0x14b6f0u: goto label_14b6f0;
        case 0x14b6f4u: goto label_14b6f4;
        case 0x14b6f8u: goto label_14b6f8;
        case 0x14b6fcu: goto label_14b6fc;
        case 0x14b700u: goto label_14b700;
        case 0x14b704u: goto label_14b704;
        case 0x14b708u: goto label_14b708;
        case 0x14b70cu: goto label_14b70c;
        case 0x14b710u: goto label_14b710;
        case 0x14b714u: goto label_14b714;
        case 0x14b718u: goto label_14b718;
        case 0x14b71cu: goto label_14b71c;
        case 0x14b720u: goto label_14b720;
        case 0x14b724u: goto label_14b724;
        case 0x14b728u: goto label_14b728;
        case 0x14b72cu: goto label_14b72c;
        case 0x14b730u: goto label_14b730;
        case 0x14b734u: goto label_14b734;
        case 0x14b738u: goto label_14b738;
        case 0x14b73cu: goto label_14b73c;
        case 0x14b740u: goto label_14b740;
        case 0x14b744u: goto label_14b744;
        case 0x14b748u: goto label_14b748;
        case 0x14b74cu: goto label_14b74c;
        case 0x14b750u: goto label_14b750;
        case 0x14b754u: goto label_14b754;
        case 0x14b758u: goto label_14b758;
        case 0x14b75cu: goto label_14b75c;
        default: break;
    }

    ctx->pc = 0x14b6c0u;

label_14b6c0:
    // 0x14b6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14b6c4:
    // 0x14b6c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_14b6c8:
    // 0x14b6c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14b6cc:
    // 0x14b6cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14b6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14b6d0:
    // 0x14b6d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14b6d4:
    // 0x14b6d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14b6d8:
    // 0x14b6d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14b6dc:
    if (ctx->pc == 0x14B6DCu) {
        ctx->pc = 0x14B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6D8u;
        // 0x14b6dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B6E0u;
        goto label_14b6e0;
    }
    ctx->pc = 0x14B6D8u;
    {
        const bool branch_taken_0x14b6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6D8u;
        // 0x14b6dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6d8) {
            ctx->pc = 0x14B6E8u;
            goto label_14b6e8;
        }
    }
    ctx->pc = 0x14B6E0u;
label_14b6e0:
    // 0x14b6e0: 0x40f809  jalr        $v0
label_14b6e4:
    if (ctx->pc == 0x14B6E4u) {
        ctx->pc = 0x14B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6E0u;
        // 0x14b6e4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B6E8u;
        goto label_14b6e8;
    }
    ctx->pc = 0x14B6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14B6E8u);
        ctx->pc = 0x14B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6E0u;
        // 0x14b6e4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6E0u, 0x14B6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B6E8u;
label_14b6e8:
    // 0x14b6e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14b6ec:
    // 0x14b6ec: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x14b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_14b6f0:
    // 0x14b6f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_14b6f4:
    if (ctx->pc == 0x14B6F4u) {
        ctx->pc = 0x14B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6F0u;
        // 0x14b6f4: 0x2622ffbc  addiu       $v0, $s1, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B6F8u;
        goto label_14b6f8;
    }
    ctx->pc = 0x14B6F0u;
    {
        const bool branch_taken_0x14b6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6F0u;
        // 0x14b6f4: 0x2622ffbc  addiu       $v0, $s1, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6f0) {
            ctx->pc = 0x14B700u;
            goto label_14b700;
        }
    }
    ctx->pc = 0x14B6F8u;
label_14b6f8:
    // 0x14b6f8: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x14b6f8u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_14b6fc:
    // 0x14b6fc: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x14b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_14b700:
    // 0x14b700: 0xc04f0cc  jal         func_13C330
label_14b704:
    if (ctx->pc == 0x14B704u) {
        ctx->pc = 0x14B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B700u;
        // 0x14b704: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B708u;
        goto label_14b708;
    }
    ctx->pc = 0x14B700u;
    SET_GPR_U32(ctx, 31, 0x14B708u);
    ctx->pc = 0x14B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B700u;
    // 0x14b704: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x14B700u, 0x14B708u)) {
        return;
    }
    ctx->pc = 0x14B708u;
label_14b708:
    // 0x14b708: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14b70c:
    // 0x14b70c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b710:
    // 0x14b710: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x14b710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_14b714:
    // 0x14b714: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x14b714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_14b718:
    // 0x14b718: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x14b718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_14b71c:
    // 0x14b71c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x14b71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14b720:
    // 0x14b720: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x14b720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14b724:
    // 0x14b724: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x14b724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_14b728:
    // 0x14b728: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x14b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_14b72c:
    // 0x14b72c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14b730:
    // 0x14b730: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x14b730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_14b734:
    // 0x14b734: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x14b734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_14b738:
    // 0x14b738: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x14b738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_14b73c:
    // 0x14b73c: 0xb0432c47  sdl         $v1, 0x2C47($v0)
    ctx->pc = 0x14b73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14b740:
    // 0x14b740: 0xb4432c40  sdr         $v1, 0x2C40($v0)
    ctx->pc = 0x14b740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14b744:
    // 0x14b744: 0xac452c48  sw          $a1, 0x2C48($v0)
    ctx->pc = 0x14b744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11336), GPR_U32(ctx, 5));
label_14b748:
    // 0x14b748: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14b74c:
    // 0x14b74c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14b750:
    // 0x14b750: 0xac442d10  sw          $a0, 0x2D10($v0)
    ctx->pc = 0x14b750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11536), GPR_U32(ctx, 4));
label_14b754:
    // 0x14b754: 0x3e00008  jr          $ra
label_14b758:
    if (ctx->pc == 0x14B758u) {
        ctx->pc = 0x14B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B754u;
        // 0x14b758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B75Cu;
        goto label_14b75c;
    }
    ctx->pc = 0x14B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B754u;
        // 0x14b758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B75Cu;
label_14b75c:
    // 0x14b75c: 0x0  nop
    ctx->pc = 0x14b75cu;
    // NOP
    ctx->pc = 0x14b760u;
}
