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

// Function: sub_00250250
// Address: 0x250250 - 0x2503d0
void sub_00250250_0x250250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250250_0x250250");
#endif

    switch (ctx->pc) {
        case 0x250250u: goto label_250250;
        case 0x250254u: goto label_250254;
        case 0x250258u: goto label_250258;
        case 0x25025cu: goto label_25025c;
        case 0x250260u: goto label_250260;
        case 0x250264u: goto label_250264;
        case 0x250268u: goto label_250268;
        case 0x25026cu: goto label_25026c;
        case 0x250270u: goto label_250270;
        case 0x250274u: goto label_250274;
        case 0x250278u: goto label_250278;
        case 0x25027cu: goto label_25027c;
        case 0x250280u: goto label_250280;
        case 0x250284u: goto label_250284;
        case 0x250288u: goto label_250288;
        case 0x25028cu: goto label_25028c;
        case 0x250290u: goto label_250290;
        case 0x250294u: goto label_250294;
        case 0x250298u: goto label_250298;
        case 0x25029cu: goto label_25029c;
        case 0x2502a0u: goto label_2502a0;
        case 0x2502a4u: goto label_2502a4;
        case 0x2502a8u: goto label_2502a8;
        case 0x2502acu: goto label_2502ac;
        case 0x2502b0u: goto label_2502b0;
        case 0x2502b4u: goto label_2502b4;
        case 0x2502b8u: goto label_2502b8;
        case 0x2502bcu: goto label_2502bc;
        case 0x2502c0u: goto label_2502c0;
        case 0x2502c4u: goto label_2502c4;
        case 0x2502c8u: goto label_2502c8;
        case 0x2502ccu: goto label_2502cc;
        case 0x2502d0u: goto label_2502d0;
        case 0x2502d4u: goto label_2502d4;
        case 0x2502d8u: goto label_2502d8;
        case 0x2502dcu: goto label_2502dc;
        case 0x2502e0u: goto label_2502e0;
        case 0x2502e4u: goto label_2502e4;
        case 0x2502e8u: goto label_2502e8;
        case 0x2502ecu: goto label_2502ec;
        case 0x2502f0u: goto label_2502f0;
        case 0x2502f4u: goto label_2502f4;
        case 0x2502f8u: goto label_2502f8;
        case 0x2502fcu: goto label_2502fc;
        case 0x250300u: goto label_250300;
        case 0x250304u: goto label_250304;
        case 0x250308u: goto label_250308;
        case 0x25030cu: goto label_25030c;
        case 0x250310u: goto label_250310;
        case 0x250314u: goto label_250314;
        case 0x250318u: goto label_250318;
        case 0x25031cu: goto label_25031c;
        case 0x250320u: goto label_250320;
        case 0x250324u: goto label_250324;
        case 0x250328u: goto label_250328;
        case 0x25032cu: goto label_25032c;
        case 0x250330u: goto label_250330;
        case 0x250334u: goto label_250334;
        case 0x250338u: goto label_250338;
        case 0x25033cu: goto label_25033c;
        case 0x250340u: goto label_250340;
        case 0x250344u: goto label_250344;
        case 0x250348u: goto label_250348;
        case 0x25034cu: goto label_25034c;
        case 0x250350u: goto label_250350;
        case 0x250354u: goto label_250354;
        case 0x250358u: goto label_250358;
        case 0x25035cu: goto label_25035c;
        case 0x250360u: goto label_250360;
        case 0x250364u: goto label_250364;
        case 0x250368u: goto label_250368;
        case 0x25036cu: goto label_25036c;
        case 0x250370u: goto label_250370;
        case 0x250374u: goto label_250374;
        case 0x250378u: goto label_250378;
        case 0x25037cu: goto label_25037c;
        case 0x250380u: goto label_250380;
        case 0x250384u: goto label_250384;
        case 0x250388u: goto label_250388;
        case 0x25038cu: goto label_25038c;
        case 0x250390u: goto label_250390;
        case 0x250394u: goto label_250394;
        case 0x250398u: goto label_250398;
        case 0x25039cu: goto label_25039c;
        case 0x2503a0u: goto label_2503a0;
        case 0x2503a4u: goto label_2503a4;
        case 0x2503a8u: goto label_2503a8;
        case 0x2503acu: goto label_2503ac;
        case 0x2503b0u: goto label_2503b0;
        case 0x2503b4u: goto label_2503b4;
        case 0x2503b8u: goto label_2503b8;
        case 0x2503bcu: goto label_2503bc;
        case 0x2503c0u: goto label_2503c0;
        case 0x2503c4u: goto label_2503c4;
        case 0x2503c8u: goto label_2503c8;
        case 0x2503ccu: goto label_2503cc;
        default: break;
    }

    ctx->pc = 0x250250u;

