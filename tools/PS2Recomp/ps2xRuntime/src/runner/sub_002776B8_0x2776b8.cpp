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

// Function: sub_002776B8
// Address: 0x2776b8 - 0x277978
void sub_002776B8_0x2776b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002776B8_0x2776b8");
#endif

    switch (ctx->pc) {
        case 0x2776b8u: goto label_2776b8;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c0u: goto label_2776c0;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776ccu: goto label_2776cc;
        case 0x2776d0u: goto label_2776d0;
        case 0x2776d4u: goto label_2776d4;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776dcu: goto label_2776dc;
        case 0x2776e0u: goto label_2776e0;
        case 0x2776e4u: goto label_2776e4;
        case 0x2776e8u: goto label_2776e8;
        case 0x2776ecu: goto label_2776ec;
        case 0x2776f0u: goto label_2776f0;
        case 0x2776f4u: goto label_2776f4;
        case 0x2776f8u: goto label_2776f8;
        case 0x2776fcu: goto label_2776fc;
        case 0x277700u: goto label_277700;
        case 0x277704u: goto label_277704;
        case 0x277708u: goto label_277708;
        case 0x27770cu: goto label_27770c;
        case 0x277710u: goto label_277710;
        case 0x277714u: goto label_277714;
        case 0x277718u: goto label_277718;
        case 0x27771cu: goto label_27771c;
        case 0x277720u: goto label_277720;
        case 0x277724u: goto label_277724;
        case 0x277728u: goto label_277728;
        case 0x27772cu: goto label_27772c;
        case 0x277730u: goto label_277730;
        case 0x277734u: goto label_277734;
        case 0x277738u: goto label_277738;
        case 0x27773cu: goto label_27773c;
        case 0x277740u: goto label_277740;
        case 0x277744u: goto label_277744;
        case 0x277748u: goto label_277748;
        case 0x27774cu: goto label_27774c;
        case 0x277750u: goto label_277750;
        case 0x277754u: goto label_277754;
        case 0x277758u: goto label_277758;
        case 0x27775cu: goto label_27775c;
        case 0x277760u: goto label_277760;
        case 0x277764u: goto label_277764;
        case 0x277768u: goto label_277768;
        case 0x27776cu: goto label_27776c;
        case 0x277770u: goto label_277770;
        case 0x277774u: goto label_277774;
        case 0x277778u: goto label_277778;
        case 0x27777cu: goto label_27777c;
        case 0x277780u: goto label_277780;
        case 0x277784u: goto label_277784;
        case 0x277788u: goto label_277788;
        case 0x27778cu: goto label_27778c;
        case 0x277790u: goto label_277790;
        case 0x277794u: goto label_277794;
        case 0x277798u: goto label_277798;
        case 0x27779cu: goto label_27779c;
        case 0x2777a0u: goto label_2777a0;
        case 0x2777a4u: goto label_2777a4;
        case 0x2777a8u: goto label_2777a8;
        case 0x2777acu: goto label_2777ac;
        case 0x2777b0u: goto label_2777b0;
        case 0x2777b4u: goto label_2777b4;
        case 0x2777b8u: goto label_2777b8;
        case 0x2777bcu: goto label_2777bc;
        case 0x2777c0u: goto label_2777c0;
        case 0x2777c4u: goto label_2777c4;
        case 0x2777c8u: goto label_2777c8;
        case 0x2777ccu: goto label_2777cc;
        case 0x2777d0u: goto label_2777d0;
        case 0x2777d4u: goto label_2777d4;
        case 0x2777d8u: goto label_2777d8;
        case 0x2777dcu: goto label_2777dc;
        case 0x2777e0u: goto label_2777e0;
        case 0x2777e4u: goto label_2777e4;
        case 0x2777e8u: goto label_2777e8;
        case 0x2777ecu: goto label_2777ec;
        case 0x2777f0u: goto label_2777f0;
        case 0x2777f4u: goto label_2777f4;
        case 0x2777f8u: goto label_2777f8;
        case 0x2777fcu: goto label_2777fc;
        case 0x277800u: goto label_277800;
        case 0x277804u: goto label_277804;
        case 0x277808u: goto label_277808;
        case 0x27780cu: goto label_27780c;
        case 0x277810u: goto label_277810;
        case 0x277814u: goto label_277814;
        case 0x277818u: goto label_277818;
        case 0x27781cu: goto label_27781c;
        case 0x277820u: goto label_277820;
        case 0x277824u: goto label_277824;
        case 0x277828u: goto label_277828;
        case 0x27782cu: goto label_27782c;
        case 0x277830u: goto label_277830;
        case 0x277834u: goto label_277834;
        case 0x277838u: goto label_277838;
        case 0x27783cu: goto label_27783c;
        case 0x277840u: goto label_277840;
        case 0x277844u: goto label_277844;
        case 0x277848u: goto label_277848;
        case 0x27784cu: goto label_27784c;
        case 0x277850u: goto label_277850;
        case 0x277854u: goto label_277854;
        case 0x277858u: goto label_277858;
        case 0x27785cu: goto label_27785c;
        case 0x277860u: goto label_277860;
        case 0x277864u: goto label_277864;
        case 0x277868u: goto label_277868;
        case 0x27786cu: goto label_27786c;
        case 0x277870u: goto label_277870;
        case 0x277874u: goto label_277874;
        case 0x277878u: goto label_277878;
        case 0x27787cu: goto label_27787c;
        case 0x277880u: goto label_277880;
        case 0x277884u: goto label_277884;
        case 0x277888u: goto label_277888;
        case 0x27788cu: goto label_27788c;
        case 0x277890u: goto label_277890;
        case 0x277894u: goto label_277894;
        case 0x277898u: goto label_277898;
        case 0x27789cu: goto label_27789c;
        case 0x2778a0u: goto label_2778a0;
        case 0x2778a4u: goto label_2778a4;
        case 0x2778a8u: goto label_2778a8;
        case 0x2778acu: goto label_2778ac;
        case 0x2778b0u: goto label_2778b0;
        case 0x2778b4u: goto label_2778b4;
        case 0x2778b8u: goto label_2778b8;
        case 0x2778bcu: goto label_2778bc;
        case 0x2778c0u: goto label_2778c0;
        case 0x2778c4u: goto label_2778c4;
        case 0x2778c8u: goto label_2778c8;
        case 0x2778ccu: goto label_2778cc;
        case 0x2778d0u: goto label_2778d0;
        case 0x2778d4u: goto label_2778d4;
        case 0x2778d8u: goto label_2778d8;
        case 0x2778dcu: goto label_2778dc;
        case 0x2778e0u: goto label_2778e0;
        case 0x2778e4u: goto label_2778e4;
        case 0x2778e8u: goto label_2778e8;
        case 0x2778ecu: goto label_2778ec;
        case 0x2778f0u: goto label_2778f0;
        case 0x2778f4u: goto label_2778f4;
        case 0x2778f8u: goto label_2778f8;
        case 0x2778fcu: goto label_2778fc;
        case 0x277900u: goto label_277900;
        case 0x277904u: goto label_277904;
        case 0x277908u: goto label_277908;
        case 0x27790cu: goto label_27790c;
        case 0x277910u: goto label_277910;
        case 0x277914u: goto label_277914;
        case 0x277918u: goto label_277918;
        case 0x27791cu: goto label_27791c;
        case 0x277920u: goto label_277920;
        case 0x277924u: goto label_277924;
        case 0x277928u: goto label_277928;
        case 0x27792cu: goto label_27792c;
        case 0x277930u: goto label_277930;
        case 0x277934u: goto label_277934;
        case 0x277938u: goto label_277938;
        case 0x27793cu: goto label_27793c;
        case 0x277940u: goto label_277940;
        case 0x277944u: goto label_277944;
        case 0x277948u: goto label_277948;
        case 0x27794cu: goto label_27794c;
        case 0x277950u: goto label_277950;
        case 0x277954u: goto label_277954;
        case 0x277958u: goto label_277958;
        case 0x27795cu: goto label_27795c;
        case 0x277960u: goto label_277960;
        case 0x277964u: goto label_277964;
        case 0x277968u: goto label_277968;
        case 0x27796cu: goto label_27796c;
        case 0x277970u: goto label_277970;
        case 0x277974u: goto label_277974;
        default: break;
    }

    ctx->pc = 0x2776b8u;

