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

// Function: sub_00153238
// Address: 0x153238 - 0x1533a0
void sub_00153238_0x153238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153238_0x153238");
#endif

    switch (ctx->pc) {
        case 0x153238u: goto label_153238;
        case 0x15323cu: goto label_15323c;
        case 0x153240u: goto label_153240;
        case 0x153244u: goto label_153244;
        case 0x153248u: goto label_153248;
        case 0x15324cu: goto label_15324c;
        case 0x153250u: goto label_153250;
        case 0x153254u: goto label_153254;
        case 0x153258u: goto label_153258;
        case 0x15325cu: goto label_15325c;
        case 0x153260u: goto label_153260;
        case 0x153264u: goto label_153264;
        case 0x153268u: goto label_153268;
        case 0x15326cu: goto label_15326c;
        case 0x153270u: goto label_153270;
        case 0x153274u: goto label_153274;
        case 0x153278u: goto label_153278;
        case 0x15327cu: goto label_15327c;
        case 0x153280u: goto label_153280;
        case 0x153284u: goto label_153284;
        case 0x153288u: goto label_153288;
        case 0x15328cu: goto label_15328c;
        case 0x153290u: goto label_153290;
        case 0x153294u: goto label_153294;
        case 0x153298u: goto label_153298;
        case 0x15329cu: goto label_15329c;
        case 0x1532a0u: goto label_1532a0;
        case 0x1532a4u: goto label_1532a4;
        case 0x1532a8u: goto label_1532a8;
        case 0x1532acu: goto label_1532ac;
        case 0x1532b0u: goto label_1532b0;
        case 0x1532b4u: goto label_1532b4;
        case 0x1532b8u: goto label_1532b8;
        case 0x1532bcu: goto label_1532bc;
        case 0x1532c0u: goto label_1532c0;
        case 0x1532c4u: goto label_1532c4;
        case 0x1532c8u: goto label_1532c8;
        case 0x1532ccu: goto label_1532cc;
        case 0x1532d0u: goto label_1532d0;
        case 0x1532d4u: goto label_1532d4;
        case 0x1532d8u: goto label_1532d8;
        case 0x1532dcu: goto label_1532dc;
        case 0x1532e0u: goto label_1532e0;
        case 0x1532e4u: goto label_1532e4;
        case 0x1532e8u: goto label_1532e8;
        case 0x1532ecu: goto label_1532ec;
        case 0x1532f0u: goto label_1532f0;
        case 0x1532f4u: goto label_1532f4;
        case 0x1532f8u: goto label_1532f8;
        case 0x1532fcu: goto label_1532fc;
        case 0x153300u: goto label_153300;
        case 0x153304u: goto label_153304;
        case 0x153308u: goto label_153308;
        case 0x15330cu: goto label_15330c;
        case 0x153310u: goto label_153310;
        case 0x153314u: goto label_153314;
        case 0x153318u: goto label_153318;
        case 0x15331cu: goto label_15331c;
        case 0x153320u: goto label_153320;
        case 0x153324u: goto label_153324;
        case 0x153328u: goto label_153328;
        case 0x15332cu: goto label_15332c;
        case 0x153330u: goto label_153330;
        case 0x153334u: goto label_153334;
        case 0x153338u: goto label_153338;
        case 0x15333cu: goto label_15333c;
        case 0x153340u: goto label_153340;
        case 0x153344u: goto label_153344;
        case 0x153348u: goto label_153348;
        case 0x15334cu: goto label_15334c;
        case 0x153350u: goto label_153350;
        case 0x153354u: goto label_153354;
        case 0x153358u: goto label_153358;
        case 0x15335cu: goto label_15335c;
        case 0x153360u: goto label_153360;
        case 0x153364u: goto label_153364;
        case 0x153368u: goto label_153368;
        case 0x15336cu: goto label_15336c;
        case 0x153370u: goto label_153370;
        case 0x153374u: goto label_153374;
        case 0x153378u: goto label_153378;
        case 0x15337cu: goto label_15337c;
        case 0x153380u: goto label_153380;
        case 0x153384u: goto label_153384;
        case 0x153388u: goto label_153388;
        case 0x15338cu: goto label_15338c;
        case 0x153390u: goto label_153390;
        case 0x153394u: goto label_153394;
        case 0x153398u: goto label_153398;
        case 0x15339cu: goto label_15339c;
        default: break;
    }

    ctx->pc = 0x153238u;

