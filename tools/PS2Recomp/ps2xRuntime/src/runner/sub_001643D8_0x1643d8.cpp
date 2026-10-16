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

// Function: sub_001643D8
// Address: 0x1643d8 - 0x164728
void sub_001643D8_0x1643d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001643D8_0x1643d8");
#endif

    switch (ctx->pc) {
        case 0x1643d8u: goto label_1643d8;
        case 0x1643dcu: goto label_1643dc;
        case 0x1643e0u: goto label_1643e0;
        case 0x1643e4u: goto label_1643e4;
        case 0x1643e8u: goto label_1643e8;
        case 0x1643ecu: goto label_1643ec;
        case 0x1643f0u: goto label_1643f0;
        case 0x1643f4u: goto label_1643f4;
        case 0x1643f8u: goto label_1643f8;
        case 0x1643fcu: goto label_1643fc;
        case 0x164400u: goto label_164400;
        case 0x164404u: goto label_164404;
        case 0x164408u: goto label_164408;
        case 0x16440cu: goto label_16440c;
        case 0x164410u: goto label_164410;
        case 0x164414u: goto label_164414;
        case 0x164418u: goto label_164418;
        case 0x16441cu: goto label_16441c;
        case 0x164420u: goto label_164420;
        case 0x164424u: goto label_164424;
        case 0x164428u: goto label_164428;
        case 0x16442cu: goto label_16442c;
        case 0x164430u: goto label_164430;
        case 0x164434u: goto label_164434;
        case 0x164438u: goto label_164438;
        case 0x16443cu: goto label_16443c;
        case 0x164440u: goto label_164440;
        case 0x164444u: goto label_164444;
        case 0x164448u: goto label_164448;
        case 0x16444cu: goto label_16444c;
        case 0x164450u: goto label_164450;
        case 0x164454u: goto label_164454;
        case 0x164458u: goto label_164458;
        case 0x16445cu: goto label_16445c;
        case 0x164460u: goto label_164460;
        case 0x164464u: goto label_164464;
        case 0x164468u: goto label_164468;
        case 0x16446cu: goto label_16446c;
        case 0x164470u: goto label_164470;
        case 0x164474u: goto label_164474;
        case 0x164478u: goto label_164478;
        case 0x16447cu: goto label_16447c;
        case 0x164480u: goto label_164480;
        case 0x164484u: goto label_164484;
        case 0x164488u: goto label_164488;
        case 0x16448cu: goto label_16448c;
        case 0x164490u: goto label_164490;
        case 0x164494u: goto label_164494;
        case 0x164498u: goto label_164498;
        case 0x16449cu: goto label_16449c;
        case 0x1644a0u: goto label_1644a0;
        case 0x1644a4u: goto label_1644a4;
        case 0x1644a8u: goto label_1644a8;
        case 0x1644acu: goto label_1644ac;
        case 0x1644b0u: goto label_1644b0;
        case 0x1644b4u: goto label_1644b4;
        case 0x1644b8u: goto label_1644b8;
        case 0x1644bcu: goto label_1644bc;
        case 0x1644c0u: goto label_1644c0;
        case 0x1644c4u: goto label_1644c4;
        case 0x1644c8u: goto label_1644c8;
        case 0x1644ccu: goto label_1644cc;
        case 0x1644d0u: goto label_1644d0;
        case 0x1644d4u: goto label_1644d4;
        case 0x1644d8u: goto label_1644d8;
        case 0x1644dcu: goto label_1644dc;
        case 0x1644e0u: goto label_1644e0;
        case 0x1644e4u: goto label_1644e4;
        case 0x1644e8u: goto label_1644e8;
        case 0x1644ecu: goto label_1644ec;
        case 0x1644f0u: goto label_1644f0;
        case 0x1644f4u: goto label_1644f4;
        case 0x1644f8u: goto label_1644f8;
        case 0x1644fcu: goto label_1644fc;
        case 0x164500u: goto label_164500;
        case 0x164504u: goto label_164504;
        case 0x164508u: goto label_164508;
        case 0x16450cu: goto label_16450c;
        case 0x164510u: goto label_164510;
        case 0x164514u: goto label_164514;
        case 0x164518u: goto label_164518;
        case 0x16451cu: goto label_16451c;
        case 0x164520u: goto label_164520;
        case 0x164524u: goto label_164524;
        case 0x164528u: goto label_164528;
        case 0x16452cu: goto label_16452c;
        case 0x164530u: goto label_164530;
        case 0x164534u: goto label_164534;
        case 0x164538u: goto label_164538;
        case 0x16453cu: goto label_16453c;
        case 0x164540u: goto label_164540;
        case 0x164544u: goto label_164544;
        case 0x164548u: goto label_164548;
        case 0x16454cu: goto label_16454c;
        case 0x164550u: goto label_164550;
        case 0x164554u: goto label_164554;
        case 0x164558u: goto label_164558;
        case 0x16455cu: goto label_16455c;
        case 0x164560u: goto label_164560;
        case 0x164564u: goto label_164564;
        case 0x164568u: goto label_164568;
        case 0x16456cu: goto label_16456c;
        case 0x164570u: goto label_164570;
        case 0x164574u: goto label_164574;
        case 0x164578u: goto label_164578;
        case 0x16457cu: goto label_16457c;
        case 0x164580u: goto label_164580;
        case 0x164584u: goto label_164584;
        case 0x164588u: goto label_164588;
        case 0x16458cu: goto label_16458c;
        case 0x164590u: goto label_164590;
        case 0x164594u: goto label_164594;
        case 0x164598u: goto label_164598;
        case 0x16459cu: goto label_16459c;
        case 0x1645a0u: goto label_1645a0;
        case 0x1645a4u: goto label_1645a4;
        case 0x1645a8u: goto label_1645a8;
        case 0x1645acu: goto label_1645ac;
        case 0x1645b0u: goto label_1645b0;
        case 0x1645b4u: goto label_1645b4;
        case 0x1645b8u: goto label_1645b8;
        case 0x1645bcu: goto label_1645bc;
        case 0x1645c0u: goto label_1645c0;
        case 0x1645c4u: goto label_1645c4;
        case 0x1645c8u: goto label_1645c8;
        case 0x1645ccu: goto label_1645cc;
        case 0x1645d0u: goto label_1645d0;
        case 0x1645d4u: goto label_1645d4;
        case 0x1645d8u: goto label_1645d8;
        case 0x1645dcu: goto label_1645dc;
        case 0x1645e0u: goto label_1645e0;
        case 0x1645e4u: goto label_1645e4;
        case 0x1645e8u: goto label_1645e8;
        case 0x1645ecu: goto label_1645ec;
        case 0x1645f0u: goto label_1645f0;
        case 0x1645f4u: goto label_1645f4;
        case 0x1645f8u: goto label_1645f8;
        case 0x1645fcu: goto label_1645fc;
        case 0x164600u: goto label_164600;
        case 0x164604u: goto label_164604;
        case 0x164608u: goto label_164608;
        case 0x16460cu: goto label_16460c;
        case 0x164610u: goto label_164610;
        case 0x164614u: goto label_164614;
        case 0x164618u: goto label_164618;
        case 0x16461cu: goto label_16461c;
        case 0x164620u: goto label_164620;
        case 0x164624u: goto label_164624;
        case 0x164628u: goto label_164628;
        case 0x16462cu: goto label_16462c;
        case 0x164630u: goto label_164630;
        case 0x164634u: goto label_164634;
        case 0x164638u: goto label_164638;
        case 0x16463cu: goto label_16463c;
        case 0x164640u: goto label_164640;
        case 0x164644u: goto label_164644;
        case 0x164648u: goto label_164648;
        case 0x16464cu: goto label_16464c;
        case 0x164650u: goto label_164650;
        case 0x164654u: goto label_164654;
        case 0x164658u: goto label_164658;
        case 0x16465cu: goto label_16465c;
        case 0x164660u: goto label_164660;
        case 0x164664u: goto label_164664;
        case 0x164668u: goto label_164668;
        case 0x16466cu: goto label_16466c;
        case 0x164670u: goto label_164670;
        case 0x164674u: goto label_164674;
        case 0x164678u: goto label_164678;
        case 0x16467cu: goto label_16467c;
        case 0x164680u: goto label_164680;
        case 0x164684u: goto label_164684;
        case 0x164688u: goto label_164688;
        case 0x16468cu: goto label_16468c;
        case 0x164690u: goto label_164690;
        case 0x164694u: goto label_164694;
        case 0x164698u: goto label_164698;
        case 0x16469cu: goto label_16469c;
        case 0x1646a0u: goto label_1646a0;
        case 0x1646a4u: goto label_1646a4;
        case 0x1646a8u: goto label_1646a8;
        case 0x1646acu: goto label_1646ac;
        case 0x1646b0u: goto label_1646b0;
        case 0x1646b4u: goto label_1646b4;
        case 0x1646b8u: goto label_1646b8;
        case 0x1646bcu: goto label_1646bc;
        case 0x1646c0u: goto label_1646c0;
        case 0x1646c4u: goto label_1646c4;
        case 0x1646c8u: goto label_1646c8;
        case 0x1646ccu: goto label_1646cc;
        case 0x1646d0u: goto label_1646d0;
        case 0x1646d4u: goto label_1646d4;
        case 0x1646d8u: goto label_1646d8;
        case 0x1646dcu: goto label_1646dc;
        case 0x1646e0u: goto label_1646e0;
        case 0x1646e4u: goto label_1646e4;
        case 0x1646e8u: goto label_1646e8;
        case 0x1646ecu: goto label_1646ec;
        case 0x1646f0u: goto label_1646f0;
        case 0x1646f4u: goto label_1646f4;
        case 0x1646f8u: goto label_1646f8;
        case 0x1646fcu: goto label_1646fc;
        case 0x164700u: goto label_164700;
        case 0x164704u: goto label_164704;
        case 0x164708u: goto label_164708;
        case 0x16470cu: goto label_16470c;
        case 0x164710u: goto label_164710;
        case 0x164714u: goto label_164714;
        case 0x164718u: goto label_164718;
        case 0x16471cu: goto label_16471c;
        case 0x164720u: goto label_164720;
        case 0x164724u: goto label_164724;
        default: break;
    }

    ctx->pc = 0x1643d8u;

