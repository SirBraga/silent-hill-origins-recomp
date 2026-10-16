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

// Function: sub_00303698
// Address: 0x303698 - 0x3039a8
void sub_00303698_0x303698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303698_0x303698");
#endif

    switch (ctx->pc) {
        case 0x303698u: goto label_303698;
        case 0x30369cu: goto label_30369c;
        case 0x3036a0u: goto label_3036a0;
        case 0x3036a4u: goto label_3036a4;
        case 0x3036a8u: goto label_3036a8;
        case 0x3036acu: goto label_3036ac;
        case 0x3036b0u: goto label_3036b0;
        case 0x3036b4u: goto label_3036b4;
        case 0x3036b8u: goto label_3036b8;
        case 0x3036bcu: goto label_3036bc;
        case 0x3036c0u: goto label_3036c0;
        case 0x3036c4u: goto label_3036c4;
        case 0x3036c8u: goto label_3036c8;
        case 0x3036ccu: goto label_3036cc;
        case 0x3036d0u: goto label_3036d0;
        case 0x3036d4u: goto label_3036d4;
        case 0x3036d8u: goto label_3036d8;
        case 0x3036dcu: goto label_3036dc;
        case 0x3036e0u: goto label_3036e0;
        case 0x3036e4u: goto label_3036e4;
        case 0x3036e8u: goto label_3036e8;
        case 0x3036ecu: goto label_3036ec;
        case 0x3036f0u: goto label_3036f0;
        case 0x3036f4u: goto label_3036f4;
        case 0x3036f8u: goto label_3036f8;
        case 0x3036fcu: goto label_3036fc;
        case 0x303700u: goto label_303700;
        case 0x303704u: goto label_303704;
        case 0x303708u: goto label_303708;
        case 0x30370cu: goto label_30370c;
        case 0x303710u: goto label_303710;
        case 0x303714u: goto label_303714;
        case 0x303718u: goto label_303718;
        case 0x30371cu: goto label_30371c;
        case 0x303720u: goto label_303720;
        case 0x303724u: goto label_303724;
        case 0x303728u: goto label_303728;
        case 0x30372cu: goto label_30372c;
        case 0x303730u: goto label_303730;
        case 0x303734u: goto label_303734;
        case 0x303738u: goto label_303738;
        case 0x30373cu: goto label_30373c;
        case 0x303740u: goto label_303740;
        case 0x303744u: goto label_303744;
        case 0x303748u: goto label_303748;
        case 0x30374cu: goto label_30374c;
        case 0x303750u: goto label_303750;
        case 0x303754u: goto label_303754;
        case 0x303758u: goto label_303758;
        case 0x30375cu: goto label_30375c;
        case 0x303760u: goto label_303760;
        case 0x303764u: goto label_303764;
        case 0x303768u: goto label_303768;
        case 0x30376cu: goto label_30376c;
        case 0x303770u: goto label_303770;
        case 0x303774u: goto label_303774;
        case 0x303778u: goto label_303778;
        case 0x30377cu: goto label_30377c;
        case 0x303780u: goto label_303780;
        case 0x303784u: goto label_303784;
        case 0x303788u: goto label_303788;
        case 0x30378cu: goto label_30378c;
        case 0x303790u: goto label_303790;
        case 0x303794u: goto label_303794;
        case 0x303798u: goto label_303798;
        case 0x30379cu: goto label_30379c;
        case 0x3037a0u: goto label_3037a0;
        case 0x3037a4u: goto label_3037a4;
        case 0x3037a8u: goto label_3037a8;
        case 0x3037acu: goto label_3037ac;
        case 0x3037b0u: goto label_3037b0;
        case 0x3037b4u: goto label_3037b4;
        case 0x3037b8u: goto label_3037b8;
        case 0x3037bcu: goto label_3037bc;
        case 0x3037c0u: goto label_3037c0;
        case 0x3037c4u: goto label_3037c4;
        case 0x3037c8u: goto label_3037c8;
        case 0x3037ccu: goto label_3037cc;
        case 0x3037d0u: goto label_3037d0;
        case 0x3037d4u: goto label_3037d4;
        case 0x3037d8u: goto label_3037d8;
        case 0x3037dcu: goto label_3037dc;
        case 0x3037e0u: goto label_3037e0;
        case 0x3037e4u: goto label_3037e4;
        case 0x3037e8u: goto label_3037e8;
        case 0x3037ecu: goto label_3037ec;
        case 0x3037f0u: goto label_3037f0;
        case 0x3037f4u: goto label_3037f4;
        case 0x3037f8u: goto label_3037f8;
        case 0x3037fcu: goto label_3037fc;
        case 0x303800u: goto label_303800;
        case 0x303804u: goto label_303804;
        case 0x303808u: goto label_303808;
        case 0x30380cu: goto label_30380c;
        case 0x303810u: goto label_303810;
        case 0x303814u: goto label_303814;
        case 0x303818u: goto label_303818;
        case 0x30381cu: goto label_30381c;
        case 0x303820u: goto label_303820;
        case 0x303824u: goto label_303824;
        case 0x303828u: goto label_303828;
        case 0x30382cu: goto label_30382c;
        case 0x303830u: goto label_303830;
        case 0x303834u: goto label_303834;
        case 0x303838u: goto label_303838;
        case 0x30383cu: goto label_30383c;
        case 0x303840u: goto label_303840;
        case 0x303844u: goto label_303844;
        case 0x303848u: goto label_303848;
        case 0x30384cu: goto label_30384c;
        case 0x303850u: goto label_303850;
        case 0x303854u: goto label_303854;
        case 0x303858u: goto label_303858;
        case 0x30385cu: goto label_30385c;
        case 0x303860u: goto label_303860;
        case 0x303864u: goto label_303864;
        case 0x303868u: goto label_303868;
        case 0x30386cu: goto label_30386c;
        case 0x303870u: goto label_303870;
        case 0x303874u: goto label_303874;
        case 0x303878u: goto label_303878;
        case 0x30387cu: goto label_30387c;
        case 0x303880u: goto label_303880;
        case 0x303884u: goto label_303884;
        case 0x303888u: goto label_303888;
        case 0x30388cu: goto label_30388c;
        case 0x303890u: goto label_303890;
        case 0x303894u: goto label_303894;
        case 0x303898u: goto label_303898;
        case 0x30389cu: goto label_30389c;
        case 0x3038a0u: goto label_3038a0;
        case 0x3038a4u: goto label_3038a4;
        case 0x3038a8u: goto label_3038a8;
        case 0x3038acu: goto label_3038ac;
        case 0x3038b0u: goto label_3038b0;
        case 0x3038b4u: goto label_3038b4;
        case 0x3038b8u: goto label_3038b8;
        case 0x3038bcu: goto label_3038bc;
        case 0x3038c0u: goto label_3038c0;
        case 0x3038c4u: goto label_3038c4;
        case 0x3038c8u: goto label_3038c8;
        case 0x3038ccu: goto label_3038cc;
        case 0x3038d0u: goto label_3038d0;
        case 0x3038d4u: goto label_3038d4;
        case 0x3038d8u: goto label_3038d8;
        case 0x3038dcu: goto label_3038dc;
        case 0x3038e0u: goto label_3038e0;
        case 0x3038e4u: goto label_3038e4;
        case 0x3038e8u: goto label_3038e8;
        case 0x3038ecu: goto label_3038ec;
        case 0x3038f0u: goto label_3038f0;
        case 0x3038f4u: goto label_3038f4;
        case 0x3038f8u: goto label_3038f8;
        case 0x3038fcu: goto label_3038fc;
        case 0x303900u: goto label_303900;
        case 0x303904u: goto label_303904;
        case 0x303908u: goto label_303908;
        case 0x30390cu: goto label_30390c;
        case 0x303910u: goto label_303910;
        case 0x303914u: goto label_303914;
        case 0x303918u: goto label_303918;
        case 0x30391cu: goto label_30391c;
        case 0x303920u: goto label_303920;
        case 0x303924u: goto label_303924;
        case 0x303928u: goto label_303928;
        case 0x30392cu: goto label_30392c;
        case 0x303930u: goto label_303930;
        case 0x303934u: goto label_303934;
        case 0x303938u: goto label_303938;
        case 0x30393cu: goto label_30393c;
        case 0x303940u: goto label_303940;
        case 0x303944u: goto label_303944;
        case 0x303948u: goto label_303948;
        case 0x30394cu: goto label_30394c;
        case 0x303950u: goto label_303950;
        case 0x303954u: goto label_303954;
        case 0x303958u: goto label_303958;
        case 0x30395cu: goto label_30395c;
        case 0x303960u: goto label_303960;
        case 0x303964u: goto label_303964;
        case 0x303968u: goto label_303968;
        case 0x30396cu: goto label_30396c;
        case 0x303970u: goto label_303970;
        case 0x303974u: goto label_303974;
        case 0x303978u: goto label_303978;
        case 0x30397cu: goto label_30397c;
        case 0x303980u: goto label_303980;
        case 0x303984u: goto label_303984;
        case 0x303988u: goto label_303988;
        case 0x30398cu: goto label_30398c;
        case 0x303990u: goto label_303990;
        case 0x303994u: goto label_303994;
        case 0x303998u: goto label_303998;
        case 0x30399cu: goto label_30399c;
        case 0x3039a0u: goto label_3039a0;
        case 0x3039a4u: goto label_3039a4;
        default: break;
    }

    ctx->pc = 0x303698u;

