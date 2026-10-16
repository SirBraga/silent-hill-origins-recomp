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

// Function: sub_00159858
// Address: 0x159858 - 0x159b60
void sub_00159858_0x159858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159858_0x159858");
#endif

    switch (ctx->pc) {
        case 0x159874u: goto label_159874;
        case 0x159888u: goto label_159888;
        case 0x1598a0u: goto label_1598a0;
        case 0x1598e0u: goto label_1598e0;
        case 0x1598f4u: goto label_1598f4;
        case 0x159a1cu: goto label_159a1c;
        case 0x159b3cu: goto label_159b3c;
        default: break;
    }

    ctx->pc = 0x159858u;

    // 0x159858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15985c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x159860: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x159860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x159864: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15986c: 0xc04ed0e  jal         func_13B438
    ctx->pc = 0x15986Cu;
    SET_GPR_U32(ctx, 31, 0x159874u);
    ctx->pc = 0x159870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15986Cu;
    // 0x159870: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x15986Cu, 0x159874u)) {
        return;
    }
    ctx->pc = 0x159874u;
label_159874:
    // 0x159874: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x159874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x159878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15987c: 0x8c46f088  lw          $a2, -0xF78($v0)
    ctx->pc = 0x15987cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF088u));
    // 0x159880: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x159880u;
    SET_GPR_U32(ctx, 31, 0x159888u);
    ctx->pc = 0x159884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159880u;
    // 0x159884: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x159880u, 0x159888u)) {
        return;
    }
    ctx->pc = 0x159888u;
label_159888:
    // 0x159888: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x159888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15988c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159890: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x159890u;
    {
        const bool branch_taken_0x159890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159890u;
        // 0x159894: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159890) {
            ctx->pc = 0x159B50u;
            goto label_159b50;
        }
    }
    ctx->pc = 0x159898u;
    // 0x159898: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15989c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1598a0:
    // 0x1598a0: 0x2c830018  sltiu       $v1, $a0, 0x18
    ctx->pc = 0x1598a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1598a4: 0x1060009e  beqz        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x1598A4u;
    {
        const bool branch_taken_0x1598a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598A4u;
        // 0x1598a8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598a4) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x1598ACu;
    // 0x1598ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1598acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1598b0: 0x24422c80  addiu       $v0, $v0, 0x2C80
    ctx->pc = 0x1598b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11392));
    // 0x1598b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1598b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1598b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1598b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1598bc: 0x800008  jr          $a0
    ctx->pc = 0x1598BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1598C4u: goto label_1598c4;
            case 0x1598FCu: goto label_1598fc;
            case 0x159988u: goto label_159988;
            case 0x159998u: goto label_159998;
            case 0x1599A8u: goto label_1599a8;
            case 0x1599B8u: goto label_1599b8;
            case 0x1599C8u: goto label_1599c8;
            case 0x1599D8u: goto label_1599d8;
            case 0x1599E8u: goto label_1599e8;
            case 0x1599F8u: goto label_1599f8;
            case 0x159A08u: goto label_159a08;
            case 0x159A24u: goto label_159a24;
            case 0x159A34u: goto label_159a34;
            case 0x159A44u: goto label_159a44;
            case 0x159A54u: goto label_159a54;
            case 0x159A64u: goto label_159a64;
            case 0x159A74u: goto label_159a74;
            case 0x159A84u: goto label_159a84;
            case 0x159A94u: goto label_159a94;
            case 0x159AA4u: goto label_159aa4;
            case 0x159AB4u: goto label_159ab4;
            case 0x159AC4u: goto label_159ac4;
            case 0x159AE4u: goto label_159ae4;
            case 0x159B04u: goto label_159b04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1598BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1598C4u;
label_1598c4:
    // 0x1598c4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1598c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1598c8: 0x263000d8  addiu       $s0, $s1, 0xD8
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x1598cc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1598ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1598d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1598d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598d4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1598d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1598d8: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x1598D8u;
    SET_GPR_U32(ctx, 31, 0x1598E0u);
    ctx->pc = 0x1598DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598D8u;
    // 0x1598dc: 0x24c62c70  addiu       $a2, $a2, 0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x1598D8u, 0x1598E0u)) {
        return;
    }
    ctx->pc = 0x1598E0u;
