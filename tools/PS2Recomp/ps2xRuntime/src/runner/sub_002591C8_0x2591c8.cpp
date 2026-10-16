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

// Function: sub_002591C8
// Address: 0x2591c8 - 0x259470
void sub_002591C8_0x2591c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002591C8_0x2591c8");
#endif

    switch (ctx->pc) {
        case 0x2591c8u: goto label_2591c8;
        case 0x2591ccu: goto label_2591cc;
        case 0x2591d0u: goto label_2591d0;
        case 0x2591d4u: goto label_2591d4;
        case 0x2591d8u: goto label_2591d8;
        case 0x2591dcu: goto label_2591dc;
        case 0x2591e0u: goto label_2591e0;
        case 0x2591e4u: goto label_2591e4;
        case 0x2591e8u: goto label_2591e8;
        case 0x2591ecu: goto label_2591ec;
        case 0x2591f0u: goto label_2591f0;
        case 0x2591f4u: goto label_2591f4;
        case 0x2591f8u: goto label_2591f8;
        case 0x2591fcu: goto label_2591fc;
        case 0x259200u: goto label_259200;
        case 0x259204u: goto label_259204;
        case 0x259208u: goto label_259208;
        case 0x25920cu: goto label_25920c;
        case 0x259210u: goto label_259210;
        case 0x259214u: goto label_259214;
        case 0x259218u: goto label_259218;
        case 0x25921cu: goto label_25921c;
        case 0x259220u: goto label_259220;
        case 0x259224u: goto label_259224;
        case 0x259228u: goto label_259228;
        case 0x25922cu: goto label_25922c;
        case 0x259230u: goto label_259230;
        case 0x259234u: goto label_259234;
        case 0x259238u: goto label_259238;
        case 0x25923cu: goto label_25923c;
        case 0x259240u: goto label_259240;
        case 0x259244u: goto label_259244;
        case 0x259248u: goto label_259248;
        case 0x25924cu: goto label_25924c;
        case 0x259250u: goto label_259250;
        case 0x259254u: goto label_259254;
        case 0x259258u: goto label_259258;
        case 0x25925cu: goto label_25925c;
        case 0x259260u: goto label_259260;
        case 0x259264u: goto label_259264;
        case 0x259268u: goto label_259268;
        case 0x25926cu: goto label_25926c;
        case 0x259270u: goto label_259270;
        case 0x259274u: goto label_259274;
        case 0x259278u: goto label_259278;
        case 0x25927cu: goto label_25927c;
        case 0x259280u: goto label_259280;
        case 0x259284u: goto label_259284;
        case 0x259288u: goto label_259288;
        case 0x25928cu: goto label_25928c;
        case 0x259290u: goto label_259290;
        case 0x259294u: goto label_259294;
        case 0x259298u: goto label_259298;
        case 0x25929cu: goto label_25929c;
        case 0x2592a0u: goto label_2592a0;
        case 0x2592a4u: goto label_2592a4;
        case 0x2592a8u: goto label_2592a8;
        case 0x2592acu: goto label_2592ac;
        case 0x2592b0u: goto label_2592b0;
        case 0x2592b4u: goto label_2592b4;
        case 0x2592b8u: goto label_2592b8;
        case 0x2592bcu: goto label_2592bc;
        case 0x2592c0u: goto label_2592c0;
        case 0x2592c4u: goto label_2592c4;
        case 0x2592c8u: goto label_2592c8;
        case 0x2592ccu: goto label_2592cc;
        case 0x2592d0u: goto label_2592d0;
        case 0x2592d4u: goto label_2592d4;
        case 0x2592d8u: goto label_2592d8;
        case 0x2592dcu: goto label_2592dc;
        case 0x2592e0u: goto label_2592e0;
        case 0x2592e4u: goto label_2592e4;
        case 0x2592e8u: goto label_2592e8;
        case 0x2592ecu: goto label_2592ec;
        case 0x2592f0u: goto label_2592f0;
        case 0x2592f4u: goto label_2592f4;
        case 0x2592f8u: goto label_2592f8;
        case 0x2592fcu: goto label_2592fc;
        case 0x259300u: goto label_259300;
        case 0x259304u: goto label_259304;
        case 0x259308u: goto label_259308;
        case 0x25930cu: goto label_25930c;
        case 0x259310u: goto label_259310;
        case 0x259314u: goto label_259314;
        case 0x259318u: goto label_259318;
        case 0x25931cu: goto label_25931c;
        case 0x259320u: goto label_259320;
        case 0x259324u: goto label_259324;
        case 0x259328u: goto label_259328;
        case 0x25932cu: goto label_25932c;
        case 0x259330u: goto label_259330;
        case 0x259334u: goto label_259334;
        case 0x259338u: goto label_259338;
        case 0x25933cu: goto label_25933c;
        case 0x259340u: goto label_259340;
        case 0x259344u: goto label_259344;
        case 0x259348u: goto label_259348;
        case 0x25934cu: goto label_25934c;
        case 0x259350u: goto label_259350;
        case 0x259354u: goto label_259354;
        case 0x259358u: goto label_259358;
        case 0x25935cu: goto label_25935c;
        case 0x259360u: goto label_259360;
        case 0x259364u: goto label_259364;
        case 0x259368u: goto label_259368;
        case 0x25936cu: goto label_25936c;
        case 0x259370u: goto label_259370;
        case 0x259374u: goto label_259374;
        case 0x259378u: goto label_259378;
        case 0x25937cu: goto label_25937c;
        case 0x259380u: goto label_259380;
        case 0x259384u: goto label_259384;
        case 0x259388u: goto label_259388;
        case 0x25938cu: goto label_25938c;
        case 0x259390u: goto label_259390;
        case 0x259394u: goto label_259394;
        case 0x259398u: goto label_259398;
        case 0x25939cu: goto label_25939c;
        case 0x2593a0u: goto label_2593a0;
        case 0x2593a4u: goto label_2593a4;
        case 0x2593a8u: goto label_2593a8;
        case 0x2593acu: goto label_2593ac;
        case 0x2593b0u: goto label_2593b0;
        case 0x2593b4u: goto label_2593b4;
        case 0x2593b8u: goto label_2593b8;
        case 0x2593bcu: goto label_2593bc;
        case 0x2593c0u: goto label_2593c0;
        case 0x2593c4u: goto label_2593c4;
        case 0x2593c8u: goto label_2593c8;
        case 0x2593ccu: goto label_2593cc;
        case 0x2593d0u: goto label_2593d0;
        case 0x2593d4u: goto label_2593d4;
        case 0x2593d8u: goto label_2593d8;
        case 0x2593dcu: goto label_2593dc;
        case 0x2593e0u: goto label_2593e0;
        case 0x2593e4u: goto label_2593e4;
        case 0x2593e8u: goto label_2593e8;
        case 0x2593ecu: goto label_2593ec;
        case 0x2593f0u: goto label_2593f0;
        case 0x2593f4u: goto label_2593f4;
        case 0x2593f8u: goto label_2593f8;
        case 0x2593fcu: goto label_2593fc;
        case 0x259400u: goto label_259400;
        case 0x259404u: goto label_259404;
        case 0x259408u: goto label_259408;
        case 0x25940cu: goto label_25940c;
        case 0x259410u: goto label_259410;
        case 0x259414u: goto label_259414;
        case 0x259418u: goto label_259418;
        case 0x25941cu: goto label_25941c;
        case 0x259420u: goto label_259420;
        case 0x259424u: goto label_259424;
        case 0x259428u: goto label_259428;
        case 0x25942cu: goto label_25942c;
        case 0x259430u: goto label_259430;
        case 0x259434u: goto label_259434;
        case 0x259438u: goto label_259438;
        case 0x25943cu: goto label_25943c;
        case 0x259440u: goto label_259440;
        case 0x259444u: goto label_259444;
        case 0x259448u: goto label_259448;
        case 0x25944cu: goto label_25944c;
        case 0x259450u: goto label_259450;
        case 0x259454u: goto label_259454;
        case 0x259458u: goto label_259458;
        case 0x25945cu: goto label_25945c;
        case 0x259460u: goto label_259460;
        case 0x259464u: goto label_259464;
        case 0x259468u: goto label_259468;
        case 0x25946cu: goto label_25946c;
        default: break;
    }

    ctx->pc = 0x2591c8u;