label_303698:
    // 0x303698: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x303698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_30369c:
    // 0x30369c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x30369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3036a0:
    // 0x3036a0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3036a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3036a4:
    // 0x3036a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3036a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3036a8:
    // 0x3036a8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3036a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3036ac:
    // 0x3036ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3036acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3036b0:
    // 0x3036b0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3036b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3036b4:
    // 0x3036b4: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x3036b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
label_3036b8:
    // 0x3036b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3036b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3036bc:
    // 0x3036bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3036bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3036c0:
    // 0x3036c0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3036c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3036c4:
    // 0x3036c4: 0x1253004f  beq         $s2, $s3, . + 4 + (0x4F << 2)
label_3036c8:
    if (ctx->pc == 0x3036C8u) {
        ctx->pc = 0x3036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C4u;
        // 0x3036c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036CCu;
        goto label_3036cc;
    }
    ctx->pc = 0x3036C4u;
    {
        const bool branch_taken_0x3036c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x3036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C4u;
        // 0x3036c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036c4) {
            ctx->pc = 0x303804u;
            goto label_303804;
        }
    }
    ctx->pc = 0x3036CCu;
label_3036cc:
    // 0x3036cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3036ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3036d0:
    // 0x3036d0: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x3036d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3036d4:
    // 0x3036d4: 0x6200049  bltz        $s1, . + 4 + (0x49 << 2)
