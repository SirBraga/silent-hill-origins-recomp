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

// Function: sub_003025F8
// Address: 0x3025f8 - 0x3027c8
void sub_003025F8_0x3025f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003025F8_0x3025f8");
#endif

    switch (ctx->pc) {
        case 0x3025f8u: goto label_3025f8;
        case 0x3025fcu: goto label_3025fc;
        case 0x302600u: goto label_302600;
        case 0x302604u: goto label_302604;
        case 0x302608u: goto label_302608;
        case 0x30260cu: goto label_30260c;
        case 0x302610u: goto label_302610;
        case 0x302614u: goto label_302614;
        case 0x302618u: goto label_302618;
        case 0x30261cu: goto label_30261c;
        case 0x302620u: goto label_302620;
        case 0x302624u: goto label_302624;
        case 0x302628u: goto label_302628;
        case 0x30262cu: goto label_30262c;
        case 0x302630u: goto label_302630;
        case 0x302634u: goto label_302634;
        case 0x302638u: goto label_302638;
        case 0x30263cu: goto label_30263c;
        case 0x302640u: goto label_302640;
        case 0x302644u: goto label_302644;
        case 0x302648u: goto label_302648;
        case 0x30264cu: goto label_30264c;
        case 0x302650u: goto label_302650;
        case 0x302654u: goto label_302654;
        case 0x302658u: goto label_302658;
        case 0x30265cu: goto label_30265c;
        case 0x302660u: goto label_302660;
        case 0x302664u: goto label_302664;
        case 0x302668u: goto label_302668;
        case 0x30266cu: goto label_30266c;
        case 0x302670u: goto label_302670;
        case 0x302674u: goto label_302674;
        case 0x302678u: goto label_302678;
        case 0x30267cu: goto label_30267c;
        case 0x302680u: goto label_302680;
        case 0x302684u: goto label_302684;
        case 0x302688u: goto label_302688;
        case 0x30268cu: goto label_30268c;
        case 0x302690u: goto label_302690;
        case 0x302694u: goto label_302694;
        case 0x302698u: goto label_302698;
        case 0x30269cu: goto label_30269c;
        case 0x3026a0u: goto label_3026a0;
        case 0x3026a4u: goto label_3026a4;
        case 0x3026a8u: goto label_3026a8;
        case 0x3026acu: goto label_3026ac;
        case 0x3026b0u: goto label_3026b0;
        case 0x3026b4u: goto label_3026b4;
        case 0x3026b8u: goto label_3026b8;
        case 0x3026bcu: goto label_3026bc;
        case 0x3026c0u: goto label_3026c0;
        case 0x3026c4u: goto label_3026c4;
        case 0x3026c8u: goto label_3026c8;
        case 0x3026ccu: goto label_3026cc;
        case 0x3026d0u: goto label_3026d0;
        case 0x3026d4u: goto label_3026d4;
        case 0x3026d8u: goto label_3026d8;
        case 0x3026dcu: goto label_3026dc;
        case 0x3026e0u: goto label_3026e0;
        case 0x3026e4u: goto label_3026e4;
        case 0x3026e8u: goto label_3026e8;
        case 0x3026ecu: goto label_3026ec;
        case 0x3026f0u: goto label_3026f0;
        case 0x3026f4u: goto label_3026f4;
        case 0x3026f8u: goto label_3026f8;
        case 0x3026fcu: goto label_3026fc;
        case 0x302700u: goto label_302700;
        case 0x302704u: goto label_302704;
        case 0x302708u: goto label_302708;
        case 0x30270cu: goto label_30270c;
        case 0x302710u: goto label_302710;
        case 0x302714u: goto label_302714;
        case 0x302718u: goto label_302718;
        case 0x30271cu: goto label_30271c;
        case 0x302720u: goto label_302720;
        case 0x302724u: goto label_302724;
        case 0x302728u: goto label_302728;
        case 0x30272cu: goto label_30272c;
        case 0x302730u: goto label_302730;
        case 0x302734u: goto label_302734;
        case 0x302738u: goto label_302738;
        case 0x30273cu: goto label_30273c;
        case 0x302740u: goto label_302740;
        case 0x302744u: goto label_302744;
        case 0x302748u: goto label_302748;
        case 0x30274cu: goto label_30274c;
        case 0x302750u: goto label_302750;
        case 0x302754u: goto label_302754;
        case 0x302758u: goto label_302758;
        case 0x30275cu: goto label_30275c;
        case 0x302760u: goto label_302760;
        case 0x302764u: goto label_302764;
        case 0x302768u: goto label_302768;
        case 0x30276cu: goto label_30276c;
        case 0x302770u: goto label_302770;
        case 0x302774u: goto label_302774;
        case 0x302778u: goto label_302778;
        case 0x30277cu: goto label_30277c;
        case 0x302780u: goto label_302780;
        case 0x302784u: goto label_302784;
        case 0x302788u: goto label_302788;
        case 0x30278cu: goto label_30278c;
        case 0x302790u: goto label_302790;
        case 0x302794u: goto label_302794;
        case 0x302798u: goto label_302798;
        case 0x30279cu: goto label_30279c;
        case 0x3027a0u: goto label_3027a0;
        case 0x3027a4u: goto label_3027a4;
        case 0x3027a8u: goto label_3027a8;
        case 0x3027acu: goto label_3027ac;
        case 0x3027b0u: goto label_3027b0;
        case 0x3027b4u: goto label_3027b4;
        case 0x3027b8u: goto label_3027b8;
        case 0x3027bcu: goto label_3027bc;
        case 0x3027c0u: goto label_3027c0;
        case 0x3027c4u: goto label_3027c4;
        default: break;
    }

    ctx->pc = 0x3025f8u;