label_1643d8:
    // 0x1643d8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1643d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1643dc:
    // 0x1643dc: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1643dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_1643e0:
    // 0x1643e0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1643e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_1643e4:
    // 0x1643e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1643e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1643e8:
    // 0x1643e8: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1643e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_1643ec:
    // 0x1643ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1643ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1643f0:
    // 0x1643f0: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1643f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_1643f4:
    // 0x1643f4: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x1643f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_1643f8:
    // 0x1643f8: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1643f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_1643fc:
    // 0x1643fc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1643fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_164400:
    // 0x164400: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x164400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_164404:
    // 0x164404: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x164404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_164408:
    // 0x164408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16440c:
    // 0x16440c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x16440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_164410:
    // 0x164410: 0x90520004  lbu         $s2, 0x4($v0)
    ctx->pc = 0x164410u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_164414:
    // 0x164414: 0x2643fffd  addiu       $v1, $s2, -0x3
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
label_164418:
    // 0x164418: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x164418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_16441c:
    // 0x16441c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_164420:
    if (ctx->pc == 0x164420u) {
        ctx->pc = 0x164420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16441Cu;
        // 0x164420: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164424u;
        goto label_164424;
    }
    ctx->pc = 0x16441Cu;
    {
        const bool branch_taken_0x16441c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16441Cu;
        // 0x164420: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16441c) {
            ctx->pc = 0x1644C8u;
            goto label_1644c8;
        }
    }
    ctx->pc = 0x164424u;