label_3036d8:
    if (ctx->pc == 0x3036D8u) {
        ctx->pc = 0x3036D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036D4u;
        // 0x3036d8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036DCu;
        goto label_3036dc;
    }
    ctx->pc = 0x3036D4u;
    {
        const bool branch_taken_0x3036d4 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x3036D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036D4u;
        // 0x3036d8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036d4) {
            ctx->pc = 0x3037FCu;
            goto label_3037fc;
        }
    }
    ctx->pc = 0x3036DCu;
label_3036dc:
    // 0x3036dc: 0x26d50fc8  addiu       $s5, $s6, 0xFC8
    ctx->pc = 0x3036dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_3036e0:
    // 0x3036e0: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x3036e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3036e4:
    // 0x3036e4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3036e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3036e8:
    // 0x3036e8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3036e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3036ec:
    // 0x3036ec: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3036ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3036f0:
    // 0x3036f0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x3036f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_3036f4:
    // 0x3036f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3036f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3036f8:
    // 0x3036f8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x3036f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3036fc:
    // 0x3036fc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x3036fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_303700:
    // 0x303700: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x303700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_303704:
    // 0x303704: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x303704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_303708:
    // 0x303708: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x303708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_30370c:
    // 0x30370c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x30370cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_303710:
    // 0x303710: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x303710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_303714:
    // 0x303714: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x303714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_303718:
    // 0x303718: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x303718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30371c:
    // 0x30371c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x30371cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_303720:
    // 0x303720: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x303720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_303724:
    // 0x303724: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x303724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_303728:
    // 0x303728: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x303728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30372c:
    // 0x30372c: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x30372cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_303730:
    // 0x303730: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x303730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_303734:
    // 0x303734: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x303734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_303738:
    // 0x303738: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x303738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_30373c:
    // 0x30373c: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x30373cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_303740:
    // 0x303740: 0xb0820027  sdl         $v0, 0x27($a0)
    ctx->pc = 0x303740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_303744:
    // 0x303744: 0xb4820020  sdr         $v0, 0x20($a0)
    ctx->pc = 0x303744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_303748:
    // 0x303748: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x303748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_30374c:
    // 0x30374c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_303750:
    // 0x303750: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x303750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_303754:
    // 0x303754: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x303754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_303758:
    // 0x303758: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x303758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_30375c:
    // 0x30375c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x30375cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_303760:
    // 0x303760: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x303760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_303764:
    // 0x303764: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x303764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_303768:
    // 0x303768: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x303768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_30376c:
    // 0x30376c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x30376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_303770:
    // 0x303770: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x303770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_303774:
    // 0x303774: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x303774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_303778:
    // 0x303778: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x303778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_30377c:
    // 0x30377c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_303780:
    // 0x303780: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x303780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_303784:
    // 0x303784: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_303788:
    if (ctx->pc == 0x303788u) {
        ctx->pc = 0x303788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303784u;
        // 0x303788: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30378Cu;
        goto label_30378c;
    }
    ctx->pc = 0x303784u;
    {
        const bool branch_taken_0x303784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x303788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303784u;
        // 0x303788: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303784) {
            ctx->pc = 0x3037F0u;
            goto label_3037f0;
        }
    }
    ctx->pc = 0x30378Cu;