label_2776b8:
    // 0x2776b8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2776b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_2776bc:
    // 0x2776bc: 0x8f8387cc  lw          $v1, -0x7834($gp)
    ctx->pc = 0x2776bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936524)));
label_2776c0:
    // 0x2776c0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2776c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2776c4:
    // 0x2776c4: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x2776c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_2776c8:
    // 0x2776c8: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x2776c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_2776cc:
    // 0x2776cc: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2776ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2776d0:
    // 0x2776d0: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x2776d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_2776d4:
    // 0x2776d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2776d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2776d8:
    // 0x2776d8: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x2776d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_2776dc:
    // 0x2776dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2776dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2776e0:
    // 0x2776e0: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2776e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_2776e4:
    // 0x2776e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2776e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2776e8:
    // 0x2776e8: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2776e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_2776ec:
    // 0x2776ec: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2776ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2776f0:
    // 0x2776f0: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x2776f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_2776f4:
    // 0x2776f4: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2776f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_2776f8:
    // 0x2776f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2776f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2776fc:
    // 0x2776fc: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2776fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277700:
    // 0x277700: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x277700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_277704:
    // 0x277704: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x277704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_277708:
    // 0x277708: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x277708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27770c:
    // 0x27770c: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x27770cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_277710:
    // 0x277710: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x277710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_277714:
    // 0x277714: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x277714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_277718:
    // 0x277718: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x277718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_27771c:
    // 0x27771c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x27771cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_277720:
    // 0x277720: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x277720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_277724:
    // 0x277724: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x277724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_277728:
    // 0x277728: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x277728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27772c:
    // 0x27772c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x27772cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_277730:
    // 0x277730: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x277730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_277734:
    // 0x277734: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x277734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_277738:
    // 0x277738: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x277738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_27773c:
    // 0x27773c: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x27773cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_277740:
    // 0x277740: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x277740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_277744:
    // 0x277744: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x277744u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_277748:
    // 0x277748: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x277748u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27774c:
    // 0x27774c: 0x10800080  beqz        $a0, . + 4 + (0x80 << 2)
