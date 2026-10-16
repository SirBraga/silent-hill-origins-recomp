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

// Function: sub_0011D4D8
// Address: 0x11d4d8 - 0x11d748
void sub_0011D4D8_0x11d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D4D8_0x11d4d8");
#endif

    switch (ctx->pc) {
        case 0x11d500u: goto label_11d500;
        case 0x11d514u: goto label_11d514;
        case 0x11d530u: goto label_11d530;
        case 0x11d5c8u: goto label_11d5c8;
        case 0x11d5e8u: goto label_11d5e8;
        case 0x11d60cu: goto label_11d60c;
        case 0x11d628u: goto label_11d628;
        case 0x11d698u: goto label_11d698;
        case 0x11d718u: goto label_11d718;
        default: break;
    }

    ctx->pc = 0x11d4d8u;

    // 0x11d4d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11d4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11d4dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x11d4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x11d4e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x11d4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x11d4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x11d4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x11d4ec: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x11d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x11d4f0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x11d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x11d4f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d4f8: 0xc04459c  jal         func_111670
    ctx->pc = 0x11D4F8u;
    SET_GPR_U32(ctx, 31, 0x11D500u);
    ctx->pc = 0x11D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4F8u;
    // 0x11d4fc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x11D4F8u, 0x11D500u)) {
        return;
    }
    ctx->pc = 0x11D500u;
label_11d500:
    // 0x11d500: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x11d500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x11d504: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11d504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d508: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x11d508u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x11d50c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x11D50Cu;
    SET_GPR_U32(ctx, 31, 0x11D514u);
    ctx->pc = 0x11D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D50Cu;
    // 0x11d510: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11D50Cu, 0x11D514u)) {
        return;
    }
    ctx->pc = 0x11D514u;
label_11d514:
    // 0x11d514: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11d514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d51c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x11D51Cu;
    {
        const bool branch_taken_0x11d51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D51Cu;
        // 0x11d520: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d51c) {
            ctx->pc = 0x11D5F8u;
            goto label_11d5f8;
        }
    }
    ctx->pc = 0x11D524u;
    // 0x11d524: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x11d524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d528: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d52c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x11d52cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11d530:
    // 0x11d530: 0x16340027  bne         $s1, $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x11D530u;
    {
        const bool branch_taken_0x11d530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x11D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D530u;
        // 0x11d534: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d530) {
            ctx->pc = 0x11D5D0u;
            goto label_11d5d0;
        }
    }
    ctx->pc = 0x11D538u;
    // 0x11d538: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x11d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11d53c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x11d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x11d540: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x11d540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11d544: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x11d544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11d548: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x11d548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11d54c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x11d54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11d550: 0x68470027  ldl         $a3, 0x27($v0)
    ctx->pc = 0x11d550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11d554: 0x6c470020  ldr         $a3, 0x20($v0)
    ctx->pc = 0x11d554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11d558: 0x6848002f  ldl         $t0, 0x2F($v0)
    ctx->pc = 0x11d558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11d55c: 0x6c480028  ldr         $t0, 0x28($v0)
    ctx->pc = 0x11d55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11d560: 0xb2030097  sdl         $v1, 0x97($s0)
    ctx->pc = 0x11d560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d564: 0xb6030090  sdr         $v1, 0x90($s0)
    ctx->pc = 0x11d564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d568: 0xb206009f  sdl         $a2, 0x9F($s0)
    ctx->pc = 0x11d568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d56c: 0xb6060098  sdr         $a2, 0x98($s0)
    ctx->pc = 0x11d56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d570: 0xb20700a7  sdl         $a3, 0xA7($s0)
    ctx->pc = 0x11d570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d574: 0xb60700a0  sdr         $a3, 0xA0($s0)
    ctx->pc = 0x11d574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d578: 0xb20800af  sdl         $t0, 0xAF($s0)
    ctx->pc = 0x11d578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d57c: 0xb60800a8  sdr         $t0, 0xA8($s0)
    ctx->pc = 0x11d57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d580: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x11d580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11d584: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x11d584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11d588: 0x6846003f  ldl         $a2, 0x3F($v0)
    ctx->pc = 0x11d588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11d58c: 0x6c460038  ldr         $a2, 0x38($v0)
    ctx->pc = 0x11d58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11d590: 0x68470047  ldl         $a3, 0x47($v0)
    ctx->pc = 0x11d590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11d594: 0x6c470040  ldr         $a3, 0x40($v0)
    ctx->pc = 0x11d594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11d598: 0x6848004f  ldl         $t0, 0x4F($v0)
    ctx->pc = 0x11d598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11d59c: 0x6c480048  ldr         $t0, 0x48($v0)
    ctx->pc = 0x11d59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11d5a0: 0xb20300b7  sdl         $v1, 0xB7($s0)
    ctx->pc = 0x11d5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d5a4: 0xb60300b0  sdr         $v1, 0xB0($s0)
    ctx->pc = 0x11d5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d5a8: 0xb20600bf  sdl         $a2, 0xBF($s0)
    ctx->pc = 0x11d5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d5ac: 0xb60600b8  sdr         $a2, 0xB8($s0)
    ctx->pc = 0x11d5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d5b0: 0xb20700c7  sdl         $a3, 0xC7($s0)
    ctx->pc = 0x11d5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d5b4: 0xb60700c0  sdr         $a3, 0xC0($s0)
    ctx->pc = 0x11d5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d5b8: 0xb20800cf  sdl         $t0, 0xCF($s0)
    ctx->pc = 0x11d5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d5bc: 0xb60800c8  sdr         $t0, 0xC8($s0)
    ctx->pc = 0x11d5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d5c0: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x11D5C0u;
    SET_GPR_U32(ctx, 31, 0x11D5C8u);
    ctx->pc = 0x11D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5C0u;
    // 0x11d5c4: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x11D5C0u, 0x11D5C8u)) {
        return;
    }
    ctx->pc = 0x11D5C8u;