label_250250:
    // 0x250250: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x250250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_250254:
    // 0x250254: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x250254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_250258:
    // 0x250258: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x250258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_25025c:
    // 0x25025c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x25025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_250260:
    // 0x250260: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x250260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_250264:
    // 0x250264: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x250264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_250268:
    // 0x250268: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x250268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25026c:
    // 0x25026c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25026cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_250270:
    // 0x250270: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x250270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_250274:
    // 0x250274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x250274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250278:
    // 0x250278: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x250278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_25027c:
    // 0x25027c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25027cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_250280:
    // 0x250280: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x250280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_250284:
    // 0x250284: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x250284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_250288:
    // 0x250288: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x250288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_25028c:
    // 0x25028c: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x25028cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_250290:
    // 0x250290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_250294:
    // 0x250294: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x250294u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250298:
    // 0x250298: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x250298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_25029c:
    // 0x25029c: 0x8c8441a4  lw          $a0, 0x41A4($a0)
    ctx->pc = 0x25029cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16804)));
label_2502a0:
    // 0x2502a0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2502a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2502a4:
    // 0x2502a4: 0x8ec20118  lw          $v0, 0x118($s6)
    ctx->pc = 0x2502a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
label_2502a8:
    // 0x2502a8: 0x40f809  jalr        $v0
label_2502ac:
    if (ctx->pc == 0x2502ACu) {
        ctx->pc = 0x2502ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502A8u;
        // 0x2502ac: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502B0u;
        goto label_2502b0;
    }
    ctx->pc = 0x2502A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2502B0u);
        ctx->pc = 0x2502ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502A8u;
        // 0x2502ac: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2502A8u, 0x2502B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2502B0u;
label_2502b0:
    // 0x2502b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2502b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2502b4:
    // 0x2502b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2502b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2502b8:
    // 0x2502b8: 0xc09d8e0  jal         func_276380
label_2502bc:
    if (ctx->pc == 0x2502BCu) {
        ctx->pc = 0x2502BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502B8u;
        // 0x2502bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502C0u;
        goto label_2502c0;
    }
    ctx->pc = 0x2502B8u;
    SET_GPR_U32(ctx, 31, 0x2502C0u);
    ctx->pc = 0x2502BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502B8u;
    // 0x2502bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x2502B8u, 0x2502C0u)) {
        return;
    }
    ctx->pc = 0x2502C0u;
label_2502c0:
    // 0x2502c0: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2502c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_2502c4:
    // 0x2502c4: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2502c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_2502c8:
    // 0x2502c8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2502c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_2502cc:
    // 0x2502cc: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x2502ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_2502d0:
    // 0x2502d0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2502d4:
    if (ctx->pc == 0x2502D4u) {
        ctx->pc = 0x2502D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502D0u;
        // 0x2502d4: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502D8u;
        goto label_2502d8;
    }
    ctx->pc = 0x2502D0u;
    {
        const bool branch_taken_0x2502d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2502D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502D0u;
        // 0x2502d4: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502d0) {
            ctx->pc = 0x25030Cu;
            goto label_25030c;
        }
    }
    ctx->pc = 0x2502D8u;
label_2502d8:
    // 0x2502d8: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x2502d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_2502dc:
    // 0x2502dc: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x2502dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_2502e0:
    // 0x2502e0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2502e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2502e4:
    // 0x2502e4: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x2502e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
label_2502e8:
    // 0x2502e8: 0x40f809  jalr        $v0
label_2502ec:
    if (ctx->pc == 0x2502ECu) {
        ctx->pc = 0x2502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502E8u;
        // 0x2502ec: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502F0u;
        goto label_2502f0;
    }
    ctx->pc = 0x2502E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2502F0u);
        ctx->pc = 0x2502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502E8u;
        // 0x2502ec: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2502E8u, 0x2502F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2502F0u;
label_2502f0:
    // 0x2502f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2502f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2502f4:
    // 0x2502f4: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x2502f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2502f8:
    // 0x2502f8: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2502f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_2502fc:
    // 0x2502fc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2502fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_250300:
    // 0x250300: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x250300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_250304:
    // 0x250304: 0x10000003  b           . + 4 + (0x3 << 2)
label_250308:
    if (ctx->pc == 0x250308u) {
        ctx->pc = 0x250308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250304u;
        // 0x250308: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25030Cu;
        goto label_25030c;
    }
    ctx->pc = 0x250304u;
    {
        const bool branch_taken_0x250304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250304u;
        // 0x250308: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250304) {
            ctx->pc = 0x250314u;
            goto label_250314;
        }
    }
    ctx->pc = 0x25030Cu;