label_153238:
    // 0x153238: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_15323c:
    // 0x15323c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_153240:
    // 0x153240: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x153240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_153244:
    // 0x153244: 0x8c654350  lw          $a1, 0x4350($v1)
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17232)));
label_153248:
    // 0x153248: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_15324c:
    // 0x15324c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_153250:
    // 0x153250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_153254:
    // 0x153254: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x153254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_153258:
    // 0x153258: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x153258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15325c:
    // 0x15325c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_153260:
    // 0x153260: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_153264:
    if (ctx->pc == 0x153264u) {
        ctx->pc = 0x153264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153260u;
        // 0x153264: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153268u;
        goto label_153268;
    }
    ctx->pc = 0x153260u;
    {
        const bool branch_taken_0x153260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x153264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153260u;
        // 0x153264: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153260) {
            ctx->pc = 0x153280u;
            goto label_153280;
        }
    }
    ctx->pc = 0x153268u;
label_153268:
    // 0x153268: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x153268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15326c:
    // 0x15326c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_153270:
    if (ctx->pc == 0x153270u) {
        ctx->pc = 0x153270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15326Cu;
        // 0x153270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153274u;
        goto label_153274;
    }
    ctx->pc = 0x15326Cu;
    {
        const bool branch_taken_0x15326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15326Cu;
        // 0x153270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15326c) {
            ctx->pc = 0x153280u;
            goto label_153280;
        }
    }
    ctx->pc = 0x153274u;
label_153274:
    // 0x153274: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x153274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_153278:
    // 0x153278: 0xc07fd18  jal         func_1FF460
label_15327c:
    if (ctx->pc == 0x15327Cu) {
        ctx->pc = 0x15327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153278u;
        // 0x15327c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153280u;
        goto label_153280;
    }
    ctx->pc = 0x153278u;
    SET_GPR_U32(ctx, 31, 0x153280u);
    ctx->pc = 0x15327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153278u;
    // 0x15327c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x153278u, 0x153280u)) {
        return;
    }
    ctx->pc = 0x153280u;
label_153280:
    // 0x153280: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x153280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_153284:
    // 0x153284: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x153284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
label_153288:
    // 0x153288: 0x8c44bcd0  lw          $a0, -0x4330($v0)
    ctx->pc = 0x153288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950096)));
label_15328c:
    // 0x15328c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_153290:
    if (ctx->pc == 0x153290u) {
        ctx->pc = 0x153290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15328Cu;
        // 0x153290: 0x8e2700c4  lw          $a3, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153294u;
        goto label_153294;
    }
    ctx->pc = 0x15328Cu;
    {
        const bool branch_taken_0x15328c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15328c) {
            ctx->pc = 0x153290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15328Cu;
            // 0x153290: 0x8e2700c4  lw          $a3, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1532B4u;
            goto label_1532b4;
        }
    }
    ctx->pc = 0x153294u;
label_153294:
    // 0x153294: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_153298:
    // 0x153298: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_15329c:
    if (ctx->pc == 0x15329Cu) {
        ctx->pc = 0x15329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153298u;
        // 0x15329c: 0x8e2700c4  lw          $a3, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532A0u;
        goto label_1532a0;
    }
    ctx->pc = 0x153298u;
    {
        const bool branch_taken_0x153298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153298) {
            ctx->pc = 0x15329Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153298u;
            // 0x15329c: 0x8e2700c4  lw          $a3, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1532B4u;
            goto label_1532b4;
        }
    }
    ctx->pc = 0x1532A0u;
label_1532a0:
    // 0x1532a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1532a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1532a4:
    // 0x1532a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1532a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1532a8:
    // 0x1532a8: 0xc07fd18  jal         func_1FF460
label_1532ac:
    if (ctx->pc == 0x1532ACu) {
        ctx->pc = 0x1532ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532A8u;
        // 0x1532ac: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532B0u;
        goto label_1532b0;
    }
    ctx->pc = 0x1532A8u;
    SET_GPR_U32(ctx, 31, 0x1532B0u);
    ctx->pc = 0x1532ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1532A8u;
    // 0x1532ac: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1532A8u, 0x1532B0u)) {
        return;
    }
    ctx->pc = 0x1532B0u;