label_277750:
    if (ctx->pc == 0x277750u) {
        ctx->pc = 0x277750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27774Cu;
        // 0x277750: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277754u;
        goto label_277754;
    }
    ctx->pc = 0x27774Cu;
    {
        const bool branch_taken_0x27774c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x277750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27774Cu;
        // 0x277750: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27774c) {
            ctx->pc = 0x277950u;
            goto label_277950;
        }
    }
    ctx->pc = 0x277754u;
label_277754:
    // 0x277754: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x277754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_277758:
    // 0x277758: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x277758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_27775c:
    // 0x27775c: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x27775cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_277760:
    // 0x277760: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x277760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277764:
    // 0x277764: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
label_277768:
    if (ctx->pc == 0x277768u) {
        ctx->pc = 0x277768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277764u;
        // 0x277768: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27776Cu;
        goto label_27776c;
    }
    ctx->pc = 0x277764u;
    {
        const bool branch_taken_0x277764 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x277768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277764u;
        // 0x277768: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277764) {
            ctx->pc = 0x2777E0u;
            goto label_2777e0;
        }
    }
    ctx->pc = 0x27776Cu;
label_27776c:
    // 0x27776c: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x27776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_277770:
    // 0x277770: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_277774:
    // 0x277774: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x277774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_277778:
    // 0x277778: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x277778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_27777c:
    // 0x27777c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x27777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277780:
    // 0x277780: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x277780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277784:
    // 0x277784: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x277784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277788:
    // 0x277788: 0x0  nop
    ctx->pc = 0x277788u;
    // NOP
label_27778c:
    // 0x27778c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_277790:
    if (ctx->pc == 0x277790u) {
        ctx->pc = 0x277790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27778Cu;
        // 0x277790: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277794u;
        goto label_277794;
    }
    ctx->pc = 0x27778Cu;
    {
        const bool branch_taken_0x27778c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27778c) {
            ctx->pc = 0x277790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27778Cu;
            // 0x277790: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2777A0u;
            goto label_2777a0;
        }
    }
    ctx->pc = 0x277794u;