label_164424:
    // 0x164424: 0x108000b7  beqz        $a0, . + 4 + (0xB7 << 2)
label_164428:
    if (ctx->pc == 0x164428u) {
        ctx->pc = 0x164428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164424u;
        // 0x164428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16442Cu;
        goto label_16442c;
    }
    ctx->pc = 0x164424u;
    {
        const bool branch_taken_0x164424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164424u;
        // 0x164428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164424) {
            ctx->pc = 0x164704u;
            goto label_164704;
        }
    }
    ctx->pc = 0x16442Cu;
label_16442c:
    // 0x16442c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x16442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_164430:
    // 0x164430: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_164434:
    if (ctx->pc == 0x164434u) {
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164438u;
        goto label_164438;
    }
    ctx->pc = 0x164430u;
    {
        const bool branch_taken_0x164430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164430) {
            ctx->pc = 0x1644BCu;
            goto label_1644bc;
        }
    }
    ctx->pc = 0x164438u;
label_164438:
    // 0x164438: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x164438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_16443c:
    // 0x16443c: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x16443cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_164440:
    // 0x164440: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x164440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_164444:
    // 0x164444: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x164444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_164448:
    // 0x164448: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x164448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_16444c:
    // 0x16444c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x16444cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_164450:
    // 0x164450: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x164450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_164454:
    // 0x164454: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x164454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_164458:
    // 0x164458: 0xb2640007  sdl         $a0, 0x7($s3)
    ctx->pc = 0x164458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16445c:
    // 0x16445c: 0xb6640000  sdr         $a0, 0x0($s3)
    ctx->pc = 0x16445cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164460:
    // 0x164460: 0xb265000f  sdl         $a1, 0xF($s3)
    ctx->pc = 0x164460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_164464:
    // 0x164464: 0xb6650008  sdr         $a1, 0x8($s3)
    ctx->pc = 0x164464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164468:
    // 0x164468: 0xb2660017  sdl         $a2, 0x17($s3)
    ctx->pc = 0x164468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16446c:
    // 0x16446c: 0xb6660010  sdr         $a2, 0x10($s3)
    ctx->pc = 0x16446cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164470:
    // 0x164470: 0xb267001f  sdl         $a3, 0x1F($s3)
    ctx->pc = 0x164470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_164474:
    // 0x164474: 0xb6670018  sdr         $a3, 0x18($s3)
    ctx->pc = 0x164474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164478:
    // 0x164478: 0x68640027  ldl         $a0, 0x27($v1)
    ctx->pc = 0x164478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_16447c:
    // 0x16447c: 0x6c640020  ldr         $a0, 0x20($v1)
    ctx->pc = 0x16447cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_164480:
    // 0x164480: 0x6865002f  ldl         $a1, 0x2F($v1)
    ctx->pc = 0x164480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_164484:
    // 0x164484: 0x6c650028  ldr         $a1, 0x28($v1)
    ctx->pc = 0x164484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_164488:
    // 0x164488: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x164488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_16448c:
    // 0x16448c: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x16448cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_164490:
    // 0x164490: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x164490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_164494:
    // 0x164494: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x164494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_164498:
    // 0x164498: 0xb2640027  sdl         $a0, 0x27($s3)
    ctx->pc = 0x164498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16449c:
    // 0x16449c: 0xb6640020  sdr         $a0, 0x20($s3)
    ctx->pc = 0x16449cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1644a0:
    // 0x1644a0: 0xb265002f  sdl         $a1, 0x2F($s3)
    ctx->pc = 0x1644a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1644a4:
    // 0x1644a4: 0xb6650028  sdr         $a1, 0x28($s3)
    ctx->pc = 0x1644a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1644a8:
    // 0x1644a8: 0xb2660037  sdl         $a2, 0x37($s3)
    ctx->pc = 0x1644a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1644ac:
    // 0x1644ac: 0xb6660030  sdr         $a2, 0x30($s3)
    ctx->pc = 0x1644acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1644b0:
    // 0x1644b0: 0xb267003f  sdl         $a3, 0x3F($s3)
    ctx->pc = 0x1644b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1644b4:
    // 0x1644b4: 0x10000093  b           . + 4 + (0x93 << 2)