label_30378c:
    // 0x30378c: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x30378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_303790:
    // 0x303790: 0x40f809  jalr        $v0
label_303794:
    if (ctx->pc == 0x303794u) {
        ctx->pc = 0x303794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303790u;
        // 0x303794: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x303798u;
        goto label_303798;
    }
    ctx->pc = 0x303790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x303798u);
        ctx->pc = 0x303794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303790u;
        // 0x303794: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303790u, 0x303798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x303798u;
label_303798:
    // 0x303798: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x303798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_30379c:
    // 0x30379c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x30379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3037a0:
    // 0x3037a0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x3037a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_3037a4:
    // 0x3037a4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3037a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3037a8:
    // 0x3037a8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x3037a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3037ac:
    // 0x3037ac: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x3037acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3037b0:
    // 0x3037b0: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
label_3037b4:
    if (ctx->pc == 0x3037B4u) {
        ctx->pc = 0x3037B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037B0u;
        // 0x3037b4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037B8u;
        goto label_3037b8;
    }
    ctx->pc = 0x3037B0u;
    {
        const bool branch_taken_0x3037b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3037b0) {
            ctx->pc = 0x3037B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3037B0u;
            // 0x3037b4: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3037E0u;
            goto label_3037e0;
        }
    }
    ctx->pc = 0x3037B8u;
label_3037b8:
    // 0x3037b8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x3037b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_3037bc:
    // 0x3037bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3037bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3037c0:
    // 0x3037c0: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x3037c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_3037c4:
    // 0x3037c4: 0xc092848  jal         func_24A120
label_3037c8:
    if (ctx->pc == 0x3037C8u) {
        ctx->pc = 0x3037C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037C4u;
        // 0x3037c8: 0x8c650024  lw          $a1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037CCu;
        goto label_3037cc;
    }
    ctx->pc = 0x3037C4u;
    SET_GPR_U32(ctx, 31, 0x3037CCu);
    ctx->pc = 0x3037C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037C4u;
    // 0x3037c8: 0x8c650024  lw          $a1, 0x24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x3037C4u, 0x3037CCu)) {
        return;
    }
    ctx->pc = 0x3037CCu;
label_3037cc:
    // 0x3037cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3037ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3037d0:
    // 0x3037d0: 0xc09281a  jal         func_24A068
label_3037d4:
    if (ctx->pc == 0x3037D4u) {
        ctx->pc = 0x3037D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037D0u;
        // 0x3037d4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037D8u;
        goto label_3037d8;
    }
    ctx->pc = 0x3037D0u;
    SET_GPR_U32(ctx, 31, 0x3037D8u);
    ctx->pc = 0x3037D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037D0u;
    // 0x3037d4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x3037D0u, 0x3037D8u)) {
        return;
    }
    ctx->pc = 0x3037D8u;