label_11d5c8:
    // 0x11d5c8: 0xae110134  sw          $s1, 0x134($s0)
    ctx->pc = 0x11d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 17));
    // 0x11d5cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11d5d0:
    // 0x11d5d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11d5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d5d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d5dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d5e0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x11D5E0u;
    SET_GPR_U32(ctx, 31, 0x11D5E8u);
    ctx->pc = 0x11D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5E0u;
    // 0x11d5e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11D5E0u, 0x11D5E8u)) {
        return;
    }
    ctx->pc = 0x11D5E8u;
label_11d5e8:
    // 0x11d5e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d5ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d5f0: 0x5460ffcf  bnel        $v1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x11D5F0u;
    {
        const bool branch_taken_0x11d5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d5f0) {
            ctx->pc = 0x11D5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D5F0u;
            // 0x11d5f4: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d530;
        }
    }
    ctx->pc = 0x11D5F8u;
label_11d5f8:
    // 0x11d5f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x11d5fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d600: 0x8c464588  lw          $a2, 0x4588($v0)
    ctx->pc = 0x11d600u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4588u));
    // 0x11d604: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x11D604u;
    SET_GPR_U32(ctx, 31, 0x11D60Cu);
    ctx->pc = 0x11D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D604u;
    // 0x11d608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11D604u, 0x11D60Cu)) {
        return;
    }
    ctx->pc = 0x11D60Cu;
label_11d60c:
    // 0x11d60c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d614: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x11D614u;
    {
        const bool branch_taken_0x11d614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d614) {
            ctx->pc = 0x11D618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D614u;
            // 0x11d618: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D72Cu;
            goto label_11d72c;
        }
    }
    ctx->pc = 0x11D61Cu;
    // 0x11d61c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d620: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11d620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11d624: 0x0  nop
    ctx->pc = 0x11d624u;
    // NOP