label_1644b8:
    if (ctx->pc == 0x1644B8u) {
        ctx->pc = 0x1644B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644B4u;
        // 0x1644b8: 0xb6670038  sdr         $a3, 0x38($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644BCu;
        goto label_1644bc;
    }
    ctx->pc = 0x1644B4u;
    {
        const bool branch_taken_0x1644b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644B4u;
        // 0x1644b8: 0xb6670038  sdr         $a3, 0x38($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644b4) {
            ctx->pc = 0x164704u;
            goto label_164704;
        }
    }
    ctx->pc = 0x1644BCu;
label_1644bc:
    // 0x1644bc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1644c0:
    // 0x1644c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1644c4:
    if (ctx->pc == 0x1644C4u) {
        ctx->pc = 0x1644C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C0u;
        // 0x1644c4: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644C8u;
        goto label_1644c8;
    }
    ctx->pc = 0x1644C0u;
    {
        const bool branch_taken_0x1644c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644c0) {
            ctx->pc = 0x1644C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1644C0u;
            // 0x1644c4: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1644D0u;
            goto label_1644d0;
        }
    }
    ctx->pc = 0x1644C8u;
label_1644c8:
    // 0x1644c8: 0x1000008e  b           . + 4 + (0x8E << 2)
label_1644cc:
    if (ctx->pc == 0x1644CCu) {
        ctx->pc = 0x1644CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C8u;
        // 0x1644cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644D0u;
        goto label_1644d0;
    }
    ctx->pc = 0x1644C8u;
    {
        const bool branch_taken_0x1644c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C8u;
        // 0x1644cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644c8) {
            ctx->pc = 0x164704u;
            goto label_164704;
        }
    }
    ctx->pc = 0x1644D0u;