label_3025f8:
    // 0x3025f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3025f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3025fc:
    // 0x3025fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3025fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_302600:
    // 0x302600: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x302600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_302604:
    // 0x302604: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x302604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_302608:
    // 0x302608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30260c:
    // 0x30260c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x30260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_302610:
    // 0x302610: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x302610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_302614:
    // 0x302614: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x302614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_302618:
    // 0x302618: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x302618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_30261c:
    // 0x30261c: 0x24470ad8  addiu       $a3, $v0, 0xAD8
    ctx->pc = 0x30261cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
label_302620:
    // 0x302620: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x302620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_302624:
    // 0x302624: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x302624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_302628:
    // 0x302628: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x302628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_30262c:
    // 0x30262c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x30262cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_302630:
    // 0x302630: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x302630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_302634:
    // 0x302634: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x302634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_302638:
    // 0x302638: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x302638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30263c:
    // 0x30263c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x30263cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_302640:
    // 0x302640: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x302640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_302644:
    // 0x302644: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x302644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_302648:
    // 0x302648: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x302648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30264c:
    // 0x30264c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x30264cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_302650:
    // 0x302650: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x302650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_302654:
    // 0x302654: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x302654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_302658:
    // 0x302658: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x302658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_30265c:
    // 0x30265c: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x30265cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_302660:
    // 0x302660: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x302660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_302664:
    // 0x302664: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x302664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_302668:
    // 0x302668: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x302668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_30266c:
    // 0x30266c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x30266cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_302670:
    // 0x302670: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x302670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_302674:
    // 0x302674: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x302674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_302678:
    // 0x302678: 0xc0c0a5a  jal         func_302968
label_30267c:
    if (ctx->pc == 0x30267Cu) {
        ctx->pc = 0x30267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302678u;
        // 0x30267c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302680u;
        goto label_302680;
    }
    ctx->pc = 0x302678u;
    SET_GPR_U32(ctx, 31, 0x302680u);
    ctx->pc = 0x30267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302678u;
    // 0x30267c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302968u, 0x302678u, 0x302680u)) {
        return;
    }
    ctx->pc = 0x302680u;