label_2591c8:
    // 0x2591c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2591c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2591cc:
    // 0x2591cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2591ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2591d0:
    // 0x2591d0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2591d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2591d4:
    // 0x2591d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2591d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2591d8:
    // 0x2591d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2591d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2591dc:
    // 0x2591dc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2591dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2591e0:
    // 0x2591e0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2591e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_2591e4:
    // 0x2591e4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2591e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2591e8:
    // 0x2591e8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2591e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2591ec:
    // 0x2591ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2591ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2591f0:
    // 0x2591f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2591f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2591f4:
    // 0x2591f4: 0x3c170073  lui         $s7, 0x73
    ctx->pc = 0x2591f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
label_2591f8:
    // 0x2591f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2591f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2591fc:
    // 0x2591fc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2591fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_259200:
    // 0x259200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_259204:
    // 0x259204: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_259208:
    if (ctx->pc == 0x259208u) {
        ctx->pc = 0x259208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259204u;
        // 0x259208: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25920Cu;
        goto label_25920c;
    }
    ctx->pc = 0x259204u;
    {
        const bool branch_taken_0x259204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259204) {
            ctx->pc = 0x259208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259204u;
            // 0x259208: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25920Cu;
            goto label_25920c;
        }
    }
    ctx->pc = 0x25920Cu;