label_11d628:
    // 0x11d628: 0x2c830009  sltiu       $v1, $a0, 0x9
    ctx->pc = 0x11d628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x11d62c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x11D62Cu;
    {
        const bool branch_taken_0x11d62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D62Cu;
        // 0x11d630: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d62c) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D634u;
    // 0x11d634: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11d634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11d638: 0x2442b3e0  addiu       $v0, $v0, -0x4C20
    ctx->pc = 0x11d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x11d63c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d640: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11d640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d644: 0x800008  jr          $a0
    ctx->pc = 0x11D644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D64Cu: goto label_11d64c;
            case 0x11D65Cu: goto label_11d65c;
            case 0x11D66Cu: goto label_11d66c;
            case 0x11D6A0u: goto label_11d6a0;
            case 0x11D6B0u: goto label_11d6b0;
            case 0x11D6C0u: goto label_11d6c0;
            case 0x11D6D0u: goto label_11d6d0;
            case 0x11D6F0u: goto label_11d6f0;
            case 0x11D6FCu: goto label_11d6fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D644u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11D64Cu;
label_11d64c:
    // 0x11d64c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d650: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d654: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11D654u;
    {
        const bool branch_taken_0x11d654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D654u;
        // 0x11d658: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d654) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D65Cu;
label_11d65c:
    // 0x11d65c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d660: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11d660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11d664: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x11D664u;
    {
        const bool branch_taken_0x11d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D664u;
        // 0x11d668: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d664) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D66Cu;
label_11d66c:
    // 0x11d66c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d670: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x11d670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x11d674: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x11d674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x11d678: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d67c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11d67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d680: 0x0  nop
    ctx->pc = 0x11d680u;
    // NOP
    // 0x11d684: 0x0  nop
    ctx->pc = 0x11d684u;
    // NOP
    // 0x11d688: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11d688u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x11d68c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11d68cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11d690: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x11D690u;
    SET_GPR_U32(ctx, 31, 0x11D698u);
    ctx->pc = 0x11D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D690u;
    // 0x11d694: 0xe6000118  swc1        $f0, 0x118($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x11D690u, 0x11D698u)) {
        return;
    }
    ctx->pc = 0x11D698u;
label_11d698:
    // 0x11d698: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11D698u;
    {
        const bool branch_taken_0x11d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D698u;
        // 0x11d69c: 0xe600011c  swc1        $f0, 0x11C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d698) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D6A0u;
label_11d6a0:
    // 0x11d6a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d6a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d6a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11D6A8u;
    {
        const bool branch_taken_0x11d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6A8u;
        // 0x11d6ac: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6a8) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D6B0u;
label_11d6b0:
    // 0x11d6b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d6b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d6b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11D6B8u;
    {
        const bool branch_taken_0x11d6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6B8u;
        // 0x11d6bc: 0xe6000124  swc1        $f0, 0x124($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6b8) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D6C0u;
label_11d6c0:
    // 0x11d6c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d6c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d6c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11D6C8u;
    {
        const bool branch_taken_0x11d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6C8u;
        // 0x11d6cc: 0xe6000138  swc1        $f0, 0x138($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6c8) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D6D0u;
label_11d6d0:
    // 0x11d6d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d6d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11d6d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D6D8u;
    {
        const bool branch_taken_0x11d6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6D8u;
        // 0x11d6dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6d8) {
            ctx->pc = 0x11D6E8u;
            goto label_11d6e8;
        }
    }
    ctx->pc = 0x11D6E0u;
    // 0x11d6e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11D6E0u;
    {
        const bool branch_taken_0x11d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6E0u;
        // 0x11d6e4: 0xae02013c  sw          $v0, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6e0) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D6E8u;
label_11d6e8:
    // 0x11d6e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D6E8u;
    {
        const bool branch_taken_0x11d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6E8u;
        // 0x11d6ec: 0xae00013c  sw          $zero, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6e8) {
            ctx->pc = 0x11D6FCu;
            goto label_11d6fc;
        }
    }
    ctx->pc = 0x11D6F0u;
label_11d6f0:
    // 0x11d6f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d6f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d6f8: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x11d6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
label_11d6fc:
    // 0x11d6fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d700: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11d704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d708: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d70c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d710: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x11D710u;
    SET_GPR_U32(ctx, 31, 0x11D718u);
    ctx->pc = 0x11D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D710u;
    // 0x11d714: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11D710u, 0x11D718u)) {
        return;
    }
    ctx->pc = 0x11D718u;
label_11d718:
    // 0x11d718: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d71c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d720: 0x5460ffc1  bnel        $v1, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x11D720u;
    {
        const bool branch_taken_0x11d720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d720) {
            ctx->pc = 0x11D724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D720u;
            // 0x11d724: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d628;
        }
    }
    ctx->pc = 0x11D728u;
    // 0x11d728: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x11d728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11d72c:
    // 0x11d72c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x11d72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d730: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x11d730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d734: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x11d734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d738: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x11d738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d73c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d740: 0x3e00008  jr          $ra
    ctx->pc = 0x11D740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D740u;
        // 0x11d744: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D748u;
}