label_302680:
    // 0x302680: 0x10000004  b           . + 4 + (0x4 << 2)
label_302684:
    if (ctx->pc == 0x302684u) {
        ctx->pc = 0x302684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302680u;
        // 0x302684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302688u;
        goto label_302688;
    }
    ctx->pc = 0x302680u;
    {
        const bool branch_taken_0x302680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302680u;
        // 0x302684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302680) {
            ctx->pc = 0x302694u;
            goto label_302694;
        }
    }
    ctx->pc = 0x302688u;
label_302688:
    // 0x302688: 0xc0c0a00  jal         func_302800
label_30268c:
    if (ctx->pc == 0x30268Cu) {
        ctx->pc = 0x302690u;
        goto label_302690;
    }
    ctx->pc = 0x302688u;
    SET_GPR_U32(ctx, 31, 0x302690u);
    ctx->pc = 0x302800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302800u, 0x302688u, 0x302690u)) {
        return;
    }
    ctx->pc = 0x302690u;
label_302690:
    // 0x302690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302694:
    // 0x302694: 0xc0c015c  jal         func_300570
label_302698:
    if (ctx->pc == 0x302698u) {
        ctx->pc = 0x302698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302694u;
        // 0x302698: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30269Cu;
        goto label_30269c;
    }
    ctx->pc = 0x302694u;
    SET_GPR_U32(ctx, 31, 0x30269Cu);
    ctx->pc = 0x302698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302694u;
    // 0x302698: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x302694u, 0x30269Cu)) {
        return;
    }
    ctx->pc = 0x30269Cu;
label_30269c:
    // 0x30269c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30269cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3026a0:
    // 0x3026a0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_3026a4:
    if (ctx->pc == 0x3026A4u) {
        ctx->pc = 0x3026A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026A0u;
        // 0x3026a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026A8u;
        goto label_3026a8;
    }
    ctx->pc = 0x3026A0u;
    {
        const bool branch_taken_0x3026a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3026A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026A0u;
        // 0x3026a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026a0) {
            ctx->pc = 0x3026B4u;
            goto label_3026b4;
        }
    }
    ctx->pc = 0x3026A8u;
label_3026a8:
    // 0x3026a8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x3026a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_3026ac:
    // 0x3026ac: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_3026b0:
    if (ctx->pc == 0x3026B0u) {
        ctx->pc = 0x3026B4u;
        goto label_3026b4;
    }
    ctx->pc = 0x3026ACu;
    {
        const bool branch_taken_0x3026ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3026ac) {
            ctx->pc = 0x302688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302688;
        }
    }
    ctx->pc = 0x3026B4u;
label_3026b4:
    // 0x3026b4: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x3026b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_3026b8:
    // 0x3026b8: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x3026b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_3026bc:
    // 0x3026bc: 0x10000033  b           . + 4 + (0x33 << 2)
label_3026c0:
    if (ctx->pc == 0x3026C0u) {
        ctx->pc = 0x3026C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026BCu;
        // 0x3026c0: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026C4u;
        goto label_3026c4;
    }
    ctx->pc = 0x3026BCu;
    {
        const bool branch_taken_0x3026bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3026C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026BCu;
        // 0x3026c0: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026bc) {
            ctx->pc = 0x30278Cu;
            goto label_30278c;
        }
    }
    ctx->pc = 0x3026C4u;
label_3026c4:
    // 0x3026c4: 0x0  nop
    ctx->pc = 0x3026c4u;
    // NOP
label_3026c8:
    // 0x3026c8: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
label_3026cc:
    if (ctx->pc == 0x3026CCu) {
        ctx->pc = 0x3026CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026C8u;
        // 0x3026cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026D0u;
        goto label_3026d0;
    }
    ctx->pc = 0x3026C8u;
    {
        const bool branch_taken_0x3026c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3026CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026C8u;
        // 0x3026cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026c8) {
            ctx->pc = 0x302744u;
            goto label_302744;
        }
    }
    ctx->pc = 0x3026D0u;