label_25920c:
    // 0x25920c: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x25920cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_259210:
    // 0x259210: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x259210u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_259214:
    // 0x259214: 0x9812  mflo        $s3
    ctx->pc = 0x259214u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_259218:
    // 0x259218: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_25921c:
    if (ctx->pc == 0x25921Cu) {
        ctx->pc = 0x25921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259218u;
        // 0x25921c: 0x8ed00000  lw          $s0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259220u;
        goto label_259220;
    }
    ctx->pc = 0x259218u;
    {
        const bool branch_taken_0x259218 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259218u;
        // 0x25921c: 0x8ed00000  lw          $s0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259218) {
            ctx->pc = 0x259240u;
            goto label_259240;
        }
    }
    ctx->pc = 0x259220u;
label_259220:
    // 0x259220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x259220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259224:
    // 0x259224: 0x0  nop
    ctx->pc = 0x259224u;
    // NOP
label_259228:
    // 0x259228: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x259228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25922c:
    // 0x25922c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25922cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_259230:
    // 0x259230: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x259230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_259234:
    // 0x259234: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x259234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_259238:
    // 0x259238: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_25923c:
    if (ctx->pc == 0x25923Cu) {
        ctx->pc = 0x25923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259238u;
        // 0x25923c: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259240u;
        goto label_259240;
    }
    ctx->pc = 0x259238u;
    {
        const bool branch_taken_0x259238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259238u;
        // 0x25923c: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259238) {
            ctx->pc = 0x259228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259228;
        }
    }
    ctx->pc = 0x259240u;
label_259240:
    // 0x259240: 0x26f20fc8  addiu       $s2, $s7, 0xFC8
    ctx->pc = 0x259240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_259244:
    // 0x259244: 0x2495001f  addiu       $s5, $a0, 0x1F
    ctx->pc = 0x259244u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_259248:
    // 0x259248: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x259248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_25924c:
    // 0x25924c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25924cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_259250:
    // 0x259250: 0x1520c2  srl         $a0, $s5, 3
    ctx->pc = 0x259250u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 3));
label_259254:
    // 0x259254: 0x40f809  jalr        $v0
label_259258:
    if (ctx->pc == 0x259258u) {
        ctx->pc = 0x259258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259254u;
        // 0x259258: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25925Cu;
        goto label_25925c;
    }
    ctx->pc = 0x259254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25925Cu);
        ctx->pc = 0x259258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259254u;
        // 0x259258: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259254u, 0x25925Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25925Cu;
label_25925c:
    // 0x25925c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25925cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259260:
    // 0x259260: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
label_259264:
    if (ctx->pc == 0x259264u) {
        ctx->pc = 0x259264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259260u;
        // 0x259264: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259268u;
        goto label_259268;
    }
    ctx->pc = 0x259260u;
    {
        const bool branch_taken_0x259260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x259264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259260u;
        // 0x259264: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259260) {
            ctx->pc = 0x259440u;
            goto label_259440;
        }
    }
    ctx->pc = 0x259268u;
label_259268:
    // 0x259268: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x259268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_25926c:
    // 0x25926c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x25926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_259270:
    // 0x259270: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x259270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_259274:
    // 0x259274: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x259274u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_259278:
    // 0x259278: 0x40f809  jalr        $v0
label_25927c:
    if (ctx->pc == 0x25927Cu) {
        ctx->pc = 0x25927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259278u;
        // 0x25927c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259280u;
        goto label_259280;
    }
    ctx->pc = 0x259278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259280u);
        ctx->pc = 0x25927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259278u;
        // 0x25927c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259278u, 0x259280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259280u;
label_259280:
    // 0x259280: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x259280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259284:
    // 0x259284: 0x1280006a  beqz        $s4, . + 4 + (0x6A << 2)