label_1532b0:
    // 0x1532b0: 0x8e2700c4  lw          $a3, 0xC4($s1)
    ctx->pc = 0x1532b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_1532b4:
    // 0x1532b4: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_1532b8:
    if (ctx->pc == 0x1532B8u) {
        ctx->pc = 0x1532B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532B4u;
        // 0x1532b8: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532BCu;
        goto label_1532bc;
    }
    ctx->pc = 0x1532B4u;
    {
        const bool branch_taken_0x1532b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532B4u;
        // 0x1532b8: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532b4) {
            ctx->pc = 0x1532E8u;
            goto label_1532e8;
        }
    }
    ctx->pc = 0x1532BCu;
label_1532bc:
    // 0x1532bc: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1532bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1532c0:
    // 0x1532c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1532c4:
    if (ctx->pc == 0x1532C4u) {
        ctx->pc = 0x1532C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532C0u;
        // 0x1532c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532C8u;
        goto label_1532c8;
    }
    ctx->pc = 0x1532C0u;
    {
        const bool branch_taken_0x1532c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532C0u;
        // 0x1532c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532c0) {
            ctx->pc = 0x1532D8u;
            goto label_1532d8;
        }
    }
    ctx->pc = 0x1532C8u;
label_1532c8:
    // 0x1532c8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1532c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1532cc:
    // 0x1532cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1532ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1532d0:
    // 0x1532d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1532d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1532d4:
    // 0x1532d4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1532d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1532d8:
    // 0x1532d8: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x1532d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_1532dc:
    // 0x1532dc: 0xe0f809  jalr        $a3
label_1532e0:
    if (ctx->pc == 0x1532E0u) {
        ctx->pc = 0x1532E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532DCu;
        // 0x1532e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532E4u;
        goto label_1532e4;
    }
    ctx->pc = 0x1532DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1532E4u);
        ctx->pc = 0x1532E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532DCu;
        // 0x1532e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1532DCu, 0x1532E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1532E4u;
label_1532e4:
    // 0x1532e4: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x1532e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1532e8:
    // 0x1532e8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1532e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1532ec:
    // 0x1532ec: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_1532f0:
    // 0x1532f0: 0xc07fb0c  jal         func_1FEC30
label_1532f4:
    if (ctx->pc == 0x1532F4u) {
        ctx->pc = 0x1532F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532F0u;
        // 0x1532f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532F8u;
        goto label_1532f8;
    }
    ctx->pc = 0x1532F0u;
    SET_GPR_U32(ctx, 31, 0x1532F8u);
    ctx->pc = 0x1532F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1532F0u;
    // 0x1532f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1532F0u, 0x1532F8u)) {
        return;
    }
    ctx->pc = 0x1532F8u;
label_1532f8:
    // 0x1532f8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1532f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1532fc:
    // 0x1532fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1532fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153300:
    // 0x153300: 0xc07fb0c  jal         func_1FEC30
label_153304:
    if (ctx->pc == 0x153304u) {
        ctx->pc = 0x153304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153300u;
        // 0x153304: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153308u;
        goto label_153308;
    }
    ctx->pc = 0x153300u;
    SET_GPR_U32(ctx, 31, 0x153308u);
    ctx->pc = 0x153304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153300u;
    // 0x153304: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x153300u, 0x153308u)) {
        return;
    }
    ctx->pc = 0x153308u;
label_153308:
    // 0x153308: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x153308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_15330c:
    // 0x15330c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15330cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153310:
    // 0x153310: 0xc07fb0c  jal         func_1FEC30
label_153314:
    if (ctx->pc == 0x153314u) {
        ctx->pc = 0x153314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153310u;
        // 0x153314: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153318u;
        goto label_153318;
    }
    ctx->pc = 0x153310u;
    SET_GPR_U32(ctx, 31, 0x153318u);
    ctx->pc = 0x153314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153310u;
    // 0x153314: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x153310u, 0x153318u)) {
        return;
    }
    ctx->pc = 0x153318u;
label_153318:
    // 0x153318: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x153318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_15331c:
    // 0x15331c: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x15331cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_153320:
    // 0x153320: 0xc075d76  jal         func_1D75D8
label_153324:
    if (ctx->pc == 0x153324u) {
        ctx->pc = 0x153324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153320u;
        // 0x153324: 0xac4085f4  sw          $zero, -0x7A0C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153328u;
        goto label_153328;
    }
    ctx->pc = 0x153320u;
    SET_GPR_U32(ctx, 31, 0x153328u);
    ctx->pc = 0x153324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153320u;
    // 0x153324: 0xac4085f4  sw          $zero, -0x7A0C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936052), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D75D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75D8u, 0x153320u, 0x153328u)) {
        return;
    }
    ctx->pc = 0x153328u;