label_1644d0:
    // 0x1644d0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1644d4:
    if (ctx->pc == 0x1644D4u) {
        ctx->pc = 0x1644D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644D0u;
        // 0x1644d4: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644D8u;
        goto label_1644d8;
    }
    ctx->pc = 0x1644D0u;
    {
        const bool branch_taken_0x1644d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1644d0) {
            ctx->pc = 0x1644D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1644D0u;
            // 0x1644d4: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1644F8u;
            goto label_1644f8;
        }
    }
    ctx->pc = 0x1644D8u;
label_1644d8:
    // 0x1644d8: 0x40f809  jalr        $v0
label_1644dc:
    if (ctx->pc == 0x1644DCu) {
        ctx->pc = 0x1644DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644D8u;
        // 0x1644dc: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644E0u;
        goto label_1644e0;
    }
    ctx->pc = 0x1644D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1644E0u);
        ctx->pc = 0x1644DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644D8u;
        // 0x1644dc: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1644D8u, 0x1644E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1644E0u;
label_1644e0:
    // 0x1644e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1644e4:
    if (ctx->pc == 0x1644E4u) {
        ctx->pc = 0x1644E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644E0u;
        // 0x1644e4: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644E8u;
        goto label_1644e8;
    }
    ctx->pc = 0x1644E0u;
    {
        const bool branch_taken_0x1644e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644e0) {
            ctx->pc = 0x1644E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1644E0u;
            // 0x1644e4: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1644F8u;
            goto label_1644f8;
        }
    }
    ctx->pc = 0x1644E8u;
label_1644e8:
    // 0x1644e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1644ec:
    // 0x1644ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1644ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1644f0:
    // 0x1644f0: 0x10000084  b           . + 4 + (0x84 << 2)
label_1644f4:
    if (ctx->pc == 0x1644F4u) {
        ctx->pc = 0x1644F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F0u;
        // 0x1644f4: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644F8u;
        goto label_1644f8;
    }
    ctx->pc = 0x1644F0u;
    {
        const bool branch_taken_0x1644f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F0u;
        // 0x1644f4: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644f0) {
            ctx->pc = 0x164704u;
            goto label_164704;
        }
    }
    ctx->pc = 0x1644F8u;
label_1644f8:
    // 0x1644f8: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1644f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1644fc:
    // 0x1644fc: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1644fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_164500:
    // 0x164500: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_164504:
    // 0x164504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_164508:
    // 0x164508: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_16450c:
    // 0x16450c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x16450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_164510:
    // 0x164510: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x164510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_164514:
    // 0x164514: 0x90510005  lbu         $s1, 0x5($v0)
    ctx->pc = 0x164514u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_164518:
    // 0x164518: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x164518u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16451c:
    // 0x16451c: 0x3a2200ff  xori        $v0, $s1, 0xFF
    ctx->pc = 0x16451cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)255);
label_164520:
    // 0x164520: 0xc0f809  jalr        $a2
label_164524:
    if (ctx->pc == 0x164524u) {
        ctx->pc = 0x164524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164520u;
        // 0x164524: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164528u;
        goto label_164528;
    }
    ctx->pc = 0x164520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x164528u);
        ctx->pc = 0x164524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164520u;
        // 0x164524: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164520u, 0x164528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164528u;
label_164528:
    // 0x164528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16452c:
    // 0x16452c: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
label_164530:
    if (ctx->pc == 0x164530u) {
        ctx->pc = 0x164530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16452Cu;
        // 0x164530: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164534u;
        goto label_164534;
    }
    ctx->pc = 0x16452Cu;
    {
        const bool branch_taken_0x16452c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x164530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16452Cu;
        // 0x164530: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16452c) {
            ctx->pc = 0x164574u;
            goto label_164574;
        }
    }
    ctx->pc = 0x164534u;
label_164534:
    // 0x164534: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
label_164538:
    if (ctx->pc == 0x164538u) {
        ctx->pc = 0x164538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164534u;
        // 0x164538: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16453Cu;
        goto label_16453c;
    }
    ctx->pc = 0x164534u;
    {
        const bool branch_taken_0x164534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164534) {
            ctx->pc = 0x164538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164534u;
            // 0x164538: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1646C8u;
            goto label_1646c8;
        }
    }
    ctx->pc = 0x16453Cu;
label_16453c:
    // 0x16453c: 0x56400062  bnel        $s2, $zero, . + 4 + (0x62 << 2)