label_259288:
    if (ctx->pc == 0x259288u) {
        ctx->pc = 0x259288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259284u;
        // 0x259288: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25928Cu;
        goto label_25928c;
    }
    ctx->pc = 0x259284u;
    {
        const bool branch_taken_0x259284 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x259288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259284u;
        // 0x259288: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259284) {
            ctx->pc = 0x259430u;
            goto label_259430;
        }
    }
    ctx->pc = 0x25928Cu;
label_25928c:
    // 0x25928c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259290:
    // 0x259290: 0xc075fdc  jal         func_1D7F70
label_259294:
    if (ctx->pc == 0x259294u) {
        ctx->pc = 0x259294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259290u;
        // 0x259294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259298u;
        goto label_259298;
    }
    ctx->pc = 0x259290u;
    SET_GPR_U32(ctx, 31, 0x259298u);
    ctx->pc = 0x259294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259290u;
    // 0x259294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x259290u, 0x259298u)) {
        return;
    }
    ctx->pc = 0x259298u;
label_259298:
    // 0x259298: 0x12600061  beqz        $s3, . + 4 + (0x61 << 2)
label_25929c:
    if (ctx->pc == 0x25929Cu) {
        ctx->pc = 0x25929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259298u;
        // 0x25929c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2592A0u;
        goto label_2592a0;
    }
    ctx->pc = 0x259298u;
    {
        const bool branch_taken_0x259298 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259298u;
        // 0x25929c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259298) {
            ctx->pc = 0x259420u;
            goto label_259420;
        }
    }
    ctx->pc = 0x2592A0u;
label_2592a0:
    // 0x2592a0: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x2592a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
label_2592a4:
    // 0x2592a4: 0x2a0782d  daddu       $t7, $s5, $zero
    ctx->pc = 0x2592a4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2592a8:
    // 0x2592a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2592a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2592ac:
    // 0x2592ac: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x2592acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_2592b0:
    // 0x2592b0: 0xf10c2  srl         $v0, $t7, 3
    ctx->pc = 0x2592b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 3));
label_2592b4:
    // 0x2592b4: 0x0  nop
    ctx->pc = 0x2592b4u;
    // NOP
label_2592b8:
    // 0x2592b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2592b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2592bc:
    // 0x2592bc: 0x104e000a  beq         $v0, $t6, . + 4 + (0xA << 2)
label_2592c0:
    if (ctx->pc == 0x2592C0u) {
        ctx->pc = 0x2592C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592BCu;
        // 0x2592c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2592C4u;
        goto label_2592c4;
    }
    ctx->pc = 0x2592BCu;
    {
        const bool branch_taken_0x2592bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        ctx->pc = 0x2592C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592BCu;
        // 0x2592c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592bc) {
            ctx->pc = 0x2592E8u;
            goto label_2592e8;
        }
    }
    ctx->pc = 0x2592C4u;
label_2592c4:
    // 0x2592c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2592c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2592c8:
    // 0x2592c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2592c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2592cc:
    // 0x2592cc: 0x0  nop
    ctx->pc = 0x2592ccu;
    // NOP
label_2592d0:
    // 0x2592d0: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x2592d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
label_2592d4:
    // 0x2592d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2592d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2592d8:
    // 0x2592d8: 0x0  nop
    ctx->pc = 0x2592d8u;
    // NOP
label_2592dc:
    // 0x2592dc: 0x0  nop
    ctx->pc = 0x2592dcu;
    // NOP
label_2592e0:
    // 0x2592e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_2592e4:
    if (ctx->pc == 0x2592E4u) {
        ctx->pc = 0x2592E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592E0u;
        // 0x2592e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2592E8u;
        goto label_2592e8;
    }
    ctx->pc = 0x2592E0u;
    {
        const bool branch_taken_0x2592e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2592E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592E0u;
        // 0x2592e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592e0) {
            ctx->pc = 0x2592D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2592d0;
        }
    }
    ctx->pc = 0x2592E8u;
label_2592e8:
    // 0x2592e8: 0x1260004a  beqz        $s3, . + 4 + (0x4A << 2)
label_2592ec:
    if (ctx->pc == 0x2592ECu) {
        ctx->pc = 0x2592ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592E8u;
        // 0x2592ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2592F0u;
        goto label_2592f0;
    }
    ctx->pc = 0x2592E8u;
    {
        const bool branch_taken_0x2592e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592E8u;
        // 0x2592ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592e8) {
            ctx->pc = 0x259414u;
            goto label_259414;
        }
    }
    ctx->pc = 0x2592F0u;