label_3037d8:
    // 0x3037d8: 0x10000068  b           . + 4 + (0x68 << 2)
label_3037dc:
    if (ctx->pc == 0x3037DCu) {
        ctx->pc = 0x3037DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037D8u;
        // 0x3037dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037E0u;
        goto label_3037e0;
    }
    ctx->pc = 0x3037D8u;
    {
        const bool branch_taken_0x3037d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3037DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037D8u;
        // 0x3037dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037d8) {
            ctx->pc = 0x30397Cu;
            goto label_30397c;
        }
    }
    ctx->pc = 0x3037E0u;
label_3037e0:
    // 0x3037e0: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x3037e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3037e4:
    // 0x3037e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3037e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3037e8:
    // 0x3037e8: 0xc075fdc  jal         func_1D7F70
label_3037ec:
    if (ctx->pc == 0x3037ECu) {
        ctx->pc = 0x3037ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037E8u;
        // 0x3037ec: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037F0u;
        goto label_3037f0;
    }
    ctx->pc = 0x3037E8u;
    SET_GPR_U32(ctx, 31, 0x3037F0u);
    ctx->pc = 0x3037ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037E8u;
    // 0x3037ec: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x3037E8u, 0x3037F0u)) {
        return;
    }
    ctx->pc = 0x3037F0u;
label_3037f0:
    // 0x3037f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3037f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3037f4:
    // 0x3037f4: 0x621ffbc  bgez        $s1, . + 4 + (-0x44 << 2)
label_3037f8:
    if (ctx->pc == 0x3037F8u) {
        ctx->pc = 0x3037F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037F4u;
        // 0x3037f8: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037FCu;
        goto label_3037fc;
    }
    ctx->pc = 0x3037F4u;
    {
        const bool branch_taken_0x3037f4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3037F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037F4u;
        // 0x3037f8: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037f4) {
            ctx->pc = 0x3036E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3036e8;
        }
    }
    ctx->pc = 0x3037FCu;
label_3037fc:
    // 0x3037fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3037fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_303800:
    // 0x303800: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x303800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_303804:
    // 0x303804: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x303804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_303808:
    // 0x303808: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x303808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_30380c:
    // 0x30380c: 0x26c20fc8  addiu       $v0, $s6, 0xFC8
    ctx->pc = 0x30380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_303810:
    // 0x303810: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x303810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_303814:
    // 0x303814: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x303814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_303818:
    // 0x303818: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30381c:
    // 0x30381c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x30381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_303820:
    // 0x303820: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x303820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_303824:
    // 0x303824: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x303824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_303828:
    // 0x303828: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x303828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_30382c:
    // 0x30382c: 0x6200039  bltz        $s1, . + 4 + (0x39 << 2)
label_303830:
    if (ctx->pc == 0x303830u) {
        ctx->pc = 0x303830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30382Cu;
        // 0x303830: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303834u;
        goto label_303834;
    }
    ctx->pc = 0x30382Cu;
    {
        const bool branch_taken_0x30382c = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x303830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30382Cu;
        // 0x303830: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30382c) {
            ctx->pc = 0x303914u;
            goto label_303914;
        }
    }
    ctx->pc = 0x303834u;
label_303834:
    // 0x303834: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x303834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_303838:
    // 0x303838: 0x2293818  mult        $a3, $s1, $t1
    ctx->pc = 0x303838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_30383c:
    // 0x30383c: 0x0  nop
    ctx->pc = 0x30383cu;
    // NOP
label_303840:
    // 0x303840: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x303840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_303844:
    // 0x303844: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x303844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_303848:
    // 0x303848: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x303848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_30384c:
    // 0x30384c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x30384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_303850:
    // 0x303850: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x303850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_303854:
    // 0x303854: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x303854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_303858:
    // 0x303858: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x303858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_30385c:
    // 0x30385c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x30385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_303860:
    // 0x303860: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_303864:
    if (ctx->pc == 0x303864u) {
        ctx->pc = 0x303864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303860u;
        // 0x303864: 0x2628ffff  addiu       $t0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303868u;
        goto label_303868;
    }
    ctx->pc = 0x303860u;
    {
        const bool branch_taken_0x303860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303860u;
        // 0x303864: 0x2628ffff  addiu       $t0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303860) {
            ctx->pc = 0x303908u;
            goto label_303908;
        }
    }
    ctx->pc = 0x303868u;
