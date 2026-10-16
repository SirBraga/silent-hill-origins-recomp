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

// Function: sub_001FC738
// Address: 0x1fc738 - 0x1fc840
void sub_001FC738_0x1fc738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC738_0x1fc738");
#endif

    switch (ctx->pc) {
        case 0x1fc764u: goto label_1fc764;
        case 0x1fc770u: goto label_1fc770;
        case 0x1fc7e0u: goto label_1fc7e0;
        case 0x1fc7ecu: goto label_1fc7ec;
        case 0x1fc7fcu: goto label_1fc7fc;
        case 0x1fc818u: goto label_1fc818;
        default: break;
    }

    ctx->pc = 0x1fc738u;

    // 0x1fc738: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fc738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fc73c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1fc73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1fc740: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fc740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fc744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc748: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fc748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc74c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1fc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1fc750: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1fc750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1fc754: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1fc754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fc758: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fc758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fc75c: 0xc07f1bc  jal         func_1FC6F0
    ctx->pc = 0x1FC75Cu;
    SET_GPR_U32(ctx, 31, 0x1FC764u);
    ctx->pc = 0x1FC760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC75Cu;
    // 0x1fc760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC6F0u, 0x1FC75Cu, 0x1FC764u)) {
        return;
    }
    ctx->pc = 0x1FC764u;
label_1fc764:
    // 0x1fc764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fc764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc768: 0x27b20024  addiu       $s2, $sp, 0x24
    ctx->pc = 0x1fc768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1fc76c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1fc76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_1fc770:
    // 0x1fc770: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fc770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc774: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fc774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fc778: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FC778u;
    {
        const bool branch_taken_0x1fc778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC778u;
        // 0x1fc77c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc778) {
            ctx->pc = 0x1FC7A8u;
            goto label_1fc7a8;
        }
    }
    ctx->pc = 0x1FC780u;
    // 0x1fc780: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x1fc780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fc784: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x1fc784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fc788: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x1fc788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1fc78c: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x1fc78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1fc790: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1fc790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc794: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1fc794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc798: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x1fc798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc79c: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x1fc79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc7a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fc7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc7a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc7a8:
    // 0x1fc7a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7b0: 0x1200ffef  beqz        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FC7B0u;
    {
        const bool branch_taken_0x1fc7b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B0u;
        // 0x1fc7b4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7b0) {
            ctx->pc = 0x1FC770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc770;
        }
    }
    ctx->pc = 0x1FC7B8u;
    // 0x1fc7b8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1fc7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fc7bc: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1fc7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fc7c0: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1fc7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1fc7c4: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1fc7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1fc7c8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1fc7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc7cc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1fc7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc7d0: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1fc7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc7d4: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1fc7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fc7d8: 0xc081340  jal         func_204D00
    ctx->pc = 0x1FC7D8u;
    SET_GPR_U32(ctx, 31, 0x1FC7E0u);
    ctx->pc = 0x1FC7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7D8u;
    // 0x1fc7dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204D00u, 0x1FC7D8u, 0x1FC7E0u)) {
        return;
    }
    ctx->pc = 0x1FC7E0u;
label_1fc7e0:
    // 0x1fc7e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7e4: 0xc07f1bc  jal         func_1FC6F0
    ctx->pc = 0x1FC7E4u;
    SET_GPR_U32(ctx, 31, 0x1FC7ECu);
    ctx->pc = 0x1FC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7E4u;
    // 0x1fc7e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC6F0u, 0x1FC7E4u, 0x1FC7ECu)) {
        return;
    }
    ctx->pc = 0x1FC7ECu;
label_1fc7ec:
    // 0x1fc7ec: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1fc7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1fc7f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fc7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7f4: 0xc07f392  jal         func_1FCE48
    ctx->pc = 0x1FC7F4u;
    SET_GPR_U32(ctx, 31, 0x1FC7FCu);
    ctx->pc = 0x1FC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7F4u;
    // 0x1fc7f8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCE48u, 0x1FC7F4u, 0x1FC7FCu)) {
        return;
    }
    ctx->pc = 0x1FC7FCu;
label_1fc7fc:
    // 0x1fc7fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fc7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc800: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC800u;
    {
        const bool branch_taken_0x1fc800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC800u;
        // 0x1fc804: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc800) {
            ctx->pc = 0x1FC818u;
            goto label_1fc818;
        }
    }
    ctx->pc = 0x1FC808u;
    // 0x1fc808: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fc808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc80c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fc80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc810: 0xc0812b6  jal         func_204AD8
    ctx->pc = 0x1FC810u;
    SET_GPR_U32(ctx, 31, 0x1FC818u);
    ctx->pc = 0x1FC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC810u;
    // 0x1fc814: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204AD8u, 0x1FC810u, 0x1FC818u)) {
        return;
    }
    ctx->pc = 0x1FC818u;
label_1fc818:
    // 0x1fc818: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fc818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc81c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1fc81cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fc820: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1fc820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc824: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1fc824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fc828: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fc828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc82c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fc82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc830: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC830u;
        // 0x1fc834: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC838u;
    // 0x1fc838: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1fc83c: 0x0  nop
    ctx->pc = 0x1fc83cu;
    // NOP
    ctx->pc = 0x1fc840u;
}