label_2592f0:
    // 0x2592f0: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x2592f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2592f4:
    // 0x2592f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2592f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2592f8:
    // 0x2592f8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2592f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2592fc:
    // 0x2592fc: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x2592fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_259300:
    // 0x259300: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x259300u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_259304:
    // 0x259304: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x259304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_259308:
    // 0x259308: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x259308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_25930c:
    // 0x25930c: 0x104d003d  beq         $v0, $t5, . + 4 + (0x3D << 2)
label_259310:
    if (ctx->pc == 0x259310u) {
        ctx->pc = 0x259310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25930Cu;
        // 0x259310: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259314u;
        goto label_259314;
    }
    ctx->pc = 0x25930Cu;
    {
        const bool branch_taken_0x25930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x259310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25930Cu;
        // 0x259310: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25930c) {
            ctx->pc = 0x259404u;
            goto label_259404;
        }
    }
    ctx->pc = 0x259314u;
label_259314:
    // 0x259314: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x259314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259318:
    // 0x259318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25931c:
    // 0x25931c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x25931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_259320:
    // 0x259320: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x259320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_259324:
    // 0x259324: 0x6a4004  sllv        $t0, $t2, $v1
    ctx->pc = 0x259324u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
label_259328:
    // 0x259328: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x259328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_25932c:
    // 0x25932c: 0xe81024  and         $v0, $a3, $t0
    ctx->pc = 0x25932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_259330:
    // 0x259330: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_259334:
    if (ctx->pc == 0x259334u) {
        ctx->pc = 0x259334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259330u;
        // 0x259334: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259338u;
        goto label_259338;
    }
    ctx->pc = 0x259330u;
    {
        const bool branch_taken_0x259330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259330) {
            ctx->pc = 0x259334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259330u;
            // 0x259334: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259408u;
            goto label_259408;
        }
    }
    ctx->pc = 0x259338u;
label_259338:
    // 0x259338: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x259338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_25933c:
    // 0x25933c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25933cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_259340:
    // 0x259340: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x259340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_259344:
    // 0x259344: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x259344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_259348:
    // 0x259348: 0x8a2004  sllv        $a0, $t2, $a0
    ctx->pc = 0x259348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
label_25934c:
    // 0x25934c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_259350:
    // 0x259350: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x259350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_259354:
    // 0x259354: 0x5460002c  bnel        $v1, $zero, . + 4 + (0x2C << 2)
label_259358:
    if (ctx->pc == 0x259358u) {
        ctx->pc = 0x259358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259354u;
        // 0x259358: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25935Cu;
        goto label_25935c;
    }
    ctx->pc = 0x259354u;
    {
        const bool branch_taken_0x259354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259354) {
            ctx->pc = 0x259358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259354u;
            // 0x259358: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259408u;
            goto label_259408;
        }
    }
    ctx->pc = 0x25935Cu;
label_25935c:
    // 0x25935c: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x25935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_259360:
    // 0x259360: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x259360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_259364:
    // 0x259364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_259368:
    // 0x259368: 0x8a2004  sllv        $a0, $t2, $a0
    ctx->pc = 0x259368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
label_25936c:
    // 0x25936c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_259370:
    // 0x259370: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x259370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_259374:
    // 0x259374: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x259374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_259378:
    // 0x259378: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
label_25937c:
    if (ctx->pc == 0x25937Cu) {
        ctx->pc = 0x25937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259378u;
        // 0x25937c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259380u;
        goto label_259380;
    }
    ctx->pc = 0x259378u;
    {
        const bool branch_taken_0x259378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259378) {
            ctx->pc = 0x25937Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259378u;
            // 0x25937c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259408u;
            goto label_259408;
        }
    }
    ctx->pc = 0x259380u;
label_259380:
    // 0x259380: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x259380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_259384:
    // 0x259384: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x259384u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_259388:
    // 0x259388: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x259388u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_25938c:
    // 0x25938c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x25938cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_259390:
    // 0x259390: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x259390u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_259394:
    // 0x259394: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x259394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_259398:
    // 0x259398: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x259398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_25939c:
    // 0x25939c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x25939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2593a0:
    // 0x2593a0: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x2593a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
label_2593a4:
    // 0x2593a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2593a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2593a8:
    // 0x2593a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2593a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2593ac:
    // 0x2593ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2593acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2593b0:
    // 0x2593b0: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x2593b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_2593b4:
    // 0x2593b4: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2593b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_2593b8:
    // 0x2593b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2593b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2593bc:
    // 0x2593bc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2593bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_2593c0:
    // 0x2593c0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2593c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2593c4:
    // 0x2593c4: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x2593c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