label_303868:
    // 0x303868: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x303868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_30386c:
    // 0x30386c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303870:
    // 0x303870: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x303870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_303874:
    // 0x303874: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x303874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_303878:
    // 0x303878: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x303878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_30387c:
    // 0x30387c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x30387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_303880:
    // 0x303880: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_303884:
    if (ctx->pc == 0x303884u) {
        ctx->pc = 0x303884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303880u;
        // 0x303884: 0x24a20080  addiu       $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303888u;
        goto label_303888;
    }
    ctx->pc = 0x303880u;
    {
        const bool branch_taken_0x303880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303880u;
        // 0x303884: 0x24a20080  addiu       $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303880) {
            ctx->pc = 0x3038DCu;
            goto label_3038dc;
        }
    }
    ctx->pc = 0x303888u;
label_303888:
    // 0x303888: 0x68aa0007  ldl         $t2, 0x7($a1)
    ctx->pc = 0x303888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_30388c:
    // 0x30388c: 0x6caa0000  ldr         $t2, 0x0($a1)
    ctx->pc = 0x30388cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_303890:
    // 0x303890: 0x68ab000f  ldl         $t3, 0xF($a1)
    ctx->pc = 0x303890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_303894:
    // 0x303894: 0x6cab0008  ldr         $t3, 0x8($a1)
    ctx->pc = 0x303894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_303898:
    // 0x303898: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x303898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_30389c:
    // 0x30389c: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x30389cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3038a0:
    // 0x3038a0: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x3038a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3038a4:
    // 0x3038a4: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x3038a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3038a8:
    // 0x3038a8: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x3038a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3038ac:
    // 0x3038ac: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x3038acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3038b0:
    // 0x3038b0: 0xb06b000f  sdl         $t3, 0xF($v1)
    ctx->pc = 0x3038b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3038b4:
    // 0x3038b4: 0xb46b0008  sdr         $t3, 0x8($v1)
    ctx->pc = 0x3038b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3038b8:
    // 0x3038b8: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x3038b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3038bc:
    // 0x3038bc: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x3038bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3038c0:
    // 0x3038c0: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x3038c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3038c4:
    // 0x3038c4: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x3038c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3038c8:
    // 0x3038c8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3038c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_3038cc:
    // 0x3038cc: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_3038d0:
    if (ctx->pc == 0x3038D0u) {
        ctx->pc = 0x3038D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038CCu;
        // 0x3038d0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038D4u;
        goto label_3038d4;
    }
    ctx->pc = 0x3038CCu;
    {
        const bool branch_taken_0x3038cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3038D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038CCu;
        // 0x3038d0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038cc) {
            ctx->pc = 0x303888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303888;
        }
    }
    ctx->pc = 0x3038D4u;
label_3038d4:
    // 0x3038d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_3038d8:
    if (ctx->pc == 0x3038D8u) {
        ctx->pc = 0x3038D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038D4u;
        // 0x3038d8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038DCu;
        goto label_3038dc;
    }
    ctx->pc = 0x3038D4u;
    {
        const bool branch_taken_0x3038d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3038D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038D4u;
        // 0x3038d8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038d4) {
            ctx->pc = 0x30390Cu;
            goto label_30390c;
        }
    }
    ctx->pc = 0x3038DCu;
label_3038dc:
    // 0x3038dc: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x3038dcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_3038e0:
    // 0x3038e0: 0xdcab0008  ld          $t3, 0x8($a1)
    ctx->pc = 0x3038e0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_3038e4:
    // 0x3038e4: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x3038e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_3038e8:
    // 0x3038e8: 0xdca70018  ld          $a3, 0x18($a1)
    ctx->pc = 0x3038e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_3038ec:
    // 0x3038ec: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x3038ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
label_3038f0:
    // 0x3038f0: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x3038f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
label_3038f4:
    // 0x3038f4: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x3038f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
label_3038f8:
    // 0x3038f8: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x3038f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