label_25030c:
    // 0x25030c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x25030cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_250310:
    // 0x250310: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x250310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_250314:
    // 0x250314: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x250314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_250318:
    // 0x250318: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x250318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25031c:
    // 0x25031c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x25031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_250320:
    // 0x250320: 0x34a5011e  ori         $a1, $a1, 0x11E
    ctx->pc = 0x250320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
label_250324:
    // 0x250324: 0x40f809  jalr        $v0
label_250328:
    if (ctx->pc == 0x250328u) {
        ctx->pc = 0x250328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250324u;
        // 0x250328: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25032Cu;
        goto label_25032c;
    }
    ctx->pc = 0x250324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25032Cu);
        ctx->pc = 0x250328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250324u;
        // 0x250328: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250324u, 0x25032Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25032Cu;
label_25032c:
    // 0x25032c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x25032cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_250330:
    // 0x250330: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
label_250334:
    if (ctx->pc == 0x250334u) {
        ctx->pc = 0x250334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250330u;
        // 0x250334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250338u;
        goto label_250338;
    }
    ctx->pc = 0x250330u;
    {
        const bool branch_taken_0x250330 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x250334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250330u;
        // 0x250334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250330) {
            ctx->pc = 0x250398u;
            goto label_250398;
        }
    }
    ctx->pc = 0x250338u;
label_250338:
    // 0x250338: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x250338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25033c:
    // 0x25033c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25033cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_250340:
    // 0x250340: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x250340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_250344:
    // 0x250344: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x250344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_250348:
    // 0x250348: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x250348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25034c:
    // 0x25034c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_250350:
    if (ctx->pc == 0x250350u) {
        ctx->pc = 0x250350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25034Cu;
        // 0x250350: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250354u;
        goto label_250354;
    }
    ctx->pc = 0x25034Cu;
    {
        const bool branch_taken_0x25034c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x250350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25034Cu;
        // 0x250350: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25034c) {
            ctx->pc = 0x250364u;
            goto label_250364;
        }
    }
    ctx->pc = 0x250354u;
label_250354:
    // 0x250354: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x250354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_250358:
    // 0x250358: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x250358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25035c:
    // 0x25035c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250360:
    // 0x250360: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x250360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_250364:
    // 0x250364: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x250364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_250368:
    // 0x250368: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x250368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25036c:
    // 0x25036c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_250370:
    if (ctx->pc == 0x250370u) {
        ctx->pc = 0x250370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25036Cu;
        // 0x250370: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250374u;
        goto label_250374;
    }
    ctx->pc = 0x25036Cu;
    {
        const bool branch_taken_0x25036c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x250370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25036Cu;
        // 0x250370: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25036c) {
            ctx->pc = 0x250384u;
            goto label_250384;
        }
    }
    ctx->pc = 0x250374u;
label_250374:
    // 0x250374: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x250374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_250378:
    // 0x250378: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x250378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_25037c:
    // 0x25037c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250380:
    // 0x250380: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x250380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_250384:
    // 0x250384: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x250384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_250388:
    // 0x250388: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x250388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_25038c:
    // 0x25038c: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x25038cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_250390:
    // 0x250390: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_250394:
    if (ctx->pc == 0x250394u) {
        ctx->pc = 0x250394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250390u;
        // 0x250394: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250398u;
        goto label_250398;
    }
    ctx->pc = 0x250390u;
    {
        const bool branch_taken_0x250390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250390u;
        // 0x250394: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250390) {
            ctx->pc = 0x250340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250340;
        }
    }
    ctx->pc = 0x250398u;
label_250398:
    // 0x250398: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x250398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25039c:
    // 0x25039c: 0xae520018  sw          $s2, 0x18($s2)
    ctx->pc = 0x25039cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 18));
label_2503a0:
    // 0x2503a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2503a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2503a4:
    // 0x2503a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2503a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2503a8:
    // 0x2503a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2503a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2503ac:
    // 0x2503ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2503acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2503b0:
    // 0x2503b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2503b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2503b4:
    // 0x2503b4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2503b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2503b8:
    // 0x2503b8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2503b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2503bc:
    // 0x2503bc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2503bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2503c0:
    // 0x2503c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2503c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2503c4:
    // 0x2503c4: 0x3e00008  jr          $ra
label_2503c8:
    if (ctx->pc == 0x2503C8u) {
        ctx->pc = 0x2503C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503C4u;
        // 0x2503c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503CCu;
        goto label_2503cc;
    }
    ctx->pc = 0x2503C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2503C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503C4u;
        // 0x2503c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2503C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2503CCu;
label_2503cc:
    // 0x2503cc: 0x0  nop
    ctx->pc = 0x2503ccu;
    // NOP
    ctx->pc = 0x2503d0u;
}