label_3026d0:
    // 0x3026d0: 0xc0c0a58  jal         func_302960
label_3026d4:
    if (ctx->pc == 0x3026D4u) {
        ctx->pc = 0x3026D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026D0u;
        // 0x3026d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026D8u;
        goto label_3026d8;
    }
    ctx->pc = 0x3026D0u;
    SET_GPR_U32(ctx, 31, 0x3026D8u);
    ctx->pc = 0x3026D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3026D0u;
    // 0x3026d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302960u, 0x3026D0u, 0x3026D8u)) {
        return;
    }
    ctx->pc = 0x3026D8u;
label_3026d8:
    // 0x3026d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3026d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3026dc:
    // 0x3026dc: 0xc0c0122  jal         func_300488
label_3026e0:
    if (ctx->pc == 0x3026E0u) {
        ctx->pc = 0x3026E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026DCu;
        // 0x3026e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026E4u;
        goto label_3026e4;
    }
    ctx->pc = 0x3026DCu;
    SET_GPR_U32(ctx, 31, 0x3026E4u);
    ctx->pc = 0x3026E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3026DCu;
    // 0x3026e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3026DCu, 0x3026E4u)) {
        return;
    }
    ctx->pc = 0x3026E4u;
label_3026e4:
    // 0x3026e4: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x3026e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3026e8:
    // 0x3026e8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x3026e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_3026ec:
    // 0x3026ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3026ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3026f0:
    // 0x3026f0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3026f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3026f4:
    // 0x3026f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3026f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3026f8:
    // 0x3026f8: 0x40f809  jalr        $v0
label_3026fc:
    if (ctx->pc == 0x3026FCu) {
        ctx->pc = 0x3026FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026F8u;
        // 0x3026fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302700u;
        goto label_302700;
    }
    ctx->pc = 0x3026F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302700u);
        ctx->pc = 0x3026FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026F8u;
        // 0x3026fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3026F8u, 0x302700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302700u;
label_302700:
    // 0x302700: 0xc0c0a5a  jal         func_302968
label_302704:
    if (ctx->pc == 0x302704u) {
        ctx->pc = 0x302704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302700u;
        // 0x302704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302708u;
        goto label_302708;
    }
    ctx->pc = 0x302700u;
    SET_GPR_U32(ctx, 31, 0x302708u);
    ctx->pc = 0x302704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302700u;
    // 0x302704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302968u, 0x302700u, 0x302708u)) {
        return;
    }
    ctx->pc = 0x302708u;
label_302708:
    // 0x302708: 0x10000004  b           . + 4 + (0x4 << 2)
label_30270c:
    if (ctx->pc == 0x30270Cu) {
        ctx->pc = 0x30270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302708u;
        // 0x30270c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302710u;
        goto label_302710;
    }
    ctx->pc = 0x302708u;
    {
        const bool branch_taken_0x302708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302708u;
        // 0x30270c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302708) {
            ctx->pc = 0x30271Cu;
            goto label_30271c;
        }
    }
    ctx->pc = 0x302710u;
label_302710:
    // 0x302710: 0xc0c0a00  jal         func_302800
label_302714:
    if (ctx->pc == 0x302714u) {
        ctx->pc = 0x302718u;
        goto label_302718;
    }
    ctx->pc = 0x302710u;
    SET_GPR_U32(ctx, 31, 0x302718u);
    ctx->pc = 0x302800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302800u, 0x302710u, 0x302718u)) {
        return;
    }
    ctx->pc = 0x302718u;
label_302718:
    // 0x302718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30271c:
    // 0x30271c: 0xc0c015c  jal         func_300570