label_1598e0:
    // 0x1598e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1598e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598e4: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1598e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1598e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1598e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598ec: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1598ECu;
    SET_GPR_U32(ctx, 31, 0x1598F4u);
    ctx->pc = 0x1598F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598ECu;
    // 0x1598f0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1598ECu, 0x1598F4u)) {
        return;
    }
    ctx->pc = 0x1598F4u;
label_1598f4:
    // 0x1598f4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1598F4u;
    {
        const bool branch_taken_0x1598f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598F4u;
        // 0x1598f8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598f4) {
            ctx->pc = 0x159B24u;
            goto label_159b24;
        }
    }
    ctx->pc = 0x1598FCu;
label_1598fc:
    // 0x1598fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1598fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159900: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x159900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x159904: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x159904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x159908: 0x68440017  ldl         $a0, 0x17($v0)
    ctx->pc = 0x159908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x15990c: 0x6c440010  ldr         $a0, 0x10($v0)
    ctx->pc = 0x15990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x159910: 0x6845001f  ldl         $a1, 0x1F($v0)
    ctx->pc = 0x159910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x159914: 0x6c450018  ldr         $a1, 0x18($v0)
    ctx->pc = 0x159914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x159918: 0x68460027  ldl         $a2, 0x27($v0)
    ctx->pc = 0x159918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15991c: 0x6c460020  ldr         $a2, 0x20($v0)
    ctx->pc = 0x15991cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x159920: 0xb22300e7  sdl         $v1, 0xE7($s1)
    ctx->pc = 0x159920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159924: 0xb62300e0  sdr         $v1, 0xE0($s1)
    ctx->pc = 0x159924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159928: 0xb22400ef  sdl         $a0, 0xEF($s1)
    ctx->pc = 0x159928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15992c: 0xb62400e8  sdr         $a0, 0xE8($s1)
    ctx->pc = 0x15992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159930: 0xb22500f7  sdl         $a1, 0xF7($s1)
    ctx->pc = 0x159930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159934: 0xb62500f0  sdr         $a1, 0xF0($s1)
    ctx->pc = 0x159934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159938: 0xb22600ff  sdl         $a2, 0xFF($s1)
    ctx->pc = 0x159938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15993c: 0xb62600f8  sdr         $a2, 0xF8($s1)
    ctx->pc = 0x15993cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159940: 0x6843002f  ldl         $v1, 0x2F($v0)
    ctx->pc = 0x159940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x159944: 0x6c430028  ldr         $v1, 0x28($v0)
    ctx->pc = 0x159944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x159948: 0x68440037  ldl         $a0, 0x37($v0)
    ctx->pc = 0x159948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x15994c: 0x6c440030  ldr         $a0, 0x30($v0)
    ctx->pc = 0x15994cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x159950: 0x6845003f  ldl         $a1, 0x3F($v0)
    ctx->pc = 0x159950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x159954: 0x6c450038  ldr         $a1, 0x38($v0)
    ctx->pc = 0x159954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x159958: 0x68460047  ldl         $a2, 0x47($v0)
    ctx->pc = 0x159958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15995c: 0x6c460040  ldr         $a2, 0x40($v0)
    ctx->pc = 0x15995cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x159960: 0xb2230107  sdl         $v1, 0x107($s1)
    ctx->pc = 0x159960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159964: 0xb6230100  sdr         $v1, 0x100($s1)
    ctx->pc = 0x159964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159968: 0xb224010f  sdl         $a0, 0x10F($s1)
    ctx->pc = 0x159968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15996c: 0xb6240108  sdr         $a0, 0x108($s1)
    ctx->pc = 0x15996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159970: 0xb2250117  sdl         $a1, 0x117($s1)
    ctx->pc = 0x159970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159974: 0xb6250110  sdr         $a1, 0x110($s1)
    ctx->pc = 0x159974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159978: 0xb226011f  sdl         $a2, 0x11F($s1)
    ctx->pc = 0x159978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15997c: 0xb6260118  sdr         $a2, 0x118($s1)
    ctx->pc = 0x15997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159980: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x159980u;
    {
        const bool branch_taken_0x159980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159980u;
        // 0x159984: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159980) {
            ctx->pc = 0x159B24u;
            goto label_159b24;
        }
    }
    ctx->pc = 0x159988u;