label_277794:
    // 0x277794: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x277794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_277798:
    // 0x277798: 0x1000000b  b           . + 4 + (0xB << 2)
label_27779c:
    if (ctx->pc == 0x27779Cu) {
        ctx->pc = 0x27779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277798u;
        // 0x27779c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777A0u;
        goto label_2777a0;
    }
    ctx->pc = 0x277798u;
    {
        const bool branch_taken_0x277798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277798u;
        // 0x27779c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277798) {
            ctx->pc = 0x2777C8u;
            goto label_2777c8;
        }
    }
    ctx->pc = 0x2777A0u;
label_2777a0:
    // 0x2777a0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2777a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2777a4:
    // 0x2777a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2777a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2777a8:
    // 0x2777a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2777a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2777ac:
    // 0x2777ac: 0x0  nop
    ctx->pc = 0x2777acu;
    // NOP
label_2777b0:
    // 0x2777b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2777b4:
    if (ctx->pc == 0x2777B4u) {
        ctx->pc = 0x2777B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777B0u;
        // 0x2777b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777B8u;
        goto label_2777b8;
    }
    ctx->pc = 0x2777B0u;
    {
        const bool branch_taken_0x2777b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2777B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777B0u;
        // 0x2777b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2777b0) {
            ctx->pc = 0x2777C8u;
            goto label_2777c8;
        }
    }
    ctx->pc = 0x2777B8u;
label_2777b8:
    // 0x2777b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2777b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2777bc:
    // 0x2777bc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2777bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2777c0:
    // 0x2777c0: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x2777c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_2777c4:
    // 0x2777c4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2777c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2777c8:
    // 0x2777c8: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2777c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2777cc:
    // 0x2777cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2777ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2777d0:
    // 0x2777d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2777d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2777d4:
    // 0x2777d4: 0x481ffe6  bgez        $a0, . + 4 + (-0x1A << 2)
label_2777d8:
    if (ctx->pc == 0x2777D8u) {
        ctx->pc = 0x2777D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777D4u;
        // 0x2777d8: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777DCu;
        goto label_2777dc;
    }
    ctx->pc = 0x2777D4u;
    {
        const bool branch_taken_0x2777d4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2777D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777D4u;
        // 0x2777d8: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2777d4) {
            ctx->pc = 0x277770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277770;
        }
    }
    ctx->pc = 0x2777DCu;
label_2777dc:
    // 0x2777dc: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2777dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2777e0:
    // 0x2777e0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2777e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2777e4:
    // 0x2777e4: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x2777e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_2777e8:
    // 0x2777e8: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x2777e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
label_2777ec:
    // 0x2777ec: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2777ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2777f0:
    // 0x2777f0: 0x10430053  beq         $v0, $v1, . + 4 + (0x53 << 2)
label_2777f4:
    if (ctx->pc == 0x2777F4u) {
        ctx->pc = 0x2777F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777F0u;
        // 0x2777f4: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777F8u;
        goto label_2777f8;
    }
    ctx->pc = 0x2777F0u;
    {
        const bool branch_taken_0x2777f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2777F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777F0u;
        // 0x2777f4: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2777f0) {
            ctx->pc = 0x277940u;
            goto label_277940;
        }
    }
    ctx->pc = 0x2777F8u;
label_2777f8:
    // 0x2777f8: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x2777f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2777fc:
    // 0x2777fc: 0x0  nop
    ctx->pc = 0x2777fcu;
    // NOP
label_277800:
    // 0x277800: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x277800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_277804:
    // 0x277804: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x277804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_277808:
    // 0x277808: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
label_27780c:
    if (ctx->pc == 0x27780Cu) {
        ctx->pc = 0x27780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277808u;
        // 0x27780c: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277810u;
        goto label_277810;
    }
    ctx->pc = 0x277808u;
    {
        const bool branch_taken_0x277808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277808u;
        // 0x27780c: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277808) {
            ctx->pc = 0x277930u;
            goto label_277930;
        }
    }
    ctx->pc = 0x277810u;