label_302720:
    if (ctx->pc == 0x302720u) {
        ctx->pc = 0x302720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30271Cu;
        // 0x302720: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302724u;
        goto label_302724;
    }
    ctx->pc = 0x30271Cu;
    SET_GPR_U32(ctx, 31, 0x302724u);
    ctx->pc = 0x302720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30271Cu;
    // 0x302720: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x30271Cu, 0x302724u)) {
        return;
    }
    ctx->pc = 0x302724u;
label_302724:
    // 0x302724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302728:
    // 0x302728: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
label_30272c:
    if (ctx->pc == 0x30272Cu) {
        ctx->pc = 0x30272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302728u;
        // 0x30272c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302730u;
        goto label_302730;
    }
    ctx->pc = 0x302728u;
    {
        const bool branch_taken_0x302728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302728u;
        // 0x30272c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302728) {
            ctx->pc = 0x302790u;
            goto label_302790;
        }
    }
    ctx->pc = 0x302730u;
label_302730:
    // 0x302730: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x302730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_302734:
    // 0x302734: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_302738:
    if (ctx->pc == 0x302738u) {
        ctx->pc = 0x30273Cu;
        goto label_30273c;
    }
    ctx->pc = 0x302734u;
    {
        const bool branch_taken_0x302734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302734) {
            ctx->pc = 0x302710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302710;
        }
    }
    ctx->pc = 0x30273Cu;
label_30273c:
    // 0x30273c: 0x10000013  b           . + 4 + (0x13 << 2)
label_302740:
    if (ctx->pc == 0x302740u) {
        ctx->pc = 0x302744u;
        goto label_302744;
    }
    ctx->pc = 0x30273Cu;
    {
        const bool branch_taken_0x30273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30273c) {
            ctx->pc = 0x30278Cu;
            goto label_30278c;
        }
    }
    ctx->pc = 0x302744u;
label_302744:
    // 0x302744: 0xc0c0a58  jal         func_302960
label_302748:
    if (ctx->pc == 0x302748u) {
        ctx->pc = 0x302748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302744u;
        // 0x302748: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30274Cu;
        goto label_30274c;
    }
    ctx->pc = 0x302744u;
    SET_GPR_U32(ctx, 31, 0x30274Cu);
    ctx->pc = 0x302748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302744u;
    // 0x302748: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302960u, 0x302744u, 0x30274Cu)) {
        return;
    }
    ctx->pc = 0x30274Cu;
label_30274c:
    // 0x30274c: 0xc0c0a5a  jal         func_302968
label_302750:
    if (ctx->pc == 0x302750u) {
        ctx->pc = 0x302750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30274Cu;
        // 0x302750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302754u;
        goto label_302754;
    }
    ctx->pc = 0x30274Cu;
    SET_GPR_U32(ctx, 31, 0x302754u);
    ctx->pc = 0x302750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30274Cu;
    // 0x302750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302968u, 0x30274Cu, 0x302754u)) {
        return;
    }
    ctx->pc = 0x302754u;
label_302754:
    // 0x302754: 0x10000005  b           . + 4 + (0x5 << 2)
label_302758:
    if (ctx->pc == 0x302758u) {
        ctx->pc = 0x302758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302754u;
        // 0x302758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30275Cu;
        goto label_30275c;
    }
    ctx->pc = 0x302754u;
    {
        const bool branch_taken_0x302754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302754u;
        // 0x302758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302754) {
            ctx->pc = 0x30276Cu;
            goto label_30276c;
        }
    }
    ctx->pc = 0x30275Cu;
label_30275c:
    // 0x30275c: 0x0  nop
    ctx->pc = 0x30275cu;
    // NOP
label_302760:
    // 0x302760: 0xc0c0a00  jal         func_302800
label_302764:
    if (ctx->pc == 0x302764u) {
        ctx->pc = 0x302768u;
        goto label_302768;
    }
    ctx->pc = 0x302760u;
    SET_GPR_U32(ctx, 31, 0x302768u);
    ctx->pc = 0x302800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302800u, 0x302760u, 0x302768u)) {
        return;
    }
    ctx->pc = 0x302768u;