label_164540:
    if (ctx->pc == 0x164540u) {
        ctx->pc = 0x164540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16453Cu;
        // 0x164540: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164544u;
        goto label_164544;
    }
    ctx->pc = 0x16453Cu;
    {
        const bool branch_taken_0x16453c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16453c) {
            ctx->pc = 0x164540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16453Cu;
            // 0x164540: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1646C8u;
            goto label_1646c8;
        }
    }
    ctx->pc = 0x164544u;
label_164544:
    // 0x164544: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x164544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_164548:
    // 0x164548: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x164548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16454c:
    // 0x16454c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x16454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_164550:
    // 0x164550: 0x40f809  jalr        $v0
label_164554:
    if (ctx->pc == 0x164554u) {
        ctx->pc = 0x164554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164550u;
        // 0x164554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164558u;
        goto label_164558;
    }
    ctx->pc = 0x164550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164558u);
        ctx->pc = 0x164554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164550u;
        // 0x164554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164550u, 0x164558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164558u;
label_164558:
    // 0x164558: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16455c:
    // 0x16455c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16455cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_164560:
    // 0x164560: 0xc092fa4  jal         func_24BE90
label_164564:
    if (ctx->pc == 0x164564u) {
        ctx->pc = 0x164564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164560u;
        // 0x164564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164568u;
        goto label_164568;
    }
    ctx->pc = 0x164560u;
    SET_GPR_U32(ctx, 31, 0x164568u);
    ctx->pc = 0x164564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164560u;
    // 0x164564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x164560u, 0x164568u)) {
        return;
    }
    ctx->pc = 0x164568u;
label_164568:
    // 0x164568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16456c:
    // 0x16456c: 0x10000052  b           . + 4 + (0x52 << 2)
label_164570:
    if (ctx->pc == 0x164570u) {
        ctx->pc = 0x164570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16456Cu;
        // 0x164570: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164574u;
        goto label_164574;
    }
    ctx->pc = 0x16456Cu;
    {
        const bool branch_taken_0x16456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16456Cu;
        // 0x164570: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16456c) {
            ctx->pc = 0x1646B8u;
            goto label_1646b8;
        }
    }
    ctx->pc = 0x164574u;
label_164574:
    // 0x164574: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x164574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_164578:
    // 0x164578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16457c:
    // 0x16457c: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_164580:
    // 0x164580: 0x40f809  jalr        $v0
label_164584:
    if (ctx->pc == 0x164584u) {
        ctx->pc = 0x164584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164580u;
        // 0x164584: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164588u;
        goto label_164588;
    }
    ctx->pc = 0x164580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164588u);
        ctx->pc = 0x164584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164580u;
        // 0x164584: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164580u, 0x164588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164588u;
label_164588:
    // 0x164588: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x164588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_16458c:
    // 0x16458c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x16458cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_164590:
    // 0x164590: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x164590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_164594:
    // 0x164594: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x164594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_164598:
    // 0x164598: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x164598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_16459c:
    // 0x16459c: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x16459cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1645a0:
    // 0x1645a0: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x1645a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1645a4:
    // 0x1645a4: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x1645a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1645a8:
    // 0x1645a8: 0xb3a20087  sdl         $v0, 0x87($sp)
    ctx->pc = 0x1645a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645ac:
    // 0x1645ac: 0xb7a20080  sdr         $v0, 0x80($sp)
    ctx->pc = 0x1645acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645b0:
    // 0x1645b0: 0xb3a3008f  sdl         $v1, 0x8F($sp)
    ctx->pc = 0x1645b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645b4:
    // 0x1645b4: 0xb7a30088  sdr         $v1, 0x88($sp)
    ctx->pc = 0x1645b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645b8:
    // 0x1645b8: 0xb3a40097  sdl         $a0, 0x97($sp)
    ctx->pc = 0x1645b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645bc:
    // 0x1645bc: 0xb7a40090  sdr         $a0, 0x90($sp)
    ctx->pc = 0x1645bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645c0:
    // 0x1645c0: 0xb3a5009f  sdl         $a1, 0x9F($sp)
    ctx->pc = 0x1645c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645c4:
    // 0x1645c4: 0xb7a50098  sdr         $a1, 0x98($sp)
    ctx->pc = 0x1645c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645c8:
    // 0x1645c8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1645c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1645cc:
    // 0x1645cc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1645ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1645d0:
    // 0x1645d0: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x1645d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1645d4:
    // 0x1645d4: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1645d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1645d8:
    // 0x1645d8: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x1645d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1645dc:
    // 0x1645dc: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x1645dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1645e0:
    // 0x1645e0: 0x6ba5003f  ldl         $a1, 0x3F($sp)
    ctx->pc = 0x1645e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1645e4:
    // 0x1645e4: 0x6fa50038  ldr         $a1, 0x38($sp)
    ctx->pc = 0x1645e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1645e8:
    // 0x1645e8: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x1645e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645ec:
    // 0x1645ec: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x1645ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645f0:
    // 0x1645f0: 0xb3a300af  sdl         $v1, 0xAF($sp)
    ctx->pc = 0x1645f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645f4:
    // 0x1645f4: 0xb7a300a8  sdr         $v1, 0xA8($sp)
    ctx->pc = 0x1645f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645f8:
    // 0x1645f8: 0xb3a400b7  sdl         $a0, 0xB7($sp)
    ctx->pc = 0x1645f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1645fc:
    // 0x1645fc: 0xb7a400b0  sdr         $a0, 0xB0($sp)
    ctx->pc = 0x1645fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164600:
    // 0x164600: 0xb3a500bf  sdl         $a1, 0xBF($sp)
    ctx->pc = 0x164600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_164604:
    // 0x164604: 0xb7a500b8  sdr         $a1, 0xB8($sp)
    ctx->pc = 0x164604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164608:
    // 0x164608: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x164608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16460c:
    // 0x16460c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x16460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_164610:
    // 0x164610: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x164610u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_164614:
    // 0x164614: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x164614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_164618:
    // 0x164618: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x164618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16461c:
    // 0x16461c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16461cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_164620:
    // 0x164620: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x164620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_164624:
    // 0x164624: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x164624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_164628:
    // 0x164628: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x164628u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_16462c:
    // 0x16462c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x16462cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_164630:
    // 0x164630: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x164630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_164634:
    // 0x164634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164638:
    // 0x164638: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x164638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_16463c:
    // 0x16463c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x16463cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_164640:
    // 0x164640: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x164640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_164644:
    // 0x164644: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x164644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_164648:
    // 0x164648: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x164648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16464c:
    // 0x16464c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164650:
    // 0x164650: 0xc092f34  jal         func_24BCD0