label_277810:
    // 0x277810: 0x8f8287d0  lw          $v0, -0x7830($gp)
    ctx->pc = 0x277810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_277814:
    // 0x277814: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x277814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_277818:
    // 0x277818: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27781c:
    // 0x27781c: 0x10730045  beq         $v1, $s3, . + 4 + (0x45 << 2)
label_277820:
    if (ctx->pc == 0x277820u) {
        ctx->pc = 0x277820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27781Cu;
        // 0x277820: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277824u;
        goto label_277824;
    }
    ctx->pc = 0x27781Cu;
    {
        const bool branch_taken_0x27781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x277820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27781Cu;
        // 0x277820: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27781c) {
            ctx->pc = 0x277934u;
            goto label_277934;
        }
    }
    ctx->pc = 0x277824u;
label_277824:
    // 0x277824: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x277824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_277828:
    // 0x277828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x277828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27782c:
    // 0x27782c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_277830:
    if (ctx->pc == 0x277830u) {
        ctx->pc = 0x277830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27782Cu;
        // 0x277830: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277834u;
        goto label_277834;
    }
    ctx->pc = 0x27782Cu;
    {
        const bool branch_taken_0x27782c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27782Cu;
        // 0x277830: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27782c) {
            ctx->pc = 0x277938u;
            goto label_277938;
        }
    }
    ctx->pc = 0x277834u;
label_277834:
    // 0x277834: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x277834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_277838:
    // 0x277838: 0xc09533c  jal         func_254CF0
label_27783c:
    if (ctx->pc == 0x27783Cu) {
        ctx->pc = 0x27783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277838u;
        // 0x27783c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277840u;
        goto label_277840;
    }
    ctx->pc = 0x277838u;
    SET_GPR_U32(ctx, 31, 0x277840u);
    ctx->pc = 0x27783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277838u;
    // 0x27783c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x277838u, 0x277840u)) {
        return;
    }
    ctx->pc = 0x277840u;
label_277840:
    // 0x277840: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x277840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277844:
    // 0x277844: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x277844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277848:
    // 0x277848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27784c:
    // 0x27784c: 0x0  nop
    ctx->pc = 0x27784cu;
    // NOP
label_277850:
    // 0x277850: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_277854:
    if (ctx->pc == 0x277854u) {
        ctx->pc = 0x277854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277850u;
        // 0x277854: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277858u;
        goto label_277858;
    }
    ctx->pc = 0x277850u;
    {
        const bool branch_taken_0x277850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277850) {
            ctx->pc = 0x277854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277850u;
            // 0x277854: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x277860u;
            goto label_277860;
        }
    }
    ctx->pc = 0x277858u;
label_277858:
    // 0x277858: 0x10000006  b           . + 4 + (0x6 << 2)
label_27785c:
    if (ctx->pc == 0x27785Cu) {
        ctx->pc = 0x27785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277858u;
        // 0x27785c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277860u;
        goto label_277860;
    }
    ctx->pc = 0x277858u;
    {
        const bool branch_taken_0x277858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277858u;
        // 0x27785c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277858) {
            ctx->pc = 0x277874u;
            goto label_277874;
        }
    }
    ctx->pc = 0x277860u;
label_277860:
    // 0x277860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277864:
    // 0x277864: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x277864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277868:
    // 0x277868: 0x0  nop
    ctx->pc = 0x277868u;
    // NOP
label_27786c:
    // 0x27786c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_277870:
    if (ctx->pc == 0x277870u) {
        ctx->pc = 0x277870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27786Cu;
        // 0x277870: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277874u;
        goto label_277874;
    }
    ctx->pc = 0x27786Cu;
    {
        const bool branch_taken_0x27786c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27786c) {
            ctx->pc = 0x277870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27786Cu;
            // 0x277870: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x277874u;
            goto label_277874;
        }
    }
    ctx->pc = 0x277874u;
label_277874:
    // 0x277874: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x277874u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277878:
    // 0x277878: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x277878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27787c:
    // 0x27787c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x27787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277880:
    // 0x277880: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x277880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277884:
    // 0x277884: 0x0  nop
    ctx->pc = 0x277884u;
    // NOP