label_2593c8:
    // 0x2593c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2593c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2593cc:
    // 0x2593cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2593ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2593d0:
    // 0x2593d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2593d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2593d4:
    // 0x2593d4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2593d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2593d8:
    // 0x2593d8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2593d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_2593dc:
    // 0x2593dc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2593dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2593e0:
    // 0x2593e0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x2593e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2593e4:
    // 0x2593e4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2593e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2593e8:
    // 0x2593e8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2593e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2593ec:
    // 0x2593ec: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x2593ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_2593f0:
    // 0x2593f0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2593f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2593f4:
    // 0x2593f4: 0xa4ad0004  sh          $t5, 0x4($a1)
    ctx->pc = 0x2593f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 13));
label_2593f8:
    // 0x2593f8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2593f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2593fc:
    // 0x2593fc: 0xa4ad0002  sh          $t5, 0x2($a1)
    ctx->pc = 0x2593fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 13));
label_259400:
    // 0x259400: 0xa4ad0000  sh          $t5, 0x0($a1)
    ctx->pc = 0x259400u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 13));
label_259404:
    // 0x259404: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x259404u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_259408:
    // 0x259408: 0x173102b  sltu        $v0, $t3, $s3
    ctx->pc = 0x259408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_25940c:
    // 0x25940c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_259410:
    if (ctx->pc == 0x259410u) {
        ctx->pc = 0x259410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25940Cu;
        // 0x259410: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259414u;
        goto label_259414;
    }
    ctx->pc = 0x25940Cu;
    {
        const bool branch_taken_0x25940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25940Cu;
        // 0x259410: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25940c) {
            ctx->pc = 0x2592F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2592f8;
        }
    }
    ctx->pc = 0x259414u;
label_259414:
    // 0x259414: 0x193102b  sltu        $v0, $t4, $s3
    ctx->pc = 0x259414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_259418:
    // 0x259418: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_25941c:
    if (ctx->pc == 0x25941Cu) {
        ctx->pc = 0x25941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259418u;
        // 0x25941c: 0xf10c2  srl         $v0, $t7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259420u;
        goto label_259420;
    }
    ctx->pc = 0x259418u;
    {
        const bool branch_taken_0x259418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259418u;
        // 0x25941c: 0xf10c2  srl         $v0, $t7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259418) {
            ctx->pc = 0x2592B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2592b8;
        }
    }
    ctx->pc = 0x259420u;
label_259420:
    // 0x259420: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x259420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_259424:
    // 0x259424: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x259424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_259428:
    // 0x259428: 0x40f809  jalr        $v0
label_25942c:
    if (ctx->pc == 0x25942Cu) {
        ctx->pc = 0x25942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259428u;
        // 0x25942c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259430u;
        goto label_259430;
    }
    ctx->pc = 0x259428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259430u);
        ctx->pc = 0x25942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259428u;
        // 0x25942c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259428u, 0x259430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259430u;
label_259430:
    // 0x259430: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x259430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_259434:
    // 0x259434: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x259434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_259438:
    // 0x259438: 0x40f809  jalr        $v0
label_25943c:
    if (ctx->pc == 0x25943Cu) {
        ctx->pc = 0x25943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259438u;
        // 0x25943c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259440u;
        goto label_259440;
    }
    ctx->pc = 0x259438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259440u);
        ctx->pc = 0x25943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259438u;
        // 0x25943c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259438u, 0x259440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259440u;
label_259440:
    // 0x259440: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x259440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_259444:
    // 0x259444: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x259444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_259448:
    // 0x259448: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x259448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25944c:
    // 0x25944c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x25944cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_259450:
    // 0x259450: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x259450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_259454:
    // 0x259454: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x259454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_259458:
    // 0x259458: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x259458u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25945c:
    // 0x25945c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x25945cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259460:
    // 0x259460: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x259460u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_259464:
    // 0x259464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_259468:
    // 0x259468: 0x3e00008  jr          $ra
label_25946c:
    if (ctx->pc == 0x25946Cu) {
        ctx->pc = 0x25946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259468u;
        // 0x25946c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259470u;
        goto label_fallthrough_0x259468;
    }
    ctx->pc = 0x259468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259468u;
        // 0x25946c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x259468:
    ctx->pc = 0x259470u;
}