label_164654:
    if (ctx->pc == 0x164654u) {
        ctx->pc = 0x164654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164650u;
        // 0x164654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164658u;
        goto label_164658;
    }
    ctx->pc = 0x164650u;
    SET_GPR_U32(ctx, 31, 0x164658u);
    ctx->pc = 0x164654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164650u;
    // 0x164654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x164650u, 0x164658u)) {
        return;
    }
    ctx->pc = 0x164658u;
label_164658:
    // 0x164658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16465c:
    // 0x16465c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x16465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_164660:
    // 0x164660: 0xc092fa4  jal         func_24BE90
label_164664:
    if (ctx->pc == 0x164664u) {
        ctx->pc = 0x164664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164660u;
        // 0x164664: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164668u;
        goto label_164668;
    }
    ctx->pc = 0x164660u;
    SET_GPR_U32(ctx, 31, 0x164668u);
    ctx->pc = 0x164664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164660u;
    // 0x164664: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x164660u, 0x164668u)) {
        return;
    }
    ctx->pc = 0x164668u;
label_164668:
    // 0x164668: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x164668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16466c:
    // 0x16466c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x16466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_164670:
    // 0x164670: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x164670u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_164674:
    // 0x164674: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x164674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_164678:
    // 0x164678: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x164678u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_16467c:
    // 0x16467c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16467cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_164680:
    // 0x164680: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x164680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_164684:
    // 0x164684: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x164684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_164688:
    // 0x164688: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x164688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_16468c:
    // 0x16468c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164690:
    // 0x164690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164694:
    // 0x164694: 0xc092f34  jal         func_24BCD0
label_164698:
    if (ctx->pc == 0x164698u) {
        ctx->pc = 0x164698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164694u;
        // 0x164698: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16469Cu;
        goto label_16469c;
    }
    ctx->pc = 0x164694u;
    SET_GPR_U32(ctx, 31, 0x16469Cu);
    ctx->pc = 0x164698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164694u;
    // 0x164698: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x164694u, 0x16469Cu)) {
        return;
    }
    ctx->pc = 0x16469Cu;
label_16469c:
    // 0x16469c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1646a0:
    // 0x1646a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1646a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1646a4:
    // 0x1646a4: 0xc092fa4  jal         func_24BE90
label_1646a8:
    if (ctx->pc == 0x1646A8u) {
        ctx->pc = 0x1646A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646A4u;
        // 0x1646a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646ACu;
        goto label_1646ac;
    }
    ctx->pc = 0x1646A4u;
    SET_GPR_U32(ctx, 31, 0x1646ACu);
    ctx->pc = 0x1646A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1646A4u;
    // 0x1646a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x1646A4u, 0x1646ACu)) {
        return;
    }
    ctx->pc = 0x1646ACu;