label_277888:
    // 0x277888: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_27788c:
    if (ctx->pc == 0x27788Cu) {
        ctx->pc = 0x27788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277888u;
        // 0x27788c: 0xc6230004  lwc1        $f3, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277890u;
        goto label_277890;
    }
    ctx->pc = 0x277888u;
    {
        const bool branch_taken_0x277888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277888) {
            ctx->pc = 0x27788Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277888u;
            // 0x27788c: 0xc6230004  lwc1        $f3, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x277898u;
            goto label_277898;
        }
    }
    ctx->pc = 0x277890u;
label_277890:
    // 0x277890: 0x10000006  b           . + 4 + (0x6 << 2)
label_277894:
    if (ctx->pc == 0x277894u) {
        ctx->pc = 0x277894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277890u;
        // 0x277894: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277898u;
        goto label_277898;
    }
    ctx->pc = 0x277890u;
    {
        const bool branch_taken_0x277890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277890u;
        // 0x277894: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277890) {
            ctx->pc = 0x2778ACu;
            goto label_2778ac;
        }
    }
    ctx->pc = 0x277898u;
label_277898:
    // 0x277898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27789c:
    // 0x27789c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x27789cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2778a0:
    // 0x2778a0: 0x0  nop
    ctx->pc = 0x2778a0u;
    // NOP
label_2778a4:
    // 0x2778a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2778a8:
    if (ctx->pc == 0x2778A8u) {
        ctx->pc = 0x2778A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778A4u;
        // 0x2778a8: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778ACu;
        goto label_2778ac;
    }
    ctx->pc = 0x2778A4u;
    {
        const bool branch_taken_0x2778a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2778a4) {
            ctx->pc = 0x2778A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2778A4u;
            // 0x2778a8: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2778ACu;
            goto label_2778ac;
        }
    }
    ctx->pc = 0x2778ACu;
label_2778ac:
    // 0x2778ac: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2778acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2778b0:
    // 0x2778b0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2778b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2778b4:
    // 0x2778b4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2778b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2778b8:
    // 0x2778b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2778b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2778bc:
    // 0x2778bc: 0x0  nop
    ctx->pc = 0x2778bcu;
    // NOP
label_2778c0:
    // 0x2778c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2778c4:
    if (ctx->pc == 0x2778C4u) {
        ctx->pc = 0x2778C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778C0u;
        // 0x2778c4: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778C8u;
        goto label_2778c8;
    }
    ctx->pc = 0x2778C0u;
    {
        const bool branch_taken_0x2778c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2778C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778C0u;
        // 0x2778c4: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778c0) {
            ctx->pc = 0x2778D0u;
            goto label_2778d0;
        }
    }
    ctx->pc = 0x2778C8u;
label_2778c8:
    // 0x2778c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2778cc:
    if (ctx->pc == 0x2778CCu) {
        ctx->pc = 0x2778CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778C8u;
        // 0x2778cc: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778D0u;
        goto label_2778d0;
    }
    ctx->pc = 0x2778C8u;
    {
        const bool branch_taken_0x2778c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2778CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778C8u;
        // 0x2778cc: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778c8) {
            ctx->pc = 0x2778E8u;
            goto label_2778e8;
        }
    }
    ctx->pc = 0x2778D0u;
label_2778d0:
    // 0x2778d0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2778d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2778d4:
    // 0x2778d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2778d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2778d8:
    // 0x2778d8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2778d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2778dc:
    // 0x2778dc: 0x0  nop
    ctx->pc = 0x2778dcu;
    // NOP
label_2778e0:
    // 0x2778e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2778e4:
    if (ctx->pc == 0x2778E4u) {
        ctx->pc = 0x2778E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778E0u;
        // 0x2778e4: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778E8u;
        goto label_2778e8;
    }
    ctx->pc = 0x2778E0u;
    {
        const bool branch_taken_0x2778e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2778e0) {
            ctx->pc = 0x2778E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2778E0u;
            // 0x2778e4: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2778E8u;
            goto label_2778e8;
        }
    }
    ctx->pc = 0x2778E8u;
label_2778e8:
    // 0x2778e8: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2778e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2778ec:
    // 0x2778ec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2778ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2778f0:
    // 0x2778f0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2778f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2778f4:
    // 0x2778f4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2778f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_2778f8:
    // 0x2778f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2778f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2778fc:
    // 0x2778fc: 0x0  nop
    ctx->pc = 0x2778fcu;
    // NOP