label_302768:
    // 0x302768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30276c:
    // 0x30276c: 0xc0c015c  jal         func_300570
label_302770:
    if (ctx->pc == 0x302770u) {
        ctx->pc = 0x302770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30276Cu;
        // 0x302770: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302774u;
        goto label_302774;
    }
    ctx->pc = 0x30276Cu;
    SET_GPR_U32(ctx, 31, 0x302774u);
    ctx->pc = 0x302770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30276Cu;
    // 0x302770: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x30276Cu, 0x302774u)) {
        return;
    }
    ctx->pc = 0x302774u;
label_302774:
    // 0x302774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302778:
    // 0x302778: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_30277c:
    if (ctx->pc == 0x30277Cu) {
        ctx->pc = 0x30277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302778u;
        // 0x30277c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302780u;
        goto label_302780;
    }
    ctx->pc = 0x302778u;
    {
        const bool branch_taken_0x302778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302778u;
        // 0x30277c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302778) {
            ctx->pc = 0x302790u;
            goto label_302790;
        }
    }
    ctx->pc = 0x302780u;
label_302780:
    // 0x302780: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x302780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_302784:
    // 0x302784: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_302788:
    if (ctx->pc == 0x302788u) {
        ctx->pc = 0x30278Cu;
        goto label_30278c;
    }
    ctx->pc = 0x302784u;
    {
        const bool branch_taken_0x302784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302784) {
            ctx->pc = 0x302760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302760;
        }
    }
    ctx->pc = 0x30278Cu;
label_30278c:
    // 0x30278c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30278cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302790:
    // 0x302790: 0xc0c015c  jal         func_300570
label_302794:
    if (ctx->pc == 0x302794u) {
        ctx->pc = 0x302794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302790u;
        // 0x302794: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302798u;
        goto label_302798;
    }
    ctx->pc = 0x302790u;
    SET_GPR_U32(ctx, 31, 0x302798u);
    ctx->pc = 0x302794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302790u;
    // 0x302794: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x302790u, 0x302798u)) {
        return;
    }
    ctx->pc = 0x302798u;
label_302798:
    // 0x302798: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
label_30279c:
    if (ctx->pc == 0x30279Cu) {
        ctx->pc = 0x30279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302798u;
        // 0x30279c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027A0u;
        goto label_3027a0;
    }
    ctx->pc = 0x302798u;
    {
        const bool branch_taken_0x302798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x30279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302798u;
        // 0x30279c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302798) {
            ctx->pc = 0x3026D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3026d0;
        }
    }
    ctx->pc = 0x3027A0u;
label_3027a0:
    // 0x3027a0: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
label_3027a4:
    if (ctx->pc == 0x3027A4u) {
        ctx->pc = 0x3027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027A0u;
        // 0x3027a4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027A8u;
        goto label_3027a8;
    }
    ctx->pc = 0x3027A0u;
    {
        const bool branch_taken_0x3027a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027A0u;
        // 0x3027a4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027a0) {
            ctx->pc = 0x3026C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3026c8;
        }
    }
    ctx->pc = 0x3027A8u;
label_3027a8:
    // 0x3027a8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x3027a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3027ac:
    // 0x3027ac: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x3027acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3027b0:
    // 0x3027b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3027b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3027b4:
    // 0x3027b4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3027b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3027b8:
    // 0x3027b8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3027b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3027bc:
    // 0x3027bc: 0x3e00008  jr          $ra
label_3027c0:
    if (ctx->pc == 0x3027C0u) {
        ctx->pc = 0x3027C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027BCu;
        // 0x3027c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027C4u;
        goto label_3027c4;
    }
    ctx->pc = 0x3027BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3027C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027BCu;
        // 0x3027c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3027BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3027C4u;
label_3027c4:
    // 0x3027c4: 0x0  nop
    ctx->pc = 0x3027c4u;
    // NOP
    ctx->pc = 0x3027c8u;
}