label_3038fc:
    // 0x3038fc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3038fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_303900:
    // 0x303900: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_303904:
    if (ctx->pc == 0x303904u) {
        ctx->pc = 0x303904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303900u;
        // 0x303904: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303908u;
        goto label_303908;
    }
    ctx->pc = 0x303900u;
    {
        const bool branch_taken_0x303900 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x303904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303900u;
        // 0x303904: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303900) {
            ctx->pc = 0x3038DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3038dc;
        }
    }
    ctx->pc = 0x303908u;
label_303908:
    // 0x303908: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x303908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_30390c:
    // 0x30390c: 0x621ffcc  bgez        $s1, . + 4 + (-0x34 << 2)
label_303910:
    if (ctx->pc == 0x303910u) {
        ctx->pc = 0x303910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30390Cu;
        // 0x303910: 0x2293818  mult        $a3, $s1, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x303914u;
        goto label_303914;
    }
    ctx->pc = 0x30390Cu;
    {
        const bool branch_taken_0x30390c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x303910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30390Cu;
        // 0x303910: 0x2293818  mult        $a3, $s1, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30390c) {
            ctx->pc = 0x303840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303840;
        }
    }
    ctx->pc = 0x303914u;
label_303914:
    // 0x303914: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x303914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_303918:
    // 0x303918: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x303918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_30391c:
    // 0x30391c: 0x26c40fc8  addiu       $a0, $s6, 0xFC8
    ctx->pc = 0x30391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_303920:
    // 0x303920: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x303920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_303924:
    // 0x303924: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x303924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303928:
    // 0x303928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30392c:
    // 0x30392c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x30392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_303930:
    // 0x303930: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x303930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_303934:
    // 0x303934: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_303938:
    if (ctx->pc == 0x303938u) {
        ctx->pc = 0x303938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303934u;
        // 0x303938: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30393Cu;
        goto label_30393c;
    }
    ctx->pc = 0x303934u;
    {
        const bool branch_taken_0x303934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x303938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303934u;
        // 0x303938: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303934) {
            ctx->pc = 0x303978u;
            goto label_303978;
        }
    }
    ctx->pc = 0x30393Cu;
label_30393c:
    // 0x30393c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30393cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303940:
    // 0x303940: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x303940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303944:
    // 0x303944: 0x0  nop
    ctx->pc = 0x303944u;
    // NOP
label_303948:
    // 0x303948: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x303948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_30394c:
    // 0x30394c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30394cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_303950:
    // 0x303950: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_303954:
    // 0x303954: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x303954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_303958:
    // 0x303958: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x303958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_30395c:
    // 0x30395c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_303960:
    // 0x303960: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x303960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_303964:
    // 0x303964: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x303964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_303968:
    // 0x303968: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x303968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_30396c:
    // 0x30396c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30396cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_303970:
    // 0x303970: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_303974:
    if (ctx->pc == 0x303974u) {
        ctx->pc = 0x303974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303970u;
        // 0x303974: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303978u;
        goto label_303978;
    }
    ctx->pc = 0x303970u;
    {
        const bool branch_taken_0x303970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303970u;
        // 0x303974: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303970) {
            ctx->pc = 0x303948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303948;
        }
    }
    ctx->pc = 0x303978u;
label_303978:
    // 0x303978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30397c:
    // 0x30397c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x30397cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_303980:
    // 0x303980: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x303980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_303984:
    // 0x303984: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x303984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_303988:
    // 0x303988: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x303988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30398c:
    // 0x30398c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30398cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_303990:
    // 0x303990: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x303990u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_303994:
    // 0x303994: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x303994u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_303998:
    // 0x303998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30399c:
    // 0x30399c: 0x3e00008  jr          $ra
label_3039a0:
    if (ctx->pc == 0x3039A0u) {
        ctx->pc = 0x3039A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30399Cu;
        // 0x3039a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3039A4u;
        goto label_3039a4;
    }
    ctx->pc = 0x30399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3039A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30399Cu;
        // 0x3039a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30399Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3039A4u;
label_3039a4:
    // 0x3039a4: 0x0  nop
    ctx->pc = 0x3039a4u;
    // NOP
    ctx->pc = 0x3039a8u;
}