label_277900:
    // 0x277900: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_277904:
    if (ctx->pc == 0x277904u) {
        ctx->pc = 0x277904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277900u;
        // 0x277904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277908u;
        goto label_277908;
    }
    ctx->pc = 0x277900u;
    {
        const bool branch_taken_0x277900 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x277904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277900u;
        // 0x277904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277900) {
            ctx->pc = 0x27790Cu;
            goto label_27790c;
        }
    }
    ctx->pc = 0x277908u;
label_277908:
    // 0x277908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27790c:
    // 0x27790c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_277910:
    if (ctx->pc == 0x277910u) {
        ctx->pc = 0x277910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27790Cu;
        // 0x277910: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277914u;
        goto label_277914;
    }
    ctx->pc = 0x27790Cu;
    {
        const bool branch_taken_0x27790c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27790Cu;
        // 0x277910: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27790c) {
            ctx->pc = 0x277930u;
            goto label_277930;
        }
    }
    ctx->pc = 0x277914u;
label_277914:
    // 0x277914: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_277918:
    // 0x277918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27791c:
    // 0x27791c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277920:
    // 0x277920: 0x2a0f809  jalr        $s5
label_277924:
    if (ctx->pc == 0x277924u) {
        ctx->pc = 0x277924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277920u;
        // 0x277924: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277928u;
        goto label_277928;
    }
    ctx->pc = 0x277920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x277928u);
        ctx->pc = 0x277924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277920u;
        // 0x277924: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277920u, 0x277928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277928u;
label_277928:
    // 0x277928: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_27792c:
    if (ctx->pc == 0x27792Cu) {
        ctx->pc = 0x27792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277928u;
        // 0x27792c: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277930u;
        goto label_277930;
    }
    ctx->pc = 0x277928u;
    {
        const bool branch_taken_0x277928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277928) {
            ctx->pc = 0x27792Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277928u;
            // 0x27792c: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277954u;
            goto label_277954;
        }
    }
    ctx->pc = 0x277930u;
label_277930:
    // 0x277930: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x277930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_277934:
    // 0x277934: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x277934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_277938:
    // 0x277938: 0x1462ffb1  bne         $v1, $v0, . + 4 + (-0x4F << 2)
label_27793c:
    if (ctx->pc == 0x27793Cu) {
        ctx->pc = 0x27793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277938u;
        // 0x27793c: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277940u;
        goto label_277940;
    }
    ctx->pc = 0x277938u;
    {
        const bool branch_taken_0x277938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277938u;
        // 0x27793c: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277938) {
            ctx->pc = 0x277800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277800;
        }
    }
    ctx->pc = 0x277940u;
label_277940:
    // 0x277940: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x277940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_277944:
    // 0x277944: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x277944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_277948:
    // 0x277948: 0x5440ff83  bnel        $v0, $zero, . + 4 + (-0x7D << 2)
label_27794c:
    if (ctx->pc == 0x27794Cu) {
        ctx->pc = 0x27794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277948u;
        // 0x27794c: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277950u;
        goto label_277950;
    }
    ctx->pc = 0x277948u;
    {
        const bool branch_taken_0x277948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277948) {
            ctx->pc = 0x27794Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277948u;
            // 0x27794c: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277758;
        }
    }
    ctx->pc = 0x277950u;
label_277950:
    // 0x277950: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x277950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_277954:
    // 0x277954: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x277954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_277958:
    // 0x277958: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x277958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_27795c:
    // 0x27795c: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x27795cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_277960:
    // 0x277960: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x277960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_277964:
    // 0x277964: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x277964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_277968:
    // 0x277968: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x277968u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_27796c:
    // 0x27796c: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x27796cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_277970:
    // 0x277970: 0x3e00008  jr          $ra
label_277974:
    if (ctx->pc == 0x277974u) {
        ctx->pc = 0x277974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277970u;
        // 0x277974: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277978u;
        goto label_fallthrough_0x277970;
    }
    ctx->pc = 0x277970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277970u;
        // 0x277974: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x277970:
    ctx->pc = 0x277978u;
}