label_153328:
    // 0x153328: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_15332c:
    // 0x15332c: 0xc054fca  jal         func_153F28
label_153330:
    if (ctx->pc == 0x153330u) {
        ctx->pc = 0x153330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15332Cu;
        // 0x153330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153334u;
        goto label_153334;
    }
    ctx->pc = 0x15332Cu;
    SET_GPR_U32(ctx, 31, 0x153334u);
    ctx->pc = 0x153330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15332Cu;
    // 0x153330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153F28u, 0x15332Cu, 0x153334u)) {
        return;
    }
    ctx->pc = 0x153334u;
label_153334:
    // 0x153334: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_153338:
    // 0x153338: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_15333c:
    if (ctx->pc == 0x15333Cu) {
        ctx->pc = 0x15333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153338u;
        // 0x15333c: 0x2622008c  addiu       $v0, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153340u;
        goto label_153340;
    }
    ctx->pc = 0x153338u;
    {
        const bool branch_taken_0x153338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153338u;
        // 0x15333c: 0x2622008c  addiu       $v0, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153338) {
            ctx->pc = 0x153354u;
            goto label_153354;
        }
    }
    ctx->pc = 0x153340u;
label_153340:
    // 0x153340: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_153344:
    // 0x153344: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x153344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_153348:
    // 0x153348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15334c:
    // 0x15334c: 0xc054fca  jal         func_153F28
label_153350:
    if (ctx->pc == 0x153350u) {
        ctx->pc = 0x153350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15334Cu;
        // 0x153350: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153354u;
        goto label_153354;
    }
    ctx->pc = 0x15334Cu;
    SET_GPR_U32(ctx, 31, 0x153354u);
    ctx->pc = 0x153350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15334Cu;
    // 0x153350: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153F28u, 0x15334Cu, 0x153354u)) {
        return;
    }
    ctx->pc = 0x153354u;
label_153354:
    // 0x153354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153358:
    // 0x153358: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x153358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_15335c:
    // 0x15335c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x15335cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_153360:
    // 0x153360: 0x8e441a70  lw          $a0, 0x1A70($s2)
    ctx->pc = 0x153360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
label_153364:
    // 0x153364: 0x8c4546c8  lw          $a1, 0x46C8($v0)
    ctx->pc = 0x153364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18120)));
label_153368:
    // 0x153368: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
label_15336c:
    if (ctx->pc == 0x15336Cu) {
        ctx->pc = 0x15336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153368u;
        // 0x15336c: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153370u;
        goto label_153370;
    }
    ctx->pc = 0x153368u;
    {
        const bool branch_taken_0x153368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x15336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153368u;
        // 0x15336c: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153368) {
            ctx->pc = 0x153388u;
            goto label_153388;
        }
    }
    ctx->pc = 0x153370u;
label_153370:
    // 0x153370: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x153370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_153374:
    // 0x153374: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_153378:
    if (ctx->pc == 0x153378u) {
        ctx->pc = 0x153378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153374u;
        // 0x153378: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15337Cu;
        goto label_15337c;
    }
    ctx->pc = 0x153374u;
    {
        const bool branch_taken_0x153374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153374u;
        // 0x153378: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153374) {
            ctx->pc = 0x153388u;
            goto label_153388;
        }
    }
    ctx->pc = 0x15337Cu;
label_15337c:
    // 0x15337c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x15337cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_153380:
    // 0x153380: 0xc07fd18  jal         func_1FF460
label_153384:
    if (ctx->pc == 0x153384u) {
        ctx->pc = 0x153384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153380u;
        // 0x153384: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153388u;
        goto label_153388;
    }
    ctx->pc = 0x153380u;
    SET_GPR_U32(ctx, 31, 0x153388u);
    ctx->pc = 0x153384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153380u;
    // 0x153384: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x153380u, 0x153388u)) {
        return;
    }
    ctx->pc = 0x153388u;
label_153388:
    // 0x153388: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x153388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15338c:
    // 0x15338c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15338cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_153390:
    // 0x153390: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x153390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_153394:
    // 0x153394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x153394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_153398:
    // 0x153398: 0x3e00008  jr          $ra
label_15339c:
    if (ctx->pc == 0x15339Cu) {
        ctx->pc = 0x15339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153398u;
        // 0x15339c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1533A0u;
        goto label_fallthrough_0x153398;
    }
    ctx->pc = 0x153398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153398u;
        // 0x15339c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x153398:
    ctx->pc = 0x1533A0u;
}