label_1646ac:
    // 0x1646ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1646acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1646b0:
    // 0x1646b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1646b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1646b4:
    // 0x1646b4: 0x0  nop
    ctx->pc = 0x1646b4u;
    // NOP
label_1646b8:
    // 0x1646b8: 0xc092fa4  jal         func_24BE90
label_1646bc:
    if (ctx->pc == 0x1646BCu) {
        ctx->pc = 0x1646BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646B8u;
        // 0x1646bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646C0u;
        goto label_1646c0;
    }
    ctx->pc = 0x1646B8u;
    SET_GPR_U32(ctx, 31, 0x1646C0u);
    ctx->pc = 0x1646BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1646B8u;
    // 0x1646bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x1646B8u, 0x1646C0u)) {
        return;
    }
    ctx->pc = 0x1646C0u;
label_1646c0:
    // 0x1646c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1646c4:
    if (ctx->pc == 0x1646C4u) {
        ctx->pc = 0x1646C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C0u;
        // 0x1646c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646C8u;
        goto label_1646c8;
    }
    ctx->pc = 0x1646C0u;
    {
        const bool branch_taken_0x1646c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C0u;
        // 0x1646c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646c0) {
            ctx->pc = 0x164704u;
            goto label_164704;
        }
    }
    ctx->pc = 0x1646C8u;
label_1646c8:
    // 0x1646c8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x1646c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_1646cc:
    // 0x1646cc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1646d0:
    if (ctx->pc == 0x1646D0u) {
        ctx->pc = 0x1646D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646CCu;
        // 0x1646d0: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646D4u;
        goto label_1646d4;
    }
    ctx->pc = 0x1646CCu;
    {
        const bool branch_taken_0x1646cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1646cc) {
            ctx->pc = 0x1646D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1646CCu;
            // 0x1646d0: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1646F4u;
            goto label_1646f4;
        }
    }
    ctx->pc = 0x1646D4u;
label_1646d4:
    // 0x1646d4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1646d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1646d8:
    // 0x1646d8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1646d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1646dc:
    // 0x1646dc: 0x60f809  jalr        $v1
label_1646e0:
    if (ctx->pc == 0x1646E0u) {
        ctx->pc = 0x1646E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646DCu;
        // 0x1646e0: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646E4u;
        goto label_1646e4;
    }
    ctx->pc = 0x1646DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1646E4u);
        ctx->pc = 0x1646E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646DCu;
        // 0x1646e0: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1646DCu, 0x1646E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1646E4u;
label_1646e4:
    // 0x1646e4: 0x96020034  lhu         $v0, 0x34($s0)
    ctx->pc = 0x1646e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1646e8:
    // 0x1646e8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1646e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_1646ec:
    // 0x1646ec: 0xa6020034  sh          $v0, 0x34($s0)
    ctx->pc = 0x1646ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 2));
label_1646f0:
    // 0x1646f0: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1646f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1646f4:
    // 0x1646f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1646f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1646f8:
    // 0x1646f8: 0xc092fa4  jal         func_24BE90
label_1646fc:
    if (ctx->pc == 0x1646FCu) {
        ctx->pc = 0x1646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646F8u;
        // 0x1646fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164700u;
        goto label_164700;
    }
    ctx->pc = 0x1646F8u;
    SET_GPR_U32(ctx, 31, 0x164700u);
    ctx->pc = 0x1646FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1646F8u;
    // 0x1646fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x1646F8u, 0x164700u)) {
        return;
    }
    ctx->pc = 0x164700u;
label_164700:
    // 0x164700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164704:
    // 0x164704: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x164704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_164708:
    // 0x164708: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x164708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_16470c:
    // 0x16470c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x16470cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_164710:
    // 0x164710: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x164710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_164714:
    // 0x164714: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x164714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_164718:
    // 0x164718: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x164718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_16471c:
    // 0x16471c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x16471cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_164720:
    // 0x164720: 0x3e00008  jr          $ra
label_164724:
    if (ctx->pc == 0x164724u) {
        ctx->pc = 0x164724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164720u;
        // 0x164724: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164728u;
        goto label_fallthrough_0x164720;
    }
    ctx->pc = 0x164720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164720u;
        // 0x164724: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x164720:
    ctx->pc = 0x164728u;
}