label_159988:
    // 0x159988: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15998c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159990: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x159990u;
    {
        const bool branch_taken_0x159990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159990u;
        // 0x159994: 0xe620029c  swc1        $f0, 0x29C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159990) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159998u;
label_159998:
    // 0x159998: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15999c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1599a0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1599A0u;
    {
        const bool branch_taken_0x1599a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599A0u;
        // 0x1599a4: 0xe62002c0  swc1        $f0, 0x2C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599a0) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x1599A8u;
label_1599a8:
    // 0x1599a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1599a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1599ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1599acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1599b0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1599B0u;
    {
        const bool branch_taken_0x1599b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599B0u;
        // 0x1599b4: 0xe62002b8  swc1        $f0, 0x2B8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599b0) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x1599B8u;
label_1599b8:
    // 0x1599b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1599b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1599bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1599bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1599c0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1599C0u;
    {
        const bool branch_taken_0x1599c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599C0u;
        // 0x1599c4: 0xe62002b0  swc1        $f0, 0x2B0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599c0) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x1599C8u;
label_1599c8:
    // 0x1599c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1599c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1599cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1599ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1599d0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1599D0u;
    {
        const bool branch_taken_0x1599d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599D0u;
        // 0x1599d4: 0xe62002b4  swc1        $f0, 0x2B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 692), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599d0) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x1599D8u;
label_1599d8:
    // 0x1599d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1599d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1599dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1599dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1599e0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1599E0u;
    {
        const bool branch_taken_0x1599e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599E0u;
        // 0x1599e4: 0xe62002c8  swc1        $f0, 0x2C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599e0) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x1599E8u;
label_1599e8:
    // 0x1599e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1599e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1599ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1599ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1599f0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1599F0u;
    {
        const bool branch_taken_0x1599f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599F0u;
        // 0x1599f4: 0xe62002cc  swc1        $f0, 0x2CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599f0) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x1599F8u;
label_1599f8:
    // 0x1599f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1599f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1599fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1599fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a00: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x159A00u;
    {
        const bool branch_taken_0x159a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A00u;
        // 0x159a04: 0xe62002bc  swc1        $f0, 0x2BC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a00) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A08u;
label_159a08:
    // 0x159a08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a14: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x159A14u;
    SET_GPR_U32(ctx, 31, 0x159A1Cu);
    ctx->pc = 0x159A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A14u;
    // 0x159a18: 0xe6200368  swc1        $f0, 0x368($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 872), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15A878u, 0x159A14u, 0x159A1Cu)) {
        return;
    }
    ctx->pc = 0x159A1Cu;
label_159a1c:
    // 0x159a1c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x159A1Cu;
    {
        const bool branch_taken_0x159a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A1Cu;
        // 0x159a20: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a1c) {
            ctx->pc = 0x159B24u;
            goto label_159b24;
        }
    }
    ctx->pc = 0x159A24u;
label_159a24:
    // 0x159a24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a2c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x159A2Cu;
    {
        const bool branch_taken_0x159a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A2Cu;
        // 0x159a30: 0xe620036c  swc1        $f0, 0x36C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a2c) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A34u;
label_159a34:
    // 0x159a34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a3c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x159A3Cu;
    {
        const bool branch_taken_0x159a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A3Cu;
        // 0x159a40: 0xe6200370  swc1        $f0, 0x370($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a3c) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A44u;
label_159a44:
    // 0x159a44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a4c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x159A4Cu;
    {
        const bool branch_taken_0x159a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A4Cu;
        // 0x159a50: 0xe6200374  swc1        $f0, 0x374($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a4c) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A54u;
label_159a54:
    // 0x159a54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a5c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x159A5Cu;
    {
        const bool branch_taken_0x159a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A5Cu;
        // 0x159a60: 0xe6200378  swc1        $f0, 0x378($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a5c) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A64u;
label_159a64:
    // 0x159a64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a6c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x159A6Cu;
    {
        const bool branch_taken_0x159a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A6Cu;
        // 0x159a70: 0xe620037c  swc1        $f0, 0x37C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a6c) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A74u;
label_159a74:
    // 0x159a74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a7c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x159A7Cu;
    {
        const bool branch_taken_0x159a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A7Cu;
        // 0x159a80: 0xe6200380  swc1        $f0, 0x380($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 896), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a7c) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A84u;
label_159a84:
    // 0x159a84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a8c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x159A8Cu;
    {
        const bool branch_taken_0x159a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A8Cu;
        // 0x159a90: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a8c) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159A94u;
label_159a94:
    // 0x159a94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a9c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x159A9Cu;
    {
        const bool branch_taken_0x159a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A9Cu;
        // 0x159aa0: 0xe6200388  swc1        $f0, 0x388($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a9c) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159AA4u;
label_159aa4:
    // 0x159aa4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159aa8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159aac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x159AACu;
    {
        const bool branch_taken_0x159aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AACu;
        // 0x159ab0: 0xe620038c  swc1        $f0, 0x38C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 908), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159aac) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159AB4u;
label_159ab4:
    // 0x159ab4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159ab8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159abc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x159ABCu;
    {
        const bool branch_taken_0x159abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159ABCu;
        // 0x159ac0: 0xe6200390  swc1        $f0, 0x390($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159abc) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159AC4u;
label_159ac4:
    // 0x159ac4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159ac8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x159ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x159acc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159ACCu;
    {
        const bool branch_taken_0x159acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159ACCu;
        // 0x159ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159acc) {
            ctx->pc = 0x159ADCu;
            goto label_159adc;
        }
    }
    ctx->pc = 0x159AD4u;
    // 0x159ad4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x159AD4u;
    {
        const bool branch_taken_0x159ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AD4u;
        // 0x159ad8: 0xae220394  sw          $v0, 0x394($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ad4) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159ADCu;
label_159adc:
    // 0x159adc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x159ADCu;
    {
        const bool branch_taken_0x159adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159ADCu;
        // 0x159ae0: 0xae200394  sw          $zero, 0x394($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 916), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159adc) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159AE4u;
label_159ae4:
    // 0x159ae4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159ae8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x159ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x159aec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159AECu;
    {
        const bool branch_taken_0x159aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AECu;
        // 0x159af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159aec) {
            ctx->pc = 0x159AFCu;
            goto label_159afc;
        }
    }
    ctx->pc = 0x159AF4u;
    // 0x159af4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x159AF4u;
    {
        const bool branch_taken_0x159af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AF4u;
        // 0x159af8: 0xae220398  sw          $v0, 0x398($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159af4) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159AFCu;
label_159afc:
    // 0x159afc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x159AFCu;
    {
        const bool branch_taken_0x159afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AFCu;
        // 0x159b00: 0xae200398  sw          $zero, 0x398($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159afc) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159B04u;
label_159b04:
    // 0x159b04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159b08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x159b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x159b0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159B0Cu;
    {
        const bool branch_taken_0x159b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B0Cu;
        // 0x159b10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b0c) {
            ctx->pc = 0x159B1Cu;
            goto label_159b1c;
        }
    }
    ctx->pc = 0x159B14u;
    // 0x159b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159B14u;
    {
        const bool branch_taken_0x159b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B14u;
        // 0x159b18: 0xae22039c  sw          $v0, 0x39C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b14) {
            ctx->pc = 0x159B20u;
            goto label_159b20;
        }
    }
    ctx->pc = 0x159B1Cu;
label_159b1c:
    // 0x159b1c: 0xae20039c  sw          $zero, 0x39C($s1)
    ctx->pc = 0x159b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 0));
label_159b20:
    // 0x159b20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x159b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_159b24:
    // 0x159b24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x159b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159b2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x159b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159b30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x159b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x159b34: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x159B34u;
    SET_GPR_U32(ctx, 31, 0x159B3Cu);
    ctx->pc = 0x159B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B34u;
    // 0x159b38: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x159B34u, 0x159B3Cu)) {
        return;
    }
    ctx->pc = 0x159B3Cu;
label_159b3c:
    // 0x159b3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159b40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x159b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159b44: 0x5460ff56  bnel        $v1, $zero, . + 4 + (-0xAA << 2)
    ctx->pc = 0x159B44u;
    {
        const bool branch_taken_0x159b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x159b44) {
            ctx->pc = 0x159B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159B44u;
            // 0x159b48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1598A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1598a0;
        }
    }
    ctx->pc = 0x159B4Cu;
    // 0x159b4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x159b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_159b50:
    // 0x159b50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159b58: 0x3e00008  jr          $ra
    ctx->pc = 0x159B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B58u;
        // 0x159b5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159B60u;
}
